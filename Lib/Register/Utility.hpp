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
		return (0xFFFFFFFF >> (32-(high-low)))<<low;
	}
	template<typename... Is>
	constexpr unsigned maskFromRange(int high, int low, Is...args){
		return maskFromRange(high,low) | maskFromRange(args...);
	}
	namespace Detail{
		using namespace MPL;

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


		template<typename T>
		struct ValueToUnsigned;
		template<typename T, T I>
		struct ValueToUnsigned<MPL::Value<T,I>> : MPL::Unsigned<unsigned(I)>{};


		template<typename T>
		struct GetFieldType;
		template<typename TAddress, unsigned Mask, typename TAccess, typename TFieldType, typename TAction>
		struct GetFieldType<Action<BitLocation<TAddress,Mask,TAccess,TFieldType>,TAction>> {
			using Type = TFieldType;
		};
		template<typename TAddress, unsigned Mask, typename TAccess, typename TFieldType>
		struct GetFieldType<BitLocation<TAddress,Mask,TAccess,TFieldType>>{
			using Type = TFieldType;
		};
		template<typename T>
		using GetFieldTypeT = typename GetFieldType<T>::Type;


		template<typename T>
		struct IsWriteLiteral : FalseType{};

		template<typename T>
		struct IsWriteRuntime : FalseType{};

		template<typename T>
		struct IsCompileTimeValue : FalseType{};
		template<typename T, T I>
		struct IsCompileTimeValue<MPL::Value<T, I>> : TrueType {};

		template<typename T>
		struct IsBitLocation : FalseType{};
		template<typename TAddress, unsigned Mask, typename Access, typename TFieldType>
		struct IsBitLocation<BitLocation<TAddress, Mask, Access, TFieldType>> : TrueType {};

		template<typename T>
		struct IsWritable : FalseType{};
		template<typename TAddress, unsigned Mask, bool Readable, bool ClearOnRead, bool Popable, typename TFieldType>
		struct IsWritable<BitLocation<TAddress, Mask, Access<Readable,true,ClearOnRead,Popable,false>, TFieldType>> : TrueType {};

		template<typename T>
		struct IsSetToClear : FalseType{};
		template<typename TAddress, unsigned Mask, bool Readable, bool Writable, bool ClearOnRead, bool Popable, typename TFieldType>
		struct IsSetToClear<BitLocation<TAddress, Mask, Access<Readable,Writable,ClearOnRead,Popable,true>, TFieldType>> : TrueType {};

		template<typename T, typename U>
		struct WriteLocationAndCompileTimeValueTypeAreSame : FalseType {};
		template<typename AT, unsigned M, bool Readable, bool ClearOnRead, typename FT, FT V>
		struct WriteLocationAndCompileTimeValueTypeAreSame<BitLocation<AT, M, Access<Readable,true,ClearOnRead,false,false>, FT>,MPL::Value<FT,V>> : TrueType{};


	}
}
}
