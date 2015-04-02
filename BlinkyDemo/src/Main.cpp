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
#include "Hardware.h"
#include "Timer.hpp"
#include "StartUp.hpp"

using namespace Hardware;

class Led {
public:
	static constexpr auto init = makeOutput(ledPin);  //init can be a single action or a list of actions
	static void toggle(){
		apply(makeToggle(ledPin));
	}
};

struct TimerConfig : Kvasir::Timer::TC16B0DefaultConfig {
	static constexpr auto matchReg0Init = list(
			SetMR0ValueT<1000>::value,
			MatchControl::r0InterruptEnable,
			MatchControl::r0ResetOnMatch);
};

class Timer : public Kvasir::Timer::Base<Timer,TimerConfig>{
public:
	static void onMatch0(){
		Led::toggle();
	}
};

int main(){
	while(1);
	return 0;
}
KVASIR_START(Timer,Led)


