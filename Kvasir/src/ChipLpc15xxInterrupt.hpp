#pragma once
#include "interrupt.hpp"

namespace Kvasir{
namespace Interrupt{
	template<int I>
	using Type = ::Kvasir::Nvic::Index<I>;

	constexpr Type<0> watchdog{};
	constexpr Type<1> brownOutDetect{};
	constexpr Type<2> flashController{};
	constexpr Type<3> eepromController{};
	constexpr Type<4> dma{};
	constexpr Type<5> gpioGroup0{};
	constexpr Type<6> gpioGroup1{};
	constexpr Type<7> pinInterrupt0{};
	constexpr Type<8> pinInterrupt1{};
	constexpr Type<9> pinInterrupt2{};
	constexpr Type<10> pinInterrupt3{};
	constexpr Type<11> pinInterrupt4{};
	constexpr Type<12> pinInterrupt5{};
	constexpr Type<13> pinInterrupt6{};
	constexpr Type<14> pinInterrupt7{};
	constexpr Type<15> rit{};
	constexpr Type<16> stateConfigurableTimer0{};
	constexpr Type<17> stateConfigurableTimer1{};
	constexpr Type<18> stateConfigurableTimer2{};
	constexpr Type<19> stateConfigurableTimer3{};
	constexpr Type<20> multirateTimer{};
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
		template<int I>
		struct MakeAction<Action::Enable,Index<I>> : Register::BlindSetBitActionT<
			baseAddress + 0x100 +(I>32?4:0), (I & 0x1F)>{};
	}
}
