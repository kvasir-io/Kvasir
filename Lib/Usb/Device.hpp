#pragma once
#include "HalTraits.hpp"
#include "Memory.hpp"
#include "Packet.hpp"
#include "SetupPacket.hpp"
#include <Common/Tags.hpp>
namespace Kvasir
{
namespace Usb
{
    template <typename TDeviceSettings, typename... TDeviceClass>
    struct Device
    {
        using PacketType = typename TDeviceSettings::MemoryPolicy::PacketType;
        using AllocatorType = typename TDeviceSettings::MemoryPolicy::AllocatorType;
        using OutputQueueType = typename TDeviceSettings::MemoryPolicy::QueueType;
        using TransferType = typename TDeviceSettings::MemoryPolicy::TransferType;

        using DeviceClasses = brigand::list<
            brigand::apply<typename TDeviceClass::ClassType, TDeviceClass, Device>...>;
        using EndpointRequirements = brigand::list<typename TDeviceClass::EndpointRequirements...>;
        using FlatEPRequirements = brigand::flatten<EndpointRequirements>;
        using EndpointNumbers =
            MapCapabilitiesToEndpointNumbers<typename TDeviceSettings::PeripheralNumber,
                                             FlatEPRequirements>;

        static constexpr uint8_t deviceDescriptor[18] = {
            18, // bLength
            1,  // bDescriptorType
            0x10,
            0x01,                                       // bcdUSB
            2,                                          // bDeviceClass
            0,                                          // bDeviceSubClass
            0,                                          // bDeviceProtocol
            static_cast<uint8_t>(PacketType::capacity), // bMaxPacketSize0
            static_cast<uint8_t>(TDeviceSettings::vid & 0xFF),
            static_cast<uint8_t>((TDeviceSettings::vid >> 8) & 0xFF), // idVendor
            static_cast<uint8_t>(TDeviceSettings::pid & 0xFF),
            static_cast<uint8_t>((TDeviceSettings::pid >> 8) & 0xFF), // idProduct
            0x00,
            0x01, // bcdDevice
            1,    // iManufacturer
            2,    // iProduct
            3,    // iSerialNumber
            1     // bNumConfigurations
        };


    private:
        static void copyToTransfer(const uint8_t * const buf, const std::size_t length)
        {
            auto begin = buf;
            auto end = buf + length;
            bool data1 = true;
            while (begin + PacketType::capacity <= end)
            { // while packet is full
                auto p = AllocatorType::allocate();
                p.setEndpoint(Endpoint{1});
                if (data1)
                {
                    p.makeData1();
                }
                else
                {
                    p.makeData0();
                }
                data1 = !data1;
                // sendPacket(std::move(op));
                auto packetEnd = begin + PacketType::capacity;
                while (begin < packetEnd)
                {
                    p.pushBack(*begin++);
                }
                controlTransfer_.pushPacket(std::move(p));
            }
            auto p = AllocatorType::allocate();
            p.setEndpoint(Endpoint{1});
            if (data1)
            {
                p.makeData1();
            }
            else
            {
                p.makeData0();
            }
            while (begin < end)
            {
                p.pushBack(*begin++);
            }
            controlTransfer_.pushPacket(std::move(p));
        }
        static bool requestGetStatus() { return false; }
        static bool requestClearFeature() { return false; }
        static bool requestSetFeature() { return false; }
        static bool requestGetDescriptor()
        {
            using namespace SetupPacket;
            const auto type = controlTransfer_.getDescriptorType();
            const auto reqLength = controlTransfer_.getWLength();
            const auto index = controlTransfer_.getDescriptorIndex();
            switch (type)
            {
            case DescriptorType::device:
            {
                copyToTransfer(deviceDescriptor,
                               std::min(uint16_t(sizeof(deviceDescriptor)), reqLength));
                return true;
            }
            case DescriptorType::configuration:
            {
                copyToTransfer(
                    TDeviceSettings::StringDescriptors::configuration,
                    std::min(uint16_t(sizeof(TDeviceSettings::StringDescriptors::configuration)),
                             reqLength));
                return true;
            }
            case DescriptorType::string:
                switch (index)
                {
                case DescriptorIndex::langId:
                {
                    copyToTransfer(
                        TDeviceSettings::StringDescriptors::langId,
                        std::min(uint16_t(sizeof(TDeviceSettings::StringDescriptors::langId)),
                                 reqLength));
                    return true;
                }
                case DescriptorIndex::manufacturer:
                {
                    // transfer.remaining =  stringImanufacturerDesc()[0];
                    // transfer.ptr = stringImanufacturerDesc();
                    // transfer.direction = DEVICE_TO_HOST;
                    // success = true;
                    break;
                }
                case DescriptorIndex::product:
                {
                    copyToTransfer(
                        TDeviceSettings::StringDescriptors::product,
                        std::min(uint16_t(sizeof(TDeviceSettings::StringDescriptors::product)),
                                 reqLength));
                    return true;
                }
                case DescriptorIndex::serial:
                {
                    copyToTransfer(
                        TDeviceSettings::StringDescriptors::serial,
                        std::min(uint16_t(sizeof(TDeviceSettings::StringDescriptors::serial)),
                                 reqLength));
                    return true;
                }
                case DescriptorIndex::configuration:
                {
                    // transfer.remaining = stringIConfigurationDesc()[0];
                    // transfer.ptr = stringIConfigurationDesc();
                    // transfer.direction = DEVICE_TO_HOST;
                    // success = true;
                    break;
                }
                case DescriptorIndex::interface:
                {
                    copyToTransfer(
                        TDeviceSettings::StringDescriptors::interface,
                        std::min(uint16_t(sizeof(TDeviceSettings::StringDescriptors::interface)),
                                 reqLength));
                    return true;
                }
                }
                break;
            case DescriptorType::interface:
            case DescriptorType::endpoint:
            /* TODO: Support is optional, not implemented here */
            default:
                break;
            }
            return false;
        }
        static bool requestGetConfiguration() { return false; }
        static bool requestSetConfiguration() { return false; }
        static bool requestGetInterface() { return false; }
        static bool requestSetInterface() { return false; }
        struct ControlTransfer
        {
        private:
            PacketType setupPacket_;
            TransferType transfer_;

