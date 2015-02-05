#pragma once
#include "MPLTypes.hpp"
#include "MPLUtility.hpp"

namespace Kvasir {

	template<typename TAddress, typename TClearBits, typename TSetBits>
	struct RegisterOption {
		using Type = RegisterOption<TAddress,TClearBits,TSetBits>;
	};
	template<int Address,int Clear, int Set>
	using RegisterOptionT = RegisterOption<MPL::Int<Address>,MPL::Int<Clear>,MPL::Int<Set>>;

	namespace Detail{
		//predecate retuning result of left < right for RegisterOptions
		template<typename T_Left, typename T_Right>
		struct RegisterOptionLess;
		template<typename TA1, typename TC1, typename TS1, typename TA2, typename TC2, typename TS2>
		struct RegisterOptionLess< RegisterOption<TA1,TC1,TS1>, RegisterOption<TA2,TC2,TS2> > : MPL::Bool<(TA1::value < TA2::value)>{};
		using RegisterOptionLessP = MPL::Template<RegisterOptionLess>;

		template<typename TRegisterOption>
		struct WriteRegister{

		};
		template<typename TRegisters, typename TRet = MPL::List<>>
		struct MergeRegisterOptions;
		template<typename TNext, typename... Ts>
		struct MergeRegisterOptions<MPL::List<TNext, Ts...>, MPL::List<>> : MergeRegisterOptions<MPL::List<Ts...>,MPL::List<TNext>>{};
		template<typename TNext, typename... Ts, typename TLast, typename... Us>
		struct MergeRegisterOptions<MPL::List<TNext, Ts...>,MPL::List<TLast, Us...>> : MergeRegisterOptions<MPL::List<Ts...>,MPL::List<TNext>>{};
		template<typename... Ts>
		struct MergeRegisterOptions<MPL::List<>,MPL::List<Ts...>> : MPL::List<Ts...>{};
	}
	template<typename...Ts>
	inline void WriteRegister(Ts...){
		using SortedRegisters = MPL::SortT<MPL::List<Ts...>,Detail::RegisterOptionLessP>;
		using MergedRegisters = typename Detail::MergeRegisterOptions<SortedRegisters>::Type;
	}


	namespace RegisterPolicies{
		template<typename T_Type, typename T_RegisterType>
		struct GenericConversionPolicy {
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
	}
	template<typename TEnum>
	using EnumConversionP = RegisterPolicies::GenericConversionPolicy<TEnum,int>;
	using IntConversionP = RegisterPolicies::GenericConversionPolicy<int,int>;
	using CharConversionP = RegisterPolicies::GenericConversionPolicy<char,char>;
	using ReadableP = MPL::Template<RegisterPolicies::Readable>;
	using ClearOnReadP = MPL::Template<RegisterPolicies::ClearOnRead>;
	using PopableP = MPL::Template<RegisterPolicies::Popable>;
	using WriteableP = MPL::Template<RegisterPolicies::Writeable>;
	using PushableP = MPL::Template<RegisterPolicies::Pushable>;

	template<typename TAddress, typename TMask, typename TPolicies, typename TConversionPolicy = IntConversionP>
	struct Register : MPL::TemplateT<TPolicies,TAddress,TMask,TConversionPolicy> {}; //only one policy so derive directly

	template<typename TAddress, typename TMask, typename... Ts, typename TConversionPolicy>
	struct Register<TAddress,TMask,MPL::List<Ts...>,TConversionPolicy> : MPL::DeriveFromTemplates<MPL::List<Ts...>,TAddress,TMask,TConversionPolicy>{};

}
