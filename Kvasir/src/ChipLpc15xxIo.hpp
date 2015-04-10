#pragma once

#include "Io.hpp"

namespace Kvasir{
namespace Io{
	template<int Port, int Pin>
	struct MakeAction<Action::Input,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Register::WriteActionT<(0xA0002000 + Port*4),(1<<Pin),0>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Output,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Register::WriteActionT<(0xA0002000 + Port*4),(1<<Pin),(1<<Pin)>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Set,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Register::BlindWriteActionT<(0xA0002200 + Port*4),(1<<Pin),(1<<Pin)>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Clear,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Register::BlindWriteActionT<(0xA0002280 + Port*4),(1<<Pin),(1<<Pin)>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Toggle,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Register::BlindWriteActionT<(0xA0002300 + Port*4),(1<<Pin),(1<<Pin)>{};
	template<int Pin, int Function>
	struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<0>,MPL::Int<Pin>>> :
		Register::WriteActionT<(0x40044000 + Pin*4),0x03,Function>{};
	template<int Pin, int Function>
	struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<1>,MPL::Int<Pin>>> :
		Register::WriteActionT<(0x40044060 + Pin*4),0x03,Function>{};
	template<int Pin, int Function>
	struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<2>,MPL::Int<Pin>>> :
		Register::WriteActionT<(0x400440F0 + Pin*4),0x03,Function>{};
}
}
