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
		namespace Detail {
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

		namespace Detail {
			//default only reached when Ts is empty
			template<int I, typename T_Find, typename ... Ts>
			struct Find: Int<-1> {
			};
			//T_Find does not match first of Ts
			template<int I, typename T_Find, typename T, typename ... Ts>
			struct Find<I, T_Find, T, Ts...> : Find<I + 1, T_Find, Ts...> {};
			//T_Find matches first of Ts
			template<int I, typename T_Find, typename ... Ts>
			struct Find<I, T_Find, T_Find, Ts...> : Int<I> {};

			//default only reached when Ts is empty
			template<typename T_List, typename ... Ts>
			struct Flatten: T_List {};
			//first of Ts is not a list
			template<typename ... Ts, typename T, typename ... Us>
			struct Flatten<List<Ts...>, T, Us...> : Flatten<List<Ts..., T>, Us...> {};
			//frist of Ts is a list
			template<typename ... Ts, typename ... Us, typename ... Vs>
			struct Flatten<List<Ts...>, List<Us...>, Vs...> :
				Flatten<List<Ts...>, Us..., Vs...> {};

			template<typename T_Out, template<typename, typename > class T_Pred,
					typename T_Insert, bool B_Tag, typename ... Ts>
			struct SortInsert;
			//next is less than insert, next is not end
			template<typename ... Os, template<typename, typename > class T_Pred,
					typename T_Insert, typename T1, typename T2, typename ... Ts>
			struct SortInsert<List<Os...>, T_Pred, T_Insert, true, T1, T2, Ts...> : SortInsert<
					List<Os..., T1>, T_Pred, T_Insert, T_Pred<T2, T_Insert>::value, T2,
					Ts...> {
			};
			//next is less than insert, next is end, terminate
			template<typename ... Os, template<typename, typename > class T_Pred,
					typename T_Insert, typename ... Ts>
			struct SortInsert<List<Os...>, T_Pred, T_Insert, true, Ts...> : List<Os...,
					Ts..., T_Insert> {
			};
			//next is not less than insert, terminate
			template<typename ... Os, template<typename, typename > class T_Pred,
					typename T_Insert, typename ... Ts>
			struct SortInsert<List<Os...>, T_Pred, T_Insert, false, Ts...> : List<Os...,
					T_Insert, Ts...> {
			};

			template<typename TOut, template<typename, typename > class P, typename ... Ts>
			struct Sort{
				static_assert(AlwaysFalse<TOut>::value,"implausible parameters");
			};
			//out and in are not empty
			template<typename O, typename ... Os,
					template<typename, typename > class TPred, typename TInsert,
					typename ... Ts>
			struct Sort<List<O, Os...>, TPred, TInsert, Ts...> : Sort<
					typename Detail::SortInsert<List<>, TPred, TInsert,
							TPred<O, TInsert>::value, O, Os...>::Type, TPred, Ts...> {
			};
			//out is empty, in is not empty
			template<typename ... Os, template<typename, typename > class TPred,
					typename TInsert, typename ... Ts>
			struct Sort<List<Os...>, TPred, TInsert, Ts...> : Sort<
					typename Detail::SortInsert<List<>, TPred, TInsert, false, Os...>::Type,
					TPred, Ts...> {
			};
			//in is empty
			template<typename ... Os, template<typename, typename > class P, typename ... Ts>
			struct Sort<List<Os...>, P, Ts...> : List<Os...> {
			};
		}

		//Find returns Int<-1> if type is not found, otherwise returns index
		template<typename TToFind, typename TList>
		struct Find{
			static_assert(AlwaysFalse<TToFind>::value,"implausible parameters");
		};
		template<typename T, typename ... Ts>
		struct Find<T, List<Ts...>> : Detail::Find<0, T, Ts...> {
		};
		template<typename TToFind, typename TList>
		using FindT = typename Find<TToFind,TList>::Type;

		//returns true if T_ToFind is in T_Container, otherwise false
		template<typename TToFind, typename TContainer>
		struct Contains{
			static_assert(AlwaysFalse<TToFind>::value,"implausible type");
		};
		template<typename TToFind, typename ... Ts>
		struct Contains<TToFind, List<Ts...>> : NotT<
				IsSameT<typename Detail::Find<0, TToFind, Ts...>::Type, Int<-1>>> {};
		template<typename TToFind, typename TContainer>
		using ContainsT = typename Contains<TToFind,TContainer>::Type;

		//if a type is a list of types it will successively be unpacked into the enclosing list
		template<typename TList>
		struct Flatten{
			static_assert(AlwaysFalse<TList>::value,"implausible type");
		};
		template<typename ... Ts>
		struct Flatten<List<Ts...>> : Detail::Flatten<List<>, Ts...> {
		};
		template<typename TList>
		using FlattenT = typename Flatten<TList>::Type;

		//helper recursively derives from a list of base classes
		template<typename TTemplateList, typename ... Ts>
		struct DeriveFromTemplates{
			static_assert(AlwaysFalse<TTemplateList>::value,"implausible type, first parameter must be a MPL::List");
		};
		template<typename ... Ts, typename ... Us>
		struct DeriveFromTemplates<List<Ts...>, Us...> : TemplateT<Ts, Us...> ... {
		};

		//Sort
		template<typename TList, typename TPred = LessP>
		struct Sort{
			static_assert(AlwaysFalse<TList>::value,"implausible type");
		};

		//empty input case
		template<template<typename, typename > class TPred>
		struct Sort<MPL::List<>, Template<TPred>> : List<> {};

		//one element case
		template<typename T, template<typename, typename > class TPred>
		struct Sort<MPL::List<T>, Template<TPred>> : List<T> {};

		//two or more elements case
		template<typename ... Ts, template<typename, typename > class TPred>
		struct Sort<MPL::List<Ts...>, Template<TPred>> :
			Detail::Sort<List<>, TPred,	Ts...> {};

		//alias
		template<typename TList, typename TPred = LessP>
		using SortT = typename Sort<TList,TPred>::Type;

		template<typename TList, typename TIndex>
		struct At;
		template<typename T, typename...Ts, int I>
		struct At<List<T, Ts...>,Int<I>> : At<List<Ts...>,Int<I-1>>{};
		template<typename T, typename... Ts>
		struct At<List<T, Ts...>,Int<0>> : T{};
		template<typename TList, typename TIndex>
		using AtT = typename At<TList,TIndex>::Type;
	}
};
