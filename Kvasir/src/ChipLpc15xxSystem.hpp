#pragma once
#include "register.hpp"

namespace Kvasir{
namespace System{
namespace PowerConfiguration {
	constexpr int address{0x40074208};

	//bits 2:0 reserved
	constexpr Register::WriteBitActionT<address,3,false> 		ircOscilatorOutputOn{};
	constexpr Register::WriteBitActionT<address,3,true> 		ircOscilatorOutputOff{};

	constexpr Register::WriteBitActionT<address,4,false>	 	ircOscilatorOn{};
	constexpr Register::WriteBitActionT<address,4,true>			ircOscilatorOff{};

	constexpr Register::WriteBitActionT<address,5,false> 		flashOn{};
	constexpr Register::WriteBitActionT<address,5,true>			flashOff{};

	constexpr Register::WriteBitActionT<address,6,false> 		eepromOn{};
	constexpr Register::WriteBitActionT<address,6,true> 		eepromOff{};
	//bit 7 reserved
	constexpr Register::WriteBitActionT<address,8,false> 		brownOutDetectOn{};
	constexpr Register::WriteBitActionT<address,8,true> 		brownOutDetectOff{};

	constexpr Register::WriteBitActionT<address,9,false> 		usbPhyOn{};
	constexpr Register::WriteBitActionT<address,9,true> 		usbPhyOff{};

	constexpr Register::WriteBitActionT<address,10,false> 		adc0On{};
	constexpr Register::WriteBitActionT<address,10,true> 		adc0Off{};

	constexpr Register::WriteBitActionT<address,11,false> 		adc1On{};
	constexpr Register::WriteBitActionT<address,11,true> 		adc1Off{};

	constexpr Register::WriteBitActionT<address,12,false> 		dacOn{};
	constexpr Register::WriteBitActionT<address,12,true> 		dacOff{};

	constexpr Register::WriteBitActionT<address,13,false> 		analogComparator0On{};
	constexpr Register::WriteBitActionT<address,13,true> 		analogComparator0Off{};

	constexpr Register::WriteBitActionT<address,14,false> 		analogComparator1On{};
	constexpr Register::WriteBitActionT<address,14,true> 		analogComparator1Off{};

	constexpr Register::WriteBitActionT<address,15,false> 		analogComparator2On{};
	constexpr Register::WriteBitActionT<address,15,true> 		analogComparator2Off{};

	constexpr Register::WriteBitActionT<address,16,false> 		analogComparator3On{};
	constexpr Register::WriteBitActionT<address,16,true> 		analogComparator3Off{};

	constexpr Register::WriteBitActionT<address,17,false> 		internalVoltageRefOn{};
	constexpr Register::WriteBitActionT<address,17,true> 		internalVoltageRefOff{};

	constexpr Register::WriteBitActionT<address,18,false> 		temperaturSensorOn{};
	constexpr Register::WriteBitActionT<address,18,true> 		temperaturSensorOff{};

	constexpr Register::WriteBitActionT<address,19,false> 		vddaDivOn{};
	constexpr Register::WriteBitActionT<address,19,true> 		vddaDivOff{};

	constexpr Register::WriteBitActionT<address,20,false> 		watchdogOscilatorOn{};
	constexpr Register::WriteBitActionT<address,20,true>	 	watchdogOscilatorOff{};

	constexpr Register::WriteBitActionT<address,21,false> 		systemOscillatorOn{};
	constexpr Register::WriteBitActionT<address,21,true> 		systemOscillatorOff{};

	constexpr Register::WriteBitActionT<address,22,false> 		systemPllOn{};
	constexpr Register::WriteBitActionT<address,22,true> 		systemPllOff{};

	constexpr Register::WriteBitActionT<address,23,false> 		usbPllOn{};
	constexpr Register::WriteBitActionT<address,23,true> 		usbPllOff{};

