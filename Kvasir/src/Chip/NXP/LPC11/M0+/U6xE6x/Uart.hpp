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

#include "../../../../../Register.hpp"

namespace Kvasir{
	namespace Detail{
		template<int I>
		struct UsartN{
			static constexpr int baseAddress = I;
			struct Configuration{
				static constexpr int address = baseAddress + 0x00;
			};
			struct Controal{
				static constexpr int address = baseAddress + 0x04;
			};
			struct Status{
				static constexpr int address = baseAddress + 0x08;
			};
			struct InterruptEnableReadAndSet{
				static constexpr int address = baseAddress + 0x0C;
			};
			struct InterruptEnableClear{
				static constexpr int address = baseAddress + 0x10;
			};
			struct Rx{
				static constexpr int address = baseAddress + 0x14;
			};
			struct RxStatus{
				static constexpr int address = baseAddress + 0x18;
			};
			struct Tx{
				static constexpr int address = baseAddress + 0x1C;
			};
			struct BaudRateGenerator{
				static constexpr int address = baseAddress + 0x20;
			};
			struct InterruptStatus{
				static constexpr int address = baseAddress + 0x24;
			};
			struct Oversample{
				static constexpr int address = baseAddress + 0x28;
			};
			struct AddressMatching{
				static constexpr int address = baseAddress + 0x2C;
			};
		};
	}
	struct Usart0{
		static constexpr int baseAddress = 0x40008000;
		struct NormalMode{
			//using Tx = Register::FunctionalT<baseAddress,0xFF,Register::Policy::PushableP>;
			//using Rx = Register::FunctionalT<baseAddress,0xFF,Register::Policy::PopableP>;
		};
		struct DivisorLatchAccessMode{
			//using DivisorLatchLSB = Register::FunctionalT<baseAddress,0xFF,Register::Policy::ReadWriteableP>;
			//using DivisorLatchMSB = Register::FunctionalT<baseAddress+4,0xFF,Register::Policy::ReadWriteableP>;
		};

		struct InterruptStatusPod{
			enum class Identification{modemStatus,thre,receiveDataAvailable,receiveLineStatus,characterTimeoutIndicator = 6};
			int raw_;
			explicit operator int(){
				return raw_;
			}
			Identification interruptIdentification(){
				return static_cast<Identification>(raw_ & 0x0F);
			}
			bool autobaudFinishedSuccessfully(){
				return raw_ & (1<<8);
			}
//			bool autobaudTimedOut(){
//				return raw_ & (1<<9);
//			}
		};
		//using InterruptStatus = Register::FunctionalT<baseAddress+8,0x03CF,Register::Policy::ReadableP,RegisterPolicy::PodConversionP<InterruptStatusPod>>;
		struct FifoControl{
			static constexpr int address = baseAddress + 0x08;
		};
		struct LineControl{
			static constexpr int address = baseAddress + 0x0C;
		};
		struct ModemControl{
			static constexpr int address = baseAddress + 0x10;
		};
		struct LineStatus{
			static constexpr int address = baseAddress + 0x14;
		};
		struct ModemStatus{
			static constexpr int address = baseAddress + 0x0C;
		};
		struct AutobaudControl{
			static constexpr int address = baseAddress + 0x20;
		};
		struct IrdaControl{
			static constexpr int address = baseAddress + 0x24;
		};
		struct FunctionalDivider{
			static constexpr int address = baseAddress + 0x28;
		};
		struct Oversampling{
			static constexpr int address = baseAddress + 0x2C;
		};
		struct TransmitEnable{
			static constexpr int address = baseAddress + 0x30;
		};
		struct HalfDuplexEnable{
			static constexpr int address = baseAddress + 0x40;
		};
		struct SmartCardInterfaceControl{
			static constexpr int address = baseAddress + 0x48;
		};
		struct Rs485Control{
			static constexpr int address = baseAddress + 0x4C;
		};
		struct Rs485AddressMatch{
			static constexpr int address = baseAddress + 0x50;
		};
		struct Rs485DirectionControlDelay{
			static constexpr int address = baseAddress + 0x54;
		};
		struct SynchronousModeControl{
			static constexpr int address = baseAddress + 0x58;
		};
	};
	using Usart1 = Detail::UsartN<0x4006C000>;
	using Usart2 = Detail::UsartN<0x40070000>;
	using Usart3 = Detail::UsartN<0x40074000>;
	using Usart4 = Detail::UsartN<0x4004C000>;
}
