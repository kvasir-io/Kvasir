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
#include "../Register.hpp"

namespace Kvasir{
namespace System{
namespace PowerConfiguration {
	template<int I>
	using Helper = Register::RWLocation<0x40074208,
										(1u << I),
										unsigned(0x07 |
												(0x01 << 7) |
												(0x7F << 25))>;
	//bits 2:0 reserved
	static constexpr 	Helper<3>		ircOscillatorOutputDisabled{};
	static constexpr	Helper<4>		ircOscillatorDisabled{};
	static constexpr 	Helper<5>		flashDisabled{};
	static constexpr 	Helper<6>		eepromDisabled{};
	//bit 7 reserved
	static constexpr 	Helper<8>		brownOutDetectDisabled{};
	static constexpr 	Helper<9>		usbPhyDisabled{};
	static constexpr 	Helper<10>		adc0Disabled{};
	static constexpr 	Helper<11>		adc19Disabled{};
	static constexpr 	Helper<12>		dacDisabled{};
	static constexpr 	Helper<13>		analogComperator0Disabled{};
	static constexpr 	Helper<14>		analogComparator1Disabled{};
	static constexpr 	Helper<15>		analogComparator2Disabled{};
	static constexpr 	Helper<16>		analogComparator3Disabled{};
	static constexpr 	Helper<17>		internalVoltageRefDisabled{};
	static constexpr 	Helper<18>		temperaturSensorDisabled{};
	static constexpr 	Helper<19>		vddaDivDisabled{};
	static constexpr 	Helper<20>		watchdogOscillatorDisabled{};
	static constexpr 	Helper<21>		systemOscillatorDisabled{};
	static constexpr 	Helper<22>		systemPllDisabled{};
	static constexpr 	Helper<23>		usbPllDisabled{};
	static constexpr 	Helper<24>		sctPllDisabled{};
	//bits 31:25 reserved
}

namespace PowerControl {
	template<int I>
	using Helper = Register::RWLocation<0x4003C000, (1u << I),~unsigned((1 << 3) | (1 << 8) | (1 << 11))>;
	//bits 2:0 reserved
	static constexpr 	Helper<3>		noPowerDown{};
	//bits 7:4 reserved
	static constexpr	Helper<8>		ircOscillatorDisabled{};
	//bits 10:9 reserved
	static constexpr 	Helper<11>		flashDisabled{};
	//bits 31:12 reserved
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
		static constexpr Register::WriteActionT<address,0x03,0x01> 		systemOscillator{};
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
	template<int I>
		using Helper = Register::RWLocation<0x400740C4,
											(1u << I),
											unsigned(0x00 |
													(0x01 << 2) |
													(0x03 << 5) |
													(0x01 << 8) |
													(0x01 <<10) |
													(0x01 <<17) |
													(0x07 <<24) |
													(0x01 <<31))>;
	// bit 0 is sys which is always on
	static constexpr	Helper< 1>		romClockEnabled{};
	// bit 2 reserved
	static constexpr	Helper< 3>		ram1ClockEnabled{};
	static constexpr	Helper< 4>		ram2ClockEnabled{};
	// bit 6:5 reserved
	static constexpr	Helper< 7>		flashRegClockEnabled{};
	// bit 8 reserved
	static constexpr 	Helper< 9>		eepromClockEnabled{};
	// bit 10 reserved
	static constexpr	Helper<11>		inputMuxClockEnabled{};
	static constexpr	Helper<12>		switchMatrixClockEnabled{};
	static constexpr	Helper<13>		ioconClockEnabled{};
	static constexpr	Helper<14>		gpio0ClockEnabled{};
	static constexpr	Helper<15>		gpio1ClockEnabled{};
	static constexpr	Helper<16>		gpio2ClockEnabled{};
	// bit 17 reserved
	static constexpr	Helper<18>		pinIntClockEnabled{};
	static constexpr	Helper<19>		groupedPinIntClockEnabled{};
	static constexpr	Helper<20>		dmaClockEnabled{};
	static constexpr	Helper<21>		crcClockEnabled{};
	static constexpr	Helper<22>		wwdtClockEnabled{};
	static constexpr	Helper<23>		rtcClockEnabled{};
	// bit 26:24 reserved
	static constexpr	Helper<27>		adc0ClockEnabled{};
	static constexpr	Helper<28>		adc1ClockEnabled{};
	static constexpr	Helper<29>		dacClockEnabled{};
	static constexpr	Helper<30>		analogComparatorClockEnabled{};
	// bit 31 reserved

	//SYSAHBCLKCTRL1

