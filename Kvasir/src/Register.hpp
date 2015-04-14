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

		template<int I>
		struct WriteAddress{
			static constexpr int value = I;
		};
		template<int I>
		struct WriteOnlyAddress{
			static constexpr int value = I;
		};
		template<int I>
		struct XorAddress{
			static constexpr int value = I;
		};
		template<typename TAction, typename TMask, typename TData>
		struct Action {
			using Type = Action<TAction,TMask,TData>;
			static constexpr Type value{};
		};
		template<int Address,int Mask, int Data>
		using WriteActionT = Action<WriteAddress<Address>,MPL::Int<Mask>,MPL::Int<Data>>;
		template<int Address,int Offset, bool Data>
		using WriteBitActionT = Action<WriteAddress<Address>,MPL::Int<(1<<Offset)>,MPL::Int<(Data<<Offset)>>;
		template<int Address,int Offset>
		using BlindSetBitActionT = Action<WriteOnlyAddress<Address>,MPL::Int<(1<<Offset)>,MPL::Int<(1<<Offset)>>;

		template<int Address,int Mask, int Data>
		using BlindWriteActionT = Action<WriteOnlyAddress<Address>,MPL::Int<Mask>,MPL::Int<Data>>;
		template<int Address,int Mask, int Data>
		using XorActionT = Action<XorAddress<Address>,MPL::Int<Mask>,MPL::Int<Data>>;

		namespace Detail{
			using namespace MPL;
			//predecate retuning result of left < right for RegisterOptions
			template<typename T_Left, typename T_Right>
			struct RegisterActionLess;
			template<typename TA1, typename TC1, typename TS1, typename TA2, typename TC2, typename TS2>
			struct RegisterActionLess< Register::Action<TA1,TC1,TS1>, Register::Action<TA2,TC2,TS2> > : Bool<(TA1::value < TA2::value)>{};
			using RegisterActionLessP = Template<RegisterActionLess>;

			template<typename TRegisterAction>
			struct WriteRegister;

			template<int A, int Mask, int Data>
			struct WriteRegister<Register::Action<WriteAddress<A>,Int<Mask>,Int<Data>>>{
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
			struct WriteRegister<Register::Action<WriteOnlyAddress<A>,Int<Mask>,Int<Data>>>{
				static_assert((Data & (~Mask))==0,"bad mask");
				int operator()(){
					auto& reg = *(volatile int*)A;
					reg = Data;
					return 0;
				}
			};
			template<int A, int Mask, int Data>
			struct WriteRegister<Register::Action<XorAddress<A>,Int<Mask>,Int<Data>>>{
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

			template<typename TNA, typename TNC, typename TNS, typename TLC, typename TLS, typename... Ts, typename... Us> //next and last mergable
			struct MergeRegisterActions<List<Register::Action<TNA,TNC,TNS>, Ts...>,List<Register::Action<TNA,TLC,TLS>, Us...>> :
				MergeRegisterActions<List<Ts...>,List<Register::Action<TNA,Int<TNC::value | TLC::value>,Int<TNS::value | TLS::value>>,Us...>>{};

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

		namespace Policy{
			template<typename TType, typename TRegisterType>
			struct GenericConversion {
				using Type = TType;
				using RegisterType = TRegisterType;
				static inline Type read(const TRegisterType& in){
					return static_cast<Type>(in);
				}
				static inline RegisterType write(const Type &in){
					return static_cast<RegisterType>(in);
				}
			};
			//this conversion policy construcs a pod with the register
			template<typename TType, typename TRegisterType>
			struct PodConversion {
				using Type = TType;
				using RegisterType = TRegisterType;
				static inline Type read(const TRegisterType& in){
					return Type{in};
				}
				static inline RegisterType write(const Type &in){
					return static_cast<RegisterType>(in);
				}
			};
			template<typename T_Address, typename T_Mask, typename T_ConversionPolicy>
			struct Readable {
				static inline typename T_ConversionPolicy::Type read(){
					auto v = *static_cast<volatile typename T_ConversionPolicy::RegisterType*>((int*)T_Address::value);
					return T_ConversionPolicy::read(v & T_Mask::value);
				}
			};
			template<typename T_Address, typename T_Mask, typename T_ConversionPolicy>
			struct ClearOnRead{
				static inline typename T_ConversionPolicy::Type readAndClear(){
					auto v = *static_cast<volatile typename T_ConversionPolicy::RegisterType*>((int*)T_Address::value);
					return T_ConversionPolicy::read(v & T_Mask::value);
				}
			};
			template<typename T_Address, typename T_Mask, typename T_ConversionPolicy>
			struct Popable{
				static inline typename T_ConversionPolicy::Type pop(){
					auto v = *static_cast<volatile typename T_ConversionPolicy::RegisterType*>((int*)T_Address::value);
					return T_ConversionPolicy::read(v & T_Mask::value);
				}
			};
			template<typename T_Address, typename T_Mask, typename T_ConversionPolicy>
			struct Writeable{
				static inline void write(typename T_ConversionPolicy::Type in){
					auto maskedIn = T_ConversionPolicy::write(in) & T_Mask::value;
					volatile typename T_ConversionPolicy::RegisterType &reg = *(typename T_ConversionPolicy::RegisterType*)T_Address::value;
					auto tempReg = reg;
					tempReg = tempReg & ((!T_Mask::value) | maskedIn);
					reg = tempReg;
				}
			};
			template<typename T_Address, typename T_Mask, typename T_ConversionPolicy>
			struct Pushable{
				static inline void push(typename T_ConversionPolicy::Type in){
					volatile typename T_ConversionPolicy::RegisterType &reg = *(typename T_ConversionPolicy::RegisterType*)T_Address::value;
					reg = T_ConversionPolicy::write(in) & T_Mask::value;
				}
			};
			template<typename TEnum>
			using EnumConversionP = GenericConversion<TEnum,int>;
			using IntConversionP = GenericConversion<int,int>;
			using CharConversionP = GenericConversion<char,char>;
			using BoolConversionP = GenericConversion<bool,int>;
			using ReadableP = MPL::Template<Readable>;
			using ClearOnReadP = MPL::Template<ClearOnRead>;
			using PopableP = MPL::Template<Popable>;
			using WriteableP = MPL::Template<Writeable>;
			using PushableP = MPL::Template<Pushable>;
			using ReadWriteableP = MPL::List<ReadableP,WriteableP>;
			template<typename TPod>
			using PodConversionP = PodConversion<TPod,int>;
		}

		//this class is used to define multi-step inits, each parameter is an MPL::List of Register::Option(s)
		template<typename... Ts>
		struct InitSteps{};


		template<typename...Ts,typename...Args>
		inline void apply(Args...){
			using FlattenedRegisters = MPL::FlattenT<MPL::List<Ts...,Args...>>;
			using Steps = MPL::SplitT<FlattenedRegisters,SequencePoint>;
			using MergedSteps = Detail::MergeActionStepsT<Steps>;
			Detail::WriteRegister<MergedSteps>{}();
		}

		template<typename TAddress, typename TMask, typename TPolicies, typename TConversionPolicy = Policy::IntConversionP>
		struct Functional : MPL::ApplyTemplateT<TPolicies,TAddress,TMask,TConversionPolicy> {}; //only one policy so derive directly

		template<typename TAddress, typename TMask, typename... Ts, typename TConversionPolicy>
		struct Functional<TAddress,TMask,MPL::List<Ts...>,TConversionPolicy> : MPL::DeriveFromTemplates<MPL::List<Ts...>,TAddress,TMask,TConversionPolicy>{};

		template<int Address, int Mask, typename TPolicies, typename TConversionPolicy = Policy::IntConversionP>
		using FunctionalT = Functional<MPL::Int<Address>,MPL::Int<Mask>,TPolicies,TConversionPolicy>;

		template<int Address, int Offset, typename TPolicies>
		using FunctionalBoolT = Functional<MPL::Int<Address>,MPL::Int<(1<<Offset)>,TPolicies,Policy::BoolConversionP>;

		template<int Address, int Offset>
		using ReadOnlyBoolT = Functional<MPL::Int<Address>,MPL::Int<(1<<Offset)>,Policy::ReadableP,Policy::BoolConversionP>;

		namespace Detail {
			//Merges single and multistep inits
			template<typename T_Out, typename... Ts>
			struct MergeInits;

			template<typename TList>
			struct ApplyInits;

			template<typename...Ts>
			struct ApplyInts {
				void operator()(){
					auto a = {apply<Ts>()...};
				}
			};
		}

		template<typename... Ts>
		inline void applyInits(){
			using MergedInits = typename Detail::MergeInits<MPL::List<>,Ts...>::Type;
			Detail::ApplyInits<MergedInits>{}();
		}
	}
}
