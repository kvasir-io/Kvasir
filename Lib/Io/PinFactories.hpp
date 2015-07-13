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
#include "MPL/Utility.hpp"
#include "Utility.hpp"

namespace Kvasir {
namespace Io{
	template<typename TAction, typename TPortPin>
	struct MakeAction{
		static_assert(MPL::AlwaysFalse<TAction>::value,"could not find this configuration in the included Core");
	};
	template<typename TAction, typename TPortPin>
	using MakeActionT = typename MakeAction<TAction,TPortPin>::Type;

	template<typename TAction, typename TPortPin>
	constexpr MakeActionT<TAction,TPortPin> action(TAction,TPortPin){ return MakeActionT<TAction,TPortPin>{}; };

	template<typename TPortPin>
	constexpr MakeActionT<Action::Input,TPortPin> makeInput(TPortPin){ return{}; };
	template<typename TPortPin>
	constexpr MakeActionT<Action::Output,TPortPin> makeOutput(TPortPin){ return{}; };
	template<typename TPortPin>
	constexpr MakeActionT<Action::Set,TPortPin> set(TPortPin){ return{}; };
	template<typename TPortPin>
	constexpr MakeActionT<Action::Clear,TPortPin> clear(TPortPin){ return{}; };
	template<typename TPortPin>
	constexpr MakeActionT<Action::Toggle,TPortPin> toggle(TPortPin){ return{}; };

	template<typename TPort, typename TPin>
	constexpr PinLocationT<TPort::value,TPin::value> makePinLocation(TPort,TPin){ return{}; };
}
}
