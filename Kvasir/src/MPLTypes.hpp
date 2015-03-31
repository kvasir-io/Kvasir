/**************************************************************************
 * This file contains types used by the Kvasir Meta Programming Library (MPL)
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

namespace Kvasir {
	namespace MPL {

		namespace Detail {
			//in some cases we need a type that the user will nevere use
			struct InternalUseOnly {};
		}

		//used to move the point of compilation to the point of instatiation of the parameter
		//use this class to static assert only if an implausible specialization is actually instantiated
		template<typename >
		struct AlwaysFalse {
			enum {
				value = 0
			};
		};
		template<>
		struct AlwaysFalse<Detail::InternalUseOnly> {
			enum {
				value = 1
			};
		};

		//Wrapper for integral type template parameters
		template<typename T, T I>
		struct Value {
			static constexpr T value{I};
			using Type = Value<T,I>;
		};

		template<bool B>
		using Bool = Value<bool,B>;
		using TrueType = Bool<true>;
		using FalseType = Bool<false>;

		template<int I>
		using Int = Value<int,I>;

		//Type list
		template<typename... Ts>
		struct List{
			using Type = List<Ts...>;
		};

		template<typename... Ts>
		constexpr List<Ts...> list(Ts...){ return List<Ts...>{}; };

		//Indices into an array
		template <unsigned... Is>
		struct Indices {
			using Type = Indices<Is...>;
		};

		//wrapper for template template parameters
		template<template<typename...> class T>
		struct Template{
			template<typename... Ts>
			using Apply = T<Ts...>;
		};

		template<typename T, typename... Ts>
		using ApplyTemplateT = typename T::template Apply<Ts...>;

		template<typename T, typename U>
		struct Pair{
			using Type = Pair<T,U>;
			using First = T;
			using Second = U;
		};
		template<typename T>
		using PairFirst = typename T::First;
		template<typename T>
		using PairSecond = typename T::Second;

		//used for debugging
		template<typename...>
		struct Print;

	}
}
