#pragma once
#include "MPLTypes.hpp"
#include "MPLUtility.hpp"

namespace Kvasir {

	template<typename T_Address, typename T_ClearBits, typename T_SetBits>
	struct RegisterOption {
		using Type = RegisterOption<T_Address,T_ClearBits,T_SetBits>;
	};
	template<int Address,int Clear, int Set>
	using RegisterOptionT = RegisterOption<MPL::Int<Address>,MPL::Int<Clear>,MPL::Int<Set>>;
	constexpr RegisterOptionT<1,0x02,0x01> setting1;
	constexpr RegisterOptionT<1,0x02,0x01> setting2;
	constexpr RegisterOptionT<1,0x02,0x01> setting3;
	constexpr RegisterOptionT<1,0x02,0x01> setting4;
	namespace Detail{
		struct WriteRegister{

		};
	}
	template<typename...Ts>
	inline void WriteRegister(Ts...){

	//	auto i = {(Detail::WriteRegister<Ts>())...};
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
