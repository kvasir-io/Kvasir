#pragma once

#include "Register.hpp"
#include "UsbConfig.hpp"
#include "ChipLpc175x6xInterrupt.hpp"
#include "ChipLpc175x6xIo.hpp"

namespace Kvasir{
	namespace Usb{
		struct DefaultConfig : Detail::DefaultConfig{
			static constexpr int baseAddress = 0x5000C200;
			static constexpr auto setPinFunction = list(
					action(Io::Action::pinFunction1,Io::PinLocationT<0,29>{}),
					action(Io::Action::pinFunction1,Io::PinLocationT<0,30>{}));
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