	constexpr Register::WriteBitActionT<address,24,false> 		sctPllOn{};
	constexpr Register::WriteBitActionT<address,24,true> 		sctPllOff{};
	//bits 31:25 reserved
}

namespace MainClockSource{
	constexpr int address = 0x40074080;
	namespace Detail{
		using SourceAIrc = Register::BlindWriteActionT<address,0x03,0>;
		using SourceASystemOscillator = Register::BlindWriteActionT<address,0x03,1>;
		using SourceAWatchdogOscillator = Register::BlindWriteActionT<address,0x03,2>;
		using SourceBSourceA = Register::BlindWriteActionT<address+4,0x03,0>;
	}
	constexpr MPL::List<Detail::SourceAIrc,Detail::SourceBSourceA> irc{};
	constexpr MPL::List<Detail::SourceASystemOscillator,Detail::SourceBSourceA> systemOscillator{};
	constexpr MPL::List<Detail::SourceAWatchdogOscillator,Detail::SourceBSourceA> watchdogOscillator{};
	constexpr Register::BlindWriteActionT<address+4,0x03,1> pllInput{};
	constexpr Register::BlindWriteActionT<address+4,0x03,2> pllOutput{};
	constexpr Register::BlindWriteActionT<address+4,0x03,3> rtcOscillator{};
}

namespace SystemPll{
	struct ClockSource{
		static constexpr int address{0x400740A0};
		static constexpr Register::WriteActionT<address,0x03,0x00> 		internalRc{};
		static constexpr Register::WriteActionT<address,0x03,0x01> 		systemOscilator{};
	};

	struct Control{
		enum class PostDividerRatio {div1 = 0, div2 = (1<<6), div4 = (2<<6), div8 = (3<<6)};
		static constexpr int address = 0x40074198;
		using Address = MPL::Int<address>;
		template<int I>
		static constexpr Register::WriteActionT<address,0x3F,I-1> makeFeedbackDividerAction(){
			return Register::WriteActionT<address,0x3F,I-1>{};
		}
		template<PostDividerRatio I>
		static constexpr Register::WriteActionT<address,(0x03 << 6),(int)I> makePostDividerAction(){
			return Register::WriteActionT<address,(0x03 << 6),(int)I>{};
		}
		using FeedbackDivider = Register::Functional<Address,MPL::Int<0x3F>,MPL::List<Register::Policy::ReadableP,Register::Policy::WriteableP>>;
		using PostDivider = Register::Functional<Address,MPL::Int<(0x03 << 6)>,MPL::List<Register::Policy::ReadableP,Register::Policy::WriteableP>,Register::Policy::EnumConversionP<PostDividerRatio>>;
	};
	using StatusLocked = Register::ReadOnlyBoolT<0x4007419C,0>;

}

namespace AHBCLock{
	struct Divider{
		static constexpr int address = 0x400740C0;
		template<int I>
		static constexpr Register::BlindWriteActionT<address,0xFF,I> makeWriteAction(){
			return Register::BlindWriteActionT<address,0xFF,I>{};
		}
		using Value = Register::Functional<MPL::Int<address>,MPL::Int<0xFF>,MPL::List<Register::Policy::ReadableP,Register::Policy::WriteableP>>;
	};
}

namespace Flash{
	static constexpr int address{0x40074124};
	template<int I>
	struct MakeAction : Register::WriteActionT<address,(0x0F << 12),(I << 12)>{};
	template<int I>
	using MakeActionT = typename MakeAction<I>::Type;
	static constexpr MakeActionT<0> oneSysclock{};		//up to 25mhz
	static constexpr MakeActionT<1> twoSysclock{};		//up to 55mhz
	static constexpr MakeActionT<2> threeSysclock{};	//up to 72mhz
};


namespace AHBClockControl{			//SYSAHBCLKCTRL register actions
	constexpr int address{0x400740C4};
	//bit 0 is sys which is always on
	constexpr Register::WriteBitActionT<address,1,true> 		romClockOn{};
	constexpr Register::WriteBitActionT<address,1,false> 		romClockOff{};
	//bit 2 reserved
	constexpr Register::WriteBitActionT<address,3,true> 		ram1ClockOn{};
	constexpr Register::WriteBitActionT<address,3,false> 		ram1ClockOff{};

