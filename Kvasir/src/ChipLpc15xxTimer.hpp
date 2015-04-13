#pragma once
#include "ChipLpc15xxInterrupt.hpp"
#include "ChipLpc15xxSystem.hpp"

namespace Kvasir{
namespace Timer{
struct Timer0DefaultConfig {
	static constexpr auto isr = Interrupt::stateConfigurableTimer0;
	static constexpr auto powerClockEnable = MPL::list(
			System::PowerConfiguration::sctOn,
			System::AHBClockControl::sct0ClockOn);
	static constexpr int baseAddress = 0x4000C000;
	struct Interrupt{
		static constexpr int address = baseAddress;
		using Status = Register::Functional<MPL::Int<address>,MPL::Int<0x7F>,Register::Policy::ReadableP>;
		using Clear = Register::Functional<MPL::Int<address>,MPL::Int<0x7F>,Register::Policy::WriteableP>;
	};
	struct Control{
		static constexpr int address = baseAddress + 0x04;
		static constexpr Register::WriteBitActionT<address,0,true> couterEnable{};
		static constexpr Register::WriteBitActionT<address,0,false> couterDisable{};
		static constexpr Register::WriteBitActionT<address,1,true> holdInReset{};
		static constexpr Register::WriteBitActionT<address,1,false> noReset{};

	};
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
	struct Prescale{
		static constexpr int address = baseAddress + 0x0C;
		template<int I>
		static constexpr auto makeSet(){ return Register::BlindWriteActionT<address,0xFFFFFFFF,I>{}; }
	};
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
