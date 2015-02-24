#pragma once
#include "MPLTypes.hpp"
namespace Kvasir {
namespace MPL {
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
		template<int I, bool Found, template<typename...> class Pred, typename ... Ts>
		struct PredFind: Int<-1> {
		};
		template<int I, template<typename...> class Pred, typename T, typename...Ts>
		struct PredFind<I,true,Pred,T,Ts...> : Int<I>{};
		template<int I, template<typename...> class Pred, typename T, typename ... Ts>
		struct PredFind<I, false, Pred, T, Ts...> : PredFind<I + 1, Pred<T>::value,Pred, Ts...> {};

		template<typename TOut, typename TCurrent, typename TDelim, typename... Ts>
		struct Explode;
		template<typename... Os, typename... Cs, typename TDelim, typename T, typename... Ts>
		struct Explode<List<Os...>,List<Cs...>,TDelim,T,Ts...> : //next is not delim, we still have more
			Explode<List<Os...>,List<Cs...,T>,TDelim,Ts...>{};
		template<typename... Os, typename... Cs, typename TDelim, typename T>
		struct Explode<List<Os...>,List<Cs...>,TDelim,T> : //next is not delim, we do not have more
			List<Os...,List<Cs...,T>>{};
		template<typename... Os, typename... Cs, typename TDelim, typename... Ts>
		struct Explode<List<Os...>,List<Cs...>,TDelim,TDelim,Ts...> : //next is delim, we still have more
			Explode<List<Os...,List<Cs...>>,List<>,TDelim,Ts...>{};
		template<typename... Os, typename... Cs, typename TDelim>
		struct Explode<List<Os...>,List<Cs...>,TDelim,TDelim> : //next is delim, we have no more
			List<Os...,List<Cs...>>{};
		//same cases but with empty TCurrent list
		template<typename... Os, typename TDelim, typename... Ts>
		struct Explode<List<Os...>,List<>,TDelim,TDelim,Ts...> : //next is delim, we still have more
			Explode<List<Os...>,List<>,TDelim,Ts...>{};
		template<typename... Os, typename TDelim>
		struct Explode<List<Os...>,List<>,TDelim,TDelim> : //next is delim, we have no more
			List<Os...>{};

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

		template<typename TList, typename TLast>
		struct SplitReturn;
		template<typename... Ts, typename TLast>
		struct SplitReturn<MPL::List<Ts...>,TLast>: MPL::List<Ts...,TLast> {};
		template<typename... Ts>
		struct SplitReturn<MPL::List<Ts...>,MPL::List<>>: MPL::List<Ts...> {};

		template<typename TDelimiter, typename TOut, typename TCList, typename... Ts>
		struct Split;
		//no more arguements
		template<typename TDelimiter, typename...Os, typename...Cs, typename... Ts>
		struct Split<TDelimiter,List<Os...>,List<Cs...>,Ts...> : SplitReturn<List<Os...>,List<Cs...>>{};
		//next is not delimiter
		template<typename TDelimiter, typename...Os, typename...Cs, typename T, typename... Ts>
		struct Split<TDelimiter,List<Os...>,List<Cs...>, T, Ts...> : Split<TDelimiter, List<Os...>, List<Cs..., T>, Ts...>{};
		//next is delimiter
		template<typename TDelimiter, typename...Os, typename C, typename...Cs, typename... Ts>
		struct Split<TDelimiter,List<Os...>,List<C, Cs...>, TDelimiter, Ts...> : Split<TDelimiter, List<Os...,List<C, Cs...>>,List<>, Ts...>{};
		//next is delimiter but CList is empty
		template<typename TDelimiter, typename...Os, typename... Ts>
		struct Split<TDelimiter,List<Os...>,List<>, TDelimiter, Ts...> : Split<TDelimiter, List<Os...>,List<>, Ts...>{};
	}

	//Find returns Int<-1> if type is not found, otherwise returns index
	template<typename TList, typename TToFind>
	struct Find{
		static_assert(AlwaysFalse<TToFind>::value,"implausible parameters");
	};
	template<typename T, typename ... Ts>
	struct Find<List<Ts...>,T> : Detail::Find<0, T, Ts...> {
	};
	template<template<typename...> class Pred, typename T, typename... Ts>
	struct Find<List<T,Ts...>, Template<Pred>> : Detail::PredFind<0,Pred<T>::value,Pred,Ts...>{};
	template<typename TList, typename TToFind>
	using FindT = typename Find<TList,TToFind>::Type;

	//returns true if T_ToFind is in T_Container, otherwise false
	template<typename TContainer, typename TToFind>
	struct Contains{
		static_assert(AlwaysFalse<TToFind>::value,"implausible type");
	};
	template<typename TToFind, typename ... Ts>
	struct Contains<List<Ts...>,TToFind> : NotT<
			IsSameT<typename Detail::Find<0, TToFind, Ts...>::Type, Int<-1>>> {};
	template<typename TContainer, typename TToFind>
	using ContainsT = typename Contains<TContainer,TToFind>::Type;

	//works like PHP explode, splits a list into a list of lists devided by a user provided delimiter
	template<typename TList, typename TDelim>
	struct Explode {
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<typename... Ts, typename TDelim>
	struct Explode<List<Ts...>,TDelim> : Detail::Explode<List<>, List<>,TDelim,Ts...>{};

	template<typename TList, typename TDelim>
	using ExplodeT = typename Explode<TList,TDelim>::Type;

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

	//slit a list at every occurance of delimiter
	template<typename TList, typename TDelimiter>
	struct Split{
		static_assert(AlwaysFalse<TList>::value,"implausible type");
	};
	template<typename ... Ts, typename TDelimiter>
	struct Split<List<Ts...>,TDelimiter> : Detail::Split<TDelimiter, List<>, List<>, Ts...> {
	};
	template<typename TList,typename TDelimiter>
	using SplitT = typename Split<TList,TDelimiter>::Type;

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
}