	constexpr Register::WriteBitActionT<address,4,true> 		ram2ClockOn{};
	constexpr Register::WriteBitActionT<address,4,false> 		ram2ClockOff{};
	//bit 6:5 reserved
	constexpr Register::WriteBitActionT<address,7,true> 		flashRegClockOn{};
	constexpr Register::WriteBitActionT<address,7,false> 		flashRegClockOff{};
	//bit 8 reserved
	constexpr Register::WriteBitActionT<address,9,true> 		eepromClockOn{};
	constexpr Register::WriteBitActionT<address,9,false> 		eepromClockOff{};
	//bit 10 reserved
	constexpr Register::WriteBitActionT<address,11,true> 		inputMuxClockOn{};
	constexpr Register::WriteBitActionT<address,11,false> 		inputMuxClockOff{};

	constexpr Register::WriteBitActionT<address,12,true> 		switchMatrixClockOn{};
	constexpr Register::WriteBitActionT<address,12,false> 		switchMatrixClockOff{};

	constexpr Register::WriteBitActionT<address,13,true> 		ioconClockOn{};
	constexpr Register::WriteBitActionT<address,13,false> 		ioconClockOff{};

	constexpr Register::WriteBitActionT<address,14,true> 		gpio0ClockOn{};
	constexpr Register::WriteBitActionT<address,14,false> 		gpio0ClockOff{};

	constexpr Register::WriteBitActionT<address,15,true> 		gpio1ClockOn{};
	constexpr Register::WriteBitActionT<address,15,false> 		gpio1ClockOff{};

	constexpr Register::WriteBitActionT<address,16,true> 		gpio2ClockOn{};
	constexpr Register::WriteBitActionT<address,16,false> 		gpio2ClockOff{};
	//bit 17 reserved
	constexpr Register::WriteBitActionT<address,18,true> 		pinIntClockOn{};
	constexpr Register::WriteBitActionT<address,18,false> 		pinIntClockOff{};

	constexpr Register::WriteBitActionT<address,19,true> 		groupedPinIntClockOn{};
	constexpr Register::WriteBitActionT<address,19,false> 		groupedPinIntClockOff{};

	constexpr Register::WriteBitActionT<address,20,true> 		dmaClockOn{};
	constexpr Register::WriteBitActionT<address,20,false> 		dmaClockOff{};

	constexpr Register::WriteBitActionT<address,21,true> 		crcClockOn{};
	constexpr Register::WriteBitActionT<address,21,false> 		crcClockOff{};

	constexpr Register::WriteBitActionT<address,22,true> 		wwdtClockOn{};
	constexpr Register::WriteBitActionT<address,22,false> 		wwdtClockOff{};

	constexpr Register::WriteBitActionT<address,23,true> 		rtcClockOn{};
	constexpr Register::WriteBitActionT<address,23,false> 		rtcClockOff{};
	//bit 26:24 reserved
	constexpr Register::WriteBitActionT<address,27,true> 		adc0ClockOn{};
	constexpr Register::WriteBitActionT<address,27,false> 		adc0ClockOff{};

	constexpr Register::WriteBitActionT<address,28,true> 		adc1ClockOn{};
	constexpr Register::WriteBitActionT<address,28,false> 		adc1ClockOff{};

	constexpr Register::WriteBitActionT<address,29,true> 		dacClockOn{};
	constexpr Register::WriteBitActionT<address,29,false> 		dacClockOff{};

	constexpr Register::WriteBitActionT<address,30,true> 		analogComparatorClockOn{};
	constexpr Register::WriteBitActionT<address,30,false> 		analogComparatorClockOff{};
	//bit 31 reserved

	//SYSAHBCLKCTRL1
	constexpr Register::WriteBitActionT<address+4,0,true> 		mrtClockOn{};
	constexpr Register::WriteBitActionT<address+4,0,false> 		mrtClockOff{};

	constexpr Register::WriteBitActionT<address+4,1,true> 		ritClockOn{};
	constexpr Register::WriteBitActionT<address+4,1,false> 		ritClockOff{};

	constexpr Register::WriteBitActionT<address+4,2,true> 		sct0ClockOn{};
	constexpr Register::WriteBitActionT<address+4,2,false> 		sct0ClockOff{};

