/**************************************************************************
Copyright 2015 Odin Holmes
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
****************************************************************************/
#pragma once
#include "Interrupt.hpp"
#include "System.hpp"
#include "Tags.hpp"

namespace Kvasir{
namespace Timer{
namespace Detail{
struct TagSupport{
	//supported tags
	using Match0 = Tag::Match::M0;
	using Match1 = Tag::Match::M1;
	using Match2 = Tag::Match::M2;
	using Match3 = Tag::Match::M3;
	using Match4 = Tag::Match::M4;
	using Match5 = Tag::Match::M5;
	using Match6 = Tag::Match::M6;
	using Match7 = Tag::Match::M7;
	using Match8 = Tag::Match::M8;
	using Match9 = Tag::Match::M9;
	using Match10 = Tag::Match::M10;
	using Match11 = Tag::Match::M11;
	using Match12 = Tag::Match::M12;
	using Match13 = Tag::Match::M13;
	using Match14 = Tag::Match::M14;
	using Match15 = Tag::Match::M15;
	using Capture0 = Tag::Capture::C0;
	using Capture1 = Tag::Capture::C1;
	using Capture2 = Tag::Capture::C2;
	using Capture3 = Tag::Capture::C3;
	using Capture4 = Tag::Capture::C4;
	using Capture5 = Tag::Capture::C5;
	using Capture6 = Tag::Capture::C6;
	using Capture7 = Tag::Capture::C7;
	using Capture8 = Tag::Capture::C8;
	using Capture9 = Tag::Capture::C9;
	using Capture10 = Tag::Capture::C10;
	using Capture11 = Tag::Capture::C11;
	using Capture12 = Tag::Capture::C12;
	using Capture13 = Tag::Capture::C13;
	using Capture14 = Tag::Capture::C14;
	using Capture15 = Tag::Capture::C15;
	static constexpr Match0 match0{};
	static constexpr Match1 match1{};
	static constexpr Match2 match2{};
	static constexpr Match3 match3{};
	static constexpr Match4 match4{};
	static constexpr Match5 match5{};
	static constexpr Match6 match6{};
	static constexpr Match7 match7{};
	static constexpr Match8 match8{};
	static constexpr Match9 match9{};
	static constexpr Match10 match10{};
	static constexpr Match11 match11{};
	static constexpr Match12 match12{};
	static constexpr Match13 match13{};
	static constexpr Match14 match14{};
	static constexpr Match15 match15{};
	static constexpr Capture0 capture0{};
	static constexpr Capture1 capture1{};
	static constexpr Capture2 capture2{};
	static constexpr Capture3 capture3{};
	static constexpr Capture4 capture4{};
	static constexpr Capture5 capture5{};
	static constexpr Capture6 capture6{};
	static constexpr Capture7 capture7{};
	static constexpr Capture8 capture8{};
	static constexpr Capture9 capture9{};
	static constexpr Capture10 capture10{};
	static constexpr Capture11 capture11{};
	static constexpr Capture12 capture12{};
	static constexpr Capture13 capture13{};
	static constexpr Capture14 capture14{};
	static constexpr Capture15 capture15{};
};
}
struct Timer0DefaultConfig : Detail::TagSupport {
	static constexpr auto isr = Interrupt::sct0;
	static constexpr auto powerClockEnable = MPL::list(
			System::AHBClockControl::sct0ClockOn,
			Register::sequencePoint,
			System::PeripheralReset::sct0ResetOn,
			Register::sequencePoint,
			System::PeripheralReset::sct0ResetOff
			);
	static constexpr int baseAddress = 0x1C018000;

