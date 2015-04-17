#pragma once
#include "register.hpp"

namespace Kvasir{
namespace System{
namespace PowerConfiguration {
	constexpr int address{0x40048238};

	constexpr Register::WriteBitActionT<address,0,false> 		ircOscilatorOutputOn{};
	constexpr Register::WriteBitActionT<address,0,true> 		ircOscilatorOutputOff{};

	constexpr Register::WriteBitActionT<address,1,false>	 	ircOscilatorOn{};
	constexpr Register::WriteBitActionT<address,1,true>			ircOscilatorOff{};

	constexpr Register::WriteBitActionT<address,2,false> 		flashOn{};
	constexpr Register::WriteBitActionT<address,2,true>			flashOff{};

	constexpr Register::WriteBitActionT<address,3,false> 		brownOutDetectOn{};
	constexpr Register::WriteBitActionT<address,3,true> 		brownOutDetectOff{};

	constexpr Register::WriteBitActionT<address,4,false> 		adcOn{};
	constexpr Register::WriteBitActionT<address,4,true> 		adcOff{};

	constexpr Register::WriteBitActionT<address,5,false> 		crystalOscilatorOn{};
	constexpr Register::WriteBitActionT<address,5,true> 		crystalOscilatorOff{};

	constexpr Register::WriteBitActionT<address,6,false> 		watchdogOscilatorOn{};
	constexpr Register::WriteBitActionT<address,6,true>	 		watchdogOscilatorOff{};

	constexpr Register::WriteBitActionT<address,7,false> 		systemPllOn{};
	constexpr Register::WriteBitActionT<address,7,true> 		systemPllOff{};

	constexpr Register::WriteBitActionT<address,8,false> 		usbPllOn{};
	constexpr Register::WriteBitActionT<address,8,true> 		usbPllOff{};

	constexpr Register::WriteBitActionT<address,10,false> 		usbTransceiverOn{};
	constexpr Register::WriteBitActionT<address,10,true> 		usbTransceiverOff{};

	constexpr Register::WriteBitActionT<address,13,false> 		temperaturSensorOn{};
	constexpr Register::WriteBitActionT<address,13,true> 		temperaturSensorOff{};
}
namespace ClockControl{			//SYSAHBCLKCTRL register actions
	constexpr int address{0x40048080};
	//bit 0 is sys which is always on
	constexpr Register::WriteBitActionT<address,1,true> 		romClockOn{};
	constexpr Register::WriteBitActionT<address,1,false> 		romClockOff{};

	constexpr Register::WriteBitActionT<address,2,true> 		ram0ClockOn{};
	constexpr Register::WriteBitActionT<address,2,false> 		ram0ClockOff{};

	constexpr Register::WriteBitActionT<address,3,true> 		flashRegClockOn{};
	constexpr Register::WriteBitActionT<address,3,false> 		flashRegClockOff{};

	constexpr Register::WriteBitActionT<address,4,true> 		flashArrayClockOn{};
	constexpr Register::WriteBitActionT<address,4,false> 		flashArrayClockOff{};

	constexpr Register::WriteBitActionT<address,5,true> 		i2C0ClockOn{};
	constexpr Register::WriteBitActionT<address,5,false> 		i2C0ClockOff{};

	constexpr Register::WriteBitActionT<address,6,true> 		gpioClockOn{};
	constexpr Register::WriteBitActionT<address,6,false> 		gpioClockOff{};

	constexpr Register::WriteBitActionT<address,7,true> 		ct16B0ClockOn{};
	constexpr Register::WriteBitActionT<address,7,false> 		ct16B0ClockOff{};

	constexpr Register::WriteBitActionT<address,8,true> 		ct16B1ClockOn{};
	constexpr Register::WriteBitActionT<address,8,false> 		ct16B1ClockOff{};

	constexpr Register::WriteBitActionT<address,9,true> 		ct32B0ClockOn{};
	constexpr Register::WriteBitActionT<address,9,false> 		ct32B0ClockOff{};

