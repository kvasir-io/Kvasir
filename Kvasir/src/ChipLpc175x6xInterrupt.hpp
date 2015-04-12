#pragma once
#include "interrupt.hpp"

namespace Kvasir{
	namespace Interrupt{
		template<int I>
		using Type = ::Kvasir::Nvic::Index<I>;

		constexpr Type<0> watchdogTimer;
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
		constexpr Type<18> externalInt0;
		constexpr Type<19> externalInt1;
		constexpr Type<20> externalInt2;
		constexpr Type<21> externalInt3;
		constexpr Type<22> analogDiditalConverter;
		constexpr Type<23> brownOutDetect;
		constexpr Type<24> usb;
		constexpr Type<25> can;
		constexpr Type<26> dma;
		constexpr Type<27> i2s;
		constexpr Type<28> ethernet;
		constexpr Type<29> repetitiveInterruptTimer;
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
		struct MakeAction<Action::Enable,Index<I>> : Register::BlindSetBitActionT<
			baseAddress + 0x100 +(I>32?4:0), (I & 0x1F)>{};
	}
}
