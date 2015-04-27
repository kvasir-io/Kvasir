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
#include "MPLTypes.hpp"
#include "MPLUtility.hpp"
#include "MPLAlgorithm.hpp"
#include "RegisterTypes.hpp"
#include "RegisterFactories.hpp"


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

		template<int Address, unsigned Mask, unsigned WritableMask = 0, typename TFieldType = unsigned>
		using RWLocation = BitLocation<Address::ReadWrite<Address>,Mask,WritableMask,TFieldType>;
		template<int Address, unsigned Mask, unsigned WritableMask = 0, typename TFieldType = unsigned>
		using BWLocation = BitLocation<Address::BlindWrite<Address>,Mask,WritableMask,TFieldType>;
		template<int Address, unsigned Mask, unsigned WritableMask = 0, typename TFieldType = unsigned>
		using ROLocation = BitLocation<Address::ReadOnly<Address>,Mask,WritableMask,TFieldType>;

		//leagacy factories
		template<unsigned Address,unsigned Mask, unsigned Data>
		using WriteActionT = Action<BitLocation<Address::ReadWrite<Address>,Mask>,WriteLiteralAction<Data>>;
		template<unsigned Address,unsigned Offset, bool Data>
		using WriteBitActionT = Action<BitLocation<Address::ReadWrite<Address>,(1<<Offset)>,WriteLiteralAction<(Data<<Offset)>>;
		template<unsigned Address,int Offset>
		using BlindSetBitActionT = Action<BitLocation<Address::BlindWrite<Address>,(1<<Offset)>,WriteLiteralAction<(1<<Offset)>>;

		template<unsigned Address,unsigned Mask, unsigned Data>
		using BlindWriteActionT = Action<BitLocation<Address::BlindWrite<Address>,Mask>,WriteLiteralAction<Data>>;
		template<unsigned Address,unsigned Mask, unsigned Data>
		using XorActionT = Action<BitLocation<Address::ReadWrite<Address>,Mask>,XorLiteralAction<Data>>;
		//end legacy factories

		namespace Detail{
			using namespace MPL;

			template<typename... Ts>
			constexpr unsigned orAllOf(unsigned l, unsigned r, Ts... args){
				return l | r | orAllOf(args...);
			}

			constexpr unsigned orAllOf(unsigned l){
				return l;
			}

			//getters for specific parameters of an Action
			template<typename T>
			struct GetAddress;
			template<template<unsigned I> class AC, unsigned Address, unsigned Mask, unsigned ReservedMask, typename ResultType, typename TAction>
			struct GetAddress<Action<BitLocation<AC<Address>,Mask,ReservedMask,ResultType>,TAction>> {
				static constexpr unsigned value = Address;
				static constexpr unsigned read(){
					return *((volatile unsigned*)value);
				}
				using Type = Int<Address>;
			};
			template<typename T>
			struct GetBitLocation;
			template<typename TLocation, typename TAction>
			struct GetBitLocation<Action<TLocation,TAction>> : TLocation {};

			//predecate retuning result of left < right for RegisterOptions
			template<typename TLeft, typename TRight>
			struct RegisterActionLess;
			template<typename T1, typename U1, typename T2, typename U2>
			struct RegisterActionLess< Register::Action<T1,U1>, Register::Action<T2,U2> > : Bool<(T1::address < T2::address)>{};
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
			template<typename Address, unsigned Mask, unsigned ReservedMask, typename ResultType>
			struct GetMask<BitLocation<Address,Mask,ReservedMask,ResultType>> : Value<unsigned,Mask>{};
			//from Action
			template<typename TBitLocation, typename TAction>
			struct GetMask<Action<TBitLocation,TAction>> : GetMask<TBitLocation>{};

			template<typename TRegisterAction>
			struct RegisterExec;

			template<unsigned A, unsigned Mask, unsigned ReservedMask, typename FieldType, unsigned Data>
			struct RegisterExec<Register::Action<BitLocation<Address::ReadWrite<A>,Mask,ReservedMask,FieldType>,WriteLiteralAction<Data>>>{
				static_assert((Data & (~Mask))==0,"bad mask");
				unsigned operator()(unsigned in = 0){
					auto& reg = *(volatile unsigned*)A;
					auto i = reg;
					i &= ~Mask;
					i |= Data | in;
					reg = i;
					return i;
				}
			};
			template<unsigned A, unsigned Mask, unsigned ReservedMask, typename FieldType, unsigned Data>
			struct RegisterExec<Register::Action<BitLocation<Address::BlindWrite<A>,Mask,ReservedMask,FieldType>,WriteLiteralAction<Data>>>{
				static_assert((Data & (~Mask))==0,"bad mask");
				unsigned operator()(unsigned in){
					auto& reg = *(volatile unsigned*)A;
					reg = Data | in;
					return 0;
				}
			};
			template<unsigned A, unsigned Mask, unsigned ReservedMask, typename FieldType, unsigned Data>
			struct RegisterExec<Register::Action<BitLocation<Address::ReadWrite<A>,Mask,ReservedMask,FieldType>,XorLiteralAction<Data>>>{
				static_assert((Data & (~Mask))==0,"bad mask");
				unsigned operator()(unsigned in = 0){
					auto& reg = *(volatile unsigned*)A;
					reg ^= Data;
					return 0;
				}
			};

			template<typename TRegisters, typename TRet = List<>> //default
			struct MergeRegisterActions;

			template<typename TNext, typename... Ts> //none processed yet
			struct MergeRegisterActions<List<TNext, Ts...>, List<>> : MergeRegisterActions<List<Ts...>,List<TNext>>{};

			template<template<unsigned> class TAddressTemplate, unsigned Address, unsigned Mask1, unsigned Mask2, template<unsigned> class TActionTemplate, unsigned Value1, unsigned Value2, typename... Ts, typename... Us> //next and last mergable
			struct MergeRegisterActions<
					List<Register::Action<BitLocation<TAddressTemplate<Address>,Mask1>,TActionTemplate<Value1>>, Ts...>,
					List<Register::Action<BitLocation<TAddressTemplate<Address>,Mask2>,TActionTemplate<Value2>>, Us...>
				> :	MergeRegisterActions<
					List<Ts...>,
					List<Register::Action<BitLocation<TAddressTemplate<Address>,Mask1 | Mask2>,TActionTemplate<Value1 | Value2>>,Us...>
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
					MPL::SortT<MPL::FlattenT<Ts>,Detail::RegisterActionLessP>
				>...
				>{};

			template<typename T>
			using MergeActionStepsT = typename MergeActionSteps<T>::Type;

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
				unsigned operator()(unsigned (&arg)[I]){
					return arg[Index] & Mask;
				}
			};
			//an index action consists of an action (possably merged) and
			//the inputs including masks which it needs
			template<typename TAction, unsigned ReadMask, typename... TInputs>
			struct IndexedAction{
				using Type = IndexedAction<TAction,ReadMask,TInputs...>;
				template<int I>
				unsigned operator()(unsigned (&arg)[I]){
					return RegisterExec<TAction>{}(orAllOf(TInputs{}(arg)...)) & ReadMask;
				}
			};

			template<unsigned Mask, typename TAction>
			struct MakeReadMask : Unsigned<0>{};
			template<unsigned Mask>
			struct MakeReadMask<Mask, ReadAction> : Unsigned<Mask>{};

			template<typename TAction, typename Index>
			struct MakeIndexedAction;
			template<typename TAddress, unsigned Mask, unsigned RM, typename TR, typename TAction, int Index>
			struct MakeIndexedAction<Action<BitLocation<TAddress,Mask,RM,TR>,TAction>,Int<Index>>:
				IndexedAction<Action<BitLocation<TAddress,Mask,RM,TR>,TAction>,MakeReadMask<Mask,TAction>::value,IndexedInput<Index,Mask>>{};
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
				template<template<unsigned> class TAddressTemplate, unsigned Mask, unsigned ReservedMask, typename FieldType, typename Cmd>
				struct Apply<Action<BitLocation<TAddressTemplate<I>,Mask,ReservedMask,FieldType>,Cmd>> : MPL::TrueType{};
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

			template<typename... Ts>
			using GetReturnTypeT = ValueObject<
					UniqueT<SortT<TransformT<
						GetReadsT<List<Ts...>>,
						Template<GetAddress>
					>>>,
					GetReadsT<List<Ts...>>
				>;
		}

		//if apply contains reads return a ValueObject
		template<typename...Args>
		inline MPL::DisableIfT<(MPL::SizeT<Detail::GetReadsT<MPL::List<Args...>>>::value == 0),
			Detail::GetReturnTypeT<Args...>>
		apply(Args...args){
			using namespace MPL;
			//associate all actions with their value index
			unsigned a[] = {Detail::argToInt(args)...};
			using IndexedActions = TransformT<List<Args...>,BuildIndicesT<sizeof...(Args)>,Template<Detail::MakeIndexedAction>>;
			using FlattenedActions = FlattenT<IndexedActions>;
			using Steps = SplitT<FlattenedActions,SequencePoint>;
			using Actions = MPL::FlattenT<Steps>;
			return Detail::Apply<Actions>{}(a);
		}

		//if apply does not contain reads return is void
		template<typename...Args>
		inline MPL::EnableIfT<(MPL::SizeT<Detail::GetReadsT<MPL::FlattenT<MPL::List<Args...>>>>::value == 0)>
		apply(Args...args){
			using namespace MPL;
			unsigned a[] = {Detail::argToInt(args)...};
			using IndexedActions = TransformT<List<Args...>,BuildIndicesT<sizeof...(Args)>,Template<Detail::MakeIndexedAction>>;
			using FlattenedActions = FlattenT<IndexedActions>;
			using Steps = SplitT<FlattenedActions,SequencePoint>;
			using Actions = MPL::FlattenT<Steps>;
			Detail::NoReadApply<Actions>{}(a);
		}
	}
}
