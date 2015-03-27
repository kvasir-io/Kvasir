#pragma once
#include "Tags.hpp"
#include "MPLUtility.hpp"
#include "Register.hpp"
template<typename T>
struct KvasirSystemClock {
	static_assert(Kvasir::MPL::AlwaysFalse<T>::value,"You must define the system clock in every source file, put it in a header");
};
namespace Kvasir{
namespace SystemClock{
	template<typename TTraits, int I, int J>
	struct ExternalOsciRawSettings{
	protected:

	public:
		static void init(){
			Register::apply(TTraits::externalCrystalInit);
			Register::apply(TTraits::crystalOscilatorPowerOn);
			Register::apply(TTraits::systemPllPowerOff);
			/* Wait for at least 580uS for osc to stabilize */
			for (volatile int i = 0; i < 2500; i++) {}
			Register::apply(TTraits::SystemPllClock::systemOscilator);
			Register::apply(TTraits::SystemPllClock::sourceSame);
			Register::apply(TTraits::SystemPllClock::sourceUpdate);
			Register::apply(TTraits::FlashConfiguration::twoSysclock);
			TTraits::SystemPLLControl::FeedbackDivider::write(I);
			TTraits::SystemPLLControl::PostDivider::write(static_cast<typename TTraits::SystemPLLControl::PostDividerRatio>(J));
			//(*(int*)0x40048008) = (I & 0x1F) | ((J & 0x3) << 5);  	//TODO make register abstraction
			Register::apply(TTraits::systemPllPowerOn);
			while(TTraits::SystemPllStatus::read() == TTraits::SystemPllStatusOption::noLock);
			//while(((*(int*)0x4004800C) & 1) == 0){}						//TODO make register abstraction
			TTraits::SystemAHBClock::Divider::write(1);
			//*(int*) 0x40048078 = 1;
			Register::apply(TTraits::MainClock::pllOutput);
			Register::apply(TTraits::MainClock::sourceSame);
			Register::apply(TTraits::MainClock::sourceUpdate);
		}
	};
}
}


#define KVASIR_CLOCK(arg) \
	template<> \
	struct KvasirSystemClock<Kvasir::Tag::User>{ \
		using Type = arg; \
	}; \
	extern void KVASIR_START_must_only_be_defined_once_and_KVASIR_CLOCK_must_be_the_same_type_in_all_units(arg);

