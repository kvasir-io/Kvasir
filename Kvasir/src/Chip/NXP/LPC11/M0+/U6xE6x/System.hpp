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
#include "../../../../../Register/Register.hpp"

namespace Kvasir{
namespace System{
namespace PowerConfiguration {
	constexpr int address{0x40048238};
	template<int I>
		using Helper = Register::RWLocation	<0x40048238,
											(1u << I),
											unsigned((1 << 9)|
													(0x03 << 11)|
													(0x3FFFF << 14))>;

	static constexpr 	Helper< 0>		ircOscillatorOutputPoweredDown{};
	static constexpr 	Helper< 1>		ircOscillatorPoweredDown{};
	static constexpr 	Helper< 2>		flashPoweredDown{};
	static constexpr	Helper< 3>		brownOutDetectPoweredDown{};
	static constexpr 	Helper< 4>		adcPoweredDown{};
	static constexpr 	Helper< 5>		crystalOscillatorPoweredDown{};
	static constexpr 	Helper< 6>		watchdogOscillatorPoweredDown{};
	static constexpr 	Helper< 7>		systemPllPoweredDown{};
	static constexpr 	Helper< 8>		usbPllPoweredDown{};
	// bit  9 reserved
	static constexpr 	Helper<10>		usbTransceiverPoweredDown{};
	// bits 12:11 reserved
	static constexpr 	Helper<13>		temperaturSensorPoweredDown{};
	// bits 31:14 reserved

}
struct ClockControl{			//SYSAHBCLKCTRL register actions
	template<int I>
		using Helper = Register::RWLocation<0x40048080,
											(1u << I),
											unsigned(0x01|
													(1 << 17))>;
	// bit  0 is sys which is always on
	static constexpr 	Helper< 1>			romClockEnabled{};
	static constexpr 	Helper< 2>			ram0ClockEnabled{};
	static constexpr 	Helper< 3>			flashRegClockEnabled{};
	static constexpr 	Helper< 4>			flashArrayClockEnabled{};
	static constexpr 	Helper< 5>			i2C0ClockEnabled{};
	static constexpr 	Helper< 6>			gpioClockEnabled{};
	static constexpr 	Helper< 7>			ct16B0ClockEnabled{};
	static constexpr 	Helper< 8>			ct16B1ClockEnabled{};
	static constexpr 	Helper< 9>			ct32B0ClockEnabled{};
	static constexpr 	Helper<10>			ct32B1ClockEnabled{};
	static constexpr 	Helper<11>			ssp0ClockEnabled{};
	static constexpr 	Helper<12>			usart0ClockEnabled{};
	static constexpr 	Helper<13>			adcClockEnabled{};
	static constexpr 	Helper<14>			usbClockEnabled{};
	static constexpr 	Helper<15>			wwdtClockEnabled{};
	static constexpr 	Helper<16>			ioconClockEnabled{};
	// bit  17 is reserved
	static constexpr 	Helper<18>			ssp1ClockEnabled{};
	static constexpr 	Helper<19>			pintClockEnabled{};
	static constexpr 	Helper<20>			usart1ClockEnabled{};
	static constexpr 	Helper<21>			usart2ClockEnabled{};
	static constexpr 	Helper<22>			usart3And4ClockEnabled{};
	static constexpr 	Helper<23>			group0IntClockEnabled{};
	static constexpr 	Helper<24>			group1IntClockEnabled{};
	static constexpr 	Helper<25>			i2c1ClockEnabled{};
	static constexpr 	Helper<26>			ram1ClockEnabled{};
	static constexpr 	Helper<27>			usbRamClockEnabled{};
	static constexpr 	Helper<28>			ctcClockEnabled{};
	static constexpr 	Helper<29>			dmaClockEnabled{};
	static constexpr 	Helper<30>			rtcClockEnabled{};
	static constexpr 	Helper<31>			sctClockEnabled{};

	static constexpr 	Register::RWLocation<0x40048094,0x1F> feedbackDivider{};
};

struct ClockConfig{
private:
	static constexpr unsigned ioconAddress = 0x400440F0;
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
	static constexpr auto crystalOscillatorPowerOn = clear(PowerConfiguration::crystalOscillatorPoweredDown);
	static constexpr auto systemPllPowerOff = set(PowerConfiguration::systemPllPoweredDown);
	static constexpr auto systemPllPowerOn = clear(PowerConfiguration::systemPllPoweredDown);

	struct FlashConfiguration{
		static constexpr unsigned address{0x4003C010};
		static constexpr Register::WriteActionT<address,0x03,0x00> 		oneSysclock{};
		static constexpr Register::WriteActionT<address,0x03,0x01> 		twoSysclock{};

		enum class Source {oneSysclock, twoSysclock};
		static constexpr Register::RWLocation<address, 0x03, ~0x03, Source> source{};
		template<Source S>
		static constexpr decltype(write(source,Register::value<Source,S>())) writeSource(){ return {}; }
	};
	struct MainClock{
		static constexpr unsigned address{0x40048070};

		enum class Source {internalRc, pllInput, warchdogOscillator, pllOutput};
		static constexpr Register::RWLocation<address, 0x03, ~0x03, Source>	source{};
		template<Source S>
		static constexpr decltype(write(source,Register::value<Source,S>())) writeSource(){ return{}; }

		static constexpr	Register::RWLocation<address+4, 1, ~1>		sourceUpdater{};
		static constexpr auto updateSourceSequence =
				MPL::list(clear(sourceUpdater),Register::sequencePoint,set(sourceUpdater));
	};
	struct SystemPllClock{
		static constexpr unsigned address{0x40048040};

		enum class Source {internalRc, systemOscillator, clock32khz};
		static constexpr Register::RWLocation<address, 0x03, ~0x03, Source>	source{};
		template<Source S>
		static constexpr decltype(write(source,Register::value<Source,S>())) writeSource(){ return {}; }

		static constexpr	Register::RWLocation<address+4, 1, ~1>		sourceUpdater{};
		static constexpr auto updateSourceSequence =
				MPL::list(clear(sourceUpdater),Register::sequencePoint,set(sourceUpdater));
	};
	struct SystemPLLControl{
		enum class PostDividerRatio {div1, div2, div4, div8};
		static constexpr unsigned address{0x40048008};
		static constexpr unsigned writable{0xFFFFFF80};
		static constexpr Register::RWLocation<address,0x1F,writable> feedbackDivider{};
		static constexpr Register::RWLocation<address,(3 << 5),writable,PostDividerRatio> postDivider{};
	};
	static constexpr Register::RWLocation<0x4004800C,0x01,~0x01> systemPllStatusLocked{};
	struct SystemAHBClock{
		static constexpr unsigned address = 0x40048078;
		static constexpr Register::RWLocation<address,0xFF,~0xFF> divider{};
	};
};
}
}
