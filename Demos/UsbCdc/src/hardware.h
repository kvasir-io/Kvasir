#pragma once
#include "Register/Register.hpp"
#include "SystemClock.hpp"
#include "Io.hpp"
//#define LPC11U68_BOARD
//#define LPC1769_BOARD
#define LPC1549_BOARD
#ifdef LPC11U68_BOARD
#include "ChipLpc11u6xE6x.hpp"
#endif
#ifdef LPC1769_BOARD
#include "ChipLpc175x6x.hpp"
#endif
#ifdef LPC1549_BOARD
#include "Chip/Lpc1549.hpp"
#endif

namespace Hardware{
#ifdef LPC1769_BOARD
constexpr Kvasir::Io::PinLocationT<0,22> ledPin{};
struct MyOsciSettings{
	static void init(){
		using namespace Kvasir;
		using namespace Kvasir::System;
		apply(ControlStatus::mainOscillatorEnable);
		/* Wait for osc to stabilize */
		while(ControlStatus::MainOscilatorStatus::read() == false){}
		apply(CpuClockConfig::Divider::makeAction<3>());
		apply(CpuClockConfig::PllSourceSelect::mainOscillator);
		apply(CpuClockConfig::PllConfiguration::makeMultiplierAction<11>());
		apply(CpuClockConfig::PllControl::enable);
		apply(CpuClockConfig::PllFeed::firstStep);
		apply(CpuClockConfig::PllFeed::secondStep);

		while(CpuClockConfig::PllStatus::LockStatus::read() == false){}
		apply(CpuClockConfig::Flash::fourSysclock);
		apply(CpuClockConfig::PllControl::connect);
		apply(CpuClockConfig::PllFeed::firstStep);
		apply(CpuClockConfig::PllFeed::secondStep);
		//usb init
		apply(UsbClockConfig::PllConfiguration::makeDividerAction<1>(),UsbClockConfig::PllConfiguration::makeMultiplierAction<3>());
		apply(UsbClockConfig::PllControl::enable);
		apply(UsbClockConfig::PllFeed::firstStep);
		apply(UsbClockConfig::PllFeed::secondStep);
		while(UsbClockConfig::PllStatus::LockStatus::read() == false){}
		apply(UsbClockConfig::PllControl::connect);
	}
};
#endif
#ifdef LPC1549_BOARD
struct MyOsciSettings{
	static void init(){
		using namespace Kvasir::System;
		using Kvasir::Register::value;
		using Kvasir::Register::sequencePoint;
		apply(clear(PowerConfiguration::systemOscillatorPoweredDown));
		for (volatile int i = 0; i < 2500; i++) {} //wait for oscillator to stabilize
		apply(Pll::ClockSource::systemOscillator);
		apply(set(PowerConfiguration::systemPllPoweredDown));
		apply(write(Pll::Control::feedbackDivider,value<5>()),
			write(Pll::Control::postDivider,value<Pll::PostDividerRatio,Pll::PostDividerRatio::div4>()));
		apply(clear(PowerConfiguration::systemPllPoweredDown));
		while(!apply(read(Pll::statusLocked))){};
		apply(
			write(AHBClock::divider,value<1>()),
			Flash::threeSysclock,
			sequencePoint,
			ClockSource::Main::pllOutput,
			UsbPll::ClockSource::systemOscillator,
			sequencePoint,
			write(Pll::Control::feedbackDivider,value<3>()),
			write(Pll::Control::postDivider,value<Pll::PostDividerRatio,Pll::PostDividerRatio::div2>()),
			sequencePoint,
			clear(PowerConfiguration::usbPllPoweredDown),
			clear(PowerConfiguration::usbPhyPoweredDown));
		while(!apply(read(UsbPll::statusLocked))){};
		apply(
			write(ClockSource::Usb::source,value<ClockSource::Usb::Source,ClockSource::Usb::Source::usbPllOut>()),
			sequencePoint,
			write(ClockDivide::usb,value<1>()),
			sequencePoint,
			set(AHBClock::Enabled::usb),
			set(PeripheralResetEnabled::usb),
			sequencePoint,
			clear(PeripheralResetEnabled::usb));
	}
};
#endif

using Clock = MyOsciSettings;
}

KVASIR_CLOCK(Hardware::Clock)
