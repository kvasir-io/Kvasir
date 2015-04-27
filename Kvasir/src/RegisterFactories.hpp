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
#include "RegisterTypes.hpp"

namespace Kvasir{
namespace Register{
	namespace Detail{
		using namespace MPL;

		constexpr bool onlyOneBitSet(unsigned i){
			return (i==(1u<<0)) || (i==(1u<<1)) || (i==(1u<<2)) || (i==(1u<<3)) || (i==(1u<<4)) || (i==(1u<<5)) || (i==(1u<<6)) || (i==(1u<<7)) || (i==(1u<<8)) || (i==(1u<<9)) || (i==(1u<<10)) || (i==(1u<<11)) || (i==(1u<<12)) || (i==(1u<<13)) || (i==(1u<<14)) || (i==(1u<<15)) || (i==(1u<<16)) || (i==(1u<<17)) || (i==(1u<<18)) || (i==(1u<<19)) || (i==(1u<<20)) || (i==(1u<<21)) || (i==(1u<<22)) || (i==(1u<<23)) || (i==(1u<<24)) || (i==(1u<<25)) || (i==(1u<<26)) || (i==(1u<<27)) || (i==(1u<<28)) || (i==(1u<<29)) || (i==(1u<<30)) || (i==(1u<<31));
		}

		template<typename T>
		struct GetFieldType;
		template<template<unsigned I> class AC, unsigned Address, unsigned Mask, unsigned ReservedMask, typename FieldType, typename TAction>
		struct GetFieldType<Action<BitLocation<AC<Address>,Mask,ReservedMask,FieldType>,TAction>> {
			using Type = FieldType;
		};
		template<template<unsigned I> class AC, unsigned Address, unsigned Mask, unsigned ReservedMask, typename FieldType>
		struct GetFieldType<BitLocation<AC<Address>,Mask,ReservedMask,FieldType>>{
			using Type = FieldType;
		};
		template<typename T>
		using GetFieldTypeT = typename GetFieldType<T>::Type;

		//factory for write literal
		template<typename TLocation, unsigned Value>
		struct Write;
		template<unsigned Address, unsigned Mask, unsigned ReservedMask, typename TField, unsigned Value>
		struct Write<BitLocation<Address::ReadWrite<Address>,Mask,ReservedMask,TField>,Value> : Action<BitLocation<Address::ReadWrite<Address>,Mask,ReservedMask,TField>,WriteLiteralAction<Value>>{};
		template<unsigned Address, unsigned Mask, unsigned ReservedMask, typename TField, unsigned Value>
		struct Write<BitLocation<Address::BlindWrite<Address>,Mask,ReservedMask,TField>,Value> : Action<BitLocation<Address::BlindWrite<Address>,Mask,ReservedMask,TField>,WriteLiteralAction<Value>>{};
		template<typename TLocation, unsigned Value>
		using WriteT = typename Write<TLocation,Value>::Type;

		template<typename TLocation>
		struct Set;
		template<unsigned Address, unsigned Mask, unsigned ReservedMask>
		struct Set<BitLocation<Address::ReadWrite<Address>,Mask,ReservedMask,unsigned>> : Action<BitLocation<Address::ReadWrite<Address>,Mask,ReservedMask,unsigned>,WriteLiteralAction<Mask>>{
			static_assert(onlyOneBitSet(Mask),"Register::set only works on single bits. Use Register::write to write values to wider bit fields");
		};
		template<unsigned Address, unsigned Mask, unsigned ReservedMask>
		struct Set<BitLocation<Address::BlindWrite<Address>,Mask,ReservedMask,unsigned>> : Action<BitLocation<Address::BlindWrite<Address>,Mask,ReservedMask,unsigned>,WriteLiteralAction<Mask>>{
			static_assert(onlyOneBitSet(Mask),"Register::set only works on single bits. Use Register::write to write values to wider bit fields");
		};
		template<typename TLocation>
		struct Clear;
		template<unsigned Address, unsigned Mask, unsigned ReservedMask>
		struct Clear<BitLocation<Address::ReadWrite<Address>,Mask,ReservedMask,unsigned>> : Action<BitLocation<Address::ReadWrite<Address>,Mask,ReservedMask,unsigned>,WriteLiteralAction<0>>{
			static_assert(onlyOneBitSet(Mask),"Register::clear only works on single bits. Use Register::write to write values to wider bit fields");
		};
		template<unsigned Address, unsigned Mask, unsigned ReservedMask>
		struct Clear<BitLocation<Address::BlindWrite<Address>,Mask,ReservedMask,unsigned>> : Action<BitLocation<Address::BlindWrite<Address>,Mask,ReservedMask,unsigned>,WriteLiteralAction<0>>{
			static_assert(onlyOneBitSet(Mask),"Register::clear only works on single bits. Use Register::write to write values to wider bit fields");
		};

		template<typename TLocation>
		using SetT = typename Set<TLocation>::Type;
		template<typename TLocation>
		using ClearT = typename Clear<TLocation>::Type;

	}

//Action factories which turn a BitLocation into an Action
	template<typename T>
	constexpr inline Action<T,ReadAction> read(T){
		return Action<T,ReadAction>{};
	}

	template<typename T>
	constexpr inline Detail::SetT<T> set(T){
		return Detail::SetT<T>{};
	}

	template<typename T>
	constexpr inline Detail::ClearT<T> clear(T){
		return Detail::ClearT<T>{};
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
		struct WirtLocationAndCompileTimeValueTypeAreSame : FalseType {};
		template<typename AT, unsigned M, unsigned RM, typename FT, FT V>
		struct WirtLocationAndCompileTimeValueTypeAreSame<BitLocation<AT,M,RM,FT>,MPL::Value<FT,V>> : TrueType{};
	}
	template<typename T, typename U>
	constexpr inline Detail::WriteT<T,Detail::ValueToInt<U>::value> write(T, U){
		static_assert(Detail::WirtLocationAndCompileTimeValueTypeAreSame<T,U>::value,"type mismatch: the BitLocation field type and the compile time Value type must be the same");
		return Detail::WriteT<T,Detail::ValueToInt<U>::value>{};
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