	constexpr Register::WriteBitActionT<address+4,3,true> 		sct1ClockOn{};
	constexpr Register::WriteBitActionT<address+4,3,false> 		sct1ClockOff{};

	constexpr Register::WriteBitActionT<address+4,4,true> 		sct2ClockOn{};
	constexpr Register::WriteBitActionT<address+4,4,false> 		sct2ClockOff{};

	constexpr Register::WriteBitActionT<address+4,5,true> 		sct3ClockOn{};
	constexpr Register::WriteBitActionT<address+4,5,false> 		sct3ClockOff{};

	constexpr Register::WriteBitActionT<address+4,6,true> 		sctIpuCLockOn{};
	constexpr Register::WriteBitActionT<address+4,6,false> 		sctIpuCLockOff{};

	constexpr Register::WriteBitActionT<address+4,7,true> 		cCanClockOn{};
	constexpr Register::WriteBitActionT<address+4,7,false> 		cCanClockOff{};
	//bit 8 is reserved
	constexpr Register::WriteBitActionT<address+4,9,true> 		spi0ClockOn{};
	constexpr Register::WriteBitActionT<address+4,9,false> 		spi0ClockOff{};

	constexpr Register::WriteBitActionT<address+4,10,true> 		spi1ClockOn{};
	constexpr Register::WriteBitActionT<address+4,10,false> 	spi1ClockOff{};
	//bit 12:11 are reserved
	constexpr Register::WriteBitActionT<address+4,13,true> 		i2c0IntClockOn{};
	constexpr Register::WriteBitActionT<address+4,13,false> 	i2c0IntClockOff{};
	//bit 16:14
	constexpr Register::WriteBitActionT<address+4,17,true> 		uart0ClockOn{};
	constexpr Register::WriteBitActionT<address+4,17,false> 	urat0ClockOff{};

	constexpr Register::WriteBitActionT<address+4,18,true> 		uart1ClockOn{};
	constexpr Register::WriteBitActionT<address+4,18,false>		uart1ClockOff{};

	constexpr Register::WriteBitActionT<address+4,19,true> 		uart2ClockOn{};
	constexpr Register::WriteBitActionT<address+4,19,false> 	uart2ClockOff{};
	//bit 20 reserved
	constexpr Register::WriteBitActionT<address+4,21,true> 		qeiClockOn{};
	constexpr Register::WriteBitActionT<address+4,21,false> 	qeiClockOff{};
	//bit 22 reserved
	constexpr Register::WriteBitActionT<address+4,23,true> 		usbClockOn{};
	constexpr Register::WriteBitActionT<address+4,23,false> 	usbClockOff{};
	//bits 31:24 reserved
}

namespace PeripheralReset{			//PRESETCTRL register actions
	constexpr int address{0x40074044};
	//bit 6:0 reserved
	constexpr Register::WriteBitActionT<address,7,true> 		flashResetOn{};
	constexpr Register::WriteBitActionT<address,7,false> 		flashResetOff{};
	//bit 8 reserved
	constexpr Register::WriteBitActionT<address,9,true> 		eepromResetOn{};
	constexpr Register::WriteBitActionT<address,9,false> 		eepromResetOff{};
	//bit 10 reserved
	constexpr Register::WriteBitActionT<address,11,true> 		inputMuxResetOn{};
	constexpr Register::WriteBitActionT<address,11,false> 		inputMuxResetOff{};
	//bit 12 reserved
	constexpr Register::WriteBitActionT<address,13,true> 		ioConResetOn{};
	constexpr Register::WriteBitActionT<address,13,false> 		ioConResetOff{};
	//bit 17:14 reserved
	constexpr Register::WriteBitActionT<address,18,true> 		pinInterruptResetOn{};
	constexpr Register::WriteBitActionT<address,18,false> 		pinInterruptResetOff{};

	constexpr Register::WriteBitActionT<address,19,true> 		groupedInterruptResetOn{};
	constexpr Register::WriteBitActionT<address,19,false> 		groupedInterruptResetOff{};

	constexpr Register::WriteBitActionT<address,20,true> 		dmaResetOn{};
	constexpr Register::WriteBitActionT<address,20,false> 		dmaResetOff{};

