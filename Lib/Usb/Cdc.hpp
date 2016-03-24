#pragma once
#include <Mpl/brigand.hpp>
#include <Usb/Endpoint.hpp>
#include <algorithm>
namespace Kvasir
{
namespace Usb
{
    namespace Cdc
    {
        struct LineCoding
        {
            uint8_t data_[7];
            enum class StopBits : uint8_t
            {
                one,
                oneAndAHalf,
                two
            };
            enum class PairityType : uint8_t
            {
                None,
                Odd,
                Even,
                Mark,
                Space
            };
            enum class DataBits : uint8_t
            {
                five,
                six,
                seven,
                eight,
                sixteen
            };
            // input iterator must be advancable 7 times and interate over data of the exact same
            // layout/format. data_ is layed out in the same format as standardized get/set lin
            // coding
            // commands.
            template <typename T>
            void unsafeFromBuffer(T in)
            {
                std::copy_n(in, 7, data_);
            }
            // output iterator must be advancable 7 times and interate over data of the exact same
            // layout/format. data_ is layed out in the same format as standardized get/set lin
            // coding
            // commands.
            template <typename T>
            void unsafeToBuffer(T out)
            {
                std::copy_n(data_, 7, out);
            }
            uint32_t getBaud()
            {
                return data_[0] | (data_[1] << 8) | (data_[2] << 16) | (data_[3] << 24);
            }
            StopBits getStopBits() { return static_cast<StopBits>(data_[4]); }
            PairityType getPairityType() { return static_cast<PairityType>(data_[5]); }
            DataBits getDataBits() { return static_cast<DataBits>(data_[6]); }
        };

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
            static typename TDevice::HalCommand onSetupReceived(typename TDevice::PacketType && p)
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
                    return typename TDevice::HalCommand{std::move(p)};
                }
                case SetupPacket::Request::setLineCoding:
                {
                    getData().state_ = State::settingLineCoding;
                    TDevice::sinkPacket(std::move(p));
                    auto ret = typename TDevice::HalCommand{};
                    ret.type_ = TDevice::HalCommand::Type::expectingOutPacket;
                    return ret;
                }
                case SetupPacket::Request::setControlLineState:
                {
                    return typename TDevice::HalCommand{TDevice::makeAck(std::move(p))};
                }
                default:
                    TDevice::sinkPacket(std::move(p));
                    return typename TDevice::HalCommand{};
                }
            }
            static typename TDevice::HalCommand onIn(typename TDevice::PacketType && p)
            {
                p.clear();
                return typename TDevice::HalCommand{std::move(p)};
            }
            static typename TDevice::HalCommand onOut(typename TDevice::PacketType && p)
            {
                if (p.getEndpoint().value_ == 0 && getData().state_ == State::settingLineCoding)
                {
                    getData().lineCoding_.unsafeFromBuffer(p.unsafeToBufPointer());
                    return typename TDevice::HalCommand{TDevice::makeAck(std::move(p))};
                }
                else
                {
                    p.clear();
                    return typename TDevice::HalCommand{std::move(p)};
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
            {THost::State::idle}};

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
