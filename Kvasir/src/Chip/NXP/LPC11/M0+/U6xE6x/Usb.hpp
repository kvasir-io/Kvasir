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

#include "../../../../../Register/Register.hpp"
#include "../../../../../Common/UsbConfig.hpp"
#include "Interrupt.hpp"

namespace Kvasir{
struct UsbDefaultConfig{
	static constexpr int baseAddress = 0x40080000;
	struct DeviceCommandStatus{
		static constexpr int address = baseAddress;
		struct Pod{
			int raw_;
			explicit operator int(){
				return raw_;
			}
		};
		//using Reg = Register::Functional<address,0xFFFF,Register::Policy::ReadWritableP,Register::Policy::PodConversionP<Pod>>;
		template<int I>
		constexpr Register::WriteActionT<address,0x7F,I> makeDeviceAddress(){ return Register::WriteActionT<address,0x7F,I>{}; }

		static constexpr	Register::RWLocation<address, (1 << 7)>		deviceEnabled{};
		static constexpr	Register::BWLocation<address, (1 << 8)>		clearSetupTokenReceived{};
		static constexpr	Register::RWLocation<address, (1 << 9)>		stopPllClockOnSuspendDisabled{};
		static constexpr	Register::RWLocation<address, (1 <<11)>		lpmSupported{};
		static constexpr	Register::RWLocation<address, (1 <<12)>		bulkOutInterruptOnNAckEnabled{};
		static constexpr	Register::RWLocation<address, (1 <<13)>		bulkInInterruptOnNAckEnabled{};
		static constexpr	Register::RWLocation<address, (1 <<14)>		controlOutInterruptOnNAckEnabled{};
		static constexpr	Register::RWLocation<address, (1 <<15)>		controlInInterruptOnNAckEnabled{};
		static constexpr	Register::RWLocation<address, (1 <<16)>		deviceConnect{};

		//TODO dont know what to do with this bit
		static constexpr Register::WriteBitActionT<address,17,false> remoteWakeup{};

		static constexpr	Register::RWLocation<address, (1 <<19)>		deviceSuspendEnabled{};
		static constexpr	Register::BWLocation<address, (1 <<24)>		deviceConnectChangeReset{};
		static constexpr	Register::BWLocation<address, (1 <<25)>		deviceSuspendChangeReset{};
		static constexpr	Register::BWLocation<address, (1 <<26)>		deviceResetChangeReset{};
	};
	struct Info{
		static constexpr int address = baseAddress+4;
		enum class Error {none,pidEncoding,pidUnknown,packetUnexpected};
		//using FrameNumber = Register::Functional<address,0x03FF,Register::Policy::ReadableP>;
		//using ErrorCode = Register::Functional<address,0x0C00,Register::Policy::ReadWritableP,Register::Policy::EnumConversionP<Error>>;
	};
	//using EpCommandStatusListAddress = Register::Functional<baseAddress+8,0xFFFFFFFF,Register::Policy::ReadWritableP>;
	//TODO add rest
};
	namespace Usb{
		template<typename TDerived, typename TConfig>
		struct Base{
		private:
			void onInterrupt(){

			}
		public:
			static constexpr auto isr = MPL::list(Interrupt::usbIrq, Interrupt::usbFiq);
		};
	}
}
