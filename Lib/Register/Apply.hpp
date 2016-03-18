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
#include "Mpl/Types.hpp"
#include "Mpl/Utility.hpp"
#include "Mpl/Algorithm.hpp"
#include "Types.hpp"
#include "Utility.hpp"
#include "Exec.hpp"
#include "Common/Tags.hpp"
#include <utility>
namespace Kvasir {

	namespace Register{

		namespace Detail{
			namespace br = brigand;

			template<std::size_t I, typename O, typename A, typename L>
			struct MakeSeperatorsImpl {
				using type = O;
			};
			template<std::size_t I, typename...O, typename...A, typename...T>
			struct MakeSeperatorsImpl<I, br::list<O...>, br::list<A...>, br::list<br::size_t<I>, T...>> :
				MakeSeperatorsImpl<(I + 1), br::list<O..., br::list<A...>>, br::list<>, br::list<T...>> {};

			template<std::size_t I, typename...O, typename...A, typename U, typename...T>
			struct MakeSeperatorsImpl<I, br::list<O...>, brigand::list<A...>, brigand::list<U, T...>> :
				MakeSeperatorsImpl<I + 1, brigand::list<O...>, brigand::list<A..., unsigned>, brigand::list<U, T...>> {};
			template<typename T>
			using MakeSeperators = MakeSeperatorsImpl<0, brigand::list<>, brigand::list<>, brigand::sort<T>>;

			//an index action consists of an action (possably merged) and
			//the inputs including masks which it needs
			template<typename TAction, typename... TInputs>
			struct IndexedAction{
				using type = IndexedAction<TAction,TInputs...>;
			};


			template<typename T>
			struct GetAction;
			template<typename A, typename...T>
			struct GetAction<IndexedAction<A, T...>> {
				using type = A;
			};
			
			template<typename F, typename A>
			struct GetAction<Action<F, A>> {
				using type = Action<F, A>;
			};

			template<typename T>
			struct GetInputsImpl;
			template<typename A, typename...T>
			struct GetInputsImpl<IndexedAction<A, T...>> {
				using type = MakeSeperators<brigand::list<T...>>;
			};
			template<typename T>
			using GetInputs = typename GetInputsImpl<T>::type;


			//predecate retuning result of left < right for RegisterOptions
			template<typename TLeft, typename TRight>
			struct IndexedActionLess;
			template<typename T1, typename U1, typename T2, typename U2, typename... TInputs1, typename... TInputs2>
			struct IndexedActionLess< IndexedAction<Action<T1, U1>, TInputs1...>, IndexedAction<Action<T2, U2>, TInputs2... >> : Bool<(GetAddress<T1>::value < GetAddress<T2>::value)> {};
			template<typename T1, typename U1, typename T2, typename U2>
			struct IndexedActionLess< Action<T1, U1>, Action<T2, U2>> : Bool<(GetAddress<T1>::value < GetAddress<T2>::value)> {};

			template<typename TRegisters, typename TRet = brigand::list<>> //default
			struct MergeRegisterActions;

			template<typename TNext, typename... Ts> //none processed yet
			struct MergeRegisterActions<brigand::list<TNext, Ts...>, brigand::list<>> : MergeRegisterActions<brigand::list<Ts...>, brigand::list<TNext>>{};

			template<
				typename TAddress,
				unsigned Mask1, unsigned Mask2,
				typename TAccess1,
				typename TAccess2,
				typename TFieldType1, typename TFieldType2,
				template<unsigned> class TActionTemplate,
				unsigned Value1, unsigned Value2,
				typename... TInputs1, typename... TInputs2,
				typename... Ts, typename... Us> //next input and last merged are mergable
			struct MergeRegisterActions<
				brigand::list<IndexedAction<Action<FieldLocation<TAddress,Mask1,TAccess1,TFieldType1>,TActionTemplate<Value1>>, TInputs1...>, Ts...>,
				brigand::list<IndexedAction<Action<FieldLocation<TAddress,Mask2,TAccess2,TFieldType2>,TActionTemplate<Value2>>, TInputs2...>, Us...>
				> :	MergeRegisterActions<
				brigand::list<Ts...>,
				brigand::list<IndexedAction<Action<
						FieldLocation<
							TAddress,
							(Mask1 | Mask2), 						//merge
							TAccess1>,							//dont care, plausibility check has already been done
							TActionTemplate<(Value1 | Value2)>	//merge
							//TODO implement register type here
						>,
						TInputs1..., TInputs2...>,				//concatinate
						Us...>									//pass through rest
			>{};

