/**************************************************************************************************
 * Source file containing the policies and options for adressing basic registers
 *
 *
 * List of bugs:
 * 			- none :P
 *
 *
 * List of requested funtionalities:
 * 			- many
 *
 *

*/
#pragma once
#include "MPLTypes.hpp"
#include "MPLUtility.hpp"
#include "MPLAlgorithm.hpp"

namespace Kvasir {

	namespace Register{
		struct SequencePoint{};
		constexpr SequencePoint sequencePoint;

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
		};
		template<int Address,int Mask, int Data>
		using WriteActionT = Action<WriteAddress<Address>,MPL::Int<Mask>,MPL::Int<Data>>;
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

			template<typename TRegisterOption>
			struct WriteRegister;

			template<int A, int S, int C>
			struct WriteRegister<Register::Action<WriteAddress<A>,Int<S>,Int<C>>>{
				int operator()(){
					auto& reg = *(volatile int*)A;
					auto i = reg;
					i &= ~C;
					i |= S;
					reg = i;
					return 0;
				}
			};
			template<int A, int S, int C>
			struct WriteRegister<Register::Action<WriteOnlyAddress<A>,Int<S>,Int<C>>>{
				int operator()(){
					auto& reg = *(volatile int*)A;
					reg = S;
					return 0;
				}
			};

			template<typename...Ts>
			struct WriteRegister<MPL::List<Ts...>>{
				int operator()(){
					int a[] = {WriteRegister<Ts>{}()...};
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
					MPL::SortT<Ts,Detail::RegisterActionLessP>
				>...
				>{};

			template<typename T>
			using MergeActionStepsT = typename MergeActionSteps<T>::Type;

		}

		namespace Policy{
			template<typename T_Type, typename T_RegisterType>
			struct GenericConversion {
				using Type = T_Type;
				using RegisterType = T_RegisterType;
				static inline Type read(const T_RegisterType& in){
					return static_cast<Type>(in);
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
					tempReg = tempReg & (!T_Mask::value) | maskedIn;
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
			using ReadableP = MPL::Template<Readable>;
			using ClearOnReadP = MPL::Template<ClearOnRead>;
			using PopableP = MPL::Template<Popable>;
			using WriteableP = MPL::Template<Writeable>;
			using PushableP = MPL::Template<Pushable>;

		}

		//this class is used to define multi-step inits, each parameter is an MPL::List of Register::Option(s)
		template<typename... Ts>
		struct InitSteps{};


		template<typename...Ts>
		inline void apply(){
			using FlattenedRegisters = MPL::FlattenT<MPL::List<Ts...>>;
			using Steps = MPL::SplitT<FlattenedRegisters,SequencePoint>;
			using MergedSteps = Detail::MergeActionStepsT<Steps>;
			Detail::WriteRegister<MergedSteps>{}();
		}

		template<typename...Ts>		//this version may take more time to compile, however it may be easier to understand for some users
		inline void apply(Ts...){
			apply<Ts...>();
		}

		template<typename TAddress, typename TMask, typename TPolicies, typename TConversionPolicy = Policy::IntConversionP>
		struct Single : MPL::ApplyTemplateT<TPolicies,TAddress,TMask,TConversionPolicy> {}; //only one policy so derive directly

		template<typename TAddress, typename TMask, typename... Ts, typename TConversionPolicy>
		struct Single<TAddress,TMask,MPL::List<Ts...>,TConversionPolicy> : MPL::DeriveFromTemplates<MPL::List<Ts...>,TAddress,TMask,TConversionPolicy>{};

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
