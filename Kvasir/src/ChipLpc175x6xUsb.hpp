#pragma once

#include "Register.hpp"
#include "UsbConfig.hpp"
#include "ChipLpc175x6xInterrupt.hpp"
#include "ChipLpc175x6xIo.hpp"

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
