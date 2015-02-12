#pragma once
#include "Register.hpp"
#include "Gpio.hpp"

#define LPC11U68_BOARD
//#define LPC1968_BOARD

#ifdef LPC11U68_BOARD
#include "CoreM0.hpp"
#else
#ifdef LPC1968_BOARD
#include "CoreM3.hpp"
#else

#endif
#endif


namespace Hardware{
#ifdef LPC11U68_BOARD
	constexpr Kvasir::Gpio::PinLocationT<2,16> ledPin;
#else
#ifdef LPC1968_BOARD
	constexpr Kvasir::Gpio::PinLocationT<0,6> ledPin;
#else

#endif
#endif

}
