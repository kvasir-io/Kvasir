#pragma once
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
#include "Register.hpp"
#include "Io.hpp"
#include "SystemClock.hpp"

//#define LPC11U68_BOARD
#define LPC1768_BOARD
//#define LPC1549_BOARD

#ifdef LPC11U68_BOARD
#include "ChipLpc11u6xE6x.hpp"
#else
#ifdef LPC1768_BOARD
#include "ChipLpc175x6x.hpp"
#else
#ifdef LPC1549_BOARD
#include "ChipLpc15xx.hpp"
#else

#endif
#endif
#endif


namespace Hardware{
#ifdef LPC11U68_BOARD
	constexpr Kvasir::Io::PinLocationT<2,16> ledPin{};
	using Clock = Kvasir::SystemClock::ExternalOsciRawSettings<Kvasir::System::ClockConfig,3,1>;
	using TimerDefaultConfig = Kvasir::Timer::TC16B0DefaultConfig;
#else
#ifdef LPC1768_BOARD
	constexpr Kvasir::Io::PinLocationT<0,22> ledPin{};
	struct MyOsciSettings{
		static void init(){
			using namespace Kvasir;
			using namespace Kvasir::System;
			apply(ControlStatus::mainOscillatorEnable);
			/* Wait for osc to stabilize */
			while(ControlStatus::MainOscilatorStatus::read() == false){}
			apply(ClockConfig::CpuClockDivider::makeAction<3>());
			apply(ClockConfig::Pll0ClockSourceSelect::mainOscillator);
			apply(ClockConfig::Pll0Configuration::makeMultiplierAction<11>());
			apply(ClockConfig::Pll0Control::enable);
			apply(ClockConfig::Pll0Feed::firstStep);
			apply(ClockConfig::Pll0Feed::secondStep);

			while(ClockConfig::Pll0Status::LockStatus::read() == false){}
			apply(ClockConfig::FlashConfiguration::fourSysclock);
			apply(ClockConfig::Pll0Control::enable,ClockConfig::Pll0Control::connect);
			apply(ClockConfig::Pll0Feed::firstStep);
			apply(ClockConfig::Pll0Feed::secondStep);
		}
	};
	using Clock = MyOsciSettings;
	using TimerDefaultConfig = Kvasir::Timer::TC0DefaultConfig;
#else
#ifdef LPC1549_BOARD
	constexpr Kvasir::Io::PinLocationT<0,22> ledPin{};
	struct MyOsciSettings{
		static void init(){

		}
	};

	using Clock = MyOsciSettings;
	using TimerDefaultConfig = Kvasir::Timer::Timer0DefaultConfig;
#else

#endif
#endif
#endif
}

KVASIR_CLOCK(Hardware::Clock)

