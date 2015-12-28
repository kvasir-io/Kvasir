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
	constexpr unsigned maskFromRange(int high, int low){
		return (0xFFFFFFFFULL >> (31-(high-low)))<<low;
	}
	template<typename... Is>
	constexpr unsigned maskFromRange(int high, int low, Is...args){
		return maskFromRange(high,low) | maskFromRange(args...);
	}
	namespace Detail{
		using namespace MPL;

		constexpr int maskStartsAt(unsigned mask, int bitNum = 0) {
			return mask & 1 ? bitNum : maskStartsAt(mask >> 1, bitNum + 1);
		}

		constexpr bool onlyOneBitSet(unsigned i){
			return 	(i==(1u<<0)) ||
					(i==(1u<<1)) ||
					(i==(1u<<2)) ||
					(i==(1u<<3)) ||
					(i==(1u<<4)) ||
					(i==(1u<<5)) ||
					(i==(1u<<6)) ||
					(i==(1u<<7)) ||
					(i==(1u<<8)) ||
					(i==(1u<<9)) ||
					(i==(1u<<10)) ||
					(i==(1u<<11)) ||
					(i==(1u<<12)) ||
					(i==(1u<<13)) ||
					(i==(1u<<14)) ||
					(i==(1u<<15)) ||
					(i==(1u<<16)) ||
					(i==(1u<<17)) ||
					(i==(1u<<18)) ||
					(i==(1u<<19)) ||
					(i==(1u<<20)) ||
					(i==(1u<<21)) ||
					(i==(1u<<22)) ||
					(i==(1u<<23)) ||
					(i==(1u<<24)) ||
					(i==(1u<<25)) ||
					(i==(1u<<26)) ||
					(i==(1u<<27)) ||
					(i==(1u<<28)) ||
					(i==(1u<<29)) ||
					(i==(1u<<30)) ||
					(i==(1u<<31));
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
		struct IsWriteLiteral : FalseType{};

		template<typename T>
		struct IsWriteRuntime : FalseType{};

		template<typename T>
		struct IsFieldLocation : FalseType{};
		template<typename TAddress, unsigned Mask, typename Access, typename TFieldType>
		struct IsFieldLocation<FieldLocation<TAddress, Mask, Access, TFieldType>> : TrueType {};

		template<typename T>
		struct IsWritable : FalseType{};
		template<typename TAddress, unsigned Mask, bool Readable, bool ClearOnRead, bool Popable, typename TFieldType>
		struct IsWritable<FieldLocation<TAddress, Mask, Access<Readable,true,ClearOnRead,Popable,false>, TFieldType>> : TrueType {};

		template<typename T>
		struct IsSetToClear : FalseType{};
		template<typename TAddress, unsigned Mask, bool Readable, bool Writable, bool ClearOnRead, bool Popable, typename TFieldType>
		struct IsSetToClear<FieldLocation<TAddress, Mask, Access<Readable,Writable,ClearOnRead,Popable,true>, TFieldType>> : TrueType {};

		template<typename T, typename U>
		struct WriteLocationAndCompileTimeValueTypeAreSame : FalseType {};
		template<typename AT, unsigned M, bool Readable, bool ClearOnRead, typename FT, FT V>
		struct WriteLocationAndCompileTimeValueTypeAreSame<FieldLocation<AT, M, Access<Readable,true,ClearOnRead,false,false>, FT>,MPL::Value<FT,V>> : TrueType{};

		//getters for specific parameters of an Action
		template<typename T>
		struct GetAddress;
		template<unsigned A, unsigned WIIZ, unsigned SOTC, typename TRegType, typename TMode>
		struct GetAddress<Address<A,WIIZ,SOTC,TRegType,TMode>> {
			static constexpr unsigned value = A;
			static unsigned read(){
				volatile unsigned& reg = *reinterpret_cast<volatile unsigned*>(value);
				return reg;
			}
			static void write(unsigned i){
				volatile unsigned& reg = *reinterpret_cast<volatile unsigned*>(value);
				reg = i;
			}
			using type = Unsigned<A>;
		};
		template<typename TAddress, unsigned Mask, typename TAccess, typename TFiledType>
		struct GetAddress<FieldLocation<TAddress,Mask,TAccess,TFiledType>> {
			static constexpr unsigned value = TAddress::value;
			static unsigned read(){
				volatile unsigned& reg = *reinterpret_cast<volatile unsigned*>(value);
				return reg;
			}
			static void write(unsigned i){
				volatile unsigned& reg = *reinterpret_cast<volatile unsigned*>(value);
				reg = i;
			}
			using type = Unsigned<TAddress::value>;
		};
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
			using type = Unsigned<value>;
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
		struct IsReadPred : MPL::FalseType {};
		template<typename A>
		struct IsReadPred< Register::Action<A,ReadAction> > : MPL::TrueType{};

		template<typename T>
		struct IsNotReadPred : NotT<typename IsReadPred<T>::type>{};

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
