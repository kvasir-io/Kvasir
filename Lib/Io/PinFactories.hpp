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
	template<typename TAction, typename TPinLocation>
	struct MakeAction{
		static_assert(MPL::AlwaysFalse<TAction>::value,"could not find this configuration in the included Core");
	};
	template<typename TAction, typename TPinLocation>
	using MakeActionT = typename MakeAction<TAction,TPinLocation>::Type;

	namespace Detail{
		template<typename TAction, typename TPortPin>
		struct MakeActionIfPinLocation{};
		template<typename TAction, typename TPort, typename TPin>
		struct MakeActionIfPinLocation<TAction, PinLocation<TPort,TPin>>{
			using Type = MakeActionT<TAction, PinLocation<TPort,TPin>>;
		};
		template<typename TAction, typename TPinLocation>
		using MakeActionIfPinLocationT = typename MakeActionIfPinLocation<TAction,TPinLocation>::Type;
	}

	template<typename TAction, typename T>
	constexpr Detail::MakeActionIfPinLocationT<TAction,T>
	action(TAction,T){
		return {};
	};

	template<typename T>
	constexpr Detail::MakeActionIfPinLocationT<Action::Input,T>
	makeInput(T){
		return{};
	};

	template<typename T, typename U, typename... Ts>
	constexpr decltype(MPL::list(makeInput(T{}),makeInput(U{}),makeInput(Ts{})...))
	makeInput(T,U,Ts...){
		return {};
	}

	template<typename T>
	constexpr Detail::MakeActionIfPinLocationT<Action::Output,T>
	makeOutput(T){
		return{};
	};

	template<typename T, typename U, typename... Ts>
	constexpr decltype(MPL::list(makeOutput(T{}),makeOutput(U{}),makeOutput(Ts{})...))
	makeOutput(T,U,Ts...){
		return {};
	}

	template<typename TPortPin>
	constexpr Detail::MakeActionIfPinLocationT<Action::Set,TPortPin>
	set(TPortPin){
		return{};
	};

	template<typename TPortPin>
	constexpr Detail::MakeActionIfPinLocationT<Action::Clear,TPortPin>
	clear(TPortPin){
		return{};
	};

	template<typename TPortPin>
	constexpr Detail::MakeActionIfPinLocationT<Action::Toggle,TPortPin>
	toggle(TPortPin){
		return{};
	};

	template<typename TPort, typename TPin>
	constexpr PinLocationT<TPort::value,TPin::value>
	makePinLocation(TPort,TPin){
		return{};
	};
}
}
