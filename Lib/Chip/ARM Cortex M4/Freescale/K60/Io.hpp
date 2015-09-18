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
		template<unsigned A, int Pin>
		using ClearBitActionT = Register::Action<
				Register::BitLocation<
					Register::Address<A,0>,
					(1<<Pin)>,
				Register::WriteLiteralAction<0>>;
		template<unsigned A, int Pin>
		using SetBitActionT = Register::Action<
				Register::BitLocation<
					Register::Address<A,0>,
					(1<<Pin)>,
				Register::WriteLiteralAction<(1<<Pin)>>;
		template<unsigned A, int Pin>
		using BlindSetBitActionT = Register::Action<
				Register::BitLocation<
					Register::Address<A,0xFFFFFFFF>,
					(1<<Pin)>,
				Register::WriteLiteralAction<(1<<Pin)>>;
		template<unsigned A, int Pin>
		using ReadBitActionT = Register::Action<
				Register::RWBitLocT<
					Register::Address<A>,
					Pin>,
				Register::ReadAction>;
	}
	template<int Port, int Pin>
	struct MakeAction<Action::Input,PinLocation<Port,Pin>> :
		Detail::ClearBitActionT<(0x400FF014U + Port*0x40),Pin>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Output,PinLocation<Port,Pin>> :
		Detail::SetBitActionT<(0x400FF014U + Port*0x40),Pin>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Set,PinLocation<Port,Pin>> :
		Detail::BlindSetBitActionT<(0x400FF004U + Port*0x40),Pin>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Clear,PinLocation<Port,Pin>> :
		Detail::BlindSetBitActionT<(0x400FF008U + Port*0x40),Pin>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Toggle,PinLocation<Port,Pin>> :
		Detail::BlindSetBitActionT<(0x400FF00CU + Port*0x40),Pin>{};
	template<int Port, int Pin>
	struct MakeAction<Action::Read,PinLocation<Port,Pin>> :
			Detail::ReadBitActionT<(0x400FF010U + Port*0x40),Pin>{};

}
}
