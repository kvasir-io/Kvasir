#pragma once
#include "interrupt.hpp"

/*Corresponding to NXP user manual
 *UM10360 LPC176x/5x Rev. 3.1 2 April 2014
 */

namespace Kvasir{
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
		struct MakeAction<Action::setPending,Index<I>>	:	Register::BlindSetBitActionT<
			baseAddress + 0x200 +(I>31?4:0), I>{
			static_assert(I<=30 && I>=0,"Unable to set pending on this interrupt, index is out of range");
		};

		template<int I>
		struct MakeAction<Action::clearPending,Index<I>>	:	Register::BlindSetBitActionT<
			baseAddress + 0x280 +(I>31?4:0), I>{
			static_assert(I<=30 && I>=0,"Unable to clear pending on this interrupt, index is out of range");
		};


	}
}
