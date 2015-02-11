#include "CoreM0.hpp"
#include "Timer.hpp"
#include "StartUp.hpp"
#include "Hardware.h"

namespace Kvasir{
struct Timer0 {
	using IsrType = Core::Interrupt::CounterTimer16Bank0;
};
}
namespace G = Kvasir::Gpio;
class Blinky {
public:
	using Init = Kvasir::MPL::List<G::MakeActionT<G::Action::Output,Hardware::BlinkyPin>>;
	static void onTimer(){
		Kvasir::Register::apply(G::makeAction(G::Action::toggle,Hardware::blinkyPin));
	}
};

class Timer : public Kvasir::Timer::Base<Timer,Kvasir::Timer0>{
public:
	using Init = Kvasir::MPL::List<>; //TODO initialize timer here
	void OnMatch0(){
		Blinky::onTimer();
	}
};


int main(){
	while(1);
	return 0;
}


KVASIR_START(Timer,Blinky)
