#pragma once
#include "MPLTypes.hpp"
#include "MPLUtility.hpp"

namespace Kvasir {

	namespace Register{
		template<typename TAddress, typename TClearBits, typename TSetBits>
		struct Option {
			using Type = Option<TAddress,TClearBits,TSetBits>;
		};
		template<int Address,int Clear, int Set>
		using OptionT = Option<MPL::Int<Address>,MPL::Int<Clear>,MPL::Int<Set>>;

		namespace Detail{
			using namespace MPL;
			//predecate retuning result of left < right for RegisterOptions
			template<typename T_Left, typename T_Right>
			struct RegisterOptionLess;
			template<typename TA1, typename TC1, typename TS1, typename TA2, typename TC2, typename TS2>
			struct RegisterOptionLess< Register::Option<TA1,TC1,TS1>, Register::Option<TA2,TC2,TS2> > : Bool<(TA1::value < TA2::value)>{};
			using RegisterOptionLessP = Template<RegisterOptionLess>;

			template<typename TRegisterOption>
			struct WriteRegister;

			template<int A, int S, int C>
			struct WriteRegister<Register::Option<Int<A>,Int<S>,Int<C>>>{
				int operator()(){
					auto i = *(volatile int*)A;
					i |= S;
					i &= ~C;
					*(volatile int*)A = i;
					return 0;
				}
			};

			template<typename TRegisters>
			struct WriteRegisters;

			template<typename... Ts>
			struct WriteRegisters<List<Ts...>>{
				void operator()(){
					auto a = {WriteRegister<Ts>{}()...};
				}
			};

			template<typename TRegisters, typename TRet = List<>> //default
			struct MergeRegisterOptions;

			template<typename TNext, typename... Ts> //none processed yet
			struct MergeRegisterOptions<List<TNext, Ts...>, List<>> : MergeRegisterOptions<List<Ts...>,List<TNext>>{};

			template<typename TNA, typename TNC, typename TNS, typename TLC, typename TLS, typename... Ts, typename... Us> //next and last mergable
			struct MergeRegisterOptions<List<Register::Option<TNA,TNC,TNS>, Ts...>,List<Register::Option<TNA,TLC,TLS>, Us...>> :
				MergeRegisterOptions<List<Ts...>,List<Register::Option<TNA,Int<TNC::value | TLC::value>,Int<TNS::value | TLS::value>>,Us...>>{};

			template<typename TNext, typename TLast, typename... Ts, typename... Us> //next and last not mergable
			struct MergeRegisterOptions<List<TNext, Ts...>,List<TLast, Us...>> : MergeRegisterOptions<List<Ts...>,List<TNext, TLast, Us...>>{};

			template<typename... Ts> //done
			struct MergeRegisterOptions<List<>,List<Ts...>> : List<Ts...>{};
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

		template<typename...Ts>
		inline void apply(Ts...){
			using SortedRegisters = MPL::SortT<MPL::List<Ts...>,Detail::RegisterOptionLessP>;
			using MergedRegisters = typename Detail::MergeRegisterOptions<SortedRegisters>::Type;
			Detail::WriteRegisters<MergedRegisters>{}();
		}

		template<typename TAddress, typename TMask, typename TPolicies, typename TConversionPolicy = Policy::IntConversionP>
		struct Single : MPL::TemplateT<TPolicies,TAddress,TMask,TConversionPolicy> {}; //only one policy so derive directly

		template<typename TAddress, typename TMask, typename... Ts, typename TConversionPolicy>
		struct Single<TAddress,TMask,MPL::List<Ts...>,TConversionPolicy> : MPL::DeriveFromTemplates<MPL::List<Ts...>,TAddress,TMask,TConversionPolicy>{};
	}
}