        public:
            bool dataStageComplete() { return transfer_.size() == controlTransfer_.getWLength(); }
            void pushPacket(PacketType && p) { transfer_.pushBackPacket(std::move(p)); }
            PacketType popPacket() { return transfer_.popFrontPacket(); }
            bool empty() { return transfer_.empty(); }
            void initialize(PacketType && p)
            {
                if (setupPacket_)
                {
                    AllocatorType::deallocate(std::move(setupPacket_));
                }
                setupPacket_.unsafeFromPacketPointer(p.unsafeToPacketPointer());
				transfer_.clear();
            }
            auto getDirection() -> decltype(SetupPacket::getDirection(setupPacket_))
            {
                return SetupPacket::getDirection(setupPacket_);
            }
            auto getWLength() -> decltype(SetupPacket::getWLength(setupPacket_))
            {
                return SetupPacket::getWLength(setupPacket_);
            }
            auto getType() -> decltype(SetupPacket::getType(setupPacket_))
            {
                return SetupPacket::getType(setupPacket_);
            }
            auto getRequest() -> decltype(SetupPacket::getRequest(setupPacket_))
            {
                return SetupPacket::getRequest(setupPacket_);
            }
            auto getValue() -> decltype(SetupPacket::getValue(setupPacket_))
            {
                return SetupPacket::getValue(setupPacket_);
            }
            auto getDescriptorType() -> decltype(SetupPacket::getDescriptorType(setupPacket_))
            {
                return SetupPacket::getDescriptorType(setupPacket_);
            }
            auto getDescriptorIndex() -> decltype(SetupPacket::getDescriptorIndex(setupPacket_))
            {
                return SetupPacket::getDescriptorIndex(setupPacket_);
            }
        };
        static ControlTransfer controlTransfer_;

        static bool handleHostToDevice()
        {
            using namespace SetupPacket;
            switch (controlTransfer_.getType())
            {
            case Type::classT:
            {
                // TODO support more
                return brigand::at<DeviceClasses, brigand::int8_t<0>>::onSetupReceived(
                    controlTransfer_);
            }
            case Type::vendor:
            {
                break;
            }
            case Type::standard:
            {
                auto rt = controlTransfer_.getRequest();
                if (rt == Request::setAddress)
                {
                    return true;
                }
                else if (rt == Request::setConfiguration)
                {
                    // this is where mbed initializes other endpoints
                    // TODO check if the usb standard says to init here and correct or
                    // cite depending
                    activateEndpoints(EndpointNumbers{}, FlatEPRequirements{});
                    return true;
                }
                break;
            }
            };
	        return false;
        }
        static bool handleDeviceToHost()
        {
            using namespace SetupPacket;
            switch (controlTransfer_.getType())
            {
            case Type::classT:
            {
                // TODO support more
                brigand::at<DeviceClasses, brigand::int8_t<0>>::onSetupReceived(controlTransfer_);
                return true;
            }
            case Type::vendor:
            {
                break;
            }
            case Type::standard:
            {
                switch (controlTransfer_.getRequest())
                {
                case Request::getStatus:
                {
                    return Device::requestGetStatus();
                }
                case Request::getDescriptor:
                {
                    return Device::requestGetDescriptor();
                }
                case Request::getConfiguration:
                {
					return Device::requestGetConfiguration();
                }
                case Request::getInterface:
                {
					return Device::requestGetInterface();
                }
                }
                break;
            }
            };
        }

