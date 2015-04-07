#pragma once

#include "Io.hpp"

namespace Kvasir{
namespace Io{
	template<int Port, int Pin>
	struct MakeAction<Action::Input,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Register::WriteActionT<(0x2009C000 + Port*0x20),(1<<Pin),0>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Output,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Register::WriteActionT<(0x2009C000 + Port*0x20),(1<<Pin),(1<<Pin)>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Set,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Register::BlindWriteActionT<(0x2009C018 + Port*0x20),(1<<Pin),(1<<Pin)>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Clear,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Register::BlindWriteActionT<(0x2009C01C + Port*0x20),(1<<Pin),(1<<Pin)>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Toggle,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Register::XorActionT<(0x2009C014 + Port*0x20),(1<<Pin),(1<<Pin)>{};			//may not be safe depending on how this is answered: http://electronics.stackexchange.com/questions/163628/will-xoring-the-fio0pin-register-on-an-lpc175x6x-give-unexpected-results
//	template<int Pin, int Function>
//	struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<0>,MPL::Int<Pin>>> :
//		Register::WriteActionT<(0x40044000 + Pin*4),0x03,Function>{};
//	template<int Pin, int Function>
//	struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<1>,MPL::Int<Pin>>> :
//		Register::WriteActionT<(0x40044060 + Pin*4),0x03,Function>{};
//	template<int Pin, int Function>
//	struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<2>,MPL::Int<Pin>>> :
//		Register::WriteActionT<(0x400440F0 + Pin*4),0x03,Function>{};
}
}
