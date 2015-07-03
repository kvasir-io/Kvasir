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

#include "Register/Register.hpp"
#include "Common/UsbConfig.hpp"
#include "Common/Interrupt.hpp"

namespace Kvasir{
	namespace USB{
		static constexpr int baseAddress = 0x40080000;
		struct DeviceCommandStatus{
			template<unsigned Mask, typename TAccess = Register::ReadWriteAccess, typename TFieldType = unsigned>
			using Helper = Register::BitLocation<
					Register::Address<
						baseAddress,
						Register::maskFromRange(8,8,10,10,18,18,23,20,27,27,31,29),
						Register::maskFromRange(17,17,19,19)>,
					Mask,TAccess,TFieldType>;
			static constexpr Helper<Register::maskFromRange(6,0)> deviceAddress{};

			static constexpr Helper<(1 << 7)>				deviceEnabled{};
			static constexpr Helper<(1 << 8),Register::RSetToClearAccess>				setupTokenReceived{};
			static constexpr Helper<(1 << 9)>				stopPllClockOnSuspendDisabled{};
			static constexpr Helper<(1 <<11)>				lpmSupported{};
			static constexpr Helper<(1 <<12)>				bulkOutInterruptOnNAckEnabled{};
			static constexpr Helper<(1 <<13)>				bulkInInterruptOnNAckEnabled{};
			static constexpr Helper<(1 <<14)>				controlOutInterruptOnNAckEnabled{};
			static constexpr Helper<(1 <<15)>				controlInInterruptOnNAckEnabled{};
			static constexpr Helper<(1 <<16)>				deviceConnect{};

			static constexpr Helper<(1 << 17),Register::ReadOnlyAccess> 	deviceSuspended{};
			static constexpr Register::Action<Helper<(1 << 17)>,Register::WriteLiteralAction<0>>
															sendRemoteWakeUp{};

			static constexpr Helper<(1 << 19),Register::ReadOnlyAccess> 	deviceLpmSuspended{};
			static constexpr Register::Action<Helper<(1 << 19)>,Register::WriteLiteralAction<0>>
															sendLpmRemoteWakeUp{};


			static constexpr Helper<(1 <<24),Register::RSetToClearAccess>				deviceConnectChange{};
			static constexpr Helper<(1 <<25),Register::RSetToClearAccess>				deviceSuspendChange{};
			static constexpr Helper<(1 <<26),Register::RSetToClearAccess>				deviceResetChange{};

			static constexpr Helper<(1 <<28),Register::ReadOnlyAccess>	vbusDebounced{};
		};
		struct Info{
			static constexpr int address = baseAddress+4;
			enum class Error {none,pidEncoding,pidUnknown,packetUnexpected};
			//using FrameNumber = Register::Functional<address,0x03FF,Register::Policy::ReadableP>;
			//using ErrorCode = Register::Functional<address,0x0C00,Register::Policy::ReadWritableP,Register::Policy::EnumConversionP<Error>>;
		};
		//using EpCommandStatusListAddress = Register::Functional<baseAddress+8,0xFFFFFFFF,Register::Policy::ReadWritableP>;
		//TODO add rest

		template<typename TDerived, typename TConfig>
		struct Base{
		private:
			void onInterrupt(){

			}
		public:
			static constexpr auto isr = MPL::list(Interrupt::usbIrq, Interrupt::usbFiq);
		};
	}
	struct UsbDefaultConfig{

	};
}