			template<typename TNext, typename TLast, typename... Ts, typename... Us> //next and last not mergable
			struct MergeRegisterActions<
				brigand::list<TNext, Ts...>, brigand::list<TLast, Us...>>
				: MergeRegisterActions<
				brigand::list<Ts...>,
				brigand::list<TNext, TLast, Us...>>{};

			template<typename... Ts> //done
			struct MergeRegisterActions<brigand::list<>, brigand::list<Ts...>> {
				using type = brigand::list<Ts...>;
			};

			template<typename T>
			using MergeRegisterActionsT = typename MergeRegisterActions<T>::type;

			template<typename TList>
			struct MergeActionSteps;
			template<typename... Ts>
			struct MergeActionSteps<brigand::list<Ts...>> {
				using type = brigand::list<
					MergeRegisterActionsT<
					brigand::sort<brigand::flatten<Ts>, Detail::IndexedActionLess<brigand::_1,brigand::_2>>
					//SortT<brigand::flatten<Ts>, MPL::Template<Detail::IndexedActionLess>>
					>...
				>;
			};

			template<typename T>
			using MergeActionStepsT = typename MergeActionSteps<T>::type;


			template<typename TAction, typename... TInputs>
			struct GetAddress<IndexedAction<TAction,TInputs...>>
				: GetAddress<TAction> {};

			template<bool TopLevel, typename TAction, typename Index>
			struct MakeIndexedActionImpl;
			//in default case there is no actual expected input
			template<bool TopLevel, typename TAddress, unsigned Mask, typename TAccess, typename TR, typename TAction, int Index>
			struct MakeIndexedActionImpl<TopLevel, Action<FieldLocation<TAddress,Mask,TAccess,TR>,TAction>,Int<Index>>{
				using type = IndexedAction<Action<FieldLocation<TAddress, Mask, TAccess, TR>, TAction>>;
			};

			//special case where there actually is expected input
			template<bool TopLevel, typename TAddress, unsigned Mask, typename TAccess, typename TR, int Index>
			struct MakeIndexedActionImpl<TopLevel, Action<FieldLocation<TAddress, Mask, TAccess, TR>, WriteAction>, Int<Index>> {
				static_assert(TopLevel, "runtime values can only be executed in an apply, they cannot be stored in a list");
				using type = IndexedAction<
					Action<FieldLocation<TAddress, Mask, TAccess, TR>, WriteAction>,
					brigand::size_t<Index >> ;
			};

			//special case where there actually is expected input
			template<bool TopLevel, typename TAddress, unsigned Mask, typename TAccess, typename TR, int Index>
			struct MakeIndexedActionImpl<TopLevel, Action<FieldLocation<TAddress, Mask, TAccess, TR>, XorAction>, Int<Index>> {
				static_assert(TopLevel, "runtime values can only be executed in an apply, they cannot be stored in a list");
				using type = IndexedAction<
					Action<FieldLocation<TAddress, Mask, TAccess, TR>, WriteAction>,
					brigand::size_t<Index >> ;
			};

			//special case where a list of actions is passed
			template<bool TopLevel, typename... Ts, typename Index>
			struct MakeIndexedActionImpl<TopLevel, brigand::list<Ts...>,Index>{
				using type = brigand::list<typename MakeIndexedActionImpl<false, Ts, Index>::type...>;
			};
			//special case where a sequence point is passed
			template<bool TopLevel, typename Index>
			struct MakeIndexedActionImpl<TopLevel, SequencePoint,Index> {
				using type = SequencePoint;
			};

			template<typename TAction, typename Index>
			using MakeIndexedAction = typename MakeIndexedActionImpl<true,TAction,Index>::type;


			template<unsigned I>
			struct IsAddressPred{
				template<typename T>
				struct apply : MPL::FalseType {};
				template<typename TAddress, unsigned Mask, typename TAccess, typename TFieldType, typename Cmd>
				struct apply<Action<FieldLocation<TAddress,Mask,TAccess,TFieldType>,Cmd>>
					: MPL::Value<bool,(I==GetAddress<TAddress>::value)>{};
			};

			//takes an args list or tree, flattens it and removes all actions which are not reads
			template<typename... TArgList>
			using GetReadsT = brigand::transform<brigand::remove_if<brigand::flatten<brigand::list<TArgList...>>, IsNotReadPred<brigand::_1>>, GetFieldLocation<brigand::_1>>;			
			
			template<typename...T>
			constexpr bool noneRuntime()
			{
				return brigand::size<brigand::remove_if<brigand::list<T...>, IsNotRuntimeWritePred<brigand::_1>>>::value == 0;
			}
			
