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

	template<unsigned A, unsigned WriteIgnoredIfZeroMask, unsigned WriteIgnoredIfOneMask = 0, typename TRegType = unsigned, typename TMode = NormalMode>
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


	template<typename TLocation, typename TAction>
	struct Action : TAction {
		template<typename... Ts>
		constexpr Action(Ts...args):TAction{args...}{};
		using Type = Action<TLocation,TAction>;
	};

	template<bool Readable, bool Writable, bool ClearOnRead = false, bool Popable = false, bool SetToClear = false>
	struct Access {
		using Type = Access<Readable,Writable,ClearOnRead,Popable,SetToClear>;
	};

	using ReadWriteAccess = Access<true,true>;
	using ReadOnlyAccess = Access<true,false>;
	using WriteOnlyAccess = Access<false,true>;
	using RSetToClearAccess = Access<true,false,false,false,true>;

	template<typename TAddress, unsigned Mask, typename Access = ReadWriteAccess, typename TFieldType = unsigned>
	struct BitLocation{
		using Type = BitLocation<TAddress, Mask, Access, TFieldType>;
	};

	namespace Detail{
		using namespace MPL;
		constexpr int positionOfFirstSetBit(unsigned in, int pos=0){
			return (in & 0x01)?pos:positionOfFirstSetBit(in >> 1, pos + 1);
		}
	}

	template<typename TAddresses, typename TBitLocation>
	struct ValueObject;		//see below for implementation in specialization
	template<int... Is, typename... TAs, unsigned... Masks, typename... TAccesss, typename... TRs>
	struct ValueObject<MPL::List<MPL::Int<Is>...>,MPL::List<BitLocation<TAs,Masks,TAccesss,TRs>>...>{
		const unsigned value_[sizeof...(Is)];
		template<int Index>
		MPL::AtT<MPL::List<TRs...>,MPL::Int<Index>> get() const{
			using namespace MPL;
			using Address = Int<AtT<List<TAs...>,Int<Index>>::value>;
			using ValueIndex = FindT<List<Int<Is>...>,Address>;
			using ResultType = AtT<List<TRs...>,Int<Index>>;
			using Mask = AtT<List<Int<Masks>...>,Int<Index>>;
			unsigned r = (value_[ValueIndex::value] & Mask::value) >> positionOfFirstSetBit(Mask::value);
			return ResultType(r);
		}
		using Type = ValueObject<MPL::List<MPL::Int<Is>...>,MPL::List<Action<BitLocation<TAs,Masks,TAccesss,TRs>,ReadAction>>...>;
	};
	template<int I, typename TA, unsigned Mask, typename TAccess, typename TR>
	struct ValueObject<MPL::List<MPL::Int<I>>,MPL::List<BitLocation<TA, Mask, TAccess, TR>>>{
		const unsigned value_;
		operator TR(){
			using namespace MPL;
			using ResultType = TR;
			return ResultType((value_ & Mask) >> Detail::positionOfFirstSetBit(Mask));
		};
		using Type = ValueObject<MPL::List<MPL::Int<I>>,MPL::List<Action<BitLocation<TA, Mask, TAccess, TR>,ReadAction>>>;
	};
	template<>
	struct ValueObject<MPL::List<>,MPL::List<>>{
		using Type = ValueObject<MPL::List<>,MPL::List<>>;
	};

}
}
