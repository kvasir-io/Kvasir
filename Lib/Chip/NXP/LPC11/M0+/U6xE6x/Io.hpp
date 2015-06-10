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
	namespace Detail{
		template<int Address, int Value>
		using WriteFunctionActionT = Register::Action<
				Register::BitLocation<
					Register::Address::Normal<Address,0>,
					0x03>,
				Register::WriteLiteralAction<Value>>;
		template<int Address, int Pin, bool Value>
		using WriteBitActionT = Register::Action<
				Register::BitLocation<
					Register::Address::Normal<Address,0>,
					(1<<Pin)>,
				Register::WriteLiteralAction<(Value<<Pin)>>;
		template<int Address, int Pin>
		using BlindSetActionT = Register::Action<
				Register::BitLocation<
					Register::Address::Normal<Address,0xFFFFFFFF>,
					(1<<Pin)>,
				Register::WriteLiteralAction<(1<<Pin)>>;
	}
	template<int Port, int Pin>
	struct MakeAction<Action::Input,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Detail::WriteBitActionT<(0xA0002000 + Port*4),Pin,0>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Output,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Detail::WriteBitActionT<(0xA0002000 + Port*4),Pin,1>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Set,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Detail::BlindSetActionT<(0xA0002200 + Port*4),Pin>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Clear,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Detail::BlindSetActionT<(0xA0002280 + Port*4),Pin>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Toggle,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
		Detail::BlindSetActionT<(0xA0002300 + Port*4),Pin>{};
	template<int Pin, int Function>
	struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<0>,MPL::Int<Pin>>> :
		Detail::WriteFunctionActionT<(0x40044000 + Pin*4),Function>{};
	template<int Pin, int Function>
	struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<1>,MPL::Int<Pin>>> :
		Detail::WriteFunctionActionT<(0x40044060 + Pin*4),Function>{};
	template<int Pin, int Function>
	struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<2>,MPL::Int<Pin>>> :
		Detail::WriteFunctionActionT<(0x400440F0 + Pin*4),Function>{};
}
}
