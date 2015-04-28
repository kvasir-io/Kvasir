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
			using namespace Register;
			apply(TTraits::externalCrystalInit);
			apply(TTraits::crystalOscillatorPowerOn);
			apply(TTraits::systemPllPowerOff);
			/* Wait for at least 580uS for osc to stabilize */
			for (volatile int i = 0; i < 2500; i++) {}
			using PllClock = typename TTraits::SystemPllClock;
			apply(write(PllClock::source,PllClock::Source::systemOscillator));
			apply(TTraits::SystemPllClock::updateSourceSequence);
			apply(TTraits::FlashConfiguration::twoSysclock);
			apply(write(TTraits::SystemPLLControl::feedbackDivider,value<I>()),
					write(TTraits::SystemPLLControl::postDivider,typename TTraits::SystemPLLControl::PostDividerRatio(J)));
			apply(TTraits::systemPllPowerOn);
			while(!apply(read(TTraits::systemPllStatusLocked)));
			apply(write(TTraits::SystemAHBClock::divider,value<1u>()));
			Register::apply(write(TTraits::MainClock::source,TTraits::MainClock::Source::pllOutput));
			Register::apply(TTraits::MainClock::updateSourceSequence);
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

