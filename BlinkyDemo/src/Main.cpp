#include "CoreM0.hpp"
#include "Timer.hpp"
#include "StartUp.hpp"

namespace Kvasir{
struct Timer0 {
	using IsrType = Core::Interrupt::CounterTimer16Bank0;
};
}

class Timer : public Kvasir::Timer::Base<Timer,Kvasir::Timer0>{
	using Init = Kvasir::MPL::List<>; //TODO initialize timer here
	void OnMatch0(){
		//TODO blink LED here
	}
};


int main(){
	while(1);
	return 0;
}


KVASIR_START(Timer)
