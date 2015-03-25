/**************************************************************************************************
 * Source file containing the basic functions of the library
 *
 *
 * List of bugs:
 * 			- none :P
 *
 *
 * List of requested funtionalities:
 * 			- many
 *
 *

*/
#pragma once
#include "MPLTypes.hpp"
namespace Kvasir {
	namespace MPL {

		//equivalent to std::void_t
		template<typename ... Ts>
		using VoidT = void;
		template<template<typename ...> class...>
		using VoidTemplateT = void;

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

		//equivalent to std::enable_if
		template<bool, typename U = void>
		struct EnableIf {};
		template<typename U>
		struct EnableIf<true, U> {
			using Type = U;
		};

		template<bool B, typename U = void>
		struct DisableIf: EnableIf<!B, U> {};

		template<bool B, typename U>
		using EnableIfT = typename EnableIf<B,U>::Type;
		template<bool B, typename U>
		using DisableIfT = typename DisableIf<B,U>::Type;

		//build a sequence of indices from 0 to N-1
		template<unsigned N, unsigned ... Is>
		struct BuildIndices: BuildIndices<N - 1, N - 1, Is...> {};

		template<unsigned ... Is>
		struct BuildIndices<0, Is...> : Indices<Is...> {};

		template<typename TList>
		struct Size;
		template<typename... Ts>
		struct Size<List<Ts...>> : Int<sizeof...(Ts)>{};
		template<typename TList>
		using SizeT = typename Size<TList>::Type;

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
		constexpr char operator[](int n) {
			return n < sz_ ? p_[n] : '\n';
		}
		constexpr int size() { return sz_; }
	};
}
