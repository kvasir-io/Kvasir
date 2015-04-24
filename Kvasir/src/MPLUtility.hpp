#pragma once
/**************************************************************************
 * This file contains basic functions of the Kvasir MPL (Meta Programming Library)
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
#include "MPLTypes.hpp"
namespace Kvasir {
	namespace MPL {

		template<class T> void ignore( const T& ) { }  //used to surpress compiler warning

		//equivalent to std::void_t
		template<typename T>
		struct TypeSink{
			using Type = void;
		};
		template<typename T>
		using VoidT = typename TypeSink<T>::Type;

		template<typename T>
		T Declval();

		//invert bool types
		template<typename T>
		struct Not {
			static_assert(AlwaysFalse<T>::value,"implausible type");
		};
		template<>
		struct Not<TrueType> : FalseType {
		};
		template<>
		struct Not<FalseType> : TrueType {
		};

		template<typename T>
		using NotT = typename Not<T>::Type;

		//predecate returning result of left < right
		template<typename TLeft, typename TRight>
		struct Less{
			static_assert(AlwaysFalse<TLeft>::value,"implausible type");
		};
		template<typename T, T v1, T v2>
		struct Less<Value<T, v1>, Value<T, v2>> : Bool<(v1 < v2)> {};
		using LessP = Template<Less>;

		//equivalent to std::is_same
		template<typename T, typename U>
		struct IsSame: FalseType {};

		template<typename T>
		struct IsSame<T, T> : TrueType {};

		template<typename T, typename U>
		using IsSameT = typename IsSame<T,U>::Type;

		template<class T> struct RemoveConst {
			typedef T Type;
		};
		template<class T> struct RemoveConst<const T> {
			typedef T Type;
		};

		template<class T> struct RemoveVolatile {
			typedef T Type;
		};
		template<class T> struct RemoveVolatile<volatile T> {
			typedef T Type;
		};

		template<class T>
		struct RemoveCV {
			typedef typename RemoveVolatile<typename RemoveConst<T>::Type>::Type Type;
		};

		template<typename T>
		using RemoveCVT = typename RemoveCV<T>::Type;

		//equivalent to std::enable_if
		template<bool, typename U = void>
		struct EnableIf {};
		template<typename U>
		struct EnableIf<true, U> {
			using Type = U;
		};

		template<bool B, typename U = void>
		struct DisableIf: EnableIf<!B, U> {};

		template<bool B, typename U = void>
		using EnableIfT = typename EnableIf<B,U>::Type;
		template<bool B, typename U = void>
		using DisableIfT = typename DisableIf<B,U>::Type;

		//build a sequence of indices from 0 to N-1
		template<int N, int ... Is>
		struct BuildIndices: BuildIndices<N - 1, N - 1, Is...> {};

		template<int ... Is>
		struct BuildIndices<0, Is...> : Indices<Is...> {};

		template<int N>
		using BuildIndicesT = typename BuildIndices<N>::Type;

		template<typename TList>
		struct Size;
		template<typename... Ts>
		struct Size<List<Ts...>> : Int<sizeof...(Ts)>{};
		template<typename TList>
		using SizeT = typename Size<TList>::Type;

		template<bool B, typename T, typename U>
		struct Conditional : U {};
		template<typename T, typename U>
		struct Conditional<true,T,U> : T {};

		template<bool B, typename T, typename U>
		using ConditionalT = typename Conditional<B,T,U>::Type;

		//helper recursively derives from a list of base classes
		template<typename TTemplateList, typename ... Ts>
		struct DeriveFromTemplates{
			static_assert(AlwaysFalse<TTemplateList>::value,"implausible type, first parameter must be a MPL::List");
		};
		template<typename ... Ts, typename ... Us>
		struct DeriveFromTemplates<List<Ts...>, Us...> : ApplyTemplateT<Ts, Us...> ... {
		};

		//factory for compile time values
		template<int I>
		constexpr MPL::Int<I> value(){
			return MPL::Int<I>{};
		};
		template<typename T, T I>
		constexpr MPL::Value<T,I> value(){
			return MPL::Value<T,I>{};
		};
	}

	class StrConst {
		// constexpr string
		private:
		const char* const p_;
		const int sz_;
		public:
		template<int N> constexpr StrConst(const char(&a)[N]) : p_(a), sz_(N-1) {}
		constexpr char operator[](int n) {
			return n < sz_ ? p_[n] : '\n';
		}
		constexpr int size() { return sz_; }
	};
}
