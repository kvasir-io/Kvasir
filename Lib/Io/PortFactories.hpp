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
#include "PinFactories.hpp"

namespace Kvasir {
namespace Io{
	template<typename... Ts>
	constexpr Port<IOAccess,Ts...> makeIOPort(Ts...){
		return {};
	}
	template<typename... Ts>
	constexpr Port<IAccess,Ts...> makeIPort(Ts...){
		return {};
	}
	template<typename... Ts>
	constexpr Port<OAccess,Ts...> makeOPort(Ts...){
		return {};
	}

	namespace Detail{
		template<typename T>
		struct PortMakeOutput;
		template<typename TAccess, typename... Ts>
		struct PortMakeOutput<Port<TAccess,Ts...>> : decltype(makeOutput(Ts{}...)){};
		template<typename T>
		using PortMakeOutputT = typename PortMakeOutput<T>::Type;

		template<typename T>
		struct PortMakeInput;
		template<typename TAccess, typename... Ts>
		struct PortMakeInput<Port<TAccess,Ts...>> : decltype(makeInput(Ts{}...)){};
		template<typename T>
		using PortMakeInputT = typename PortMakeInput<T>::Type;

		template<typename T, typename U, int I>
		struct MakeSetClearList;
		template<int...Is, typename... Ts, int I>
		struct MakeSetClearList<MPL::List<MPL::Int<Is>...>,MPL::List<Ts...>, I> :
			MPL::List<MakeActionT<MPL::ConditionalT<((I>>Is)&0x01),Action::Set,Action::Clear> ,Ts>...>{};

		template<typename T, typename V>
		struct WriteLiteral;
		template<typename TAccess, typename... Ts, typename V>
		struct WriteLiteral<Port<TAccess,Ts...>, V> : MakeSetClearList<MPL::BuildIndicesT<sizeof...(Ts)>,MPL::List<Ts...>,V::value>::Type{};
		template<typename T, typename V>
		using WriteLiteralT = typename WriteLiteral<T,V>::Type;
	}

	template<typename TPort>
	constexpr MPL::EnableIfT<Detail::IsPort<TPort>::value,Detail::PortMakeOutputT<TPort>> makeOutput(TPort){
		return {};
	}

	template<typename TPort>
	constexpr MPL::EnableIfT<Detail::IsPort<TPort>::value,Detail::PortMakeInputT<TPort>> makeInput(TPort){
		return {};
	}

	template<typename TPort, typename TValue>
	constexpr MPL::EnableIfT<Detail::IsPort<TPort>::value,Detail::WriteLiteralT<TPort,TValue>> write(TPort,TValue){
		return {};
	}
}
}
