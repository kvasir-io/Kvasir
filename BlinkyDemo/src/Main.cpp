#include "Hardware.h"
#include "Timer.hpp"
#include "StartUp.hpp"

namespace Act = Kvasir::Gpio::Action;
namespace M = Kvasir::MPL;
namespace R = Kvasir::Register;

class Led {
public:
	using Init = decltype(M::list(makeAction(Act::output,Hardware::ledPin)));
	static void toggle(){
		R::apply(makeAction(Act::toggle,Hardware::ledPin));
	}
};

class Timer : public Kvasir::Timer::Base<Timer,Kvasir::Timer0>{
public:
	using Init = decltype(M::list()); //TODO initialize timer here
	void OnMatch0(){
		Led::toggle();
	}
};


int main(){
	while(1);
	return 0;
}


KVASIR_START(Timer,Led)
