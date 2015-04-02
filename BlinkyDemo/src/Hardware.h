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

#define LPC11U68_BOARD
//#define LPC1768_BOARD

#ifdef LPC11U68_BOARD
#include "ChipLpc11u6xE6x.hpp"
#else
#ifdef LPC1768_BOARD
#include "CoreM3.hpp"
#else

#endif
#endif


namespace Hardware{
#ifdef LPC11U68_BOARD
	constexpr Kvasir::Io::PinLocationT<2,16> ledPin{};
#else
#ifdef LPC1768_BOARD
	constexpr Kvasir::Io::PinLocationT<0,6> ledPin{};
#else

#endif
#endif
	using Clock = Kvasir::SystemClock::ExternalOsciRawSettings<Kvasir::System::ClockConfig,3,1>;
}

KVASIR_CLOCK(Hardware::Clock)

