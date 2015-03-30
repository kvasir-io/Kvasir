#include "Hardware.h"
#include "Timer.hpp"
#include "StartUp.hpp"

namespace M = Kvasir::MPL;
using namespace Hardware;

class Led {
public:
	static constexpr auto init = M::list(makeOutput(ledPin));
	static void toggle(){
		apply(makeToggle(ledPin));
	}
};

struct TimerConfig : Kvasir::Timer16B0 {
	static constexpr auto matchReg0Init = M::list(
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


