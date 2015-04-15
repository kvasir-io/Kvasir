#pragma once
#include "ChipLpc15xxInterrupt.hpp"
#include "ChipLpc15xxSystem.hpp"
#include "Tags.hpp"

namespace Kvasir{
namespace Timer{
struct Timer0DefaultConfig {
	static constexpr auto isr = Interrupt::stateConfigurableTimer0;
	static constexpr auto powerClockEnable = MPL::list(
			System::AHBClockControl::sct0ClockOn,
			Register::sequencePoint,
			System::PeripheralReset::sct0ResetOn,
			Register::sequencePoint,
			System::PeripheralReset::sct0ResetOff
			);
	static constexpr int baseAddress = 0x1C018000;

	struct Configuration{	//SCT CONFIG
		static constexpr int address = baseAddress + 0x04;
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

	};

	//not working
	struct Interrupt{
		static constexpr int address = baseAddress;
		using Status = Register::Functional<MPL::Int<address>,MPL::Int<0x7F>,Register::Policy::ReadableP>;
		using Clear = Register::Functional<MPL::Int<address>,MPL::Int<0x7F>,Register::Policy::WriteableP>;
	};
	struct MatchControl{
		template<int I, int V>
		using MakeT = Register::WriteBitActionT<baseAddress + 0x14,I,V>;
		template<typename T>
		static constexpr MakeT<(1<<(T::value * 3)),true> interruptEnable(){
			static_assert(T::value <= 3,"channel not supported");
			return MakeT<(1<<(T::value * 3)),true>;
		}
		template<typename T>
		static constexpr MakeT<(1<<(T::value * 3)),true> interruptEnable(){
			static_assert(T::value <= 3,"channel not supported");
			return MakeT<(1<<(T::value * 3)),true>;
		}
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


	static constexpr int prescaleValue = 1000;
	static constexpr MPL::List<> matchReg0Init{};
	static constexpr MPL::List<> captureReg0Init{};
};
}
}
