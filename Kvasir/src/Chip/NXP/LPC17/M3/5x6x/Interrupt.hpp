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
#include "interrupt.hpp"

/*Corresponding to NXP user manual
 *UM10360 LPC176x/5x Rev. 3.1 2 April 2014
 */

namespace Kvasir{
	namespace ExtInterrupt{//this namespace needs some additional safety features

			constexpr int address =  0x400FC148;

			enum class ExtInterruptMode { levelSensitiveInterrupt, edgeSensitivInterrupt};

			static constexpr Register::RWLocation<address, (1 << 0),~(1 << 0), ExtInterruptMode> extInterrupt0Mode{};
			template<ExtInterruptMode E>
			static constexpr decltype(write(extInterrupt0Mode, Register::value<ExtInterruptMode, E>())) writeExtInterrupt0Mode(){ return{}; };
			static constexpr Register::RWLocation<address, (1 << 1),~(1 << 1), ExtInterruptMode> extInterrupt1Mode{};
			template<ExtInterruptMode E>
			static constexpr decltype(write(extInterrupt1Mode, Register::value<ExtInterruptMode, E>())) writeExtInterrupt1Mode(){ return{}; };
			static constexpr Register::RWLocation<address, (1 << 2),~(1 << 2), ExtInterruptMode> extInterrupt2Mode{};
			template<ExtInterruptMode E>
			static constexpr decltype(write(extInterrupt2Mode, Register::value<ExtInterruptMode, E>())) writeExtInterrupt2Mode(){ return{}; };
			static constexpr Register::RWLocation<address, (1 << 3),~(1 << 3), ExtInterruptMode> extInterrupt3Mode{};
			template<ExtInterruptMode E>
			static constexpr decltype(write(extInterrupt3Mode, Register::value<ExtInterruptMode, E>())) writeExtInterrupt3Mode(){ return{}; };

	}

	namespace Interrupt{
		template<int I>
		using Type = ::Kvasir::Nvic::Index<I>;

		constexpr Type<0> wdt;
		constexpr Type<1> timer0;
		constexpr Type<2> timer1;
		constexpr Type<3> timer2;
		constexpr Type<4> timer3;
		constexpr Type<5> uart0;
		constexpr Type<6> uart1;
		constexpr Type<7> uart2;
		constexpr Type<8> uart3;
		constexpr Type<9> pwm;
		constexpr Type<10> i2C0;
		constexpr Type<11> i2C1;
		constexpr Type<12> i2C2;
		constexpr Type<13> spi;
		constexpr Type<14> ssp0;
		constexpr Type<15> ssp1;
		constexpr Type<16> pll0;
		constexpr Type<17> rtc;
		constexpr Type<18> external0;
		constexpr Type<19> external1;
		constexpr Type<20> external2;
		constexpr Type<21> external3;
		constexpr Type<22> adc;
		constexpr Type<23> bod;
		constexpr Type<24> usb;
		constexpr Type<25> can;
		constexpr Type<26> dma;
		constexpr Type<27> i2s;
		constexpr Type<28> ethernet;
		constexpr Type<29> rit;
		constexpr Type<30> motorControlPWM;
		constexpr Type<31> qei;
		constexpr Type<32> pll1;
		constexpr Type<33> usbActivity;
		constexpr Type<34> canActivity;
	}
	namespace Nvic{
		constexpr int baseAddress = 0xE000E000;

		template<>
		struct InterruptOffsetTraits<void>{
			static constexpr int begin = -14;
			static constexpr int end = 35;
		};

		template<int I>
		struct MakeAction<Action::Enable,Index<I>> :	Register::BlindSetBitActionT<
			baseAddress + 0x100 +(I>31?4:0), (I & 0x1F)>{
			static_assert(I<=34 && I>=0,"Unable to enable this Interrupt, index is out of range");
		};

		template<int I>
		struct MakeAction<Action::Disable,Index<I>>	:	Register::BlindSetBitActionT<
			baseAddress + 0x180 +(I>31?4:0), (I & 0x1F)>{
			static_assert(I<=34 && I>=0,"Unable to disable this Interrupt, index is out of range");
		};

		template<int I>
		struct MakeAction<Action::SetPending,Index<I>>	:	Register::BlindSetBitActionT<
			baseAddress + 0x200 +(I>31?4:0), I>{
			static_assert(I<=34 && I>=0,"Unable to set pending on this interrupt, index is out of range");
		};

		template<int I>
		struct MakeAction<Action::ClearPending,Index<I>>	:	Register::BlindSetBitActionT<
			baseAddress + 0x280 +(I>31?4:0), I>{
			static_assert(I<=34 && I>=0,"Unable to clear pending on this interrupt, index is out of range");
		};


	}
}
