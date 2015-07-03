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
			return (i==(1u<<0)) || (i==(1u<<1)) || (i==(1u<<2)) || (i==(1u<<3)) || (i==(1u<<4)) || (i==(1u<<5)) || (i==(1u<<6)) || (i==(1u<<7)) || (i==(1u<<8)) || (i==(1u<<9)) || (i==(1u<<10)) || (i==(1u<<11)) || (i==(1u<<12)) || (i==(1u<<13)) || (i==(1u<<14)) || (i==(1u<<15)) || (i==(1u<<16)) || (i==(1u<<17)) || (i==(1u<<18)) || (i==(1u<<19)) || (i==(1u<<20)) || (i==(1u<<21)) || (i==(1u<<22)) || (i==(1u<<23)) || (i==(1u<<24)) || (i==(1u<<25)) || (i==(1u<<26)) || (i==(1u<<27)) || (i==(1u<<28)) || (i==(1u<<29)) || (i==(1u<<30)) || (i==(1u<<31));
		}



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

		//factory for write literal
		template<typename TLocation, unsigned Value>
		struct Write;
		template<typename TAddress, unsigned Mask, bool Readable, bool ClearOnRead, typename TFieldType, unsigned Value>
		struct Write<BitLocation<TAddress, Mask, Access<Readable,true,ClearOnRead,false,false>, TFieldType>, Value> :
			Action<
				BitLocation<
					TAddress,
					Mask,
					Access<Readable,true,ClearOnRead,false,false>,
					TFieldType>,
				WriteLiteralAction<(Value<<positionOfFirstSetBit(Mask))>>{};

		template<typename TLocation, unsigned Value>
		using WriteT = typename Write<TLocation,Value>::Type;

		template<typename TLocation>
		struct Set;
		template<typename TAddress, unsigned Mask, bool Readable, bool ClearOnRead, typename TFieldType>
		struct Set<BitLocation<TAddress, Mask, Access<Readable,true,ClearOnRead,false,false>, TFieldType>> :
			Action<
				BitLocation<
					TAddress,
					Mask,
					Access<Readable,true,ClearOnRead,false,false>,
					TFieldType>,
				WriteLiteralAction<Mask>>
		{
			static_assert(onlyOneBitSet(Mask),"Register::set only works on single bits. Use Register::write to write values to wider bit fields");
		};
		template<typename TLocation>
		struct Clear;
		template<typename TAddress, unsigned Mask, bool Readable, bool ClearOnRead, typename TFieldType>
		struct Clear<
			BitLocation<
				TAddress,
				Mask,
				Access<Readable,true,ClearOnRead,false,false>,
				TFieldType>> :
			Action<
				BitLocation<
					TAddress,
					Mask,
					Access<Readable,true,ClearOnRead,false,false>,
					TFieldType>,
				WriteLiteralAction<0>>
		{
			static_assert(onlyOneBitSet(Mask),"Register::clear only works on single bits. Use Register::write to write values to wider bit fields");
		};
		template<typename TLocation>
		struct Reset;
		template<typename TAddress, unsigned Mask, bool Readable, bool ClearOnRead, typename TFieldType>
		struct Reset<
			BitLocation<
				TAddress,
				Mask,
				Access<Readable,true,ClearOnRead,false,true>,
				TFieldType>> :
			Action<
				BitLocation<
					TAddress,
					Mask,
					Access<Readable,true,ClearOnRead,false,true>,
					TFieldType>,
				WriteLiteralAction<(1<<positionOfFirstSetBit(Mask))>>
		{
			static_assert(onlyOneBitSet(Mask),"Register::reset only works on single bits that are marked as set to clear");
		};

		template<typename TLocation>
		using SetT = typename Set<TLocation>::Type;
		template<typename TLocation>
		using ClearT = typename Clear<TLocation>::Type;
		template<typename TLocation>
		using ResetT = typename Reset<TLocation>::Type;

	}

//Action factories which turn a BitLocation into an Action
	template<typename T>
	constexpr inline Action<T,ReadAction> read(T){
		return Action<T,ReadAction>{};
	}

	template<typename T>
	constexpr inline Detail::SetT<T> set(T){
		return {};
	}

	template<typename T>
	constexpr inline Detail::ClearT<T> clear(T){
		return {};
	}

	template<typename T>
	constexpr inline Detail::ResetT<T> reset(T){
		return {};
	}

	//runtime value
	template<typename T>
	constexpr Action<T,WriteAction> write(T,Detail::GetFieldTypeT<T> in){
		return Action<T,WriteAction>{unsigned(in)};
	}
	//compile time value
	namespace Detail{
		template<typename T>
		struct ValueToInt;
		template<typename T, T I>
		struct ValueToInt<MPL::Value<T,I>> : MPL::Int<int(I)>{};
		template<typename T, typename U>
		struct WriteLocationAndCompileTimeValueTypeAreSame : FalseType {};
		template<typename AT, unsigned M, bool Readable, bool ClearOnRead, typename FT, FT V>
		struct WriteLocationAndCompileTimeValueTypeAreSame<BitLocation<AT, M, Access<Readable,true,ClearOnRead,false,false>, FT>,MPL::Value<FT,V>> : TrueType{};
	}
	template<typename T, typename U>
	constexpr inline Detail::WriteT<T,Detail::ValueToInt<U>::value> write(T, U){
		static_assert(Detail::WriteLocationAndCompileTimeValueTypeAreSame<T,U>::value,"type mismatch: the BitLocation field type and the compile time Value type must be the same");
		return {};
	}

	//constraint factories check constraints on actions or lists of actions and may add sequence points or other actions
	namespace Detail{
		template<typename T>
		struct IsWriteLiteral : FalseType{};
		template<typename T>
		struct IsWriteRuntime : FalseType{};
	}
	template<typename T>
	constexpr MPL::EnableIfT<Detail::IsWriteLiteral<T>::value> atomic(T){

	}
	template<typename T>
	constexpr MPL::EnableIfT<Detail::IsWriteRuntime<T>::value> atomic(T in){

	}
	template<typename T, typename U, typename...Ts>
	constexpr MPL::EnableIfT<Detail::IsWriteLiteral<T>::value> atomic(T in){

	}
	template<typename T, typename U, typename...Ts>
	constexpr MPL::EnableIfT<Detail::IsWriteRuntime<T>::value> atomic(T in){

	}
	template<typename T>
	constexpr MPL::EnableIfT<Detail::IsWriteLiteral<T>::value> isolated(T){

	}

}
}
