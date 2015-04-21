#pragma once
#include "register.hpp"

namespace Kvasir{
namespace System{
namespace PowerConfiguration {
	constexpr int address{0x40048238};

	static constexpr Register::RWLocation<address,1>			ircOscillatorOutputDisabled{};
//	constexpr Register::WriteBitActionT<address,0,false> 		ircOscillatorOutputOn{};
//	constexpr Register::WriteBitActionT<address,0,true> 		ircOscillatorOutputOff{};

	static constexpr Register::RWLocation<address, (1 << 1)>	ircOscillatorDisabled{};
//	constexpr Register::WriteBitActionT<address,1,false>	 	ircOscillatorOn{};
//	constexpr Register::WriteBitActionT<address,1,true>			ircOscillatorOff{};

	static constexpr Register::RWLocation<address, (1 << 2)>	flashDisabled{};
//	constexpr Register::WriteBitActionT<address,2,false> 		flashOn{};
//	constexpr Register::WriteBitActionT<address,2,true>			flashOff{};

	static constexpr Register::RWLocation<address, (1 << 3)>	brownOutDetectDisabled{};
//	constexpr Register::WriteBitActionT<address,3,false> 		brownOutDetectOn{};
//	constexpr Register::WriteBitActionT<address,3,true> 		brownOutDetectOff{};

	static constexpr Register::RWLocation<address, (1 << 4)>	adcDisabled{};
//	constexpr Register::WriteBitActionT<address,4,false> 		adcOn{};
//	constexpr Register::WriteBitActionT<address,4,true> 		adcOff{};

	static constexpr Register::RWLocation<address, (1 << 5)>	crystalOscillatorDisabled{};
//	constexpr Register::WriteBitActionT<address,5,false> 		crystalOscillatorOn{};
//	constexpr Register::WriteBitActionT<address,5,true> 		crystalOscillatorOff{};

	static constexpr Register::RWLocation<address, (1 << 6)>	watchdogOscillatorDisabled{};
//	constexpr Register::WriteBitActionT<address,6,false> 		watchdogOscillatorOn{};
//	constexpr Register::WriteBitActionT<address,6,true>	 		watchdogOscillatorOff{};

	static constexpr Register::RWLocation<address, (1 << 7)>	systemPllDisabled{};
//	constexpr Register::WriteBitActionT<address,7,false> 		systemPllOn{};
//	constexpr Register::WriteBitActionT<address,7,true> 		systemPllOff{};

	static constexpr Register::RWLocation<address, (1 << 8)>	usbPllDisabled{};
//	constexpr Register::WriteBitActionT<address,8,false> 		usbPllOn{};
//	constexpr Register::WriteBitActionT<address,8,true> 		usbPllOff{};

	static constexpr Register::RWLocation<address, (1 << 10)>	usbTransceiverDisabled{};
//	constexpr Register::WriteBitActionT<address,10,false> 		usbTransceiverOn{};
//	constexpr Register::WriteBitActionT<address,10,true> 		usbTransceiverOff{};

	static constexpr Register::RWLocation<address, (1 << 13)>	temperaturSensorDisabled{};
//	constexpr Register::WriteBitActionT<address,13,false> 		temperaturSensorOn{};
//	constexpr Register::WriteBitActionT<address,13,true> 		temperaturSensorOff{};


}
namespace ClockControl{			//SYSAHBCLKCTRL register actions
	constexpr int address{0x40048080};
	//bit 0 is sys which is always on
	static constexpr Register::RWLocation<address, (1 << 1)>	romClockEnabled{};
//	constexpr Register::WriteBitActionT<address,1,true> 		romClockOn{};
//	constexpr Register::WriteBitActionT<address,1,false> 		romClockOff{};

	static constexpr Register::RWLocation<address, (1 << 2)>	ram0ClockEnabled{};
//	constexpr Register::WriteBitActionT<address,2,true> 		ram0ClockOn{};
//	constexpr Register::WriteBitActionT<address,2,false> 		ram0ClockOff{};