			template<typename... T>
			struct AllCompileTime { 
				static constexpr bool value = (brigand::size<Detail::GetReadsT<brigand::list<T...>>>::value == 0) && noneRuntime<T...>();
			};

			template<typename... T>
			struct NoReadsRuntimeWrites { 
				static constexpr bool value = (brigand::size<Detail::GetReadsT<brigand::list<T...>>>::value == 0) && !noneRuntime<T...>();
			};

			template<typename T>
			struct GetReadMask : Int<0>{};

			template<typename T>
			struct GetAddresses;
			template<typename TAddresses, typename TLocations>
			struct GetAddresses<FieldTuple<TAddresses,TLocations>> : TAddresses{};


			template<typename T, typename = decltype(T::value_)>
			DEBUG_OPTIMIZE unsigned argToUnsigned(T arg){
				return arg.value_;
			}
			DEBUG_OPTIMIZE inline unsigned argToUnsigned(...){
				return 0;
			}


			//finder takes a list of lists of unsigned, each list represets a 
			//pack of arguements to be ignored. All non ignored arguements will 
			//be ored together

			template<typename T>
			struct Finder;
			template<>
			struct Finder<brigand::list<>> {
				DEBUG_OPTIMIZE unsigned operator()(...) {
					return 0;
				}
			};
			template<typename...A>
			struct Finder<brigand::list<brigand::list<A...>>> {
				template<typename...T>
				DEBUG_OPTIMIZE unsigned operator()(A..., unsigned a, T...) {
					return a;
				}
			};
			template<typename...A, typename...B>
			struct Finder<brigand::list<brigand::list<A...>, brigand::list<B...>>> {
				template<typename...T>
				DEBUG_OPTIMIZE unsigned operator()(A..., unsigned a, B..., unsigned b, T...) {
					return a | b;
				}
			};
			template<typename...A, typename...B, typename...Rest>
			struct Finder<brigand::list<brigand::list<A...>, brigand::list<B...>, Rest...>> {
				template<typename...T>
				DEBUG_OPTIMIZE unsigned operator()(A..., unsigned a, B..., unsigned b, T...t) {
					auto r = Finder < brigand::list<Rest...>>{};
					return a | b | r(t...);
				}
			};

			template<typename TActionList, typename TInputIndexList, typename TRetType>
			struct Apply;
			template<typename... TActions, typename...TInputIndexes, typename... TRetAddresses, typename TRetLocations>
			struct Apply<brigand::list<TActions...>,brigand::list<TInputIndexes...>, FieldTuple<brigand::list<TRetAddresses...>,TRetLocations>>{
				using ReturnType = FieldTuple<brigand::list<TRetAddresses...>, TRetLocations>;
				template<unsigned A>
				DEBUG_OPTIMIZE typename std::enable_if<brigand::contains<brigand::set<TRetAddresses...>,brigand::uint32_t<A>>::value>::type filterReturns(ReturnType& ret, unsigned in) {
					ret.value_[sizeof...(TRetAddresses)-brigand::size<brigand::find<brigand::list<TRetAddresses...>, std::is_same<brigand::uint32_t<A>,brigand::_1>>>::value] |= in;
				}
				template<unsigned A>
				DEBUG_OPTIMIZE void filterReturns(...) {}
				
				template<typename...T>
				DEBUG_OPTIMIZE ReturnType operator()(T...args){
					ReturnType ret{ {} }; //default constructed return
					const int a[]{ 0, (filterReturns<Detail::GetAddress<TActions>::value>(ret,ExecuteSeam<TActions, ::Kvasir::Tag::User>{}(Finder<TInputIndexes>{}(args...))),0)... };
					ignore(a);

					return ret;
				}
			};

			//no read apply
			template<typename TActionList, typename TInputIndexList>
			struct NoReadApply;
			template<typename... TActions, typename...TInputIndexes>
			struct NoReadApply<brigand::list<TActions...>, brigand::list<TInputIndexes...>> {
				template<typename...T>
				DEBUG_OPTIMIZE void operator()(T...args) {
					const int a[]{ 0, (ExecuteSeam<TActions, ::Kvasir::Tag::User>{}(Finder<TInputIndexes>{}(args...)),0)... };
					ignore(a);
				}
			};
			
			//no read no runtime write apply
			template<typename... TActions>
			DEBUG_OPTIMIZE void noReadNoRuntimeWriteApply(brigand::list<TActions...>*) {
				const int a[]{ 0, ExecuteSeam<TActions,::Kvasir::Tag::User> { }(0)... };
				ignore(a);
			}

