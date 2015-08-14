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

namespace Kvasir{
namespace Timer{
namespace Detail  {
	template<typename TDerived>
	struct OnIsrActionTraits<::Kvasir::Tag::User,TDerived> {
		void operator()(){
		}
	};
}
struct Timer0DefaultConfig {
	static constexpr auto isr = Interrupt::sct0;
	static constexpr auto powerClockEnable = MPL::list(
			set(System::AHBClock::Enabled::sct0),
			Register::sequencePoint,
			set(System::PeripheralResetEnabled::sct0),
			Register::sequencePoint,
			clear(System::PeripheralResetEnabled::sct0)
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
		template<unsigned I>
		static constexpr Register::WriteActionT<baseAddress + 40,0xFFFFFu,I> make16BitLowValue(){
			static_assert(I>0xFFFF,"value out of range");
			Register::WriteActionT<baseAddress + 40,0xFFFFF,I>{};
		}
		template<unsigned I>
		static constexpr Register::WriteActionT<baseAddress + 40u,0xFFFF0000u,(I<<16)> make16BitHighValue(){
			static_assert(I>0xFFFF,"value out of range");
			Register::WriteActionT<baseAddress + 40,0xFFFF0000,(I<<16)>{};
		}
		template<unsigned I>
		static constexpr Register::WriteActionT<baseAddress + 40,0xFFFFFFFFu,I> make32BitValue(){
			Register::WriteActionT<baseAddress + 40,0xFFFFFFFF,I>{};
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


	static constexpr int prescaleValue = 1000;
	static constexpr MPL::List<> userInit{};
};
}
}