	static constexpr Register::RWLocation<address, (1 << 3)>	flashRegClockEnabled{};
//	constexpr Register::WriteBitActionT<address,3,true> 		flashRegClockOn{};
//	constexpr Register::WriteBitActionT<address,3,false> 		flashRegClockOff{};

	static constexpr Register::RWLocation<address, (1 << 4)>	flashArrayClockEnabled{};
//	constexpr Register::WriteBitActionT<address,4,true> 		flashArrayClockOn{};
//	constexpr Register::WriteBitActionT<address,4,false> 		flashArrayClockOff{};

	static constexpr Register::RWLocation<address, (1 << 5)>	i2C0ClockEnabled{};
//	constexpr Register::WriteBitActionT<address,5,true> 		i2c0ClockOn{};
//	constexpr Register::WriteBitActionT<address,5,false> 		i2c0ClockOff{};

	static constexpr Register::RWLocation<address, (1 << 6)>	gpioClockEnabled{};
//	constexpr Register::WriteBitActionT<address,6,true> 		gpioClockOn{};
//	constexpr Register::WriteBitActionT<address,6,false> 		gpioClockOff{};

	static constexpr Register::RWLocation<address, (1 << 7)>	ct16B0ClockEnabled{};
//	constexpr Register::WriteBitActionT<address,7,true> 		ct16B0ClockOn{};
//	constexpr Register::WriteBitActionT<address,7,false> 		ct16B0ClockOff{};

	static constexpr Register::RWLocation<address, (1 << 8)>	ct16B1ClockEnabled{};
//	constexpr Register::WriteBitActionT<address,8,true> 		ct16B1ClockOn{};
//	constexpr Register::WriteBitActionT<address,8,false> 		ct16B1ClockOff{};

	static constexpr Register::RWLocation<address, (1 << 9)>	ct32B0ClockEnabled{};
//	constexpr Register::WriteBitActionT<address,9,true> 		ct32B0ClockOn{};
//	constexpr Register::WriteBitActionT<address,9,false> 		ct32B0ClockOff{};

	static constexpr Register::RWLocation<address, (1 << 10)>	ct32B1ClockEnabled{};
//	constexpr Register::WriteBitActionT<address,10,true> 		ct32B1ClockOn{};
//	constexpr Register::WriteBitActionT<address,10,false> 		ct32B1ClockOff{};

	static constexpr Register::RWLocation<address, (1 << 11)>	ssp0ClockEnabled{};
//	constexpr Register::WriteBitActionT<address,11,true> 		ssp0ClockOn{};
//	constexpr Register::WriteBitActionT<address,11,false> 		ssp0ClockOff{};

	static constexpr Register::RWLocation<address, (1 << 12)>	usart0ClockEnabled{};
//	constexpr Register::WriteBitActionT<address,12,true> 		usart0ClockOn{};
//	constexpr Register::WriteBitActionT<address,12,false> 		usart0ClockOff{};

	static constexpr Register::RWLocation<address, (1 << 13)>	adcClockEnabled{};
//	constexpr Register::WriteBitActionT<address,13,true> 		adcClockOn{};
//	constexpr Register::WriteBitActionT<address,13,false> 		adcClockOff{};

	static constexpr Register::RWLocation<address, (1 << 14)>	usbClockEnabled{};
//	constexpr Register::WriteBitActionT<address,14,true> 		usbClockOn{};
//	constexpr Register::WriteBitActionT<address,14,false> 		usbClockOff{};

	static constexpr Register::RWLocation<address, (1 << 15)>	wwdtClockEnabled{};
//	constexpr Register::WriteBitActionT<address,15,true> 		wwdtClockOn{};
//	constexpr Register::WriteBitActionT<address,15,false> 		wwdtClockOff{};

