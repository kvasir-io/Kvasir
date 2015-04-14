#pragma once
#include "interrupt.hpp"

namespace Kvasir{
namespace Interrupt{
	template<int I>
	using Type = ::Kvasir::Nvic::Index<I>;

	constexpr Type<0> pinInterrupt0{};
	constexpr Type<1> pinInterrupt1{};
	constexpr Type<2> pinInterrupt2{};
	constexpr Type<3> pinInterrupt3{};
	constexpr Type<4> pinInterrupt4{};
	constexpr Type<5> pinInterrupt5{};
	constexpr Type<6> pinInterrupt6{};
	constexpr Type<7> pinInterrupt7{};
	constexpr Type<8> groupInterrupt0{};
	constexpr Type<9> groupInterrupt1{};
	constexpr Type<10> i2C1{};
	constexpr Type<11> uart1Or4{};
	constexpr Type<12> uart2Or3{};
	constexpr Type<13> sct0Or1{};
	constexpr Type<14> ssp1{};
	constexpr Type<15> i2c0{};
	constexpr Type<16> counterTimer16Bank0{};
	constexpr Type<17> counterTimer16Bank1{};
	constexpr Type<18> counterTimer32Bank0{};
	constexpr Type<19> counterTimer32Bank1{};
	constexpr Type<20> ssp0{};
	constexpr Type<21> usart0{};
	constexpr Type<22> usbIrq{};
	constexpr Type<23> usbFiq{};
	constexpr Type<24> adcA{};
	constexpr Type<25> rtc{};
	constexpr Type<26> bodAndWdt{};
	constexpr Type<27> flash{};
	constexpr Type<28> dma{};
	constexpr Type<29> adcb{};
	constexpr Type<30> usbWakeup{};
}
namespace Nvic{
	constexpr int baseAddress = 0xE000E000;

	template<>
	struct InterruptOffsetTraits<void>{
		static constexpr int begin = -14;
		static constexpr int end = 31;
	};

	template<int I>
	struct MakeAction<Action::Enable,Index<I>> : Register::BlindSetBitActionT<
		baseAddress + 0x100 +(I>32?4:0), (I & 0x1F)>{};
}
}
