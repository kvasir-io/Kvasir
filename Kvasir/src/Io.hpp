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
#include "MPLUtility.hpp"

namespace Kvasir {
namespace Io{
	namespace Action{
		struct Input{};
		struct Output{};
		struct Set{};
		struct Clear{};
		struct Toggle{};
		template<int I>
		struct PinFunction{ static constexpr int value = I;};
		constexpr Input input;
		constexpr Output output{};
		constexpr Set set{};
		constexpr Clear clear{};
		constexpr Toggle toggle{};
		constexpr PinFunction<0> pinFunction0{};
		constexpr PinFunction<1> pinFunction1{};
		constexpr PinFunction<2> pinFunction2{};
		constexpr PinFunction<3> pinFunction3{};
		constexpr PinFunction<4> pinFunction4{};
	};

	template<typename TPort, typename TPin>
	struct PinLocation {
		using Type = PinLocation<TPort,TPin>;
	};
	template<int Port, int Pin>
	using PinLocationT = PinLocation<MPL::Int<Port>,MPL::Int<Pin>>;

	template<typename TAction, typename TPortPin>
	struct MakeAction{
		static_assert(MPL::AlwaysFalse<TAction>::value,"could not find this configuration in the included Core");
	};

	template<typename TAction, typename TPortPin>
	using MakeActionT = typename MakeAction<TAction,TPortPin>::Type;

	template<typename TAction, typename TPortPin>
	constexpr MakeActionT<TAction,TPortPin> action(TAction,TPortPin){ return MakeActionT<TAction,TPortPin>{}; };

	template<typename TPortPin>
	constexpr MakeActionT<Action::Input,TPortPin> makeInput(TPortPin){ return MakeActionT<Action::Input,TPortPin>{}; };
	template<typename TPortPin>
	constexpr MakeActionT<Action::Output,TPortPin> makeOutput(TPortPin){ return MakeActionT<Action::Output,TPortPin>{}; };
	template<typename TPortPin>
	constexpr MakeActionT<Action::Set,TPortPin> makeSet(TPortPin){ return MakeActionT<Action::Set,TPortPin>{}; };
	template<typename TPortPin>
	constexpr MakeActionT<Action::Clear,TPortPin> makeClear(TPortPin){ return MakeActionT<Action::Clear,TPortPin>{}; };
	template<typename TPortPin>
	constexpr MakeActionT<Action::Toggle,TPortPin> makeToggle(TPortPin){ return MakeActionT<Action::Toggle,TPortPin>{}; };
}
}
