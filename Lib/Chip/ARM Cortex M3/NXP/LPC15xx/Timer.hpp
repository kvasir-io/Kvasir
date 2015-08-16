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
#include "Common/Interrupt.hpp"
#include "System.hpp"
#include "Common/Tags.hpp"
#include "Timer/Timer.hpp"

namespace Kvasir{
namespace Timer{
namespace Detail  {
	template<typename TDerived>
	struct OnIsrActionTraits<::Kvasir::Tag::User,TDerived> {
		void operator()(){
		}
	};
	template<typename A, int high, int low, int value>
	using WriteFieldT = Register::Action<Register::RWFieldLocT<A,high,low>,Register::WriteLiteralAction<value>>;
	template<typename A, int Pos, int value>
	using WriteBitT = Register::Action<Register::RWBitLocT<A,Pos>,Register::WriteLiteralAction<value>>;

}
struct Timer0DefaultConfig {
	static constexpr auto isr = Interrupt::sct0;
	static constexpr auto powerClockEnable = MPL::list(
			set(System::SysAhbClkCtrl1::clockForSct0Enabled),
			Register::sequencePoint,
			set(System::PResetCtrl1::sct0ResetAsserted),
			Register::sequencePoint,
			clear(System::PResetCtrl1::sct0ResetAsserted)
			);
	static constexpr int baseAddress = 0x1C018000;

	struct Configuration{	//SCT CONFIG
		using Address = Register::Address<baseAddress>;
		static constexpr Detail::WriteBitT<Address,0,true> one32BitTimerMode{};
		static constexpr Detail::WriteBitT<Address,0,false> two16BitTimersMode{};
		struct ClockMode{
			static constexpr Detail::WriteFieldT<Address,2,1,0> system{};
			static constexpr Detail::WriteFieldT<Address,2,1,(1<<1)> prescaledSystem{};
			static constexpr Detail::WriteFieldT<Address,2,1,(2<<1)> sct{};
			static constexpr Detail::WriteFieldT<Address,2,1,(3<<1)> prescaledSct{};
		};
		struct ClockSelect{
			template<int I>
			using MakeT = Register::Action<Register::RWFieldLocT<Address,6,3>,Register::WriteLiteralAction<(I<<3)>>;
			template<int InputNumber>
			static constexpr MakeT<InputNumber+1> makeFallingEdgeInput(){ return MakeT<InputNumber+1>{}; }
			template<int InputNumber>
			static constexpr MakeT<InputNumber> makeRisingEdgeInput(){ return MakeT<InputNumber>{}; }
		};
	};
	struct Control{  //SCT CTRL
		using Address = Register::Address<baseAddress+4>;
		static constexpr Detail::WriteBitT<Address,18,false> couterEnable{};
		static constexpr Detail::WriteBitT<Address,18,true> couterDisable{};
	};
	struct Count{
		using Address = Register::Address<baseAddress + 40u>;
		template<unsigned I>
		static constexpr Detail::WriteFieldT<Address,15,0,I> make16BitLowValue(){
			static_assert(I>0xFFFF,"value out of range");
			return{};
		}
		template<unsigned I>
		static constexpr Detail::WriteFieldT<Address,31,16,(I<<16)> make16BitHighValue(){
			static_assert(I>0xFFFF,"value out of range");
			return{};
		}
		template<unsigned I>
		static constexpr Detail::WriteFieldT<Address,31,0,I> make32BitValue(){
			return{};
		}
	};
	struct MatchControl{
		static constexpr auto address = baseAddress + 0x304;
		template<int Offset, int I, int V>
		using MakeT = Detail::WriteBitT<Register::Address<address + Offset>,I,V>;
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
		static constexpr Detail::WriteBitT<Register::Address<baseAddress>,17,true> makeResetOnMatch(decltype(Tag::Match::m0)){
			return {};
		}
	};


	static constexpr int prescaleValue = 1000;
	static constexpr MPL::List<> userInit{};
};
}
}
