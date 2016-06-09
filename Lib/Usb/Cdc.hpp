#pragma once
#include <Mpl/brigand.hpp>
#include <Usb/CdcLineCoding.hpp>
#include <Usb/Endpoint.hpp>
#include <Usb/SetupPacket.hpp>
#include <algorithm>
namespace Kvasir
{
namespace Usb
{
    namespace Cdc
    {
	    using std::move;
        template <typename TSettings, typename TDevice>
        struct Host
        {
            enum class State : uint8_t
            {
                idle,
                settingLineCoding
            };
            using Settings = TSettings;
            struct Data
            {
                LineCoding lineCoding_;
            };
            static Data & getData() { return TSettings::template StoragePolicy<Host>::get(); }
            // return true if expecting a packet
			template<typename T>
            static bool onSetupReceived(T & t)
            {
                auto rt = t.getRequest();
                switch (rt)
                {
                case SetupPacket::Request::getLineCoding:
                {
                    auto p = TDevice::AllocatorType::allocate();
                    getData().lineCoding_.unsafeToBuffer(p.unsafeToBufPointer());
                    p.unsafeSetSize(7);
                    p.setEndpoint(Endpoint{1});
					p.makeData1();
					t.pushPacket(std::move(p));
                    return true;
                }
                case SetupPacket::Request::setLineCoding:
                {
					auto p = t.popPacket();
					getData().lineCoding_.unsafeFromBuffer(p.unsafeToBufPointer());
					TDevice::AllocatorType::deallocate(std::move(p));
                    return true;
                }
                case SetupPacket::Request::setControlLineState:
                {
                    return true;
                }
                default:
                    return false;
                }
            }
	        static void onIn(typename TDevice::PacketType && p)
	        {
		        auto p_ =  TSettings::BufferPolicy::pop(move(p));
		        if (p_.getSize() == 0) {
			        TDevice::AllocatorType::deallocate(std::move(p_));
		        }
		        else {
			        TDevice::sendPacket(std::move(p_));
		        }
	        }
	        static void onOut(typename TDevice::PacketType && p)
	        {
		        TSettings::BufferPolicy::push(move(p));
	        }
	        static void onSof()
	        {
		        if (!TSettings::BufferPolicy::empty())
		        {
			        onIn(TDevice::AllocatorType::allocate());
		        }
	        }
        };

        template <typename THost>
        struct DefaultStorage
        {
            static typename THost::Data data_;
            static typename THost::Data & get() { return data_; }
        };
        template <typename THost>
        typename THost::Data DefaultStorage<THost>::data_ = {
            {static_cast<uint8_t>(THost::Settings::baud & 0xFF),
             static_cast<uint8_t>((THost::Settings::baud >> 8) & 0xFF),
             static_cast<uint8_t>((THost::Settings::baud >> 16) & 0xFF),
             static_cast<uint8_t>((THost::Settings::baud >> 24) & 0xFF), 0x00, 0x00, 0x08}};

        struct DefaultSettings
        {
            using ClassType = brigand::quote<Host>;
            using EndpointRequirements =
                brigand::list<EndpointRequirement<EndpointDirection::in, EndpointType::interrupt>,
                              EndpointRequirement<EndpointDirection::in, EndpointType::bulk>,
                              EndpointRequirement<EndpointDirection::out, EndpointType::bulk>>;
            template <typename T>
            using StoragePolicy = DefaultStorage<T>;
            static constexpr auto baud = 9600;
            static constexpr LineCoding::StopBits stopBits = LineCoding::StopBits::one;
        };
    }
}
}
