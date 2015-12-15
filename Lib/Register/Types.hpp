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
#include "Mpl\Algorithm.hpp"

namespace Kvasir{
namespace Register{

	struct SequencePoint{
		using Type = SequencePoint;
	};
	constexpr SequencePoint sequencePoint{};

	template<int I>
	struct IsolatedByte{
		static constexpr int value = I;
		using Type = IsolatedByte<I>;
	};
	namespace Isolated{
		constexpr IsolatedByte<0> byte0{};
		constexpr IsolatedByte<1> byte1{};
		constexpr IsolatedByte<2> byte2{};
		constexpr IsolatedByte<3> byte3{};
	}

	struct PushableMode{};
	struct NormalMode{};
	struct SpecialReadMode{};

	template<unsigned A, unsigned WriteIgnoredIfZeroMask=0, unsigned WriteIgnoredIfOneMask = 0, typename TRegType = unsigned, typename TMode = NormalMode>
	struct Address{
		using Type = Address<A,WriteIgnoredIfZeroMask,WriteIgnoredIfOneMask,TRegType,TMode>;
		static constexpr unsigned value = A;
	};

	//write a compile time known value
	template<unsigned I>
	struct WriteLiteralAction{
		static constexpr unsigned value = I;
	};

	//write a run time known value
	struct WriteAction{
		unsigned value_;
	};

	//read
	struct ReadAction{

	};

	//xor a compile time known mask
	template<unsigned I>
	struct XorLiteralAction{
		static constexpr unsigned value = I;
	};

	//xor a run time known value
	struct XorAction{
		unsigned value_;
	};


	template<typename TLocation, typename TAction>
	struct Action : TAction {
		template<typename... Ts>
		constexpr Action(Ts...args):TAction{args...}{}
		using Type = Action<TLocation,TAction>;
	};

	template<bool Readable, bool Writable, bool ClearOnRead = false, bool Popable = false, bool SetToClear = false>
	struct Access {
		using Type = Access<Readable,Writable,ClearOnRead,Popable,SetToClear>;
	};

	using ReadWriteAccess = Access<true,true>;
	using ReadOnlyAccess = Access<true,false>;
	using WriteOnlyAccess = Access<false,true>;
	using RSetToClearAccess = Access<true,true,false,false,true>;

	template<typename TAddress, unsigned Mask, typename Access = ReadWriteAccess, typename TFieldType = unsigned>
	struct FieldLocation{
		using Type = FieldLocation<TAddress, Mask, Access, TFieldType>;
		using DataType = TFieldType;
	};

	template<typename T, typename U>
	struct FieldLocationPair{
		using Type = FieldLocationPair<T,U>;
	};

	namespace Detail{
		using namespace MPL;
		constexpr int positionOfFirstSetBit(unsigned in, int pos=0){
			return (in & 0x01)?pos:positionOfFirstSetBit(in >> 1, pos + 1);
		}
	}
	
	template<typename TFieldLocation, typename TFieldLocation::DataType Value>
	struct FieldValue{
		using Type = FieldValue<TFieldLocation, Value>;
		operator typename TFieldLocation::DataType() const {
			return Value;
		}
	};

	template<typename TAddresses, typename TFieldLocation>
	struct FieldTuple;		//see below for implementation in specialization
	template<unsigned... Is, typename... TAs, unsigned... Masks, typename... TAccesss, typename... TRs>
	struct FieldTuple<MPL::List<MPL::Unsigned<Is>...>,MPL::List<FieldLocation<TAs,Masks,TAccesss,TRs>...>>{
		const unsigned value_[sizeof...(Is)];
		template<int Index>
		MPL::AtT<MPL::List<TRs...>,MPL::Int<Index>> get() const{
			using namespace MPL;
			using Address = Int<AtT<List<TAs...>,Int<Index>>::value>;
			using ValueIndex = FindT<List<Int<Is>...>,Address>;
			using ResultType = AtT<List<TRs...>,Int<Index>>;
			using Mask = AtT<List<Int<Masks>...>,Int<Index>>;
			unsigned r = (value_[ValueIndex::value] & Mask::value) >> Detail::positionOfFirstSetBit(Mask::value);
			return ResultType(r);
		}
		using Type = FieldTuple<MPL::List<MPL::Unsigned<Is>...>,MPL::List<Action<FieldLocation<TAs,Masks,TAccesss,TRs>,ReadAction>...>>;
	};
	template<unsigned I, typename TA, unsigned Mask, typename TAccess, typename TR>
	struct FieldTuple<MPL::List<MPL::Unsigned<I>>,MPL::List<FieldLocation<TA, Mask, TAccess, TR>>>{
		const unsigned value_;
		operator TR(){
			using namespace MPL;
			using ResultType = TR;
			return ResultType((value_ & Mask) >> Detail::positionOfFirstSetBit(Mask));
		};
		using Type = FieldTuple<MPL::List<MPL::Unsigned<I>>,MPL::List<Action<FieldLocation<TA, Mask, TAccess, TR>,ReadAction>>>;
	};
	template<>
	struct FieldTuple<MPL::List<>,MPL::List<>>{
		using Type = FieldTuple<MPL::List<>,MPL::List<>>;
	};

	template<int I, typename TFieldTuple>
	auto get(TFieldTuple o)->decltype(o.template get<I>()) {
		return o.template get<I>();
	}
	namespace Detail{
		template<typename Object, typename TFieldLocation>
		struct GetFieldLocationIndex;
		template<typename TA, typename TLocations, typename TFieldLocation>
		struct GetFieldLocationIndex<FieldTuple<TA, TLocations>, TFieldLocation> : MPL::Find<TLocations, TFieldLocation> {};
		
		template<typename Object, typename TFieldLocation>
		using GetFieldLocationIndexT = typename GetFieldLocationIndex<Object, TFieldLocation>::Type;
	}
	template<typename T, typename TFieldTuple>
	auto get(T, TFieldTuple o)->decltype(o.template get<Detail::GetFieldLocationIndex<TFieldTuple,T>::value>()) {
		return o.template get<Detail::GetFieldLocationIndex<TFieldTuple, T>::value>();
	}

	template<typename TFieldTuple, typename TLocation, typename TLocation::DataType Value>
	bool operator==(const TFieldTuple& f, const FieldValue<TLocation, Value>) {
		return get(TLocation{},f) == Value;
	}
}
}
