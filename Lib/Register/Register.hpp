/**************************************************************************
 * This file contains the Kvasir Register Abstraction DSL (Domain Specific Language)
 * which provide an extra layer between Hardware SFRs
 * (Special Function Registers) and code accessing them.
 * Copyright 2015 Odin Holmes
 * Aditional contribution from Stephan Bökelmann

 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
****************************************************************************/
#pragma once
#include "MPL/Types.hpp"
#include "MPL/Utility.hpp"
#include "MPL/Algorithm.hpp"
#include "Types.hpp"
#include "Factories.hpp"


namespace Kvasir {

	namespace Register{
		//this function produces an MPL::List just like MPL::list, however putting
		//one here allows adl to find it without the user having to write out the
		//whole namespace. Making the list take at least one parameter should
		//prevent ambiguity in a case where MPL::list is also an overload candidate
		template<typename T, typename... Ts>
		constexpr MPL::List<T,Ts...> list(T,Ts...){ return MPL::List<T,Ts...>{}; }

		//factory for compile time values
		template<unsigned I>
		constexpr MPL::Value<unsigned, I> value(){
			return MPL::Value<unsigned, I>{};
		};
		template<typename T, T I>
		constexpr MPL::Value<T,I> value(){
			return MPL::Value<T,I>{};
		};

		//bit helpers
		template<typename Address, int Position, typename TFieldType = bool>
		using BitLocT = BitLocation<Address,(1<<Position),true,true,TFieldType>;
		template<typename Address, int Position, typename TFieldType = bool>
		using ROBitLocT = BitLocation<Address,(1<<Position),true,false,TFieldType>;
		template<typename Address, int Position, typename TFieldType = bool>
		using WOBitLocT = BitLocation<Address,(1<<Position),false,true,TFieldType>;

		//bit field helpers
		template<typename Address, int HighestBit, int LowestBit, typename TFieldType = unsigned>
		using FieldLocT = BitLocation<Address,maskFromRange(HighestBit,LowestBit),true,true,TFieldType>;
		template<typename Address, int HighestBit, int LowestBit, typename TFieldType = unsigned>
		using ROFieldLocT = BitLocation<Address,maskFromRange(HighestBit,LowestBit),true,false,TFieldType>;
		template<typename Address, int HighestBit, int LowestBit, typename TFieldType = unsigned>
		using WOFieldLocT = BitLocation<Address,maskFromRange(HighestBit,LowestBit),false,true,TFieldType>;

		namespace Detail{
			using namespace MPL;

			constexpr unsigned orAllOf(){
				return 0;
			}
			constexpr unsigned orAllOf(unsigned l){
				return l;
			}

			template<typename... Ts>
			constexpr unsigned orAllOf(unsigned l, unsigned r, Ts... args){
				return l | r | orAllOf(args...);
			}



			//getters for specific parameters of an Action
			template<typename T>
			struct GetAddress;
			template<template<unsigned, unsigned, unsigned, typename> class TA, unsigned A, unsigned WIIZ, unsigned SOTC, typename TRegType>
			struct GetAddress<TA<A,WIIZ,SOTC,TRegType>> {
				static constexpr unsigned value = A;
				static unsigned read(){
					return *((volatile unsigned*)value);
				}
				static void write(unsigned i){
					*((volatile unsigned*)value) = i;
				}
				using Type = Unsigned<A>;
			};
			template<typename TAddress, unsigned Mask, bool Readable, bool Writable, typename ResultType>
			struct GetAddress<BitLocation<TAddress,Mask,Readable,Writable,ResultType>> {
				static constexpr unsigned value = TAddress::value;
				static unsigned read(){
					return *((volatile unsigned*)value);
				}
				static void write(unsigned i){
					*((volatile unsigned*)value) = i;
				}
				using Type = Unsigned<TAddress::value>;
			};
			template<typename TBitLocation, typename TAction>
			struct GetAddress<Action<TBitLocation,TAction>> : GetAddress<TBitLocation> {};

			template<typename T>
			struct GetBitLocation;
			template<typename TLocation, typename TAction>
			struct GetBitLocation<Action<TLocation,TAction>> : TLocation {};

			//predecate retuning result of left < right for RegisterOptions
			template<typename TLeft, typename TRight>
			struct RegisterActionLess;
			template<typename T1, typename U1, typename T2, typename U2>
			struct RegisterActionLess< Register::Action<T1,U1>, Register::Action<T2,U2> > : Bool<(GetAddress<T1>::value < GetAddress<T2>::value)>{};
			using RegisterActionLessP = Template<RegisterActionLess>;

			//predicate returns true if action is a read
			template<typename T>
			struct IsReadPred : MPL::FalseType {};
			template<typename A>
			struct IsReadPred< Register::Action<A,ReadAction> > : MPL::TrueType{};

