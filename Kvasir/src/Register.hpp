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

		template<typename Address, int Mask>
		struct BitLocation{
			static constexpr int mask = Mask;
			static constexpr int address = Address::value;
			using Type = BitLocation<Address, Mask>;
		};

		template<int Address, int Mask>
		using RWLocation = BitLocation<>

		template<int I>
		struct WriteLiteralAction{
			static constexpr int value = I;
		};
		template<int I>
		struct XorLiteralAction{
			static constexpr int value = I;
		};
		template<typename TLocation, typename TAction>
		struct Action {
			using Type = Action<TLocation,TAction>;
		};

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

		template<int Address>
		struct ValueObject{
			const int value_;
			using Type = ValueObject<Address>;
		};


		namespace Detail{
			using namespace MPL;

			template<typename T>
			struct GetAddress;
			template<typename TLocation, typename TAction>
			struct GetAddress<Action<TLocation,TAction>> {
				static constexpr int value = TLocation::address;
				static constexpr int read(){
					return *((volatile int*)TLocation::address);
				}
			};

			template<typename T, typename... Ts>
			struct MakeReturn : ValueObject<GetAddress<T>::value>{
				//TODO enforce that all addresses are the same
			};
			template<typename T, typename... Ts>
			using MakeReturnT = typename MakeReturn<T,Ts...>::Type;
			//predecate retuning result of left < right for RegisterOptions
			template<typename T_Left, typename T_Right>
			struct RegisterActionLess;
			template<typename T1, typename U1, typename T2, typename U2>
			struct RegisterActionLess< Register::Action<T1,U1>, Register::Action<T2,U2> > : Bool<(T1::address < T2::address)>{};
			using RegisterActionLessP = Template<RegisterActionLess>;

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

		template<typename...Ts,typename...Args>
		inline void apply(Args...){
			using FlattenedRegisters = MPL::FlattenT<MPL::List<Ts...,Args...>>;
			using Steps = MPL::SplitT<FlattenedRegisters,SequencePoint>;
			using MergedSteps = Detail::MergeActionStepsT<Steps>;
			Detail::WriteRegister<MergedSteps>{}();
		}

		template<typename T, typename... Args>
		inline Detail::MakeReturnT<T,Args...> read(T,Args...){
			auto i = Detail::GetAddress<T>::read();
			return Detail::MakeReturnT<T,Args...>{ };
		}

	}
}