	static constexpr Register::RWLocation<address, (1 << 16)>	ioconClockEnabled{};
//	constexpr Register::WriteBitActionT<address,16,true> 		ioconClockOn{};
//	constexpr Register::WriteBitActionT<address,16,false> 		ioconClockOff{};

	//Bit 17 is reserved

	static constexpr Register::RWLocation<address, (1 << 18)>	ssp1ClockEnabled{};
//	constexpr Register::WriteBitActionT<address,18,true> 		ssp1ClockOn{};
//	constexpr Register::WriteBitActionT<address,18,false> 		ssp1ClockOff{};

	static constexpr Register::RWLocation<address, (1 << 19)>	pintClockEnabled{};
//	constexpr Register::WriteBitActionT<address,19,true> 		pintCLockOn{};
//	constexpr Register::WriteBitActionT<address,19,false> 		pintCLockOff{};

	static constexpr Register::RWLocation<address, (1 << 20)>	usart1ClockEnabled{};
//	constexpr Register::WriteBitActionT<address,20,true> 		usart1ClockOn{};
//	constexpr Register::WriteBitActionT<address,20,false> 		usart1ClockOff{};

	static constexpr Register::RWLocation<address, (1 << 21)>	usart2ClockEnabled{};
//	constexpr Register::WriteBitActionT<address,21,true> 		usart2ClockOn{};
//	constexpr Register::WriteBitActionT<address,21,false> 		usart2ClockOff{};

	static constexpr Register::RWLocation<address, (1 << 22)>	usart3And4ClockEnabled{};
//	constexpr Register::WriteBitActionT<address,22,true> 		usart3And4ClockOn{};
//	constexpr Register::WriteBitActionT<address,22,false> 		usart3And4ClockOff{};

	static constexpr Register::RWLocation<address, (1 << 23)>	group0IntClockEnabled{};
//	constexpr Register::WriteBitActionT<address,23,true> 		group0IntClockOn{};
//	constexpr Register::WriteBitActionT<address,23,false> 		group0IntClockOff{};

	static constexpr Register::RWLocation<address, (1 << 24)>	group1IntClockEnabled{};
//	constexpr Register::WriteBitActionT<address,24,true> 		group1IntClockOn{};
//	constexpr Register::WriteBitActionT<address,24,false> 		group1IntClockOff{};

	static constexpr Register::RWLocation<address, (1 << 25)>	i2c1ClockEnabled{};
//	constexpr Register::WriteBitActionT<address,25,true> 		i2C1ClockOn{};
//	constexpr Register::WriteBitActionT<address,25,false>		i2C1ClockOff{};

	static constexpr Register::RWLocation<address, (1 << 26)>	ram1ClockEnabled{};
//	constexpr Register::WriteBitActionT<address,26,true> 		ram1ClockOn{};
//	constexpr Register::WriteBitActionT<address,26,false> 		ram1ClockOff{};

	static constexpr Register::RWLocation<address, (1 << 27)>	usbRamClockEnabled{};
//	constexpr Register::WriteBitActionT<address,27,true> 		usbRamClockOn{};
//	constexpr Register::WriteBitActionT<address,27,false> 		usbRamClockOff{};

	static constexpr Register::RWLocation<address, (1 << 28)>	ctcClockEnabled{};
//	constexpr Register::WriteBitActionT<address,28,true> 		crcClockOn{};
//	constexpr Register::WriteBitActionT<address,28,false> 		crcClockOff{};

	static constexpr Register::RWLocation<address, (1 << 29)>	dmaClockEnabled{};
//	constexpr Register::WriteBitActionT<address,29,true> 		dmaClockOn{};
//	constexpr Register::WriteBitActionT<address,29,false> 		dmaClockOff{};

	static constexpr Register::RWLocation<address, (1 << 30)>	rtcClockEnabled{};
//	constexpr Register::WriteBitActionT<address,30,true> 		rtcClockOn{};
//	constexpr Register::WriteBitActionT<address,30,false> 		rtcClockOff{};

