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
	template<typename T, typename... Ts>
	constexpr MPL::EnableIfT<Detail::IsPinLoaction<T>::value, Port<PortAccess::defaultMode, T, Ts...>>
	makePort(T,Ts...){
		return {};
	}
	template<typename T, typename... Ts>
	constexpr MPL::DisableIfT<Detail::IsPinLoaction<T>::value, Port<T::Value,Ts...>>
	makePort(T,Ts...){
		return {};
	}


	namespace Detail{
		template<typename T>
		struct PortMakeOutput;
		template<PortAccess A, typename... Ts>
		struct PortMakeOutput<Port<A,Ts...>> : decltype(makeOutput(Ts{}...)){};
		template<typename T>
		using PortMakeOutputT = typename PortMakeOutput<T>::Type;

		template<typename T>
		struct PortMakeInput;
		template<PortAccess A, typename... Ts>
		struct PortMakeInput<Port<A,Ts...>> : decltype(makeInput(Ts{}...)){};
		template<typename T>
		using PortMakeInputT = typename PortMakeInput<T>::Type;


		//###### Traits that a chip file should specialize
		template<PortAccess A, unsigned PortNumber, unsigned PinMask, typename Value>
		struct WriteLiteralToSinglePort{
			static_assert(MPL::AlwaysFalse<Value>::value,"this functionality is not supported by the included chip file");
			using Type = int; //SFINAE should not fail but should static assert
		};

		template<PortAccess A, typename PortNumbers, typename PinMasks, typename Values>
		struct WriteLiteralToDistributedPort{
			static_assert(MPL::AlwaysFalse<Values>::value,"this functionality is not supported by the included chip file");
			using Type = int; //SFINAE should not fail but should static assert
		};

		template<typename TPort>
		struct WriteRuntimeToPort{
			static_assert(MPL::AlwaysFalse<TPort>::value,"this functionality is not supported by the included chip file");
			using Type = int; //SFINAE should not fail but should static assert
		};
		template<typename TPort>
		using WriteRuntimeToPortT = typename WriteRuntimeToPort<TPort>::Type;

		template<typename TPort>
		struct IsIsolated{
			static_assert(MPL::AlwaysFalse<TPort>::value,"this functionality is not supported by the included chip file");
			using Type = int; //SFINAE should not fail but should static assert
		};

		template<typename TPort>
		struct IsSynchronous{
			static_assert(MPL::AlwaysFalse<TPort>::value,"this functionality is not supported by the included chip file");
			using Type = int; //SFINAE should not fail but should static assert
		};


		template<bool IsSingle, typename TPort, typename Value>
		struct WriteLiteralToPortHelper;
		template<PortAccess A, typename... Ts, typename Value>
		struct WriteLiteralToPortHelper<false, Port<A,Ts...>, Value> : WriteLiteralToDistributedPort<A,List<>,List<>,Value>{};	//TODO
		template<PortAccess A, typename... Ts, typename Value>
		struct WriteLiteralToPortHelper<true, Port<A,Ts...>, Value> : WriteLiteralToSinglePort<A,AtT<GetPortNumbersT<List<Ts...>>,Int<0>>::value,0,Value>{}; //TODO

		template<bool IsSingle, typename TPort, typename Value>
		using WriteLiteralToPortHelperT = typename WriteLiteralToPortHelper<IsSingle, TPort, Value>::Type;

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
	constexpr MPL::EnableIfT<
		Detail::IsPort<TPort>::value,
		Detail::WriteLiteralToPortHelperT<Detail::IsSinglePort<TPort>::value,TPort,TValue>>
	write(TPort,TValue)
	{
		return {};
	}

	template<typename TPort>
	constexpr MPL::EnableIfT<Detail::IsPort<TPort>::value,Detail::WriteRuntimeToPortT<TPort>> write(TPort ,unsigned value){
		return Detail::WriteRuntimeToPortT<TPort>{value};
	}

	template<typename T>
	constexpr bool isIsolated(T){
		return Detail::IsIsolated<T>::value;
	}
	template<typename T>
	constexpr bool isSynchronous(T){
		return Detail::IsSynchronous<T>::value;
	}
}
}
