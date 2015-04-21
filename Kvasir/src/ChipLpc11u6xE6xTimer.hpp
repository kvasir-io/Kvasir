#pragma once
#include "ChipLpc11u6xE6xInterrupt.hpp"

namespace Kvasir{
namespace Timer{
struct TC16B0DefaultConfig {
	static constexpr auto isr = Interrupt::counterTimer16Bank0;
	static constexpr Register::WriteActionT<0x40048080,(1<<7),(1<<7)> clockEnable{};
	static constexpr Register::WriteActionT<0x40048080,(1<<7),0> clockDisable{};
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
		static constexpr Register::WriteBitActionT<address,0,true> couterEnable{};
		static constexpr Register::WriteBitActionT<address,0,false> couterDisable{};
		static constexpr Register::WriteBitActionT<address,1,true> holdInReset{};
		static constexpr Register::WriteBitActionT<address,1,false> noReset{};

	};
	struct MatchControl{
		struct Detail{
			template<int I, int V>
			using MakeT = Register::WriteBitActionT<baseAddress + 0x14,I,V>;
		};
		template<typename T>
		static constexpr Detail::MakeT<(1<<(T::value * 3)),true> makeInterruptEnable(T){
			static_assert(T::value <= 3,"channel not supported");
			return Detail::MakeT<(1<<(T::value * 3)),true>{};
		}
		template<typename T>
		static constexpr Detail::MakeT<(1<<(T::value * 3)),false> makeInterruptDisable(T){
			static_assert(T::value <= 3,"channel not supported");
			return Detail::MakeT<(1<<(T::value * 3)),true>{};
		}
		template<typename T>
		static constexpr Detail::MakeT<(1<<((T::value * 3)+1)),true> makeResetOnMatch(T){
			static_assert(T::value <= 3,"channel not supported");
			return Detail::MakeT<(1<<((T::value * 3)+1)),true>{};
		}
		template<typename T>
		static constexpr Detail::MakeT<(1<<((T::value * 3)+1)),false> makeNoResetOnMatch(T){
			static_assert(T::value <= 3,"channel not supported");
			return Detail::MakeT<(1<<((T::value * 3)+1)),true>{};
		}
		template<typename T>
		static constexpr Detail::MakeT<(1<<((T::value * 3)+2)),true> makeStopOnMatch(T){
			static_assert(T::value <= 3,"channel not supported");
			return Detail::MakeT<(1<<((T::value * 3)+1)),true>{};
		}
		template<typename T>
		static constexpr Detail::MakeT<(1<<((T::value * 3)+2)),false> makeNoStopOnMatch(T){
			static_assert(T::value <= 3,"channel not supported");
			return Detail::MakeT<(1<<((T::value * 3)+1)),true>{};
		}
	};
	struct Prescale{
		static constexpr int address = baseAddress + 0x0C;
		template<int I>
		static constexpr auto makeSet(){ return Register::BlindWriteActionT<address,0xFFFFFFFF,I>{}; }
	};
	struct MatchRegister{
		static constexpr int address = baseAddress + 0x18;
		template<int Offset, int I>
		using MakeSetValueT = Register::BlindWriteActionT<address + Offset,0xFFFFFFFF,I>;
		template<int I, typename T>
		static constexpr auto makeSetValue(T){
			static_assert(T::value <= 3,"match register not supported on this chip");
			return MakeSetValueT<(T::value * 4),I>{};
		}
	};

	static constexpr int prescaleValue = 1000;
	static constexpr MPL::List<> userInit{};
	static constexpr auto powerClockEnable = MPL::list(clockEnable);
};
}
}