	static constexpr Register::RWLocation<address,(1 << 31)>	sctClockEnabled{};
//	constexpr Register::WriteBitActionT<address,31,true> 		sctClockOn{};
//	constexpr Register::WriteBitActionT<address,31,false> 		sctClockOff{};

	static constexpr Register::RWLocation<address,0x1F> feedbackDivider{};
}

struct ClockConfig{
private:
	static constexpr int ioconAddress = 0x400440F0;
	static constexpr Register::WriteActionT<ioconAddress,0x07,0x01> 		XtalinOscillatorMode{};
	static constexpr Register::WriteActionT<ioconAddress+4,0x07,0x01> 		XtaloutOscillatorMode{};
	static constexpr Register::WriteActionT<ioconAddress,0x18,0x00> 		XtalinPullUpInactive{};
	static constexpr Register::WriteActionT<ioconAddress+4,0x18,0x00> 		XtaloutPullUpInactive{};
	static constexpr Register::WriteBitActionT<ioconAddress,7,false> 		XtalinAnalogMode{};
	static constexpr Register::WriteBitActionT<ioconAddress+4,7,false> 		XtaloutAnalogMode{};
public:
	static constexpr auto externalCrystalInit = MPL::list(
			set(ClockControl::ioconClockEnabled),
			Register::sequencePoint,
			XtalinOscillatorMode,
			XtaloutOscillatorMode,
			XtalinPullUpInactive,
			XtaloutPullUpInactive,
			XtalinAnalogMode,
			XtaloutAnalogMode);
	static constexpr auto crystalOscillatorPowerOn = clear(PowerConfiguration::crystalOscillatorDisabled);
	static constexpr auto systemPllPowerOff = set(PowerConfiguration::systemPllDisabled);
	static constexpr auto systemPllPowerOn = clear(PowerConfiguration::systemPllDisabled);

	struct FlashConfiguration{
		static constexpr int address{0x4003C010};
		static constexpr Register::WriteActionT<address,0x03,0x00> 		oneSysclock{};
		static constexpr Register::WriteActionT<address,0x03,0x01> 		twoSysclock{};
	};
	struct MainClock{
		static constexpr int address{0x40048070};

//		static constexpr Register::WriteActionT<address,0x03,0x00> 		internalRc{};
//		static constexpr Register::WriteActionT<address,0x03,0x01> 		pllInput{};
//		static constexpr Register::WriteActionT<address,0x03,0x02> 		watchdogOscillator{};
//		static constexpr Register::WriteActionT<address,0x03,0x03> 		pllOutput{};
		enum class Source {internalRc, pllInput, warchdogOscillator, pllOutput};
		static constexpr Register::RWLocation<address, 0x03, Source>	source{};

		static constexpr Register::WriteBitActionT<address+4,0,true> 	sourceUpdate{};
		static constexpr Register::WriteBitActionT<address+4,0,false> 	sourceSame{};
	};
	struct SystemPllClock{
		static constexpr int address{0x40048040};

		enum class Source {internalRc, systemOscillator, clock32khz};
		static constexpr Register::RWLocation<address, 0x03, Source>	source{};

		static constexpr Register::WriteBitActionT<address+4,0,true> 	sourceUpdate{};
		static constexpr Register::WriteBitActionT<address+4,0,false> 	sourceSame{};
	};
	struct SystemPLLControl{
		enum class PostDividerRatio {div1, div2, div4, div8};
		static constexpr int address{0x40048008};
		static constexpr Register::RWLocation<address,0x1F> feedbackDivider{};
		static constexpr Register::RWLocation<address,(3 << 5),PostDividerRatio> PostDivider{};
	};
	enum class SystemPllStatusOption{noLock,lock};
	static constexpr Register::RWLocation<0x4004800C,1> systemPllStatus{};
	struct SystemAHBClock{
		static constexpr int address = 0x40048078;
		static constexpr Register::RWLocation<address,0xFF> divider{};
	};
};
}
}
