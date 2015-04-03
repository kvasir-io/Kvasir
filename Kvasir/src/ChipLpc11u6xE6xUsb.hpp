#pragma once

#include "Register.hpp"

namespace Kvasir{
struct UsbDefaultConfig{
	static constexpr int baseAddress = 0x40080000;
	struct DeviceCommandStatus{
		static constexpr int address = baseAddress;
	};
	struct DeviceCommandStatus{
		static constexpr int address = baseAddress;
		struct Pod{
			int raw_;
			explicit operator int(){
				return raw_;
			}
		};
		using Reg = Register::Functional<address,0xFFFF,Register::Policy::ReadWritableP,Register::Policy::PodConversionP<Pod>>;
		template<int I>
		constexpr Register::WriteActionT<address,0x7F,I> makeDeviceAddress(){ return Register::WriteActionT<address,0x7F,I>{}; }
		static constexpr Register::WriteBitActionT<address,7,true> deviceEnable;
		static constexpr Register::WriteBitActionT<address,7,false> deviceDisable;
		static constexpr Register::WriteBitActionT<address,8,true> clearSetupTokenReceived;
		static constexpr Register::WriteBitActionT<address,9,true> stopPllClockOnSuspendOff;
		static constexpr Register::WriteBitActionT<address,9,false> stopPllClockOnSuspendOn;
		static constexpr Register::WriteBitActionT<address,11,true> lpmSupported;
		static constexpr Register::WriteBitActionT<address,11,false> lpmNotSupported;
		//TODO implement rest
	};
	struct Info{
		static constexpr int address = baseAddress+4;
		enum class Error {none,pidEncoding,pidUnknown,packetUnexpected};
		using FrameNumber = Register::Functional<address,0x03FF,Register::Policy::ReadableP>;
		using ErrorCode = Register::Functional<address,0x0C00,Register::Policy::ReadWritableP,Register::Policy::EnumConversionP<Error>>;
	};
	using EpCommandStatusListAddress = Register::Functional<baseAddress+8,0xFFFFFFFF,Register::Policy::ReadWritableP>;
	//TODO add rest
};
}
