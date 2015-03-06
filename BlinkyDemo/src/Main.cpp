#include "Hardware.h"
#include "Timer.hpp"
#include "StartUp.hpp"

namespace Io = Kvasir::Gpio::Action;
namespace M = Kvasir::MPL;
namespace R = Kvasir::Register;

class Led {
public:
	using Init = decltype(M::list(action(Io::output,Hardware::ledPin)));
	static void toggle(){
		R::apply(action(Io::toggle,Hardware::ledPin));
	}
};

class Timer : public Kvasir::Timer::Base<Timer,Kvasir::Timer16B0>{
public:
	using Init = decltype(M::list(
			Config::clockEnable,
			R::sequencePoint,
			Config::MatchControl::r0InterruptEnable,
			Config::MatchControl::r0ResetOnMatch,
			Config::SetPrescaleT<1000>(),
			Config::SetR0ValueT<1000>(),
			R::sequencePoint,
			Config::couterEnable,
			Config::enableIrq
			));
	static void onMatch0(){
		Led::toggle();
	}
};


int main(){
	while(1);
	return 0;
}
using Clock = Kvasir::ClockInitializationRawMode<3,1>;
KVASIR_START(Clock,Timer,Led)


