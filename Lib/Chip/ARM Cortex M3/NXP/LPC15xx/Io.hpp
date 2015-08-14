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
	struct MakeAction<Action::Input,PinLocation<Port,Pin>> :
		Register::WriteBitActionT<(0xA0002000 + Port*4),Pin,0>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Output,PinLocation<Port,Pin>> :
		Register::BlindSetActionT<(0xA0002000 + Port*4),Pin>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Set,PinLocation<Port,Pin>> :
		Register::BlindSetActionT<(0xA0002200 + Port*4),Pin>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Clear,PinLocation<Port,Pin>> :
		Register::BlindSetActionT<(0xA0002280 + Port*4),Pin>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Toggle,PinLocation<Port,Pin>> :
		Register::BlindSetActionT<(0xA0002300 + Port*4),Pin>{};
	template<int Pin, int Function>
	struct MakeAction<Action::PinFunction<Function>,PinLocation<0,Pin>> :
		Register::WriteActionT<Register::Address<(0x40044000 + Pin*4)>,0x03,Function>{};
	template<int Pin, int Function>
	struct MakeAction<Action::PinFunction<Function>,PinLocation<1,Pin>> :
		Register::WriteActionT<Register::Address<(0x40044060 + Pin*4)>,0x03,Function>{};
	template<int Pin, int Function>
	struct MakeAction<Action::PinFunction<Function>,PinLocation<2,Pin>> :
		Register::WriteActionT<Register::Address<(0x400440F0 + Pin*4)>,0x03,Function>{};
}
}
