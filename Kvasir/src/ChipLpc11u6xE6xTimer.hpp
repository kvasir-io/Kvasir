#pragma once
#include "ChipLpc11u6xE6xInterrupt.hpp"

namespace Kvasir{
namespace Timer{
struct TC16B0DefaultConfig {
	static constexpr auto isr = Interrupt::counterTimer16Bank0;
	static constexpr auto enableIrq = Core::enableIrq(isr);
	static constexpr Register::WriteActionT<0x40048080,(1<<7),(1<<7)> clockEnable{};
	static constexpr Register::WriteActionT<0x40048080,(1<<7),0> clockDisable{};
	static constexpr int baseAddress = 0x4000C000;
	using InterruptStatusRegister = Register::Functional<MPL::Int<baseAddress>,MPL::Int<0x7F>,MPL::List<Register::Policy::ReadableP,Register::Policy::WriteableP>>;
	static constexpr Register::WriteActionT<baseAddress + 0x04,(1<<0),(1<<0)> couterEnable{};
	static constexpr Register::WriteActionT<baseAddress + 0x04,(1<<0),0> couterDisable{};
	struct MatchControl{
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<0),(1<<0)> reg0InterruptEnable{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<1),(1<<1)> reg0ResetOnMatch{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<2),(1<<2)> reg0StopOnMatch{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<3),(1<<3)> reg1InterruptEnable{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<4),(1<<4)> regResetOnMatch{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<5),(1<<5)> reg1StopOnMatch{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<6),(1<<6)> reg2InterruptEnable{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<7),(1<<7)> reg2ResetOnMatch{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<8),(1<<8)> reg2StopOnMatch{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<9),(1<<9)> reg3InterruptEnable{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<10),(1<<10)> reg3ResetOnMatch{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<11),(1<<11)> reg3StopOnMatch{};
	};
	template<int I>
	using SetPrescaleT = Register::BlindWriteActionT<baseAddress + 0x0C,0xFFFFFFFF,I>;
	struct MatchRegister0{
		template<int I>
		using MakeSetValueT = Register::BlindWriteActionT<baseAddress + 0x18,0xFFFFFFFF,I>;
		template<int I>
		static constexpr auto makeSetValue(){ return MakeSetValueT<I>{};}
	};
	struct MatchRegister1{
		template<int I>
		using MakeSetValueT = Register::BlindWriteActionT<baseAddress + 0x1C,0xFFFFFFFF,I>;
		template<int I>
		static constexpr auto makeSetValue(){ return MakeSetValueT<I>{};}
	};
	struct MatchRegister2{
		template<int I>
		using MakeSetValueT = Register::BlindWriteActionT<baseAddress + 0x20,0xFFFFFFFF,I>;
		template<int I>
		static constexpr auto makeSetValue(){ return MakeSetValueT<I>{};}
	};
	struct MatchRegister3{
		template<int I>
		using MakeSetValueT = Register::BlindWriteActionT<baseAddress + 0x24,0xFFFFFFFF,I>;
		template<int I>
		static constexpr auto makeSetValue(){ return MakeSetValueT<I>{};}
	};

	static constexpr int prescaleValue = 1000;
	static constexpr MPL::List<> matchReg0Init{};
	static constexpr MPL::List<> matchReg1Init{};
	static constexpr MPL::List<> matchReg2Init{};
	static constexpr MPL::List<> matchReg3Init{};
	static constexpr MPL::List<> captureReg0Init{};
	static constexpr MPL::List<> captureReg1Init{};
	static constexpr MPL::List<> captureReg2Init{};
};
}
}