	constexpr Register::WriteBitActionT<address,10,true> 		ct32B1ClockOn{};
	constexpr Register::WriteBitActionT<address,10,false> 		ct32B1ClockOff{};

	constexpr Register::WriteBitActionT<address,11,true> 		ssp0ClockOn{};
	constexpr Register::WriteBitActionT<address,11,false> 		ssp0ClockOff{};

	constexpr Register::WriteBitActionT<address,12,true> 		usart0ClockOn{};
	constexpr Register::WriteBitActionT<address,12,false> 		usart0ClockOff{};

	constexpr Register::WriteBitActionT<address,13,true> 		adcClockOn{};
	constexpr Register::WriteBitActionT<address,13,false> 		adcClockOff{};

	constexpr Register::WriteBitActionT<address,14,true> 		usbClockOn{};
	constexpr Register::WriteBitActionT<address,14,false> 		usbClockOff{};

	constexpr Register::WriteBitActionT<address,15,true> 		wwdtClockOn{};
	constexpr Register::WriteBitActionT<address,15,false> 		wwdtClockOff{};

	constexpr Register::WriteBitActionT<address,16,true> 		ioconClockOn{};
	constexpr Register::WriteBitActionT<address,16,false> 		ioconClockOff{};

	//Bit 17 is reserved

	constexpr Register::WriteBitActionT<address,18,true> 		ssp1ClockOn{};
	constexpr Register::WriteBitActionT<address,18,false> 		ssp1ClockOff{};

	constexpr Register::WriteBitActionT<address,19,true> 		pintCLockOn{};
	constexpr Register::WriteBitActionT<address,19,false> 		pintCLockOff{};

	constexpr Register::WriteBitActionT<address,20,true> 		usart1ClockOn{};
	constexpr Register::WriteBitActionT<address,20,false> 		usart1ClockOff{};

	constexpr Register::WriteBitActionT<address,21,true> 		usart2ClockOn{};
	constexpr Register::WriteBitActionT<address,21,false> 		usart2ClockOff{};

	constexpr Register::WriteBitActionT<address,22,true> 		usart3And4ClockOn{};
	constexpr Register::WriteBitActionT<address,22,false> 		usart3And4ClockOff{};

	constexpr Register::WriteBitActionT<address,23,true> 		group0IntClockOn{};
	constexpr Register::WriteBitActionT<address,23,false> 		group0IntClockOff{};

	constexpr Register::WriteBitActionT<address,24,true> 		group1IntClockOn{};
	constexpr Register::WriteBitActionT<address,24,false> 		group1IntClockOff{};

	constexpr Register::WriteBitActionT<address,25,true> 		i2C1ClockOn{};
	constexpr Register::WriteBitActionT<address,25,false>		i2C1ClockOff{};

	constexpr Register::WriteBitActionT<address,26,true> 		ram1ClockOn{};
	constexpr Register::WriteBitActionT<address,26,false> 		ram1ClockOff{};

	constexpr Register::WriteBitActionT<address,27,true> 		usbRamClockOn{};
	constexpr Register::WriteBitActionT<address,27,false> 		usbRamClockOff{};

	constexpr Register::WriteBitActionT<address,28,true> 		crcClockOn{};
	constexpr Register::WriteBitActionT<address,28,false> 		crcClockOff{};

	constexpr Register::WriteBitActionT<address,29,true> 		dmaClockOn{};
	constexpr Register::WriteBitActionT<address,29,false> 		dmaClockOff{};

	constexpr Register::WriteBitActionT<address,30,true> 		rtcClockOn{};
	constexpr Register::WriteBitActionT<address,30,false> 		rtcClockOff{};

