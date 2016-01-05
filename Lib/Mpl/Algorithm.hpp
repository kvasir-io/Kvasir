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
#include "Types.hpp"
#include "Utility.hpp"
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
		struct Join<brigand::list<Os...>,TDelim, brigand::list<Ls...>,Ts...> : Join<brigand::list<Os...,TDelim,Ls...>,TDelim,Ts...>{};
		template<typename... Os, typename TDelim>
		struct Join<brigand::list<Os...>,TDelim> : Return<brigand::list<Os...>>{};   //no more input, done

		template<typename TOut, typename TCurrent, typename TDelim, typename... Ts>
		struct Split;
		template<typename... Os, typename... Cs, typename TDelim, typename T, typename... Ts>
		struct Split<brigand::list<Os...>, brigand::list<Cs...>,TDelim,T,Ts...> : //next is not delim, we still have more
			Split<brigand::list<Os...>, brigand::list<Cs...,T>,TDelim,Ts...>{};
		template<typename... Os, typename... Cs, typename TDelim, typename T>
		struct Split<brigand::list<Os...>, brigand::list<Cs...>,TDelim,T> { //next is not delim, we do not have more
			using Type = brigand::list<Os..., brigand::list<Cs..., T>>;
		};
		template<typename... Os, typename... Cs, typename TDelim, typename... Ts>
		struct Split<brigand::list<Os...>, brigand::list<Cs...>,TDelim,TDelim,Ts...> : //next is delim, we still have more
			Split<brigand::list<Os..., brigand::list<Cs...>>, brigand::list<>,TDelim,Ts...>{};
		template<typename... Os, typename... Cs, typename TDelim>
		struct Split<brigand::list<Os...>, brigand::list<Cs...>,TDelim,TDelim> { //next is delim, we have no more
			using Type = brigand::list<Os..., brigand::list<Cs...>>;
		};
		//same cases but with empty TCurrent list
		template<typename... Os, typename TDelim, typename... Ts>
		struct Split<brigand::list<Os...>, brigand::list<>,TDelim,TDelim,Ts...> : //next is delim, we still have more
			Split<brigand::list<Os...>, brigand::list<>,TDelim,Ts...>{};
		template<typename... Os, typename TDelim>
		struct Split<brigand::list<Os...>, brigand::list<>,TDelim,TDelim> { //next is delim, we have no more
			using Type = brigand::list<Os...>;
		};

		template<typename T_Out, template<typename, typename > class T_Pred,
				typename T_Insert, bool B_Tag, typename ... Ts>
		struct SortInsert;
		//next is less than insert, next is not end
		template<typename ... Os, template<typename, typename > class T_Pred,
				typename T_Insert, typename T1, typename T2, typename ... Ts>
		struct SortInsert<brigand::list<Os...>, T_Pred, T_Insert, true, T1, T2, Ts...> : SortInsert<
			brigand::list<Os..., T1>, T_Pred, T_Insert, T_Pred<T2, T_Insert>::value, T2,
				Ts...> {};
		//next is less than insert, next is end, terminate
		template<typename ... Os, template<typename, typename > class T_Pred,
				typename T_Insert, typename ... Ts>
		struct SortInsert<brigand::list<Os...>, T_Pred, T_Insert, true, Ts...> {
			using type = brigand::list<Os..., Ts..., T_Insert>;
		};
		//next is not less than insert, terminate
		template<typename ... Os, template<typename, typename > class T_Pred,
				typename T_Insert, typename ... Ts>
		struct SortInsert<brigand::list<Os...>, T_Pred, T_Insert, false, Ts...> {
			using type = brigand::list<Os..., T_Insert, Ts...>;
		};

		template<typename TOut, template<typename, typename > class P, typename ... Ts>
		struct Sort{
			static_assert(AlwaysFalse<TOut>::value,"implausible parameters");
		};
		//out and in are not empty
		template<typename O, typename ... Os,
				template<typename, typename > class TPred, typename TInsert,
				typename ... Ts>
		struct Sort<brigand::list<O, Os...>, TPred, TInsert, Ts...> : Sort<
				typename Detail::SortInsert<brigand::list<>, TPred, TInsert,
						TPred<O, TInsert>::value, O, Os...>::type, TPred, Ts...>
		{};
		//out is empty, in is not empty
		template<typename ... Os, template<typename, typename > class TPred,
				typename TInsert, typename ... Ts>
		struct Sort<brigand::list<Os...>, TPred, TInsert, Ts...> : Sort<
				typename Detail::SortInsert<brigand::list<>, TPred, TInsert, false, Os...>::type,
				TPred, Ts...>
		{};
		//in is empty
		template<typename ... Os, template<typename, typename > class P, typename ... Ts>
		struct Sort<brigand::list<Os...>, P, Ts...> {
			using type = brigand::list<Os...>;
		};

		template<typename TOut, int From, int To, typename... Ts>
		struct Remove;
		template<typename... Os, int From, int To, typename T, typename... Ts>
		struct Remove<brigand::list<Os...>,From,To,T,Ts...> : Remove<brigand::list<Os...,T>,From-1,To-1,Ts...>{};
		template<typename... Os, int To, typename T, typename... Ts>
		struct Remove<brigand::list<Os...>,0,To,T,Ts...> : Remove<brigand::list<Os...>,0,To-1,Ts...>{};
		template<typename... Os, typename T, typename... Ts>
		struct Remove<brigand::list<Os...>,0,0,T,Ts...>{
			using type = brigand::list<Os..., T, Ts...>;
		};
		template<typename... Os>
		struct Remove<brigand::list<Os...>,0,0>{
			using type = brigand::list<Os...>;
		};

		template<bool FirstTwoSame, typename T, template<typename, typename > class Pred, typename... Ts>
		struct Unique;
		template<typename... Rs, template<typename, typename > class Pred, typename T, typename U>	//only two left
		struct Unique<true, brigand::list<Rs...>, Pred, T, U> {
			using type = brigand::list<Rs..., T>;
		};
		template<typename... Rs, template<typename, typename > class Pred, typename T, typename U>	//only two left
		struct Unique<false, brigand::list<Rs...>, Pred, T, U> { 
			using type = brigand::list<Rs..., T, U>;
		};
		template<typename... Rs, template<typename, typename > class Pred, typename T, typename U, typename V, typename... Ts>  //not same
		struct Unique<false, brigand::list<Rs...>, Pred, T, U, V, Ts...> : Unique<Pred<U,V>::value, brigand::list<Rs...,T>,Pred,U,V,Ts...>{};
		template<typename... Rs, template<typename, typename > class Pred, typename T, typename U, typename V, typename... Ts>  //same
		struct Unique<true, brigand::list<Rs...>, Pred, T, U, V, Ts...> : Unique<Pred<U,V>::value, brigand::list<Rs...>,Pred,U,V,Ts...>{};

	}

	template<typename TList, typename TIndex>
	struct At{
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<typename T, typename...Ts, int I>
	struct At<brigand::list<T, Ts...>,Int<I>> : At<brigand::list<Ts...>,Int<I-1>>{};
	template<typename T, typename... Ts>
	struct At<brigand::list<T, Ts...>,Int<0>> : Return<T>{};
	template<typename TList, typename TIndex>
	using AtT = typename At<TList,TIndex>::type;


	//Find returns Int<-1> if type is not found, otherwise returns index
	template<typename TList, typename TToFind>
	struct Find{
		static_assert(AlwaysFalse<TToFind>::value,"implausible parameters");
	};
	template<typename T, typename ... Ts>
	struct Find<brigand::list<Ts...>,T> : Detail::Find<0, T, Ts...> {
	};
	template<template<typename...> class Pred, typename T, typename... Ts>
	struct Find<brigand::list<T,Ts...>, Template<Pred>> : Detail::PredFind<0,Pred<T>::value,Pred,Ts...>{};
	template<typename TList, typename TToFind>
	using FindT = typename Find<TList,TToFind>::type;

	//Get returns first item matching Pred or default if none are matching
	template<typename TList, typename TPred, typename TDefault = void>
	struct Get{
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<template<typename...> class Pred, typename D, typename... Ts>
	struct Get<brigand::list<Ts...>, Template<Pred>,D> :
		ConditionalT<(FindT<brigand::list<Ts...>,Template<Pred>>::value == -1),D,At<brigand::list<Ts...>,FindT<brigand::list<Ts...>,Template<Pred>>>>{};
	template<typename TList, typename TPred, typename TDefault = void>
	using GetT = typename Get<TList, TPred, TDefault>::type;

	//returns true if T_ToFind is in T_Container, otherwise false
	template<typename TContainer, typename TToFind>
	struct Contains{
		static_assert(AlwaysFalse<TToFind>::value,"implausible type");
	};
	template<typename TToFind, typename ... Ts>
	struct Contains<brigand::list<Ts...>,TToFind> : NotT<
			IsSameT<typename Detail::Find<0, TToFind, Ts...>::type, Int<-1>>> {};
	template<typename TContainer, typename TToFind>
	using ContainsT = typename Contains<TContainer,TToFind>::type;

	template<typename TList>
	struct Sum{
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<typename... Ts>
	struct Sum<brigand::list<Ts...>> : Detail::Sum<0,Ts::value...>{};

	template<typename TList>
	using SumT = typename Sum<TList>::type;

	//Sort
	template<typename TList, typename TPred = LessP>
	struct Sort{
		static_assert(AlwaysFalse<TList>::value,"implausible type");
	};

	//empty input case
	template<template<typename, typename > class TPred>
	struct Sort<MPL::brigand::list<>, Template<TPred>> {
		using type = brigand::list<>;
	};

	//one element case
	template<typename T, template<typename, typename > class TPred>
	struct Sort<MPL::brigand::list<T>, Template<TPred>> {
		using type = brigand::list<T>;
	};

	//two or more elements case
	template<typename ... Ts, template<typename, typename > class TPred>
	struct Sort<MPL::brigand::list<Ts...>, Template<TPred>> :
		Detail::Sort<brigand::list<>, TPred,	Ts...> {};

	//alias
	template<typename TList, typename TPred = LessP>
	using SortT = typename Sort<TList,TPred>::type;

	//removed elements int From-To range (inclusive exclusive)
	template<typename TList, typename TFrom, typename TTo = void>
	struct Remove{
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<typename T, typename... Ts, int From, int To>
	struct Remove<brigand::list<T, Ts...>,Int<From>,Int<To>> : Detail::Remove<brigand::list<>,From,To,T,Ts...>{};

	template<typename ... Ts, template<typename> class TPred>
	struct Remove<brigand::list<Ts...>, Template<TPred>, void> : brigand::flatten<brigand::list<typename std::conditional<TPred<Ts>::value, brigand::list<>,Ts>::type...>>{};

	template<typename TList,typename TFrom, typename TTo = void>
	using RemoveT = typename Remove<TList,TFrom,TTo>::type;

	//expercts a sorted list, removes all consecutive duplicates fullfilling pred
	template<typename TList, typename TPred = IsSameP>
	struct Unique{
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};

	template< template<typename, typename > class TPred>
	struct Unique<brigand::list<>, Template<TPred>> {
		using type = brigand::list<>;
	};
	template<typename T, template<typename, typename > class TPred>
	struct Unique<brigand::list<T>, Template<TPred>> {
		using type = brigand::list<T>;
	};
	template<typename T, typename U, typename...Ts, template<typename, typename > class TPred>
	struct Unique<MPL::brigand::list<T,U,Ts...>, Template<TPred>> : Detail::Unique<TPred<T,U>::value, brigand::list<>, TPred, T,U,Ts...>{};

	template<typename TList, typename TPred = IsSameP>
	using UniqueT = typename Unique<TList, TPred>::type;

	template<typename TList, typename TPred>
	struct CountIf{
		static_assert(AlwaysFalse<TList>::value,"implausible parameters");
	};
	template<typename ... Ts, template<typename> class TPred>
	struct CountIf<MPL::brigand::list<Ts...>, Template<TPred>> : SumT<brigand::list<typename TPred<Ts>::type...>>{};

	template<typename TList, typename TPred>
	using CountIfT = typename CountIf<TList,TPred>::type;

	template<std::size_t N, class... T> 
	struct RepeatCImpl
	{
		using l1 = typename RepeatCImpl<N / 2, T...>::type;
		using l2 = typename RepeatCImpl<N % 2, T...>::type;

		using type = brigand::append<l1, l1, l2>;
	};

	template<class... T> 
	struct RepeatCImpl<0, T...>
	{
		using type = brigand::list<>;
	};

	template<class... T> 
	struct RepeatCImpl<1, T...>
	{
		using type = brigand::list<T...>;
	};

	template<std::size_t N, class... T> 
	using RepeatC = typename RepeatCImpl<N, T...>::type;

}
}
