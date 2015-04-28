/**************************************************************************
Copyright 2015 Odin Holmes
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
****************************************************************************/
#pragma once

#include "../Register.hpp"
#include "../UsbConfig.hpp"
#include "Interrupt.hpp"

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

		static constexpr	Register::RWLocation<address, (1 << 7)>		deviceEnabled{};
//		static constexpr Register::WriteBitActionT<address,7,true> deviceEnable;
//		static constexpr Register::WriteBitActionT<address,7,false> deviceDisable;

		static constexpr	Register::BWLocation<address, (1 << 8)>		clearSetupTokenReceived{};
//		static constexpr Register::WriteBitActionT<address,8,true> clearSetupTokenReceived;

		static constexpr	Register::RWLocation<address, (1 << 9)>		stopPllClockOnSuspendDisabled{};
//		static constexpr Register::WriteBitActionT<address,9,true> stopPllClockOnSuspendOff;
//		static constexpr Register::WriteBitActionT<address,9,false> stopPllClockOnSuspendOn;

		static constexpr	Register::RWLocation<address, (1 <<11)>		lpmSupported{};
//		static constexpr Register::WriteBitActionT<address,11,true> lpmSupported;
//		static constexpr Register::WriteBitActionT<address,11,false> lpmNotSupported;

		static constexpr	Register::RWLocation<address, (1 <<12)>		bulkOutInterruptOnNAckEnabled{};
//		static constexpr Register::WriteBitActionT<address,12,true> bulkOutInterruptOnNackOn;
//		static constexpr Register::WriteBitActionT<address,12,false> bulkOutInterruptOnNackOff;

		static constexpr	Register::RWLocation<address, (1 <<13)>		bulkInInterruptOnNAckEnabled{};
//		static constexpr Register::WriteBitActionT<address,13,true> bulkInInterruptOnNackOn;
//		static constexpr Register::WriteBitActionT<address,13,false> bulkInInterruptOnNackOff;

		static constexpr	Register::RWLocation<address, (1 <<14)>		controlOutInterruptOnNAckEnabled{};
//		static constexpr Register::WriteBitActionT<address,14,true> controlOutInterruptOnNackOn;
//		static constexpr Register::WriteBitActionT<address,14,false> controlOutInterruptOnNackOff;

		static constexpr	Register::RWLocation<address, (1 <<15)>		controlInInterruptOnNAckEnabled{};
//		static constexpr Register::WriteBitActionT<address,15,true> controlInInterruptOnNackOn;
//		static constexpr Register::WriteBitActionT<address,15,false> controlInInterruptOnNackOff;

		static constexpr	Register::RWLocation<address, (1 <<16)>		deviceConnect{};
//		static constexpr Register::WriteBitActionT<address,16,true> deviceConnect;
//		static constexpr Register::WriteBitActionT<address,16,false> deviceDisconnect;

		//TODO dont know what to do with this bit
		static constexpr Register::WriteBitActionT<address,17,false> remoteWakeup;

		static constexpr	Register::RWLocation<address, (1 <<19)>		deviceSuspendEnabled{};
//		static constexpr Register::WriteBitActionT<address,19,true> deviceSuspend;
//		static constexpr Register::WriteBitActionT<address,19,false> deviceWakeUp;

		static constexpr	Register::BWLocation<address, (1 <<24)>		deviceConnectChangeReset{};
//		static constexpr Register::WriteBitActionT<address,24,true> deviceConnectChangeReset;

		static constexpr	Register::BWLocation<address, (1 <<25)>		deviceSuspendChangeReset{};
//		static constexpr Register::WriteBitActionT<address,25,true> deviceSuspendChangeReset;

		static constexpr	Register::BWLocation<address, (1 <<26)>		deviceResetChangeReset{};
//		static constexpr Register::WriteBitActionT<address,26,true> deviceResetChangeReset;
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
	namespace Usb{
		template<typename TDerived, typename TConfig>
		struct Base{
		private:
			void onInterrupt(){

			}
		public:
			static constexpr auto isr = MPL::list(Interrupt::usbIrq, Interrupt::usbFiq)
		};
	}
}
