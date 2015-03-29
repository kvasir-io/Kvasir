#pragma once
#include "Register.hpp"
#include "Gpio.hpp"
#include "SystemClock.hpp"

#define LPC11U68_BOARD
//#define LPC1768_BOARD

#ifdef LPC11U68_BOARD
#include "CoreM0.hpp"
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
	using Clock = Kvasir::SystemClock::ExternalOsciRawSettings<Kvasir::SystemClockConfig,3,1>;
}

KVASIR_CLOCK(Hardware::Clock)

