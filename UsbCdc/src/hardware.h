#pragma once
#include "Register.hpp"
#include "SystemClock.hpp"
#include "Io.hpp"
//#define LPC11U68_BOARD
#define LPC1769_BOARD
#ifdef LPC11U68_BOARD
#include "CoreM0.hpp"
#endif
#ifdef LPC1769_BOARD
#include "CoreM3.hpp"
#endif

namespace Hardware{
	constexpr Kvasir::Io::PinLocationT<0,22> led{};
	using Clock = Kvasir::System::ExternalOsciRawSettings<3,1>;
}

KVASIR_CLOCK(Hardware::Clock)
