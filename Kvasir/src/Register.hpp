/**************************************************************************
 * This file contains the Kvasir Register Action DSL (Domain Specific Language)
 * and Single register abstraction which provide an extra layer between Hardware SFRs
 * (Special Function Registers) and code accessing them.
Copyright 2015 Odin Holmes
Aditional contribution from Stephan Bökelmann

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
#include "MPLTypes.hpp"
#include "MPLUtility.hpp"
#include "MPLAlgorithm.hpp"

namespace Kvasir {

	namespace Register{
		//this function produces an MPL::List just like MPL::list, however putting
		//one here allows adl to find it without the user having to write out the
		//whole namespace. Making the list take at least one parameter should
		//prevent ambiguity in a case where MPL::list is also an overload candidate
		template<typename T, typename... Ts>
		constexpr MPL::List<T,Ts...> list(T,Ts...){ return MPL::List<T,Ts...>{}; }

		struct SequencePoint{};
		constexpr SequencePoint sequencePoint{};

		namespace Address{
			template<int I>
			struct ReadWrite{
				static constexpr int value = I;
			};
			template<int I>
			struct WriteOnly{
				static constexpr int value = I;
			};
			template<int I>
			struct ReadOnly{
				static constexpr int value = I;
			};
			template<int I>
			struct ClearOnRead{
				static constexpr int value = I;
			};
			template<int I>
			struct BlindWrite{
				static constexpr int value = I;
			};
		}

		template<int I>
		struct WriteLiteralAction{
			static constexpr int value = I;
		};
		struct WriteAction{
			int value_;
		};
		struct ReadAction{

		};
		template<int I>
		struct XorLiteralAction{
			static constexpr int value = I;
		};
		template<typename TLocation, typename TAction>
		struct Action : TAction {
			template<typename... Ts>
			constexpr Action(Ts...args):TAction{args...}{};
			using Type = Action<TLocation,TAction>;
		};

		template<typename TAddress, int Mask, int ReservedMask = 0, typename TFieldType = int>
		struct BitLocation{
			using Type = BitLocation<TAddress, Mask, ReservedMask, TFieldType>;
		};

		template<int Address, int Mask, int ReservedMask = 0, typename TFieldType = int>
		using RWLocation = BitLocation<Address::ReadWrite<Address>,Mask,ReservedMask,TFieldType>;
		template<int Address, int Mask, int ReservedMask = 0, typename TFieldType = int>
		using BWLocation = BitLocation<Address::BlindWrite<Address>,Mask,ReservedMask,TFieldType>;
		template<int Address, int Mask, int ReservedMask = 0, typename TFieldType = int>
		using ROLocation = BitLocation<Address::ReadOnly<Address>,Mask,ReservedMask,TFieldType>;



		//leagacy factories
		template<int Address,int Mask, int Data>
		using WriteActionT = Action<BitLocation<Address::ReadWrite<Address>,Mask>,WriteLiteralAction<Data>>;
		template<int Address,int Offset, bool Data>
		using WriteBitActionT = Action<BitLocation<Address::ReadWrite<Address>,(1<<Offset)>,WriteLiteralAction<(Data<<Offset)>>;
		template<int Address,int Offset>
		using BlindSetBitActionT = Action<BitLocation<Address::BlindWrite<Address>,(1<<Offset)>,WriteLiteralAction<(1<<Offset)>>;

		template<int Address,int Mask, int Data>
		using BlindWriteActionT = Action<BitLocation<Address::BlindWrite<Address>,Mask>,WriteLiteralAction<Data>>;
		template<int Address,int Mask, int Data>
		using XorActionT = Action<BitLocation<Address::ReadWrite<Address>,Mask>,XorLiteralAction<Data>>;

		template<typename TAddresses, typename TActions>
		struct ValueObject;		//see below for implementation in specialization


		namespace Detail{
			using namespace MPL;

			constexpr bool onlyOneBitSet(int i){
				return (i==(1<<0)) || (i==(1<<1)) || (i==(1<<2)) || (i==(1<<3)) || (i==(1<<4)) || (i==(1<<5)) || (i==(1<<6)) || (i==(1<<7)) || (i==(1<<8)) || (i==(1<<9)) || (i==(1<<10)) || (i==(1<<11)) || (i==(1<<12)) || (i==(1<<13)) || (i==(1<<14)) || (i==(1<<15)) || (i==(1<<16)) || (i==(1<<17)) || (i==(1<<18)) || (i==(1<<19)) || (i==(1<<20)) || (i==(1<<21)) || (i==(1<<22)) || (i==(1<<23)) || (i==(1<<24)) || (i==(1<<25)) || (i==(1<<26)) || (i==(1<<27)) || (i==(1<<28)) || (i==(1<<29)) || (i==(1<<30)) || (i==(1<<31));
			}

			constexpr int positionOfFirstSetBit(int in, int pos=0){
				return (in & 0x01)?pos:positionOfFirstSetBit(in >> 1, pos + 1);
			}

			//getters for specific parameters of an Action
			template<typename T>
			struct GetAddress;
			template<template<int I> class AC, int Address, int Mask, int ReservedMask, typename ResultType, typename TAction>
			struct GetAddress<Action<BitLocation<AC<Address>,Mask,ReservedMask,ResultType>,TAction>> {
				static constexpr int value = Address;
				static constexpr int read(){
					return *((volatile int*)value);
				}
				using Type = Int<Address>;
			};

			template<typename T>
			struct GetResultType;
			template<template<int I> class AC, int Address, int Mask, int ReservedMask, typename ResultType, typename TAction>
			struct GetResultType<Action<BitLocation<AC<Address>,Mask,ReservedMask,ResultType>,TAction>> {
				using Type = ResultType;
			};
			template<template<int I> class AC, int Address, int Mask, int ReservedMask, typename ResultType>
			struct GetResultType<BitLocation<AC<Address>,Mask,ReservedMask,ResultType>>{
				using Type = ResultType;
			};
			template<typename T>
			using GetResultTypeT = typename GetResultType<T>::Type;

			template<typename TLocation>
			struct Set;
			template<int Address, int Mask, int ReservedMask>
			struct Set<BitLocation<Address::ReadWrite<Address>,Mask,ReservedMask,int>> : Action<BitLocation<Address::ReadWrite<Address>,Mask,ReservedMask,int>,WriteLiteralAction<Mask>>{
				static_assert(onlyOneBitSet(Mask),"Register::set only works on single bits. Use Register::write to write values to wider bit fields");
			};
			template<int Address, int Mask, int ReservedMask>
			struct Set<BitLocation<Address::BlindWrite<Address>,Mask,ReservedMask,int>> : Action<BitLocation<Address::BlindWrite<Address>,Mask,ReservedMask,int>,WriteLiteralAction<Mask>>{
				static_assert(onlyOneBitSet(Mask),"Register::set only works on single bits. Use Register::write to write values to wider bit fields");
			};
			template<typename TLocation>
			struct Clear;
			template<int Address, int Mask, int ReservedMask>
			struct Clear<BitLocation<Address::ReadWrite<Address>,Mask,ReservedMask,int>> : Action<BitLocation<Address::ReadWrite<Address>,Mask,ReservedMask,int>,WriteLiteralAction<0>>{
				static_assert(onlyOneBitSet(Mask),"Register::clear only works on single bits. Use Register::write to write values to wider bit fields");
			};
			template<int Address, int Mask, int ReservedMask>
			struct Clear<BitLocation<Address::BlindWrite<Address>,Mask,ReservedMask,int>> : Action<BitLocation<Address::BlindWrite<Address>,Mask,ReservedMask,int>,WriteLiteralAction<0>>{
				static_assert(onlyOneBitSet(Mask),"Register::clear only works on single bits. Use Register::write to write values to wider bit fields");
			};

			template<typename TLocation>
			using SetT = typename Set<TLocation>::Type;
			template<typename TLocation>
			using ClearT = typename Clear<TLocation>::Type;


			template<typename TLocation, int Value>
			struct Write;
			template<int Address, int Mask, int ReservedMask, typename TRes, int Value>
			struct Write<BitLocation<Address::ReadWrite<Address>,Mask,ReservedMask,TRes>,Value> : Action<BitLocation<Address::ReadWrite<Address>,Mask,ReservedMask,TRes>,WriteLiteralAction<Value>>{};
			template<int Address, int Mask, int ReservedMask, typename TRes, int Value>
			struct Write<BitLocation<Address::BlindWrite<Address>,Mask,ReservedMask,TRes>,Value> : Action<BitLocation<Address::BlindWrite<Address>,Mask,ReservedMask,TRes>,WriteLiteralAction<Value>>{};
			template<typename TLocation, int Value>
			using WriteT = typename Write<TLocation,Value>::Type;

			//predecate retuning result of left < right for RegisterOptions
			template<typename T_Left, typename T_Right>
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


			template<typename TRegisterAction>
			struct WriteRegister;

			template<int A, int Mask, int Data>
			struct WriteRegister<Register::Action<BitLocation<Address::ReadWrite<A>,Mask>,WriteLiteralAction<Data>>>{
				static_assert((Data & (~Mask))==0,"bad mask");
				int operator()(){
					auto& reg = *(volatile int*)A;
					auto i = reg;
					i &= ~Mask;
					i |= Data;
					reg = i;
					return 0;
				}
			};
			template<int A, int Mask, int Data>
			struct WriteRegister<Register::Action<BitLocation<Address::BlindWrite<A>,Mask>,WriteLiteralAction<Data>>>{
				static_assert((Data & (~Mask))==0,"bad mask");
				int operator()(){
					auto& reg = *(volatile int*)A;
					reg = Data;
					return 0;
				}
			};
			template<int A, int Mask, int Data>
			struct WriteRegister<Register::Action<BitLocation<Address::ReadWrite<A>,Mask>,XorLiteralAction<Data>>>{
				static_assert((Data & (~Mask))==0,"bad mask");
				int operator()(){
					auto& reg = *(volatile int*)A;
					reg ^= Data;
					return 0;
				}
			};

			template<typename...Ts>
			struct WriteRegister<MPL::List<Ts...>>{
				int operator()(){
					int a[] = {WriteRegister<Ts>{}()...};
					MPL::ignore(a);
					return 0;
				}
			};

			template<typename TRegisters, typename TRet = List<>> //default
			struct MergeRegisterActions;

			template<typename TNext, typename... Ts> //none processed yet
			struct MergeRegisterActions<List<TNext, Ts...>, List<>> : MergeRegisterActions<List<Ts...>,List<TNext>>{};

			template<template<int> class TAddressTemplate, int Address, int Mask1, int Mask2, template<int> class TActionTemplate, int Value1, int Value2, typename... Ts, typename... Us> //next and last mergable
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


		template<typename T>
		constexpr inline Action<T,ReadAction> read(T){
			return Action<T,ReadAction>{};
		}

		template<typename T>
		constexpr inline Detail::SetT<T> set(T){
			return Detail::SetT<T>{};
		}

		template<typename T>
		constexpr inline Detail::ClearT<T> clear(T){
			return Detail::ClearT<T>{};
		}

		//runtime value
		template<typename T>
		constexpr Action<T,WriteAction> write(T,Detail::GetResultTypeT<T> in){
			return Action<T,WriteAction>{int(in)};
		}
		//compile time value
		namespace Detail{
			template<typename T>
			struct ValueToInt;
			template<typename T, T I>
			struct ValueToInt<MPL::Value<T,I>> : MPL::Int<int(I)>{};
		}
		template<typename T, typename U>
		constexpr inline Detail::WriteT<T,Detail::ValueToInt<U>::value> write(T, U){
			return Detail::WriteT<T,Detail::ValueToInt<U>::value>{};
		}

		//apply implementation
		namespace Detail{

			template<typename TAction, int Index>
			struct IndexedAction{
				using Type = IndexedAction<TAction,Index>;
			};

			template<int I>
			struct AddFixedIndexPred{
				template<typename T>
				struct Apply : IndexedAction<T,I>{};
			};

			//special case where a list of actions is passed
			template<typename... Ts, int Index>
			struct IndexedAction<List<Ts...>,Index>:
				TransformT<
					FlattenT<List<Ts...>>,
					Template<AddFixedIndexPred<Index>::template Apply>>{};

			template<int I>
			struct FindIndexPred{
				template<typename T>
				struct Apply : MPL::FalseType {};
				template<typename T>
				struct Apply<IndexedAction<T,I>> : MPL::TrueType{};
			};



			template<typename Indexes, typename... TRawArgs>
			struct Apply;
			template<int... Is, typename... TRawArgs>
			struct Apply<Indices<Is...>,TRawArgs...>{
				using ArgList = List<TRawArgs...>;
				//find the result type
				using Reads = RemoveIfT<ArgList,Template<IsNotReadPred>>;
				using Addresses = UniqueT<SortT<TransformT<Reads,Template<GetAddress>>>>;
				using ReturnType = ValueObject<Addresses,Reads>;
				//associate all actions with their value index
				using IndexedActions = List<IndexedAction<TRawArgs,Is>...>;
				using FlattenedActions = MPL::FlattenT<IndexedActions>;
				using Steps = MPL::SplitT<FlattenedActions,SequencePoint>;
				using MergedSteps = Steps;

				template<typename TMergedSteps, typename TReturnIndexes>
				struct ExecuteMergedObjects;
				template<typename... TMergedObjects, int... ReturnIndexes>
				struct ExecuteMergedObjects<List<TMergedObjects...>,Indices<ReturnIndexes...>>{

					template<int AddressIndex>
					struct ReturnFilter{
						int operator()(const int(&rets)[sizeof...(TMergedObjects)]){
							return 0; //TODO
						}
					};

					ReturnType operator()(const int(&args)[sizeof...(TRawArgs)]){
						const int returns[]{/*TMergedObjects{}(args)...*/1};
						return ReturnType{ReturnFilter<ReturnIndexes>{}(returns)...};
					}
				};
				template<typename T, typename = decltype(T::value_)>
				int argToInt(T arg){
					return arg.value_;
				}
				int argToInt(...){
					return 0;
				}
				ReturnType operator()(TRawArgs... args){
					const int args_[]{argToInt(args)...};
					return ExecuteMergedObjects<MergedSteps,BuildIndicesT<SizeT<Addresses>::value>>{}(args_);
				}
			};
		}

		template<typename...Args>
		inline typename Detail::Apply<MPL::BuildIndicesT<sizeof...(Args)>,Args...>::ReturnType apply(Args...args){
			return Detail::Apply<MPL::BuildIndicesT<sizeof...(Args)>,Args...>{}(args...);
		}


		// ValueObject implemtation
		namespace Detail{
			using namespace MPL;
			template<int I, typename... TResults>
			struct GetReturnTypeFromIndex : GetT<FlattenT<List<TResults...>>,Template<FindIndexPred<I>::template Apply>,void>{};
			template<int I, int R, typename T, typename... TResults>
			struct GetValueIndexFromIndexHelper : ConditionalT<ContainsT<T,Template<FindIndexPred<I>::template Apply>>::value,Int<R>,GetValueIndexFromIndexHelper<I,R+1,TResults...>>{
				static_assert(ContainsT<T,Template<FindIndexPred<I>::template Apply>>::value || sizeof...(TResults),"internal error: index not found");
			};
			template<int I, typename... TResults>
			struct GetValueIndexFromIndex : GetValueIndexFromIndexHelper<I,0,TResults...>{};
		}

		template<int... Is, typename... TAs, int... Masks, int... Reserveds, typename... TRs>
		struct ValueObject<MPL::List<MPL::Int<Is>...>,MPL::List<Action<BitLocation<TAs,Masks,Reserveds,TRs>,ReadAction>>...>{
			const int value_[sizeof...(Is)];
			template<int Index>
			MPL::AtT<MPL::List<TRs...>,MPL::Int<Index>> get() const{
				using namespace MPL;
				using Address = Int<AtT<List<TAs...>,Int<Index>>::value>;
				using ValueIndex = FindT<List<Int<Is>...>,Address>;
				using ResultType = AtT<List<TRs...>,Int<Index>>;
				using Mask = AtT<List<Int<Masks>...>,Int<Index>>;
				int r = (value_[ValueIndex::value] & Mask::value) >> positionOfFirstSetBit(Mask::value);
				return ResultType(r);
			}
			using Type = ValueObject<MPL::List<MPL::Int<Is>...>,MPL::List<Action<BitLocation<TAs,Masks,Reserveds,TRs>,ReadAction>>...>;
		};
		template<int I, typename TA, int Mask, int ReservedMask, typename TR>
		struct ValueObject<MPL::List<MPL::Int<I>>,MPL::List<Action<BitLocation<TA,Mask,ReservedMask,TR>,ReadAction>>>{
			const int value_;
			operator TR(){
				using namespace MPL;
				using Address = TA;
				using ResultType = TR;
				return ResultType((value_ & Mask) >> Detail::positionOfFirstSetBit(Mask));
			};
			using Type = ValueObject<MPL::List<MPL::Int<I>>,MPL::List<Action<BitLocation<TA,Mask,ReservedMask,TR>,ReadAction>>>;
		};
		template<>
		struct ValueObject<MPL::List<>,MPL::List<>>{
			using Type = ValueObject<MPL::List<>,MPL::List<>>;
		};
	}
}
