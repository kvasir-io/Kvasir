#pragma once
#include "Register.hpp"
#include "SystemClock.hpp"
//#define LPC11U68_BOARD
#define LPC1769_BOARD
#ifdef LPC11U68_BOARD
#include "CoreM0.hpp"
#endif
#ifdef LPC1769_BOARD
#include "CoreM3.hpp"
#endif

namespace Hardware{

using Clock = Kvasir::SystemClock::ExternalOsciRawSettings<Kvasir::SystemClockConfig,3,1>;
}

KVASIR_CLOCK(Hardware::Clock)