			template<typename T>
			struct IsNotReadPred : NotT<typename IsReadPred<T>::Type>{};

			template<typename T>
			struct GetMask;
			//from BitLocations
			template<typename Address, unsigned Mask, bool Readable, bool Writable, typename ResultType>
			struct GetMask<BitLocation<Address,Mask,Readable,Writable,ResultType>> : Value<unsigned,Mask>{};
			//from Action
			template<typename TBitLocation, typename TAction>
			struct GetMask<Action<TBitLocation,TAction>> : GetMask<TBitLocation>{};

			template<typename TRegisterAction>
			struct RegisterExec;

			template<typename TAddress, unsigned Mask, bool Readable, typename FieldType, unsigned Data>
			struct RegisterExec<Register::Action<BitLocation<TAddress,Mask,Readable,true,FieldType>,WriteLiteralAction<Data>>>{
				static_assert((Data & (~Mask))==0,"bad mask");
				unsigned operator()(unsigned in = 0){
					auto i = GetAddress<TAddress>::read();
					i &= ~Mask;
					i |= Data | in;
					GetAddress<TAddress>::write(i);
					return i;
				}
			};
			template<typename TAddress, unsigned Mask, bool Readable, typename FieldType>
			struct RegisterExec<Register::Action<BitLocation<TAddress,Mask,Readable,true,FieldType>,WriteAction>>{
				unsigned operator()(unsigned in){
					auto i = GetAddress<TAddress>::read();
					i &= ~Mask;
					i |= in;
					GetAddress<TAddress>::write(i);
					return i;
				}
			};
			template<typename TAddress, unsigned Mask, bool Writable, typename FieldType>
			struct RegisterExec<Register::Action<BitLocation<TAddress,Mask,true,Writable,FieldType>,ReadAction>>{
				unsigned operator()(unsigned in = 0){
					return GetAddress<TAddress>::read();
				}
			};
			template<typename TAddress, unsigned Mask, typename FieldType, unsigned Data>
			struct RegisterExec<Register::Action<BitLocation<TAddress,Mask,true,true,FieldType>,XorLiteralAction<Data>>>{
				static_assert((Data & (~Mask))==0,"bad mask");
				unsigned operator()(unsigned in = 0){
					auto i = GetAddress<TAddress>::read();
					i ^= Data;
					GetAddress<TAddress>::write(i);
					return 0;
				}
			};
		}

		//apply implementation
		namespace Detail{
			//indexed inputs keep track of the mask and location of an input
			template<int Index, unsigned Mask>
			struct IndexedInput{
				static constexpr int index = Index;
				static constexpr unsigned mask = Mask;
				using Type = IndexedInput<Index,Mask>;
				template<int I>
				unsigned operator()(const unsigned (&arg)[I]){
					return arg[Index] & Mask;
				}
			};
			//an index action consists of an action (possably merged) and
			//the inputs including masks which it needs
			template<typename TAction, unsigned ReadMask, typename... TInputs>
			struct IndexedAction{
				using Type = IndexedAction<TAction,ReadMask,TInputs...>;
				template<int I>
				unsigned operator()(const unsigned (&arg)[I]){
					return RegisterExec<TAction>{}(orAllOf(TInputs{}(arg)...)) & ReadMask;
				}
				unsigned operator()(){
					return RegisterExec<TAction>{}(0) & ReadMask;
				}
			};

			//predecate retuning result of left < right for RegisterOptions
			template<typename TLeft, typename TRight>
			struct IndexedActionLess;
			template<typename T1, typename U1, typename T2, typename U2, unsigned Mask1, unsigned Mask2, typename... TInputs1, typename... TInputs2>
			struct IndexedActionLess< IndexedAction<Action<T1,U1>, Mask1, TInputs1...>, IndexedAction<Action<T2,U2>, Mask2, TInputs2... >> : Bool<(GetAddress<T1>::value < GetAddress<T2>::value)>{};
			using IndexedActionLessP = Template<IndexedActionLess>;

			template<typename TRegisters, typename TRet = List<>> //default
			struct MergeRegisterActions;

			template<typename TNext, typename... Ts> //none processed yet
			struct MergeRegisterActions<List<TNext, Ts...>, List<>> : MergeRegisterActions<List<Ts...>,List<TNext>>{};