	constexpr Register::WriteBitActionT<address,31,true> 		sctClockOn{};
	constexpr Register::WriteBitActionT<address,31,false> 		sctClockOff{};
}

struct ClockConfig{
private:
	static constexpr int ioconAddress = 0x400440F0;
	static constexpr Register::WriteActionT<ioconAddress,0x07,0x01> 		XtalinOscilatorMode{};
	static constexpr Register::WriteActionT<ioconAddress+4,0x07,0x01> 		XtaloutOscilatorMode{};
	static constexpr Register::WriteActionT<ioconAddress,0x18,0x00> 		XtalinPullUpInactive{};
	static constexpr Register::WriteActionT<ioconAddress+4,0x18,0x00> 		XtaloutPullUpInactive{};
	static constexpr Register::WriteBitActionT<ioconAddress,7,false> 		XtalinAnalogMode{};
	static constexpr Register::WriteBitActionT<ioconAddress+4,7,false> 		XtaloutAnalogMode{};
public:
	static constexpr auto externalCrystalInit = MPL::list(ClockControl::ioconClockOn,Register::sequencePoint,
	XtalinOscilatorMode,
	XtaloutOscilatorMode,
	XtalinPullUpInactive,
	XtaloutPullUpInactive,
	XtalinAnalogMode,
	XtaloutAnalogMode);
	static constexpr auto crystalOscilatorPowerOn = PowerConfiguration::crystalOscilatorOn;
	static constexpr auto systemPllPowerOff = PowerConfiguration::systemPllOff ;
	static constexpr auto systemPllPowerOn = PowerConfiguration::systemPllOn;

	struct FlashConfiguration{
		static constexpr int address{0x4003C010};
		static constexpr Register::WriteActionT<address,0x03,0x00> 		oneSysclock{};
		static constexpr Register::WriteActionT<address,0x03,0x01> 		twoSysclock{};
	};
	struct MainClock{
		static constexpr int address{0x40048070};

		static constexpr Register::WriteActionT<address,0x03,0x00> 		internalRc{};
		static constexpr Register::WriteActionT<address,0x03,0x01> 		pllInput{};
		static constexpr Register::WriteActionT<address,0x03,0x02> 		watchdogOscilator{};
		static constexpr Register::WriteActionT<address,0x03,0x03> 		pllOutput{};

		static constexpr Register::WriteBitActionT<address+4,0,true> 	sourceUpdate{};
		static constexpr Register::WriteBitActionT<address+4,0,false> 	sourceSame{};
	};
	struct SystemPllClock{
		static constexpr int address{0x40048040};
		static constexpr Register::WriteActionT<address,0x03,0x00> 		internalRc{};
		static constexpr Register::WriteActionT<address,0x03,0x01> 		systemOscilator{};
		static constexpr Register::WriteActionT<address,0x03,0x03> 		clock32khz{};

		static constexpr Register::WriteBitActionT<address+4,0,true> 	sourceUpdate{};
		static constexpr Register::WriteBitActionT<address+4,0,false> 	sourceSame{};
	};
	struct SystemPLLControl{
		enum class PostDividerRatio {div1 = 0, div2 = (1<<5), div4 = (2<<5), div8 = (3<<5)};
		using Address = MPL::Int<0x40048008>;
		static constexpr Register:: feedbackDivider = Register::Functional<Address,MPL::Int<0x1F>,MPL::List<Register::Policy::ReadableP,Register::Policy::WriteableP>>;
		using PostDivider = Register::Functional<Address,MPL::Int<(3 << 5)>,MPL::List<Register::Policy::ReadableP,Register::Policy::WriteableP>,Register::Policy::EnumConversionP<PostDividerRatio>>;
	};
	enum class SystemPllStatusOption{noLock,lock};
	using SystemPllStatus = Register::Functional<MPL::Int<0x4004800C>,MPL::Int<0x01>,Register::Policy::ReadableP,Register::Policy::EnumConversionP<SystemPllStatusOption>>;
	struct SystemAHBClock{
		using Address = MPL::Int<0x40048078>;
		using Divider = Register::Functional<Address,MPL::Int<0xFF>,MPL::List<Register::Policy::ReadableP,Register::Policy::WriteableP>>;
	};
};
}
}
