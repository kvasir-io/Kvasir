#pragma once
#include "ChipLpc11xxInterrupt.hpp"

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
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<0),(1<<0)> r0InterruptEnable{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<1),(1<<1)> r0ResetOnMatch{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<2),(1<<2)> r0StopOnMatch{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<3),(1<<3)> r1InterruptEnable{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<4),(1<<4)> rResetOnMatch{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<5),(1<<5)> r1StopOnMatch{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<6),(1<<6)> r2InterruptEnable{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<7),(1<<7)> r2ResetOnMatch{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<8),(1<<8)> r2StopOnMatch{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<9),(1<<9)> r3InterruptEnable{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<10),(1<<10)> r3ResetOnMatch{};
		static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<11),(1<<11)> r3StopOnMatch{};
	};
	template<int I>
	using SetPrescaleT = Register::BlindWriteActionT<baseAddress + 0x0C,0xFFFFFFFF,I>;
	template<int I>
	using SetMR0ValueT = Register::BlindWriteActionT<baseAddress + 0x18,0xFFFFFFFF,I>;
	template<int I>
	using SetMR1ValueT = Register::BlindWriteActionT<baseAddress + 0x1C,0xFFFFFFFF,I>;
	template<int I>
	using SetMR2ValueT = Register::BlindWriteActionT<baseAddress + 0x20,0xFFFFFFFF,I>;
	template<int I>
	using SetMR3ValueT = Register::BlindWriteActionT<baseAddress + 0x24,0xFFFFFFFF,I>;

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
