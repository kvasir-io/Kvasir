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

#include "Register.hpp"
#include "UsbConfig.hpp"
#include "Interrupt.hpp"
#include "Io.hpp"

namespace Kvasir{
	namespace Usb{
		namespace ClockConfiguration {
			constexpr int address = 0x5000CFF4;
			constexpr Register::BlindWriteActionT<address,0x12,0x12> enableAll{};
			constexpr Register::BlindWriteActionT<address,0x12,0x00> disableAll{};
		};
		struct DefaultConfig : Detail::DefaultConfig{
			static constexpr int baseAddress = 0x5000C200;
			static constexpr auto setPinFunction = list(
					action(Io::Action::pinFunction1,Io::PinLocationT<0,29>{}),
					action(Io::Action::pinFunction1,Io::PinLocationT<0,30>{}));
			static constexpr auto enableClock = ClockConfiguration::enableAll;
		};
//		template<typename TDerived, typename TConfig>
//		struct Base{
//		private:
//			void onInterrupt(){
//
//			}
//		public:
//			static constexpr auto isr = MPL::list(Interrupt::usbIrq, Interrupt::usbFiq)
//		};
	}
}