			template<
				typename TAddress,
				unsigned Mask1, unsigned Mask2,
				bool Readable1,
				bool Readable2,
				bool Writable1,
				bool Writable2,
				typename TFieldType1, typename TFieldType2,
				template<unsigned> class TActionTemplate,
				unsigned Value1, unsigned Value2,
				unsigned ReadMask1, unsigned ReadMask2,
				typename... TInputs1, typename... TInputs2,
				typename... Ts, typename... Us> //next input and last merged are mergable
			struct MergeRegisterActions<
					List<IndexedAction<Action<BitLocation<TAddress,Mask1,Readable1,Writable1,TFieldType1>,TActionTemplate<Value1>>, ReadMask1, TInputs1...>, Ts...>,
					List<IndexedAction<Action<BitLocation<TAddress,Mask2,Readable2,Writable2,TFieldType2>,TActionTemplate<Value2>>, ReadMask2, TInputs2...>, Us...>
				> :	MergeRegisterActions<
					List<Ts...>,
					List<IndexedAction<Action<
						BitLocation<
							TAddress,
							Mask1 | Mask2, 						//merge
							true, true>,						//dont care, plausibility check has already been done
							TActionTemplate<Value1 | Value2>	//merge
							//TODO implement register type here
						>,
						ReadMask1 | ReadMask2, 					//merge
						TInputs1..., TInputs2...>,				//concatinate
						Us...>									//pass through rest
			>{};

			template<typename TNext, typename TLast, typename... Ts, typename... Us> //next and last not mergable
			struct MergeRegisterActions<List<TNext, Ts...>,List<TLast, Us...>> : MergeRegisterActions<List<Ts...>,List<TNext, TLast, Us...>>{};

			template<typename... Ts> //done
			struct MergeRegisterActions<List<>,List<Ts...>> : List<Ts...>{};

			template<typename T>
			using MergeRegisterActionsT = typename MergeRegisterActions<T>::Type;

			template<typename TList>
			struct MergeActionSteps;
			template<typename... Ts>
			struct MergeActionSteps<MPL::List<Ts...>> : MPL::List<
				MergeRegisterActionsT<
					MPL::SortT<MPL::FlattenT<Ts>,Detail::IndexedActionLessP>
				>...
				>{};

			template<typename T>
			using MergeActionStepsT = typename MergeActionSteps<T>::Type;


			template<typename TAction, unsigned ReadMask, typename... TInputs>
			struct GetAddress<IndexedAction<TAction,ReadMask,TInputs...>> : GetAddress<TAction> {};

			template<unsigned Mask, typename TAction>
			struct MakeReadMask : Unsigned<0>{};
			template<unsigned Mask>
			struct MakeReadMask<Mask, ReadAction> : Unsigned<Mask>{};

			template<typename TAction, typename Index>
			struct MakeIndexedAction;
			//in default case there is no actual expected input
			template<typename TAddress, unsigned Mask, bool Reradable, bool Writable, typename TR, typename TAction, int Index>
			struct MakeIndexedAction<Action<BitLocation<TAddress,Mask,Reradable,Writable,TR>,TAction>,Int<Index>>:
					IndexedAction<Action<BitLocation<TAddress,Mask,Reradable,Writable,TR>,TAction>,MakeReadMask<Mask,TAction>::value>{};

			//special case where there actually is expected input
			template<typename TAddress, unsigned Mask, bool Reradable, bool Writable, typename TR, int Index>
			struct MakeIndexedAction<Action<BitLocation<TAddress,Mask,Reradable,Writable,TR>,WriteAction>,Int<Index>>:
					IndexedAction<Action<BitLocation<TAddress,Mask,Reradable,Writable,TR>,WriteAction>,MakeReadMask<Mask,WriteAction>::value,IndexedInput<Index,Mask>>{};

			//special case where a list of actions is passed
			template<typename... Ts, typename Index>
			struct MakeIndexedAction<List<Ts...>,Index> : List<typename MakeIndexedAction<Ts,Index>::Type...>{};
			//special case where a list of actions is passed
			template<typename Index>
			struct MakeIndexedAction<SequencePoint,Index> : SequencePoint{};

			template<typename TAction, typename Index>
			using MakeIndexedActionT = typename MakeIndexedAction<TAction,Index>::Type;


			template<unsigned I>
			struct IsAddressPred{
				template<typename T>
				struct Apply : MPL::FalseType {};
				template<typename TAddress, unsigned Mask, bool Reradable, bool Writable, typename FieldType, typename Cmd>
				struct Apply<Action<BitLocation<TAddress,Mask,Reradable,Writable,FieldType>,Cmd>> : MPL::Value<bool,(I==GetAddress<TAddress>::value)>{};
			};

			template<typename TArgList>
			using GetReadsT = TransformT<RemoveT<TArgList,Template<IsNotReadPred>>,Template<GetBitLocation>>;

			template<typename T>
			struct GetReadMask : Int<0>{};

			template<typename T>
			struct GetAddresses;
			template<typename TAddresses, typename TLocations>
			struct GetAddresses<ValueObject<TAddresses,TLocations>> : TAddresses{};


			template<typename T, typename = decltype(T::value_)>
			unsigned argToInt(T arg){
				return arg.value_;
			}
			unsigned argToInt(...){
				return 0;
			}

