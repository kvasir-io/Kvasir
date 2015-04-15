#pragma once
#include "ChipLpc175x6xInterrupt.hpp"
#include "ChipLpc175x6xSystem.hpp"

namespace Kvasir{
namespace Timer{
	namespace Detail{
		template<int BaseAddress, typename TInterruptIndex, typename TPCEnable>
		struct TimerN{
			static constexpr TInterruptIndex isr{};

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
				static constexpr int address = BaseAddress + 0x00;
				using Status = Register::Functional<MPL::Int<address>,MPL::Int<0x7F>,Register::Policy::ReadableP>;
				using Clear = Register::Functional<MPL::Int<address>,MPL::Int<0x7F>,Register::Policy::WriteableP>;
			};
			struct Control{
				static constexpr int address = BaseAddress + 0x04;
				static constexpr Register::WriteBitActionT<address,0,true> couterEnable{};
				static constexpr Register::WriteBitActionT<address,0,false> couterDisable{};
				static constexpr Register::WriteBitActionT<address,1,true> holdInReset{};
				static constexpr Register::WriteBitActionT<address,1,false> noReset{};
			};
			struct Counter{
				static constexpr int address = BaseAddress + 0x08;
			};
			struct Prescale{
				static constexpr int address = BaseAddress + 0x0C;
				template<int I>
				static constexpr auto makeSet(){ return Register::BlindWriteActionT<address,0xFFFFFFFF,I>{}; }
			};
			struct PrescaleCounter{
				static constexpr int address = BaseAddress + 0x10;
			};
			struct MatchControl{
				struct Detail{
					template<int I, int V>
					using MakeT = Register::WriteBitActionT<BaseAddress + 0x14,I,V>;
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
			struct MatchRegister{
				static constexpr int address = BaseAddress + 0x18;
				template<int Offset, int I>
				using MakeSetValueT = Register::BlindWriteActionT<address + Offset,0xFFFFFFFF,I>;
				template<int I, typename T>
				static constexpr auto makeSetValue(T){
					static_assert(T::value <= 3,"match register not supported on this chip");
					return MakeSetValueT<(T::value * 4),I>{};
				}
			};

			//TODO implement other registers

			static constexpr int prescaleValue = 1000;
			static constexpr MPL::List<> matchReg0Init{};
			static constexpr MPL::List<> matchReg1Init{};
			static constexpr MPL::List<> matchReg2Init{};
			static constexpr MPL::List<> matchReg3Init{};
			static constexpr MPL::List<> captureReg0Init{};
			static constexpr MPL::List<> captureReg1Init{};
			static constexpr MPL::List<> captureReg2Init{};

			static constexpr TPCEnable powerClockEnable{};
		};
	}
	using TC0DefaultConfig = Detail::TimerN<
			0x40004000,
			MPL::RemoveCVT<decltype(Interrupt::timer0)>,
			MPL::RemoveCVT<decltype(MPL::list(
					System::PowerControlForPeripherals::tc0PowerOn,
					System::PeripheralClock::timer0DividedBy1))>>;
	using TC1DefaultConfig = Detail::TimerN<
			0x40008000,
			MPL::RemoveCVT<decltype(Interrupt::timer1)>,
			MPL::RemoveCVT<decltype(MPL::list(
					System::PowerControlForPeripherals::tc1PowerOn,
					System::PeripheralClock::timer1DividedBy1))>>;
	using TC2DefaultConfig = Detail::TimerN<
			0x40090000,
			MPL::RemoveCVT<decltype(Interrupt::timer2)>,
			MPL::RemoveCVT<decltype(MPL::list(
					System::PowerControlForPeripherals::tc2PowerOn,
					System::PeripheralClock::timer2DividedBy1))>>;
	using TC3DefaultConfig = Detail::TimerN<
			0x40094000,
			MPL::RemoveCVT<decltype(Interrupt::timer3)>,
			MPL::RemoveCVT<decltype(MPL::list(
					System::PowerControlForPeripherals::tc3PowerOn,
					System::PeripheralClock::timer3DividedBy1))>>;
}
}
