#pragma once
#include <Mpl/brigand.hpp>
#include <algorithm>
namespace Kvasir
{
	namespace Usb
	{
		struct LineCoding {
			uint8_t data_[7];
			enum class StopBits : uint8_t {
				one,
				oneAndAHalf,
				two
			};
			enum class PairityType :uint8_t {
				None, Odd, Even, Mark, Space
			};
			enum class DataBits : uint8_t {
				five, six, seven, eight, sixteen
			};
			//input iterator must be advancable 7 times and interate over data of the exact same layout/format. data_ is layed out in the same format as standardized get/set lin coding commands.
			template<typename T>
			void unsafeFromBuffer(T in) {
				std::copy_n(in, 7, data_);
			}
			//output iterator must be advancable 7 times and interate over data of the exact same layout/format. data_ is layed out in the same format as standardized get/set lin coding commands.
			template<typename T>
			void unsafeToBuffer(T out) {
				std::copy_n(data_, 7, out);
			}
			uint32_t getBaud() {
				return data_[0] | (data_[1] << 8) | (data_[2] << 16) | (data_[3] << 24);
			}
			StopBits getStopBits() {
				return static_cast<StopBits>(data_[4]);
			}
			PairityType getPairityType() {
				return static_cast<PairityType>(data_[5]);
			}
			DataBits getDataBits() {
				return static_cast<DataBits>(data_[6]);
			}
		};

		template<typename TSettings, typename TDevice>
		struct Cdc {
			static LineCoding lineCoding_;
			static typename TDevice::HalCommand onSetupReceived(typename TDevice::PacketType&& p) {
				auto rt = SetupPacket::getRequest(p);
				switch (rt) {
				case SetupPacket::Request::getLineCoding:
				{
					p.clear();
					lineCoding_.unsafeToBuffer(p.unsafeToBufPointer());
					p.unsafeSetSize(7);
					return typename TDevice::HalCommand{ std::move(p) };
				}
				case SetupPacket::Request::setLineCoding:
				{
					lineCoding_.unsafeFromBuffer(p.unsafeToBufPointer()+1);
					return typename TDevice::HalCommand{ TDevice::makeAck(std::move(p)) };
				}
				}
			}
		};
		template<typename TSettings, typename U>
		LineCoding Cdc<TSettings,U>::lineCoding_= { static_cast<uint8_t>(TSettings::baud &0xFF) , static_cast<uint8_t>((TSettings::baud >> 8) & 0xFF) , static_cast<uint8_t>((TSettings::baud >> 16) & 0xFF) , static_cast<uint8_t>((TSettings::baud >> 24) & 0xFF),0x00,0x00,0x08 };

		struct CdcDefaultSettings {
			using ClassType = brigand::quote<Cdc>;
			static constexpr auto baud = 9600;
			static constexpr LineCoding::StopBits stopBits = LineCoding::StopBits::one;
		};
	}
}