			template<typename... Ts>
			using GetReturnType = FieldTuple<
					UniqueT<brigand::sort<brigand::transform<
						GetReadsT<Ts...>,
						brigand::quote<GetAddress>
					>>>,
					GetReadsT<Ts...>
				>;
			template<typename T>
			struct ArgToApplyIsPlausible : FalseType{};
			template<typename L, typename A>
			struct ArgToApplyIsPlausible<Action<L,A>> : TrueType{};
			template<>
			struct ArgToApplyIsPlausible<SequencePoint> : TrueType{};
			template<typename T, typename... Ts>
			struct ArgsToApplyArePlausible{
				using l = brigand::flatten < brigand::list<T, Ts...>>;
				using type = MPL::Bool <
					std::is_same<
						MPL::RepeatC<brigand::size<l>::value,MPL::TrueType>,
						brigand::transform<l, brigand::quote<ArgToApplyIsPlausible>>>::value>;
				static constexpr int value = type::value;
			};

		}

		//if apply contains reads return a FieldTuple
		template<typename...Args>
			DEBUG_OPTIMIZE inline typename std::enable_if<(brigand::size<Detail::GetReadsT<brigand::list<Args...>>>::value != 0),
			Detail::GetReturnType<Args...>>::type
		apply(Args...args){
			static_assert(Detail::ArgsToApplyArePlausible<Args...>::value,"one of the supplied arguments is not supported");
			using IndexedActions = brigand::transform<brigand::list<Args...>,MPL::BuildIndicesT<sizeof...(Args)>,brigand::quote<Detail::MakeIndexedAction>>;
			using FlattenedActions = brigand::flatten<IndexedActions>;
			using Steps = brigand::split<FlattenedActions,SequencePoint>;
			using Merged = Detail::MergeActionStepsT<Steps>;
			using Actions = brigand::flatten<Merged>;
			using Functors = brigand::transform<Actions, brigand::quote<Detail::GetAction>>;
			using Inputs = brigand::transform<Actions, brigand::quote<Detail::GetInputs>>; //list of lists of lits of unsigned seperators
			Detail::Apply<Functors, Inputs, Detail::GetReturnType<Args...>> a{};
			return a(Detail::argToUnsigned(args)...);
		}

		//if apply does not contain reads return is void
		template<typename...Args>
		DEBUG_OPTIMIZE typename std::enable_if<Detail::NoReadsRuntimeWrites<Args...>::value>::type
			apply(Args...args) {
			static_assert(Detail::ArgsToApplyArePlausible<Args...>::value, "one of the supplied arguments is not supported");
			using IndexedActions = brigand::transform<brigand::list<Args...>, MPL::BuildIndicesT<sizeof...(Args)>, brigand::quote<Detail::MakeIndexedAction>>;
			using FlattenedActions = brigand::flatten<IndexedActions>;
			using Steps = brigand::split<FlattenedActions, SequencePoint>;
			using Merged = Detail::MergeActionStepsT<Steps>;
			using Actions = brigand::flatten<Merged>;
			using Functors = brigand::transform<Actions, brigand::quote<Detail::GetAction>>;
			using Inputs = brigand::transform<Actions, brigand::quote<Detail::GetInputs>>;
			Detail::NoReadApply<Functors, Inputs> a{};
			a(Detail::argToUnsigned(args)...);
		}
		
		
		//if apply does not contain reads or runtime writes we can speed things up
		template<typename...Args>
		DEBUG_OPTIMIZE typename std::enable_if<Detail::AllCompileTime<Args...>::value>::type
			apply(Args...args) {
			static_assert(Detail::ArgsToApplyArePlausible<Args...>::value, "one of the supplied arguments is not supported");
			//using IndexedActions = brigand::transform<brigand::list<Args...>, MPL::BuildIndicesT<sizeof...(Args)>, brigand::quote<Detail::MakeIndexedAction>>;
			using FlattenedActions = brigand::flatten<brigand::list<Args...>>;
			using Steps = brigand::split<FlattenedActions, SequencePoint>;
			using Merged = Detail::MergeActionStepsT<Steps>;
			using Actions = brigand::flatten<Merged>;
			//using Functors = brigand::transform<Actions, brigand::quote<Detail::GetAction>>;
			Detail::noReadNoRuntimeWriteApply((Actions*)nullptr);
		}

		//no parameters is allowed because it could be used in maschine generated code
		//it does nothing
		inline void apply(){}
		inline void apply(brigand::list<>){}

		template<typename TField, typename TField::DataType Value>
		DEBUG_OPTIMIZE inline bool fieldEquals(FieldValue<TField, Value> ) {
			return apply(Action<TField,ReadAction>{}) == Value;
		}
	}
}