        static void sendControlAck(PacketType && p)
        {
            p.unsafeSetSize(0);
            p.setEndpoint(Endpoint{1});
            p.makeData1(); // all acks are Data1 packets
            sendPacket(std::move(p));
        }
        template <typename... N, EndpointDirection... D, EndpointType... T>
        static void activateEndpoints(brigand::list<N...>,
                                      brigand::list<EndpointRequirement<D, T>...>)
        {
            int i[] = {
                0, (GetHal<Device, Tag::User>::type::template activateEndpoint<N, D, T>(), 0)...};
        }
        static void onPacketFromHost(bool data1)
        {
            if (controlTransfer_.dataStageComplete())
            {
	            if (handleHostToDevice())
	            {
		            sendControlAck(getPacket());
	            }
	            else
	            {
		            GetHal<Device, Tag::User>::type::enableEP0Out(false); // if control transfer not complete then next is data0
	            }
            }
            else
            {
                GetHal<Device, Tag::User>::type::enableEP0Out(data1); // if control transfer not complete then alternate data0/1 packets
            }
        }

    public:
		static void sendPacket(PacketType && p)
		{
			GetHal<Device, Tag::User>::type::sendPacket(std::move(p));
		}
        static PacketType getPacket() { 
	        return AllocatorType::allocate(); 
        }
        static void onSetupPacket(PacketType && p)
        {
            using namespace SetupPacket;
            controlTransfer_.initialize(std::move(p));
            if (controlTransfer_.getDirection() == Direction::hostToDevice)
            {
                onPacketFromHost(true);
            }
            else
            {
                handleDeviceToHost();
                if (!controlTransfer_.empty())
                {
                    sendPacket(controlTransfer_.popPacket());
                }
            }
        }
        static void onOutReceived(PacketType && p)
        {
			if (p.getEndpoint().value_ == 0) {
				bool wasData1 = p.isData1();
				controlTransfer_.pushPacket(std::move(p));
				onPacketFromHost(!wasData1);
			}
			else {
				brigand::at<DeviceClasses, brigand::int8_t<0>>::onOut(std::move(p));
			}
        }
        static void onInSent(PacketType && p)
        {
            using namespace SetupPacket;
			if (p.getEndpoint().value_ == 1) {
				if (p.getSize() < PacketType::capacity)
				{ // if the packet is smaller than the capacity it is by definition the last packet
					// in the transfer
					switch (controlTransfer_.getRequest())
					{
					case Request::setAddress:
						GetHal<Device, Tag::User>::type::setAddress(static_cast<uint8_t>(controlTransfer_.getValue()));
						break;
					}
					GetHal<Device, Tag::User>::type::enableEP0Out(false);
				}
				else
				{
					sendPacket(controlTransfer_.popPacket());
				}
				AllocatorType::deallocate(std::move(p));
			}
			else {
				brigand::at<DeviceClasses, brigand::int8_t<0>>::onIn(std::move(p));
			}
        }
		static void onSof() {
			//TODO support multiple devices here
			brigand::at<DeviceClasses, brigand::int8_t<0>>::onSof();
		}
        static void initialize() { AllocatorType::initialize(); }
    };
    template <typename TDeviceSettings, typename... TDeviceClass>
    typename Device<TDeviceSettings, TDeviceClass...>::ControlTransfer
        Device<TDeviceSettings, TDeviceClass...>::controlTransfer_;
    template <typename TDeviceSettings, typename... TDeviceClass>
    constexpr uint8_t Device<TDeviceSettings, TDeviceClass...>::deviceDescriptor[18];

    struct DefaultDeviceSettings
    {
        using MemoryPolicy = CompactPacket::MemoryPolicy<>;
        using StringDescriptors = void; // user must override
        using PeripheralNumber = PeripheralC<0>;
    };
}
}
