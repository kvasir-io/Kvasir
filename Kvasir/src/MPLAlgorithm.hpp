#pragma once
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
#include "MPLTypes.hpp"
#include "MPLUtility.hpp"
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
		template<int I, template<typename...> class Pred, typename...Ts>
		struct PredFind<I,true,Pred,Ts...> : Int<I>{};
		template<int I, template<typename...> class Pred, typename T, typename ... Ts>
		struct PredFind<I, false, Pred, T, Ts...> : PredFind<I + 1, Pred<T>::value,Pred, Ts...> {};

		template<int Total, int... Is>
		struct Sum : Int<Total>{};
		template<int Total, int I, int...Is>
		struct Sum<Total,I,Is...> : Sum<Total + I, Is...>{};

		template<typename TOut, typename TDelim, typename... Ts>
		struct Join{
			static_assert(AlwaysFalse<TOut>::value,"Incorrect parameter format, expected list of lists");
		};
		template<typename... Os, typename TDelim, typename... Ls, typename... Ts>
		struct Join<List<Os...>,TDelim,List<Ls...>,Ts...> : Join<List<Os...,TDelim,Ls...>,TDelim,Ts...>{};
		template<typename... Os, typename TDelim>
		struct Join<List<Os...>,TDelim> : List<Os...>{};   //no more input, done

		template<typename TOut, typename TCurrent, typename TDelim, typename... Ts>
		struct Split;
		template<typename... Os, typename... Cs, typename TDelim, typename T, typename... Ts>
		struct Split<List<Os...>,List<Cs...>,TDelim,T,Ts...> : //next is not delim, we still have more
			Split<List<Os...>,List<Cs...,T>,TDelim,Ts...>{};
		template<typename... Os, typename... Cs, typename TDelim, typename T>
		struct Split<List<Os...>,List<Cs...>,TDelim,T> : //next is not delim, we do not have more
			List<Os...,List<Cs...,T>>{};
		template<typename... Os, typename... Cs, typename TDelim, typename... Ts>
		struct Split<List<Os...>,List<Cs...>,TDelim,TDelim,Ts...> : //next is delim, we still have more
			Split<List<Os...,List<Cs...>>,List<>,TDelim,Ts...>{};
		template<typename... Os, typename... Cs, typename TDelim>
		struct Split<List<Os...>,List<Cs...>,TDelim,TDelim> : //next is delim, we have no more
			List<Os...,List<Cs...>>{};
		//same cases but with empty TCurrent list
		template<typename... Os, typename TDelim, typename... Ts>
		struct Split<List<Os...>,List<>,TDelim,TDelim,Ts...> : //next is delim, we still have more
			Split<List<Os...>,List<>,TDelim,Ts...>{};
		template<typename... Os, typename TDelim>
		struct Split<List<Os...>,List<>,TDelim,TDelim> : //next is delim, we have no more
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

		template<typename TOut, int From, int To, typename... Ts>
		struct Remove;
		template<typename... Os, int From, int To, typename T, typename... Ts>
		struct Remove<List<Os...>,From,To,T,Ts...> : Remove<List<Os...,T>,From-1,To-1,Ts...>{};
		template<typename... Os, int To, typename T, typename... Ts>
		struct Remove<List<Os...>,0,To,T,Ts...> : Remove<List<Os...>,0,To-1,Ts...>{};
		template<typename... Os, typename T, typename... Ts>
		struct Remove<List<Os...>,0,0,T,Ts...> : List<Os...,T,Ts...>{};
		template<typename... Os>
		struct Remove<List<Os...>,0,0> : List<Os...>{};

		template<typename T, typename... Ts>
		struct Unique;
		template<typename... Rs, typename... Ts>
		struct Unique<List<Rs...>,Ts...> : List<Rs...>{};
		template<typename... Rs, typename T>	//only one left
		struct Unique<List<Rs...>,T> : List<Rs...,T>{};
		template<typename... Rs, typename T, typename U, typename... Ts>  //not same
		struct Unique<List<Rs...>, T, U, Ts...> : Unique<List<Rs...,T>,U,Ts...>{};
		template<typename... Rs, typename T, typename... Ts>  //same
		struct Unique<List<Rs...>, T, T, Ts...> : Unique<List<Rs...>,T,Ts...>{};

	}

	template<typename TList, typename TIndex>
	struct At{
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<typename T, typename...Ts, int I>
	struct At<List<T, Ts...>,Int<I>> : At<List<Ts...>,Int<I-1>>{};
	template<typename T, typename... Ts>
	struct At<List<T, Ts...>,Int<0>> : T{};
	template<typename TList, typename TIndex>
	using AtT = typename At<TList,TIndex>::Type;


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

	//Get returns first item matching Pred or default if none are matching
	template<typename TList, typename TPred, typename TDefault = void>
	struct Get{
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<template<typename...> class Pred, typename D, typename... Ts>
	struct Get<List<Ts...>, Template<Pred>,D> :
		ConditionalT<(FindT<List<Ts...>,Template<Pred>>::value == -1),D,At<List<Ts...>,FindT<List<Ts...>,Template<Pred>>>>{};
	template<typename TList, typename TPred, typename TDefault = void>
	using GetT = typename Get<TList, TPred, TDefault>::Type;

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

	template<typename TList>
	struct Sum{
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<typename... Ts>
	struct Sum<List<Ts...>> : Detail::Sum<0,Ts::value...>{};

	template<typename TList>
	using SumT = typename Sum<TList>::Type;

	//works like PHP explode, splits a list into a list of lists devided by a user provided delimiter
	template<typename TList, typename TDelim>
	struct Split {
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<typename... Ts, typename TDelim>
	struct Split<List<Ts...>,TDelim> : Detail::Split<List<>, List<>,TDelim,Ts...>{};
	template<typename TDelim>
	struct Split<List<>,TDelim> : List<>{};

	template<typename TList, typename TDelim>
	using SplitT = typename Split<TList,TDelim>::Type;

	//works like PHP implode, merges a list of lists into a list divided by a user provided delimiter
	template<typename TList, typename TDelim>
	struct Join {
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<typename... Ts, typename TDelim>
	struct Join<List<Ts...>,TDelim> : Detail::Join<List<>,TDelim,Ts...>{};

	template<typename TList, typename TDelim>
	using JoinT = typename Join<TList,TDelim>::Type;

	//if a type is a list of types it will successively be unpacked into the enclosing list
	template<typename TList>
	struct Flatten{
		static_assert(AlwaysFalse<TList>::value,"implausible type");
	};
	template<>
	struct Flatten<List<>> : List<>{};
	template<typename ... Ts>
	struct Flatten<List<Ts...>> : Detail::Flatten<List<>, Ts...> {
	};
	template<typename TList>
	using FlattenT = typename Flatten<TList>::Type;

	template<typename T, typename U, typename... Ts>
	struct Transform{
		static_assert(AlwaysFalse<T>::value,"implausible type");
	};
	template<typename... Ts, template<typename> class T>
	struct Transform<List<Ts...>,Template<T>> : List<ApplyTemplateT<Template<T>,Ts>...>{};
	template<typename... Ts, typename... Us, template<typename,typename> class T>
	struct Transform<List<Ts...>, List<Us...>, Template<T>> : List<ApplyTemplateT<Template<T>,Ts,Us>...>{};
	template<typename...Ts>
	using TransformT = typename Transform<Ts...>::Type;

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

	//removed elements int From-To range (inclusive exclusive)
	template<typename TList, typename TFrom, typename TTo = void>
	struct Remove{
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<typename T, typename... Ts, int From, int To>
	struct Remove<List<T, Ts...>,Int<From>,Int<To>> : Detail::Remove<List<>,From,To,T,Ts...>{};

	template<typename ... Ts, template<typename> class TPred>
	struct Remove<MPL::List<Ts...>, Template<TPred>, void> : FlattenT<List<ConditionalT<TPred<Ts>::value,List<>,Ts>...>>{};

	template<typename TList,typename TFrom, typename TTo = void>
	using RemoveT = typename Remove<TList,TFrom,TTo>::Type;

	//expercts a sorted list, removes all consecutive duplicates
	template<typename TList>
	struct Unique{
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};

	template<typename...Ts>
	struct Unique<MPL::List<Ts...>> : Detail::Unique<List<>,Ts...>{};

	template<typename TList>
	using UniqueT = typename Unique<TList>::Type;

	template<typename TList, typename TPred>
	struct CountIf{
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<typename ... Ts, template<typename> class TPred>
	struct CountIf<MPL::List<Ts...>, Template<TPred>> : SumT<List<typename TPred<Ts>::Type...>>{};

	template<typename TList, typename TPred>
	using CountIfT = typename CountIf<TList,TPred>::Type;

	template<typename TList, typename TPred = void>
	struct AllOf{
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<bool B>
	struct AllOf<List<Bool<B>>,void> : Bool<B>{};
	template<bool B1, bool B2, typename... Bs>
	struct AllOf<List<Bool<B1>,Bool<B2>,Bs...>,void> : AllOf<List<Bool<B1 && B2>,Bs...>,void>{};

	template<typename TList, typename TPred>
	using AllOfT = typename AllOf<TList, TPred>::Type;

	template<typename TList, typename TPred = void>
	struct AnyOf{
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<bool B>
	struct AnyOf<List<Bool<B>>,void> : Bool<B>{};
	template<bool B1, bool B2, typename... Bs>
	struct AnyOf<List<Bool<B1>,Bool<B2>,Bs...>,void> : AnyOf<List<Bool<B1 || B2>,Bs...>,void>{};

	template<typename TList, typename TPred>
	using AnyOfT = typename AnyOf<TList, TPred>::Type;
}
}