			template<typename TActionList, typename TRetType>
			struct Apply;
			template<typename... TActions, typename... TRetAddresses, typename TRetLocations>
			struct Apply<List<TActions...>,ValueObject<List<TRetAddresses...>,TRetLocations>>{
				template<typename T>
				struct ReturnFilter;
				template<int... Is>
				struct ReturnFilter<List<Int<Is>...>>{
					unsigned operator()(const unsigned(&rets)[sizeof...(TActions)]){
						return orAllOf(rets[Is]...);
					}
				};

				template<typename T>
				struct IndexNotAddressPred{
					template<typename Index>
					struct Apply : Bool<(GetAddress<AtT<List<TActions...>,Index>>::value != T::value)>{};
				};
				template<int I>
				ValueObject<List<TRetAddresses...>,TRetLocations> operator()(const unsigned(&args)[I]){
					using namespace MPL;
					const unsigned returns[]{TActions{}(args)...};
					return ValueObject<List<TRetAddresses...>,TRetLocations>{
							ReturnFilter<
								RemoveT<BuildIndicesT<sizeof...(TActions)>,Template<IndexNotAddressPred<TRetAddresses>::template Apply>>
							>{}(returns)...
					};
				}
			};

			//no read apply
			template<typename TActionList>
			struct NoReadApply;
			template<typename... TActions>
			struct NoReadApply<List<TActions...>>{
				template<int I>
				void operator()(unsigned (&args)[I]){
					unsigned a[] = {TActions{}(args)...};
					ignore(a);
				}
			};
			template<typename... TAction, unsigned... Mask>
			struct NoReadApply<List<IndexedAction<TAction,Mask>...>>{
				template<typename T>
				void operator()(T){
					unsigned a[] = {IndexedAction<TAction,Mask>{}()...};
					ignore(a);
				}
			};

			template<typename... Ts>
			using GetReturnTypeT = ValueObject<
					UniqueT<SortT<TransformT<
						GetReadsT<List<Ts...>>,
						Template<GetAddress>
					>>>,
					GetReadsT<List<Ts...>>
				>;
			template<typename T>
			struct ArgToApplyIsPlausible : FalseType{};
			template<typename L, typename A>
			struct ArgToApplyIsPlausible<Action<L,A>> : TrueType{};
			template<>
			struct ArgToApplyIsPlausible<SequencePoint> : TrueType{};
			template<typename T, typename... Ts>
			struct ArgsToApplyArePlausible : AllOf<TransformT<FlattenT<List<T,Ts...>>, Template<ArgToApplyIsPlausible>>>{};

		}

		//if apply contains reads return a ValueObject
		template<typename...Args>
		inline MPL::DisableIfT<(MPL::SizeT<Detail::GetReadsT<MPL::List<Args...>>>::value == 0),
			Detail::GetReturnTypeT<Args...>>
		apply(Args...args){
			static_assert(Detail::ArgsToApplyArePlausible<Args...>::value,"one of the supplied arguments is not supported");
			using namespace MPL;
			//associate all actions with their value index
			unsigned a[] = {Detail::argToInt(args)...};
			using IndexedActions = TransformT<List<Args...>,BuildIndicesT<sizeof...(Args)>,Template<Detail::MakeIndexedAction>>;
			using FlattenedActions = FlattenT<IndexedActions>;
			using Steps = SplitT<FlattenedActions,SequencePoint>;
			using Merged = Detail::MergeActionStepsT<Steps>;
			using Actions = MPL::FlattenT<Merged>;
			return Detail::Apply<Actions,Detail::GetReturnTypeT<Args...>>{}(a);
		}

		//if apply does not contain reads return is void
		template<typename...Args>
		inline MPL::EnableIfT<(MPL::SizeT<Detail::GetReadsT<MPL::FlattenT<MPL::List<Args...>>>>::value == 0)>
		apply(Args...args){
			static_assert(Detail::ArgsToApplyArePlausible<Args...>::value,"one of the supplied arguments is not supported");
			using namespace MPL;
			unsigned a[] = {Detail::argToInt(args)...};
			using IndexedActions = TransformT<List<Args...>,BuildIndicesT<sizeof...(Args)>,Template<Detail::MakeIndexedAction>>;
			using FlattenedActions = FlattenT<IndexedActions>;
			using Steps = SplitT<FlattenedActions,SequencePoint>;
			using Merged = Detail::MergeActionStepsT<Steps>;
			using Actions = MPL::FlattenT<Merged>;
			Detail::NoReadApply<Actions>{}(a);
		}

		//no parameters is allowed because it could be used in maschine generated code
		//it does nothing
		void apply(){};
		void apply(MPL::List<>){};
	}
}