	struct Configuration{	//SCT CONFIG
		static constexpr int address = baseAddress;
		static constexpr Register::WriteBitActionT<address,0,true> one32BitTimerMode{};
		static constexpr Register::WriteBitActionT<address,0,false> two16BitTimersMode{};
		struct ClockMode{
			static constexpr Register::WriteActionT<address,(0x03 << 1),(0<<1)> system{};
			static constexpr Register::WriteActionT<address,(0x03 << 1),(1<<1)> prescaledSystem{};
			static constexpr Register::WriteActionT<address,(0x03 << 1),(2<<1)> sct{};
			static constexpr Register::WriteActionT<address,(0x03 << 1),(3<<1)> prescaledSct{};
		};
		struct ClockSelect{
			template<int I>
			using MakeT = Register::WriteActionT<address,(0x0F << 3),(I<<3)>;
			template<int InputNumber>
			static constexpr MakeT<InputNumber+1> makeFallingEdgeInput(){ return MakeT<InputNumber+1>{}; }
			template<int InputNumber>
			static constexpr MakeT<InputNumber> makeRisingEdgeInput(){ return MakeT<InputNumber>{}; }
		};
	};
	struct Control{  //SCT CTRL
		static constexpr int address = baseAddress+4;
		static constexpr Register::WriteBitActionT<address,18,false> couterEnable{};
		static constexpr Register::WriteBitActionT<address,18,true> couterDisable{};
	};
	struct Count{
		template<int I>
		static constexpr Register::WriteActionT<baseAddress + 40,0xFFFFF,I> make16BitLowValue(){
			static_assert(I>0xFFFF,"value out of range");
			Register::WriteActionT<baseAddress + 40,0xFFFFF,I>{};
		}
		template<int I>
		static constexpr Register::WriteActionT<baseAddress + 40,0xFFFFF0000,(I<<16)> make16BitHighValue(){
			static_assert(I>0xFFFF,"value out of range");
			Register::WriteActionT<baseAddress + 40,0xFFFFF0000,(I<<16)>{};
		}
		template<int I>
		static constexpr Register::WriteActionT<baseAddress + 40,0xFFFFFFFFF,I> make32BitValue(){
			Register::WriteActionT<baseAddress + 40,0xFFFFFFFFF,I>{};
		}
	};
	struct MatchControl{
		static constexpr auto address = baseAddress + 0x304;
		template<int Offset, int I, int V>
		using MakeT = Register::WriteBitActionT<address + Offset,I,V>;
		template<typename T>
		static constexpr MakeT<0,(T::value * 3),true> makeInterruptEnable(T){
			static_assert(T::value <= 3,"channel not supported");
			return MakeT<0,(T::value * 3),true>{};
		}
		template<typename T>
		static constexpr MakeT<0,(T::value * 3),true> makeInterruptDisable(T){
			static_assert(T::value <= 3,"channel not supported");
			return MakeT<0,(T::value * 3),true>{};
		}

		//this is a special case with LPC15xx
		static constexpr Register::WriteBitActionT<baseAddress,17,true> makeResetOnMatch(Match0){
			return Register::WriteBitActionT<baseAddress,17,true>{};
		}
	};

	//not working
	struct Interrupt{
		static constexpr int address = baseAddress;
		using Status = Register::Functional<MPL::Int<address>,MPL::Int<0x7F>,Register::Policy::ReadableP>;
		using Clear = Register::Functional<MPL::Int<address>,MPL::Int<0x7F>,Register::Policy::WriteableP>;
	};
	struct Prescale{
		static constexpr int address = baseAddress + 0x0C;
		template<int I>
		static constexpr auto makeSet(){ return Register::BlindWriteActionT<address,0xFFFFFFFF,I>{}; }
	};
	struct MatchRegister{
		static constexpr int address = baseAddress + 0x18;
		template<int I, int Offset>
		using MakeSetValueT = Register::BlindWriteActionT<address,0xFFFFFFFF,I>;
		template<int I, typename T>
		static constexpr auto makeSetValue(T){ return MakeSetValueT<I, T::value>{};}
	};


	static constexpr int prescaleValue = 1000;
	static constexpr MPL::List<> userInit{};
};
}
}
