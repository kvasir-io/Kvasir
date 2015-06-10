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

namespace Kvasir{
namespace Timer{
struct TC16B0DefaultConfig {
	static constexpr auto isr = Interrupt::counterTimer16Bank0;
	static constexpr 	Register::BitLocT<Register::Address::Normal<0x40048080,0x00>, 7>		clockEnabled{};
	static constexpr int baseAddress = 0x4000C000;
	//supported tags
	using Match0 = Tag::Match::M0;
	using Match1 = Tag::Match::M1;
	using Match2 = Tag::Match::M2;
	using Match3 = Tag::Match::M3;
	using Capture0 = Tag::Capture::C0;
	using Capture1 = Tag::Capture::C1;
	using Capture2 = Tag::Capture::C2;
	static constexpr Match0 match0{};
	static constexpr Match1 match1{};
	static constexpr Match2 match2{};
	static constexpr Match3 match3{};
	static constexpr Capture0 capture0{};
	static constexpr Capture1 capture1{};
	static constexpr Capture2 capture2{};
	struct Interrupt{
		static constexpr int address = baseAddress;
		static constexpr Register::RWLocation<address,0x7F> status{};
		static constexpr Register::RWLocation<address,0x7F> clear{};
	};
	struct Control{
		static constexpr int address = baseAddress + 0x04;
		static constexpr Register::RWLocation<address,(1<<0)> couterEnable{};
		static constexpr Register::RWLocation<address,(1<<1)> holdInReset{};
	};
	struct MatchControl{
		static constexpr int address = baseAddress + 0x14;
		template<typename T>
		static constexpr Register::RWLocation<address,(1<<(T::value * 3))> interruptEnable(T){
			static_assert(T::value <= 3,"channel not supported");
			return Register::RWLocation<address,(1<<(T::value * 3))>{};
		}
		template<typename T>
		static constexpr Register::RWLocation<address,(1<<((T::value * 3)+1))> resetOnMatch(T){
			static_assert(T::value <= 3,"channel not supported");
			return Register::RWLocation<address,(1<<(T::value * 3)+1)>{};
		}
		template<typename T>
		static constexpr Register::RWLocation<address,(1<<((T::value * 3)+2))> stopOnMatch(T){
			static_assert(T::value <= 3,"channel not supported");
			return Register::RWLocation<address,(1<<(T::value * 3)+2)>{};
		}
	};
	static constexpr Register::RWLocation<baseAddress + 0x0C,0xFFFFFFFF> prescale{};
	struct MatchRegister{
		static constexpr int address = baseAddress + 0x18;
		template<typename T>
		static constexpr Register::RWLocation<address + (T::value * 4),0xFFFFFFFF> select(T){
			static_assert(T::value <= 3,"match register not supported on this chip");
			return {};
		}
	};

	static constexpr int prescaleValue = 1000;
	static constexpr MPL::List<> userInit{};
	static constexpr auto powerClockEnable = MPL::list(set(clockEnabled));
};
}
}
