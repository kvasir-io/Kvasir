#pragma once
#include "Register.hpp"
#include "SystemClock.hpp"
#define LPC11U68_BOARD
#ifdef LPC11U68_BOARD
#include "CoreM0.hpp"
#endif

namespace Hardware{

using Clock = Kvasir::SystemClock::ExternalOsciRawSettings<Kvasir::SystemClockConfig,3,1>;
}

KVASIR_CLOCK(Hardware::Clock)
