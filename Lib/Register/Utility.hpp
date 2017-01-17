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
#include "Types.hpp"

namespace Kvasir{
namespace Register{
	constexpr unsigned maskFromRange(unsigned high, unsigned low){
		return (0xFFFFFFFFULL >> (31U-(high-low)))<<low;
	}
	template<typename... Is>
	constexpr unsigned maskFromRange(unsigned high, unsigned low, Is...args){
		return maskFromRange(high,low) | maskFromRange(args...);
	}
	namespace Detail{
		using namespace MPL;

		constexpr int maskStartsAt(unsigned mask, unsigned bitNum = 0U) {
			return mask & 1U ? bitNum : maskStartsAt(mask >> 1U, bitNum + 1U);
		}

		constexpr bool onlyOneBitSet(unsigned i){
			return i == (i & -i);
		}

		constexpr unsigned orAllOf(){
			return 0;
		}
		constexpr unsigned orAllOf(unsigned l){
			return l;
		}

		template<typename... Ts>
		constexpr unsigned orAllOf(unsigned l, unsigned r, Ts... args){
			return l | r | orAllOf(args...);
		}


		template<typename T>
		struct ValueToUnsigned;
		template<typename T, T I>
		struct ValueToUnsigned<MPL::Value<T,I>> : MPL::Unsigned<unsigned(I)>{};


		template<typename T>
		struct GetFieldType;
		template<typename TAddress, unsigned Mask, typename TAccess, typename TFieldType, typename TAction>
		struct GetFieldType<Action<FieldLocation<TAddress,Mask,TAccess,TFieldType>,TAction>> {
			using Type = TFieldType;
		};
		template<typename TAddress, unsigned Mask, typename TAccess, typename TFieldType>
		struct GetFieldType<FieldLocation<TAddress,Mask,TAccess,TFieldType>>{
			using Type = TFieldType;
		};
		template<typename T>
		using GetFieldTypeT = typename GetFieldType<T>::Type;


		template<typename T>
		struct IsWriteLiteral : std::false_type{};

		template<typename T>
		struct IsWriteRuntime : std::false_type{};

		template<typename T>
		struct IsFieldLocation : std::false_type{};
		template<typename TAddress, unsigned Mask, typename Access, typename TFieldType>
		struct IsFieldLocation<FieldLocation<TAddress, Mask, Access, TFieldType>> : std::true_type {};

		template<typename T>
		struct IsWritable : std::false_type{};
		template<typename TAddress, unsigned Mask, ReadActionType RAction, ModifiedWriteValueType WAction, typename TFieldType>
		struct IsWritable<FieldLocation<TAddress, Mask, Access<AccessType::readWrite, RAction, WAction>, TFieldType>> : std::true_type {};
		template<typename TAddress, unsigned Mask, ReadActionType RAction, ModifiedWriteValueType WAction, typename TFieldType>
		struct IsWritable<FieldLocation<TAddress, Mask, Access<AccessType::writeOnly, RAction, WAction>, TFieldType>> : std::true_type {};

		template<typename T>
		struct IsSetToClear : std::false_type{};
		template<typename TAddress, unsigned Mask, AccessType AT, ReadActionType RAction, typename TFieldType>
		struct IsSetToClear<FieldLocation<TAddress, Mask, Access<AT, RAction, ModifiedWriteValueType::oneToClear>, TFieldType>> : std::true_type {};

		template<typename T, typename U>
		struct WriteLocationAndCompileTimeValueTypeAreSame : std::false_type {};
		template<typename AT, unsigned M, typename A, typename FT, FT V>
		struct WriteLocationAndCompileTimeValueTypeAreSame<FieldLocation<AT, M, A, FT>,MPL::Value<FT,V>> : std::true_type{};

		//getters for specific parameters of an Action
		template<typename T>
			struct GetAddress;
		template<unsigned A, unsigned WIIZ, unsigned WIIO, typename TRegType, typename TMode>
			struct GetAddress<Address<A, WIIZ, WIIO, TRegType, TMode>> {
				static constexpr unsigned value = A;
				static constexpr unsigned writeIgnoredIfZeroMask = WIIZ;
				static constexpr unsigned writeIgnoredIfOneMask = WIIO;
				static unsigned read() {
					volatile TRegType& reg = *reinterpret_cast<volatile TRegType*>(value);
					return reg;
				}
				static void write(unsigned i) {
					volatile TRegType& reg = *reinterpret_cast<volatile TRegType*>(value);
					reg = i;
				}
				using type = brigand::uint32_t<A>;
			};
		template<typename TAddress, unsigned Mask, typename TAccess, typename TFiledType>
			struct GetAddress<FieldLocation<TAddress, Mask, TAccess, TFiledType>> : GetAddress<TAddress> {};
		template<typename TReadLoc, typename TWriteLoc>
		struct GetAddress<FieldLocationPair<TReadLoc,TWriteLoc>> {
			static constexpr unsigned value = TReadLoc::value;
			static unsigned read(){
				volatile unsigned& reg = *reinterpret_cast<volatile unsigned*>(value);
				return reg;
			}
			static void write(unsigned i){
				volatile unsigned& reg = *reinterpret_cast<volatile unsigned*>(value);
				reg = i;
			}
			using type = brigand::uint32_t<value>;
		};
		template<typename TFieldLocation, typename TAction>
		struct GetAddress<Action<TFieldLocation,TAction>> : GetAddress<TFieldLocation> {};

		template<typename T>
		struct GetFieldLocation;
		template<typename TLocation, typename TAction>
		struct GetFieldLocation<Action<TLocation,TAction>>{
			using type = TLocation;
		};

		//predecate retuning result of left < right for RegisterOptions
		template<typename TLeft, typename TRight>
		struct RegisterActionLess;
		template<typename T1, typename U1, typename T2, typename U2>
		struct RegisterActionLess< Register::Action<T1,U1>, Register::Action<T2,U2> > : Bool<(GetAddress<T1>::value < GetAddress<T2>::value)>{};
		using RegisterActionLessP = Template<RegisterActionLess>;

		//predicate returns true if action is a read
		template<typename T>
		struct IsReadPred : std::false_type {};
		template<typename A>
		struct IsReadPred< Register::Action<A,ReadAction> > : std::true_type{};

		template<typename T>
		struct IsNotReadPred : std::integral_constant<bool,(!IsReadPred<T>::type::value)>{};
		
		//predicate returns true if action is a read
		template<typename T>
		struct IsRuntimeWritePred : std::false_type {};
		template<typename A>
		struct IsRuntimeWritePred< Register::Action<A, WriteAction> > : std::true_type {};
		
		template<typename T>
		struct IsNotRuntimeWritePred : std::integral_constant<bool, (!IsRuntimeWritePred<T>::type::value)> {};

		template<typename T>
		struct GetMask;
		//from FieldLocations
		template<typename Address, unsigned Mask, typename TAccess, typename ResultType>
		struct GetMask<FieldLocation<Address,Mask,TAccess,ResultType>> : Value<unsigned,Mask>{};
		//from Action
		template<typename TFieldLocation, typename TAction>
		struct GetMask<Action<TFieldLocation,TAction>> : GetMask<TFieldLocation>{};

	}
}
}
