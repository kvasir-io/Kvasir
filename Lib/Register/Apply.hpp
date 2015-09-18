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
#include "Utility.hpp"
#include "Exec.hpp"


namespace Kvasir {

	namespace Register{

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
				typename TAccess1,
				typename TAccess2,
				typename TFieldType1, typename TFieldType2,
				template<unsigned> class TActionTemplate,
				unsigned Value1, unsigned Value2,
				unsigned ReadMask1, unsigned ReadMask2,
				typename... TInputs1, typename... TInputs2,
				typename... Ts, typename... Us> //next input and last merged are mergable
			struct MergeRegisterActions<
					List<IndexedAction<Action<BitLocation<TAddress,Mask1,TAccess1,TFieldType1>,TActionTemplate<Value1>>, ReadMask1, TInputs1...>, Ts...>,
					List<IndexedAction<Action<BitLocation<TAddress,Mask2,TAccess2,TFieldType2>,TActionTemplate<Value2>>, ReadMask2, TInputs2...>, Us...>
				> :	MergeRegisterActions<
					List<Ts...>,
					List<IndexedAction<Action<
						BitLocation<
							TAddress,
							(Mask1 | Mask2), 						//merge
							TAccess1>,							//dont care, plausibility check has already been done
							TActionTemplate<(Value1 | Value2)>	//merge
							//TODO implement register type here
						>,
						(ReadMask1 | ReadMask2), 					//merge
						TInputs1..., TInputs2...>,				//concatinate
						Us...>									//pass through rest
			>{};

			template<typename TNext, typename TLast, typename... Ts, typename... Us> //next and last not mergable
			struct MergeRegisterActions<
				List<TNext, Ts...>,List<TLast, Us...>>
				: MergeRegisterActions<
				  	  List<Ts...>,
					  List<TNext, TLast, Us...>>{};

			template<typename... Ts> //done
			struct MergeRegisterActions<List<>,List<Ts...>> : List<Ts...>{};

			template<typename T>
			using MergeRegisterActionsT = typename MergeRegisterActions<T>::Type;

			template<typename TList>
			struct MergeActionSteps;
			template<typename... Ts>
			struct MergeActionSteps<MPL::List<Ts...>>
				: MPL::List<
					MergeRegisterActionsT<
						MPL::SortT<MPL::FlattenT<Ts>,Detail::IndexedActionLessP>
					>...
					>{};

			template<typename T>
			using MergeActionStepsT = typename MergeActionSteps<T>::Type;


			template<typename TAction, unsigned ReadMask, typename... TInputs>
			struct GetAddress<IndexedAction<TAction,ReadMask,TInputs...>>
				: GetAddress<TAction> {};

			template<unsigned Mask, typename TAction>
			struct MakeReadMask : Unsigned<0>{};
			template<unsigned Mask>
			struct MakeReadMask<Mask, ReadAction> : Unsigned<Mask>{};

			template<typename TAction, typename Index>
			struct MakeIndexedAction;
			//in default case there is no actual expected input
			template<typename TAddress, unsigned Mask, typename TAccess, typename TR, typename TAction, int Index>
			struct MakeIndexedAction<Action<BitLocation<TAddress,Mask,TAccess,TR>,TAction>,Int<Index>>
				:	IndexedAction<Action<BitLocation<TAddress,Mask,TAccess,TR>,TAction>,MakeReadMask<Mask,TAction>::value>{};

			//special case where there actually is expected input
			template<typename TAddress, unsigned Mask, typename TAccess, typename TR, int Index>
			struct MakeIndexedAction<Action<BitLocation<TAddress,Mask,TAccess,TR>,WriteAction>,Int<Index>>
				:	IndexedAction<
					Action<BitLocation<TAddress,Mask,TAccess,TR>,WriteAction>,
					MakeReadMask<Mask,WriteAction>::value,
					IndexedInput<Index,Mask>>{};

			//special case where a list of actions is passed
			template<typename... Ts, typename Index>
			struct MakeIndexedAction<List<Ts...>,Index>
				: List<typename MakeIndexedAction<Ts,Index>::Type...>{};
			//special case where a list of actions is passed
			template<typename Index>
			struct MakeIndexedAction<SequencePoint,Index> : SequencePoint{};

			template<typename TAction, typename Index>
			using MakeIndexedActionT = typename MakeIndexedAction<TAction,Index>::Type;


			template<unsigned I>
			struct IsAddressPred{
				template<typename T>
				struct Apply : MPL::FalseType {};
				template<typename TAddress, unsigned Mask, typename TAccess, typename TFieldType, typename Cmd>
				struct Apply<Action<BitLocation<TAddress,Mask,TAccess,TFieldType>,Cmd>>
					: MPL::Value<bool,(I==GetAddress<TAddress>::value)>{};
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
