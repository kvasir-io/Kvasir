#pragma once
#include "interrupt.hpp"

/*Corresponding to NXP user manual
 *UM10736 LPC15xx Rev. 1.1 3 March 2014
 */

namespace Kvasir{
namespace Interrupt{
	template<int I>
	using Type = ::Kvasir::Nvic::Index<I>;

	constexpr Type<0> wdt{};
	constexpr Type<1> bod{};
	constexpr Type<2> flash{};
	constexpr Type<3> eeprom{};
	constexpr Type<4> dma{};
	constexpr Type<5> gpioGroup0{};
	constexpr Type<6> gpioGroup1{};
	constexpr Type<7> pin0{};
	constexpr Type<8> pin1{};
	constexpr Type<9> pin2{};
	constexpr Type<10> pin3{};
	constexpr Type<11> pin4{};
	constexpr Type<12> pin5{};
	constexpr Type<13> pin6{};
	constexpr Type<14> pin7{};
	constexpr Type<15> rit{};
	constexpr Type<16> sct0{};
	constexpr Type<17> sct1{};
	constexpr Type<18> sct2{};
	constexpr Type<19> sct3{};
	constexpr Type<20> mrt{};
	constexpr Type<21> uart0{};
	constexpr Type<22> uart1{};
	constexpr Type<23> uart2{};
	constexpr Type<24> i2c0{};
	constexpr Type<25> spi0{};
	constexpr Type<26> spi1{};
	constexpr Type<27> can0{};
	constexpr Type<28> usb{};
	constexpr Type<29> usbFiq{};
	constexpr Type<30> usbWakeup{};
	constexpr Type<31> adc0SequenceA{};
	constexpr Type<32> adc0SequenceB{};
	constexpr Type<33> adc0ThresholdCompare{};
	constexpr Type<34> adc0Overrun{};
	constexpr Type<35> adc1SequenceA{};
	constexpr Type<36> adc1SequenceB{};
	constexpr Type<37> adc1ThresholdCompare{};
	constexpr Type<38> adc1Overrun{};
	constexpr Type<39> dac{};
	constexpr Type<40> comparator0{};
	constexpr Type<41> comparator1{};
	constexpr Type<42> comparator2{};
	constexpr Type<43> comparator3{};
	constexpr Type<44> qei{};
	constexpr Type<45> rtcAlarm{};
	constexpr Type<46> rtcWake{};
}
	namespace Nvic{
		constexpr int baseAddress = 0xE000E000;

		template<>
				struct InterruptOffsetTraits<void>{
					static constexpr int begin = -14;
					static constexpr int end = 47;
				};

		template<int I>
		struct MakeAction<Action::Enable,Index<I>> : Register::BlindSetBitActionT<
			baseAddress + 0x100 +(I>31?4:0), (I & 0x1F)>{
			static_assert(I<=46 && I>=0,"Interruptindex out of range");
		};
		template<int I>
		struct MakeAction<Action::Disable,Index<I>>	:	Register::BlindSetBitActionT<
			baseAddress + 0x180 +(I>31?4:0), (I & 0x1F)>{
			static_assert(I<=46 && I>=0,"Interruptindex out of range");
		};

	}
}
