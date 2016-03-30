#pragma once
#include "Memory.hpp"
#include "Packet.hpp"
#include "SetupPacket.hpp"
#include <Common\Tags.hpp>
#include "HalTraits.hpp"
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
/*        struct HalCommand
        {
            enum class Type : uint8_t
            {
                noAction,
                stall,
                unstall,
                expectingOutPacket
            };
            Type type_;
            PacketType packet_;
            HalCommand(HalCommand && o)
                : type_{o.type_}, packet_{std::move(o.packet_)}
            {
            }
            explicit HalCommand(PacketType && packet)
                : type_{Type::noAction}, packet_{std::move(packet)}
            {
            }
            HalCommand() = default;
        };*/

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

        enum class State : uint8_t
        {
            waitingForSetup,
            waitingForInput1,
            waitingForInput0,
            waitingToSend1,
            waitingToSend0,
            waitingForAckSent,
	        waitingForAckSentSetAddress,
            waitingForAck,
            forwardingOutPackets
        };
        struct Sm
        {
            State state_;
            uint8_t device_;
            TransferType transfer_;
	        uint8_t address_;
            State getState() const { return state_; }
/*            HalCommand filterClassResponce(HalCommand && in, uint8_t dev)
            {
                if (in.type_ == HalCommand::Type::expectingOutPacket)
                {
                    state_ = State::forwardingOutPackets;
                    device_ = dev;
                }
                return std::move(in);
            }*/
            void onSetupReceived(PacketType && p)
            {
                transfer_.clear();
                using namespace SetupPacket;
                auto t = getType(p);

                switch (t)
                {
                case Type::classT:
                {
                    // TODO support more
                    auto i = getIndex(p);
                    switch (i)
                    {
                    case 0:
						if (brigand::at<DeviceClasses, brigand::int8_t<0>>::onSetupReceived(
							std::move(p))) {
							state_ = State::forwardingOutPackets;
							device_ = 0;
							GetHal<Device, Tag::User>::type::enableEP0Out(1);
						}
						return;
                    }

                    break;
                }
                case Type::vendor:
                {
                    break;
                }
                case Type::standard:
                {
                    auto rt = getRequest(p);
                    if (getWLength(p) > 0)
                    {
                        if (getDirection(p) == Direction::deviceToHost)
                        {
                            state_ = State::waitingToSend1;

                            if (rt == Request::getStatus)
                            {
                                if (Device::requestGetStatus())
                                {
									sendControlAck(std::move(p));
									return;
                                }
                            }
                            else if (rt == Request::getDescriptor)
                            {
                                Device::requestGetDescriptor(std::move(p));
                                auto op = transfer_.popFrontPacket();
								op.setEndpoint(Endpoint{ 1 });
                                op.makeData1();
								sendPacket(std::move(op));
								return; 
                            }
                            else if (rt == Request::getConfiguration)
                            {
                                if (Device::requestGetConfiguration())
                                {
									sendControlAck(std::move(p));
									return;
                                }
                            }
                            else if (rt == Request::getInterface)
                            {
                                if (Device::requestGetInterface())
                                {
									sendControlAck(std::move(p));
									return;
                                }
                            }
                        }
                        else
                        {
                            state_ = State::waitingForInput1;
                            if (rt == Request::clearFeature)
                            {
								sendControlAck(std::move(p));
								return;
                            }
                            else if (rt == Request::setFeature)
                            {
								sendControlAck(std::move(p));
								return;
                            }
                            else if (rt == Request::setInterface)
                            {
								sendControlAck(std::move(p));
								return;
                            }
                        }
                    }
                    else
                    {
                        if (t == Type::standard)
                        {
                            if (rt == Request::setAddress)
                            {
                                state_ = State::waitingForAckSentSetAddress;
	                            address_ = static_cast<uint8_t>(getValue(p));
								sendControlAck(std::move(p));
								return;
                            }
                            else if (rt == Request::setConfiguration)
                            {
                                // this is where mbed initializes other endpoints
                                // TODO check if the usb standard says to init here and correct or
                                // cite depending
                                activateEndpoints(EndpointNumbers{}, FlatEPRequirements{});
								sendControlAck(std::move(p));
								return;
                            }
                        }
                    }
                    break;
                }
                };
                AllocatorType::deallocate(
                    std::move(p)); // if we did not use the packet in a return then deallocate it
            }
            void onInSent(PacketType && p)
            {
				if (p.getEndpoint().value_ == 1) {
					AllocatorType::deallocate(std::move(p));
					if (transfer_.empty()) {
						GetHal<Device, Tag::User>::type::enableEP0Out(0);
					}
					switch (state_)
					{
					case State::waitingToSend1:
						if (transfer_.empty())
						{
							state_ = State::waitingForAck;
						}
						else
						{
							state_ = State::waitingToSend0;
							auto op = transfer_.popFrontPacket();
							op.setEndpoint(Endpoint{ 1 });
							op.makeData0();
							sendPacket(std::move(op));
						}
						break;
					case State::waitingToSend0:
						if (transfer_.empty())
						{
							state_ = State::waitingForAck;
						}
						else
						{
							state_ = State::waitingToSend1;
							auto op = transfer_.popFrontPacket();
							op.setEndpoint(Endpoint{ 1 });
							op.makeData1();
							sendPacket(std::move(op));
						}
						break;
					case State::waitingForAckSentSetAddress: {
						GetHal<Device, Tag::User>::type::setAddress(address_);
					}
					default:
						state_ = State::waitingForSetup;
					}
				}
            }
            void onOutReceived(PacketType && p)
            {
                switch (state_)
                {
                case State::waitingForInput1:
                    if (transfer_.empty())
                    {
                        state_ = State::waitingForAckSent;
                    }
                    else
                    {
                        state_ = State::waitingForInput0;
                    }
                    break;
                case State::waitingForInput0:
                    if (transfer_.empty())
                    {
                        state_ = State::waitingForAckSent;
                    }
                    else
                    {
                        state_ = State::waitingForInput0;
                    }
                    break;
                case State::forwardingOutPackets:
                {
                    // TODO support more
                    switch (device_)
                    {
                    case 0:
                        return brigand::at<DeviceClasses, brigand::int8_t<0>>::onOut(std::move(p));
                    }

                    break;
                }
                case State::waitingForAck:
                default:
                    state_ = State::waitingForSetup;
                }
                AllocatorType::deallocate(std::move(p));
                return;
            }
        };
        static Sm sm_;
        friend class Sm;

    private:
        static void copyToTransfer(const uint8_t * const buf, const std::size_t length)
        {
            sm_.transfer_.pushBack(buf, buf + length);
        }
        static void sinkPacketInTransfer(PacketType && p)
        {
            p.clear();
            sm_.transfer_.pushBackPacket(std::move(p));
        }
        static bool requestGetStatus() { return false; }
        static bool requestClearFeature() { return false; }
        static bool requestSetFeature() { return false; }
        static void requestGetDescriptor(PacketType && p)
        {
            using namespace SetupPacket;
            const auto type = getDescriptorType(p);
            const auto reqLength = getWLength(p);
            const auto index = getDescriptorIndex(p);
            sinkPacketInTransfer(std::move(p));
            switch (type)
            {
            case DescriptorType::device:
            {
                copyToTransfer(deviceDescriptor,
                               std::min(uint16_t(sizeof(deviceDescriptor)), reqLength));
                break;
            }
            case DescriptorType::configuration:
            {
                copyToTransfer(
                    TDeviceSettings::StringDescriptors::configuration,
                    std::min(uint16_t(sizeof(TDeviceSettings::StringDescriptors::configuration)),
                             reqLength));
                break;
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
                    break;
                }
                case DescriptorIndex::manufacturer:
                {
                    // transfer.remaining =  stringImanufacturerDesc()[0];
                    // transfer.ptr = stringImanufacturerDesc();
                    // transfer.direction = DEVICE_TO_HOST;
                    // success = true;
                    // break;
                }
                case DescriptorIndex::product:
                {
                    copyToTransfer(
                        TDeviceSettings::StringDescriptors::product,
                        std::min(uint16_t(sizeof(TDeviceSettings::StringDescriptors::product)),
                                 reqLength));
                    break;
                }
                case DescriptorIndex::serial:
                {
                    copyToTransfer(
                        TDeviceSettings::StringDescriptors::serial,
                        std::min(uint16_t(sizeof(TDeviceSettings::StringDescriptors::serial)),
                                 reqLength));
                    break;
                }
                case DescriptorIndex::configuration:
                {
                    // transfer.remaining = stringIConfigurationDesc()[0];
                    // transfer.ptr = stringIConfigurationDesc();
                    // transfer.direction = DEVICE_TO_HOST;
                    // success = true;
                    // break;
                }
                case DescriptorIndex::interface:
                {
                    copyToTransfer(
                        TDeviceSettings::StringDescriptors::interface,
                        std::min(uint16_t(sizeof(TDeviceSettings::StringDescriptors::interface)),
                                 reqLength));
                    break;
                }
                }
                break;
            case DescriptorType::interface:
            case DescriptorType::endpoint:
            /* TODO: Support is optional, not implemented here */
            default:
                break;
            }
        }
        static bool requestGetConfiguration() { return false; }
        static bool requestSetConfiguration() { return false; }
        static bool requestGetInterface() { return false; }
        static bool requestSetInterface() { return false; }
    public:
        static void sendControlAck(PacketType && p)
        {
            p.unsafeSetSize(0);
            p.setEndpoint(Endpoint{1});
            p.makeData1(); // all acks are Data1 packets
            sendPacket(std::move(p));
        }
		static void sendPacket(PacketType && p) {
			GetHal<Device, Tag::User>::type::sendPacket(std::move(p));
		}
        static PacketType getPacket() { return AllocatorType::allocate(); }
        static void sinkPacket(PacketType && p) { return AllocatorType::deallocate(std::move(p)); }
        template <typename... N, EndpointDirection... D, EndpointType... T>
        static void activateEndpoints(brigand::list<N...>,
                                      brigand::list<EndpointRequirement<D, T>...>)
        {
            int i[] = {0, (GetHal<Device,Tag::User>::type::template activateEndpoint<N, D, T>(), 0)...};
        }
        static void onSetupPacket(PacketType && p)
        {
            sm_.onSetupReceived(std::move(p));
        }
        static void onOutReceived(PacketType && p) { sm_.onOutReceived(std::move(p)); }
        static void onInSent(PacketType && p) { sm_.onInSent(std::move(p)); }
        static void initialize() { AllocatorType::initialize(); }
    };
    template <typename TDeviceSettings, typename... TDeviceClass>
    typename Device<TDeviceSettings, TDeviceClass...>::Sm
        Device<TDeviceSettings, TDeviceClass...>::sm_;
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
