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
#if (_MSC_VER == 1900)
#include<type_traits>
#endif
#include "Types.hpp"
namespace Kvasir {
	namespace MPL {

		template<class T> void ignore( const T& ) { }  //used to surpress compiler warning

		//type traits equivalents in case there is no standard library
//#if (_MSC_VER == 1900)
//		template<typename T>
//		using VoidT = std::void_t<T>;
//
//		template<typename T>
//		using AddRvalueReferenceT = std::add_rvalue_reference_t<T>;
//
//		template<typename T>
//		AddRvalueReferenceT<T> Declval() noexcept;
//
//#else
		//equivalent to std::void_t
		template<typename T>
		struct TypeSink{
			using type = void;
		};
		template<typename T>
		using VoidT = typename TypeSink<T>::type;

		template<class _Ty>
		struct AddRvalueReference
		{	// add rvalue reference
			typedef _Ty&& type;
		};

		template<typename T>
		typename AddRvalueReference<T>::type Declval();
//#endif
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
		using NotT = typename Not<T>::type;

		//predecate returning result of left < right
		template<typename TLeft, typename TRight>
		struct Less{
			static_assert(AlwaysFalse<TLeft>::value,"implausible type");
		};
		template<typename T, T v1, T v2>
		struct Less<Value<T, v1>, Value<T, v2>> : Bool<(v1 < v2)> {};
		using LessP = Template<Less>;

		template<typename T>
		struct IsValue : FalseType{};
		template<typename T, T I>
		struct IsValue<MPL::Value<T, I>> : TrueType {};

		template<typename T>
		constexpr bool isValue(T){
			return IsValue<T>::value;
		}

		//equivalent to std::is_same
		template<typename T, typename U>
		struct IsSame: FalseType {};

		template<typename T>
		struct IsSame<T, T> : TrueType {};

		template<typename T, typename U>
		using IsSameT = typename IsSame<T,U>::type;
		using IsSameP = Template<IsSame>;

		template<typename T>
		struct IsIntegral : FalseType{};
		template<>
		struct IsIntegral<long long> : TrueType{};
		template<>
		struct IsIntegral<unsigned long long> : TrueType{};
		template<>
		struct IsIntegral<long> : TrueType{};
		template<>
		struct IsIntegral<unsigned long> : TrueType{};
		template<>
		struct IsIntegral<int> : TrueType{};
		template<>
		struct IsIntegral<unsigned> : TrueType{};
		template<>
		struct IsIntegral<short> : TrueType{};
		template<>
		struct IsIntegral<unsigned short> : TrueType{};
		template<>
		struct IsIntegral<char> : TrueType{};
		template<>
		struct IsIntegral<signed char> : TrueType{};
		template<>
		struct IsIntegral<unsigned char> : TrueType{};
		template<>
		struct IsIntegral<bool> : TrueType{};

		template<typename T>
		using IsIntegralT = typename IsIntegral<T>::type;

		template<class T> struct RemoveConst {
			typedef T type;
		};
		template<class T> struct RemoveConst<const T> {
			typedef T type;
		};

		template<class T> struct RemoveVolatile {
			typedef T type;
		};
		template<class T> struct RemoveVolatile<volatile T> {
			typedef T type;
		};

		template<class T>
		struct RemoveCV {
			typedef typename RemoveVolatile<typename RemoveConst<T>::type>::type type;
		};

		template<typename T>
		using RemoveCVT = typename RemoveCV<T>::type;

		//equivalent to std::enable_if
		template<bool, typename U = void>
		struct EnableIf {};
		template<typename U>
		struct EnableIf<true, U> {
			using type = U;
		};

		template<bool B, typename U = void>
		struct DisableIf: EnableIf<!B, U> {};

		template<bool B, typename U = void>
		using EnableIfT = typename EnableIf<B,U>::type;
		template<bool B, typename U = void>
		using DisableIfT = typename DisableIf<B,U>::type;

		//build a sequence of indices from 0 to N-1
		template<int N, typename... Is>
		struct BuildIndices: BuildIndices<N - 1, Int<N - 1>, Is...> {};

		template<typename ... Is>
		struct BuildIndices<0, Is...> {
			using type = brigand::list<Is...>;
		};

		template<int N>
		using BuildIndicesT = typename BuildIndices<N>::type;

		template<typename TList>
		struct Size;
		template<typename... Ts>
		struct Size<List<Ts...>> : Int<sizeof...(Ts)>{};
		template<typename TList>
		using SizeT = typename Size<TList>::type;

		template<bool B, typename T, typename U>
		struct Conditional {
			using type = U;
		};
		template<typename T, typename U>
		struct Conditional<true,T,U> {
			using type = T;
		};

		template<bool B, typename T, typename U>
		using ConditionalT = typename Conditional<B,T,U>::type;

		//helper recursively derives from a list of base classes
		template<typename TTemplateList, typename ... Ts>
		struct DeriveFromTemplates{
			static_assert(AlwaysFalse<TTemplateList>::value,"implausible type, first parameter must be a MPL::List");
		};
		template<typename ... Ts, typename ... Us>
		struct DeriveFromTemplates<List<Ts...>, Us...> : ApplyTemplateT<Ts, Us...> ... {
		};

	}

	class StrConst {
		// constexpr string
		private:
		const char* const p_;
		const int sz_;
		public:
		template<int N> constexpr StrConst(const char(&a)[N]) : p_(a), sz_(N-1) {}
		constexpr char operator[](int n) const {
			return n < sz_ ? p_[n] : '\n';
		}
		constexpr int size() const { return sz_; }
	};
}
