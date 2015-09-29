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
		template<unsigned A, int Value>
		using WriteFunctionActionT = Register::Action<
				Register::BitLocation<
					Register::Address<A,0>,
					0x03>,
				Register::WriteLiteralAction<Value>>;
		template<unsigned A, int Pin>
		using ClearBitActionT = Register::Action<
				Register::BitLocation<
					Register::Address<A,0>,
					(1<<Pin)>,
				Register::WriteLiteralAction<0>>;
		template<unsigned A, int Pin>
		using SetBitActionT = Register::Action<
				Register::BitLocation<
					Register::Address<A,0xFFFFFFFF>,
					(1<<Pin)>,
				Register::WriteLiteralAction<(1<<Pin)>>;
	}
	template<int Port, int Pin>
	struct MakeAction<Action::Input,PinLocation<Port,Pin>> :
		Detail::ClearBitActionT<(0x1C002000U + Port*4),Pin>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Output,PinLocation<Port,Pin>> :
		Detail::SetBitActionT<(0x1C002000U + Port*4),Pin>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Set,PinLocation<Port,Pin>> :
		Detail::SetBitActionT<(0x1C002200U + Port*4),Pin>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Clear,PinLocation<Port,Pin>> :
		Detail::SetBitActionT<(0x1C002280U + Port*4),Pin>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Toggle,PinLocation<Port,Pin>> :
		Detail::SetBitActionT<(0x1C002300U + Port*4),Pin>{};
	//template<int Pin, int Function>
	//struct MakeAction<Action::PinFunction<Function>,PinLocation<0,Pin>> :
		//Detail::WriteFunctionActionT<(0x40044000U + Pin*4),Function>{};
	//template<int Pin, int Function>
	//struct MakeAction<Action::PinFunction<Function>,PinLocation<1,Pin>> :
		//Detail::WriteFunctionActionT<(0x40044060U + Pin*4),Function>{};
	//template<int Pin, int Function>
	//struct MakeAction<Action::PinFunction<Function>,PinLocation<2,Pin>> :
		//Detail::WriteFunctionActionT<(0x400440F0U + Pin*4),Function>{};
}
}