	template<int I>
			using Helper2= Register::RWLocation<0x400740C8,
												(1u << I),
												unsigned((0x01 << 8) |
														(0x03 <<11) |
														(0x07 <<14) |
														(0x01 <<20) |
														(0x01 <<22) |
														(0xff <<24))>;
	static constexpr	Helper2< 0>		mrtClockEnabled{};
	static constexpr	Helper2< 1>		ritClockEnabled{};
	static constexpr	Helper2< 2>		sct0ClockEnabled{};
	static constexpr	Helper2< 3>		sct1ClockEnabled{};
	static constexpr	Helper2< 4>		sct2ClockEnabled{};
	static constexpr	Helper2< 5>		sct3ClockEnabled{};
	static constexpr 	Helper2< 6>		sctIpuClockEnabled{};
	static constexpr	Helper2< 7>		cCanClockEnabled{};
	//bit 8 is reserved
	static constexpr	Helper2< 9>		spi0ClockEnabled{};
	static constexpr	Helper2<10>		spi1ClockEnabled{};
	//bit 12:11 are reserved
	static constexpr	Helper2<13>		i2c0IntClockEnabled{};
	//bit 16:14
	static constexpr	Helper2<17>		uart0ClockEnabled{};
	static constexpr	Helper2<18>		uart1ClockEnabled{};
	static constexpr 	Helper2<19>		uart2ClockEnabled{};
	//bit 20 reserved
	static constexpr	Helper2<21>		qeiClockEnabled{};
	//bit 22 reserved
	static constexpr	Helper2<23>		usbClockEnabled{};
	//bits 31:24 reserved
}

namespace PeripheralReset{			//PRESETCTRL register actions
	constexpr int address{0x40074044};
	template<int I>
				using Helper= Register::RWLocation<0x40074044,
													(1u << I),
													unsigned(0x7F |
															(0x01 << 8) |
															(0x01 <<10) |
															(0x01 <<12) |
															(0x0f <<14) |
															(0x1f <<22) |
															(0x01 <<29) |
															(0x01 <<31))>;
	//bit 6:0 reserved
	static constexpr	Helper< 7>		flashResetEnabled{};
	//bit 8 reserved
	static constexpr	Helper< 9>		eepromResetEnabled{};
	//bit 10 reserved
	static constexpr	Helper<11>		inputMuxResetEnabled{};
	//bit 12 reserved
	static constexpr	Helper<13>		ioConResetEnabled{};
	//bit 17:14 reserved
	static constexpr	Helper<18>		pinInterruptResetEnabled{};
	static constexpr	Helper<19>		groupedInterruptResetEnabled{};
	static constexpr	Helper<20>		dmaResetEnabled{};
	static constexpr	Helper<21>		crcResetEnabled{};
	//bit 26:22 reserved
	static constexpr	Helper<27>		adc0ResetEnabled{};
	static constexpr	Helper<28>		adc1ResetEnabled{};
	//bit 29 reserved
	static constexpr	Helper<30>		analogComparatorResetEnabled{};
	//bit 31 reserved

	template<int I>
					using Helper= Register::RWLocation<0x40074048,
														(1u << I),
														unsigned((0x01 << 8) |
																(0x03 <<11) |
																(0x07 <<14) |
																(0x01 <<20) |
																(0x01 <<22) |
																(0xff <<24))>;
	static constexpr	Helper< 0>		multirateTimerResetEnabled{};
	static constexpr	Helper< 1>		ritResetEnabled{};
	static constexpr	Helper< 2>		sct0ResetEnabled{};
	static constexpr	Helper< 3>		sct1ResetEnabled{};
	static constexpr	Helper< 4>		sct2ResetEnabled{};
	static constexpr	Helper< 5>		sct3ResetEnabled{};
	static constexpr	Helper< 6>		sctInputResetEnabled{};
	static constexpr	Helper< 7>		cCanResetEnabled{};
	//bit 8 reserved
	static constexpr	Helper< 9>		spi0ResetEnabled{};
	static constexpr	Helper<10>		spi1ResetEnabled{};
	//bit 12:11 reserved
	static constexpr	Helper<13>		i2c0ResetEnabled{};
	//bit 16:14 reserved
	static constexpr	Helper<17>		uart0ResetEnabled{};
	static constexpr	Helper<18>		uart1ResetEnabled{};
	static constexpr	Helper<19>		uart2ResetEnabled{};
	//bit 20 reserved
	static constexpr	Helper<21>		qeiResetEnabled{};
	//bit 22 reserved
	static constexpr	Helper<23>		usbResetEnabled{};
	//bit 31:24 reserved
}
}
}
