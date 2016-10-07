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
#include "AtomicFactories.hpp"
#include "IsolatedFactories.hpp"
#include "Utility.hpp"

namespace Kvasir{
namespace Register{
	namespace Detail{
		using namespace MPL;

		//factory for write literal
		template<typename TLocation, unsigned Value>
		struct Write;
		template<typename TAddress, unsigned Mask, typename Access, typename TFieldType, unsigned Value>
		struct Write<FieldLocation<TAddress, Mask, Access, TFieldType>, Value>
			: Action<
				FieldLocation<
					TAddress,
					Mask,
					Access,
					TFieldType>,
				WriteLiteralAction<(Value<<positionOfFirstSetBit(Mask))>>{};

		template<typename TLocation, unsigned Value>
		using WriteT = typename Write<TLocation,Value>::Type;

		template<typename TLocation>
		struct Set;
		template<typename TAddress, unsigned Mask, typename Access, typename TFieldType>
		struct Set<FieldLocation<TAddress, Mask, Access, TFieldType>>
			: Action<
				FieldLocation<
					TAddress,
					Mask,
					Access,
					TFieldType>,
				WriteLiteralAction<Mask>>
		{
			static_assert(onlyOneBitSet(Mask),"Register::set only works on single bits. Use Register::write to write values to wider bit fields");
		};

		template<typename TLocation>
		using SetT = typename Set<TLocation>::Type;


		template<typename TLocation>
		struct Clear;
		template<typename TAddress, unsigned Mask, typename Access, typename TFieldType>
			struct Clear<
				FieldLocation<
					TAddress,
					Mask,
					Access,
					TFieldType>> :
				Action<
					FieldLocation<
						TAddress,
				Mask,
				Access,
				TFieldType>,
				WriteLiteralAction<0>>
			{
				static_assert(onlyOneBitSet(Mask), "Register::clear only works on single bits. Use Register::write to write values to wider bit fields");
			};
		
		//special case for clearing toggle bits. Writing the value back will clear these, therefore using a xor of 0 will clear.
		template<typename TAddress, unsigned Mask, AccessType AT, ReadActionType RAT, typename TFieldType>
			struct Clear<
				FieldLocation<
					TAddress,
					Mask,
					Access<AT, RAT, ModifiedWriteValueType::oneToToggle>,
					TFieldType>> :
				Action<
					FieldLocation<
						TAddress,
				Mask,
				Access<AT,RAT,ModifiedWriteValueType::oneToToggle>,
				TFieldType>,
				XorLiteralAction<0>>
			{

			};

		template<typename TLocation>
		using ClearT = typename Clear<TLocation>::Type;


		template<typename TLocation>
		struct ResetImpl;
		template<typename TAddress, unsigned Mask, typename Access, typename TFieldType>
		struct ResetImpl<FieldLocation<	TAddress, Mask, Access, TFieldType>> {
			using type = Action <
				FieldLocation<
				TAddress,
				Mask,
				Access,
				TFieldType>,
				WriteLiteralAction < (1 << positionOfFirstSetBit(Mask)) >> ;
			static_assert(onlyOneBitSet(Mask),"Register::reset only works on single bits that are marked as set to clear");
			static_assert(Detail::IsSetToClear<FieldLocation<TAddress, Mask, Access, TFieldType >>::value, "Access violation: Register::reset only works on set to clear bits");
		};

		template<typename TLocation>
		using Reset = typename ResetImpl<TLocation>::type;

	}

//Action factories which turn a FieldLocation into an Action
	template<typename T>
	constexpr inline MPL::EnableIfT<Detail::IsFieldLocation<T>::value,Action<T,ReadAction>>
	read(T){
		return {};
	}

	template<typename T, typename U, typename... Ts>
	constexpr decltype(MPL::list(read(T{}), read(U{}), read(Ts{})...)) read(T,U,Ts...){
		return {};
	}

	template<typename T>
	constexpr MPL::EnableIfT<Detail::IsFieldLocation<T>::value,Detail::SetT<T>>
	set(T){
		return {};
	}

	template<typename T, typename U, typename... Ts>
	constexpr decltype(MPL::list(set(T{}), set(U{}), set(Ts{})...)) set(T,U,Ts...){
		return {};
	}

	template<typename T>
	constexpr MPL::EnableIfT<Detail::IsFieldLocation<T>::value,Detail::ClearT<T>>
	clear(T){
		return {};
	}

	template<typename T, typename U, typename... Ts>
	constexpr decltype(MPL::list(clear(T{}), clear(U{}), clear(Ts{})...)) clear(T,U,Ts...){
		return {};
	}

	template<typename T>
	constexpr MPL::EnableIfT<Detail::IsFieldLocation<T>::value,Detail::Reset<T>>
	reset(T){
		static_assert(Detail::IsSetToClear<T>::value,"Access violation: Register::reset only works on set to clear bits");
		return {};
	}

	template<typename T, typename U, typename... Ts>
	constexpr decltype(MPL::list(reset(T{}), reset(U{}), reset(Ts{})...)) reset(T,U,Ts...){
		return {};
	}


	//Write of runtime value
	//T must be bit location or function will be removed from overload set
	template<typename T>
	constexpr inline MPL::EnableIfT<Detail::IsFieldLocation<T>::value,Action<T,WriteAction>>
	write(T,Detail::GetFieldTypeT<T> in){
		static_assert(Detail::IsWritable<T>::value,"Access violation: The FieldLocation provided is not marked as writable");
		return Action<T, WriteAction>{Detail::GetMask<T>::value & (unsigned(in) << Detail::maskStartsAt(Detail::GetMask<T>::value))};
	}

	//compile time value
	//T must be bit location or function will be removed from overload set
	//U mst be compile time value or function will be removed from overload set
	template<typename T, typename U>
	constexpr inline MPL::EnableIfT<
		(Detail::IsFieldLocation<T>::value && MPL::IsValue<U>::value),
		Detail::WriteT<T, Detail::ValueToUnsigned<U>::value>>
	write(T, U) {
		static_assert(Detail::WriteLocationAndCompileTimeValueTypeAreSame<T, U>::value, "type mismatch: the FieldLocation field type and the compile time Value type must be the same");
		return { };
	}
	
	//compile time field value
	//T must be a field value or function will be removed from overload set
	template<typename T, typename T::DataType V>
	constexpr inline decltype(write(T{}, MPL::Value<typename T::DataType, V>{}))
		write(FieldValue<T, V>) {
			return { };
		}
	
	//variadic compile time field values
	template<typename T, typename U, typename... Ts>
		constexpr brigand::list<decltype(write(std::declval<T>())), decltype(write(std::declval<U>())), decltype(write(std::declval<Ts>()))...> write(T, U, Ts...) {
			return { };
		}
}
}
