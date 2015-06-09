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
#pragma once

#include "Io/Io.hpp"

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

	//PINSEL0 and PINSEL1
	template<int Pin, int Function>
	struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<0>,MPL::Int<Pin>>> :
		Register::WriteActionT<(0x4002C000 + (Pin > 15?1:0)),(0x03 << ((Pin & 0x0F) * 2)),(Function << ((Pin & 0x0F) * 2))>{
		static_assert(Pin != 12 && Pin != 13 && Pin != 14 && Pin != 31,"Pin function not supported on this chip");
	};
	//PINSEL2 and PINSEL3
	template<int Pin, int Function>
	struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<1>,MPL::Int<Pin>>> :
		Register::WriteActionT<(0x4002C008 + (Pin > 15?1:0)),(0x03 << ((Pin & 0x0F) * 2)),(Function << ((Pin & 0x0F) * 2))>{
		static_assert(Pin != 2 && Pin != 3 && Pin != 5 && Pin != 6 && Pin != 7 && Pin != 11 && Pin != 12 && Pin != 13,"Pin function not supported on this chip");
	};
	//PINSEL4
	template<int Pin, int Function>
	struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<2>,MPL::Int<Pin>>> :
		Register::WriteActionT<0x4002C010,(0x03 << ((Pin & 0x0F) * 2)),(Function << ((Pin & 0x0F) * 2))>{
		static_assert(Pin <= 13,"Pin function not supported on this chip");
	};
	//PINSEL7
	template<int Pin, int Function>
	struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<3>,MPL::Int<Pin>>> :
		Register::WriteActionT<0x4002C01C,(0x03 << (Pin==25?18:20)),(Function << (Pin==25?18:20))>{
		static_assert(Pin == 25 || Pin == 26,"Pin function not supported on this chip");
	};
	//PINSEL9
	template<int Pin, int Function>
	struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<4>,MPL::Int<Pin>>> :
		Register::WriteActionT<0x4002C024,(0x03 << (Pin==28?18:24)),(Function << (Pin==28?18:24))>{
		static_assert(Pin == 28 || Pin == 29,"Pin function not supported on this chip");
	};
}
}
