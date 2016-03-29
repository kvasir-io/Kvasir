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
                State state_;
            };
            static Data & getData() { return TSettings::template StoragePolicy<Host>::get(); }
			//return true if expecting a packet
            static bool onSetupReceived(typename TDevice::PacketType && p)
            {
                getData().state_ = State::idle;
                auto rt = SetupPacket::getRequest(p);
                switch (rt)
                {
                case SetupPacket::Request::getLineCoding:
                {
                    p.clear();
                    getData().lineCoding_.unsafeToBuffer(p.unsafeToBufPointer());
                    p.unsafeSetSize(7);
                    TDevice::sendPacket(std::move(p));
					return false;
                }
                case SetupPacket::Request::setLineCoding:
                {
                    getData().state_ = State::settingLineCoding;
                    TDevice::sinkPacket(std::move(p));
                    return true;
                }
                case SetupPacket::Request::setControlLineState:
                {
					TDevice::sendControlAck(std::move(p));
                    return false;
                }
                default:
                    TDevice::sinkPacket(std::move(p));
                    return false;
                }
            }
            static void onIn(typename TDevice::PacketType && p)
            {
				//TODO
            }
            static void onOut(typename TDevice::PacketType && p)
            {
                if (p.getEndpoint().value_ == 0 && getData().state_ == State::settingLineCoding)
                {
                    getData().lineCoding_.unsafeFromBuffer(p.unsafeToBufPointer());
					TDevice::sendControlAck(std::move(p));
                }
                else
                {
					//TODO
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
             static_cast<uint8_t>((THost::Settings::baud >> 24) & 0xFF), 0x00, 0x00, 0x08},
            THost::State::idle};

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