	constexpr Register::WriteBitActionT<address,21,true> 		crcResetOn{};
	constexpr Register::WriteBitActionT<address,21,false> 		crcResetOff{};
	//bit 26:22 reserved
	constexpr Register::WriteBitActionT<address,27,true> 		adc0ResetOn{};
	constexpr Register::WriteBitActionT<address,27,false> 		adc0ResetOff{};

	constexpr Register::WriteBitActionT<address,28,true> 		adc1hResetOn{};
	constexpr Register::WriteBitActionT<address,28,false> 		adc1ResetOff{};
	//bit 29 reserved
	constexpr Register::WriteBitActionT<address,30,true> 		analogComparatorResetOn{};
	constexpr Register::WriteBitActionT<address,30,false> 		analogComparatorResetOff{};
	//bit 31 reserved

	constexpr Register::WriteBitActionT<address+4,0,true> 		multirateTimerResetOn{};
	constexpr Register::WriteBitActionT<address+4,0,false> 		multirateTimerResetOff{};

	constexpr Register::WriteBitActionT<address+4,1,true> 		ritResetOn{};
	constexpr Register::WriteBitActionT<address+4,1,false> 		ritResetOff{};

	constexpr Register::WriteBitActionT<address+4,2,true> 		sct0ResetOn{};
	constexpr Register::WriteBitActionT<address+4,2,false> 		sct0ResetOff{};

	constexpr Register::WriteBitActionT<address+4,3,true> 		sct1ResetOn{};
	constexpr Register::WriteBitActionT<address+4,3,false> 		sct1ResetOff{};

	constexpr Register::WriteBitActionT<address+4,4,true> 		sct2ResetOn{};
	constexpr Register::WriteBitActionT<address+4,4,false> 		sct2ResetOff{};

	constexpr Register::WriteBitActionT<address+4,5,true> 		sct3ResetOn{};
	constexpr Register::WriteBitActionT<address+4,5,false> 		sct3ResetOff{};

	constexpr Register::WriteBitActionT<address+4,6,true> 		sctIpuResetOn{};
	constexpr Register::WriteBitActionT<address+4,6,false> 		sctIpuResetOff{};

	constexpr Register::WriteBitActionT<address+4,7,true> 		cCanResetOn{};
	constexpr Register::WriteBitActionT<address+4,7,false> 		cCanResetOff{};
	//bit 8 reserved
	constexpr Register::WriteBitActionT<address+4,9,true> 		spi0ResetOn{};
	constexpr Register::WriteBitActionT<address+4,9,false> 		spi0ResetOff{};

	constexpr Register::WriteBitActionT<address+4,10,true> 		spi1ResetOn{};
	constexpr Register::WriteBitActionT<address+4,10,false> 	spi1ResetOff{};
	//bit 12:11 reserved
	constexpr Register::WriteBitActionT<address+4,13,true> 		i2c0ResetOn{};
	constexpr Register::WriteBitActionT<address+4,13,false> 	i2c0ResetOff{};
	//bit 16:14 reserved
	constexpr Register::WriteBitActionT<address+4,17,true> 		uart0ResetOn{};
	constexpr Register::WriteBitActionT<address+4,17,false> 	uart0ResetOff{};

	constexpr Register::WriteBitActionT<address+4,18,true> 		uart1ResetOn{};
	constexpr Register::WriteBitActionT<address+4,18,false> 	uart1ResetOff{};

	constexpr Register::WriteBitActionT<address+4,19,true> 		uart2ResetOn{};
	constexpr Register::WriteBitActionT<address+4,19,false> 	uart2ResetOff{};
	//bit 20 reserved
	constexpr Register::WriteBitActionT<address+4,21,true> 		qeiResetOn{};
	constexpr Register::WriteBitActionT<address+4,21,false> 	qeiResetOff{};
	//bit 22 reserved
	constexpr Register::WriteBitActionT<address+4,23,true> 		usbResetOn{};
	constexpr Register::WriteBitActionT<address+4,23,false> 	usbResetOff{};
	//bit 31:24 reserved
}
}
