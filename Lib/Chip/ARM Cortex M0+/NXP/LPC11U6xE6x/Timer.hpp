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
#include "Common/Tags.hpp"
#include "Timer/Timer.hpp"

namespace Kvasir{
namespace Timer{
namespace Detail{
	template<typename T>
	struct GetInterruptStatusOffset{
		static_assert(MPL::AlwaysFalse<T>::value,"");
	};
	template<int I>
	struct GetInterruptStatusOffset<Tag::Match::Channel<I>>:MPL::Int<I>{};
	template<int I>
	struct GetInterruptStatusOffset<Tag::Capture::Channel<I>>:MPL::Int<I+4>{};

	template<typename TDerived>
	struct OnIsrActionTraits<::Kvasir::Tag::User,TDerived> {
		void operator()(){
			using namespace Tag::Match;
			using namespace Tag::Capture;
			using IS = typename TDerived::Config::InterruptStatus;
			auto res = apply(
					read(IS::select(m0)),
					read(IS::select(m1)),
					read(IS::select(m2)),
					read(IS::select(m3)),
					read(IS::select(c0)),
					read(IS::select(c1)),
					read(IS::select(c2))
					);
			unsigned clearBits{0};
			if(::Kvasir::Register::get<0>(res)){
				apply(reset(IS::select(m0)));
				Detail::callOnMatch<TDerived>(m0);
			}
			if(::Kvasir::Register::get<1>(res)){
				apply(reset(IS::select(m1)));
				Detail::callOnMatch<TDerived>(m1);
			}
			if(::Kvasir::Register::get<2>(res)){
				apply(reset(IS::select(m2)));
				Detail::callOnMatch<TDerived>(m2);
			}
			if(::Kvasir::Register::get<3>(res)){
				apply(reset(IS::select(m3)));
				Detail::callOnMatch<TDerived>(m3);
			}
			if(::Kvasir::Register::get<4>(res)){
				apply(reset(IS::select(c0)));
				Detail::callOnCapture<TDerived>(c0);
			}
			if(::Kvasir::Register::get<5>(res)){
				apply(reset(IS::select(c1)));
				Detail::callOnCapture<TDerived>(c1);
			}
			if(::Kvasir::Register::get<6>(res)){
				apply(reset(IS::select(c2)));
				Detail::callOnCapture<TDerived>(c2);
			}
		}
	};
}
struct TC16B0DefaultConfig {
	static constexpr auto isr = Interrupt::counterTimer16Bank0;
	static constexpr 	Register::RWBitLocT<Register::Address<0x40048080,0x00>, 7>		clockEnabled{};
	static constexpr int baseAddress = 0x4000C000;
	//supported tags
	static constexpr auto match0 = Tag::Match::m0;
	static constexpr auto match1 = Tag::Match::m1;
	static constexpr auto match2 = Tag::Match::m2;
	static constexpr auto match3 = Tag::Match::m3;;
	static constexpr auto capture0 = Tag::Capture::c0;
	static constexpr auto capture1 = Tag::Capture::c1;
	static constexpr auto capture2 = Tag::Capture::c2;

	struct InterruptStatus{
		using Addr = Register::Address<baseAddress,Register::maskFromRange(31,0)>;
		template<typename T>
		static constexpr Register::BitLocation<Addr,(1<<Detail::GetInterruptStatusOffset<T>::value),Register::RSetToClearAccess,bool>
			select(T){ return {}; }
	};
	struct Control{
		using Addr = Register::Address<baseAddress + 0x04,Register::maskFromRange(31,2)>;
		static constexpr Register::BitLocation<Addr,(1<<0)> couterEnable{};
		static constexpr Register::BitLocation<Addr,(1<<1)> holdInReset{};
	};
	struct MatchControl{
		using Addr = Register::Address<baseAddress + 0x14,Register::maskFromRange(31,12)>;
		template<typename T>
		static constexpr Register::BitLocation<Addr,(1<<(T::value * 3))> interruptOnMatch(T){
			static_assert(T::value <= 3,"channel not supported");
			return {};
		}
		template<typename T>
		static constexpr Register::BitLocation<Addr,(1<<((T::value * 3)+1))> resetOnMatch(T){
			static_assert(T::value <= 3,"channel not supported");
			return {};
		}
		template<typename T>
		static constexpr Register::BitLocation<Addr,(1<<((T::value * 3)+2))> stopOnMatch(T){
			static_assert(T::value <= 3,"channel not supported");
			return {};
		}
	};
	static constexpr Register::BitLocation<
		Register::Address<baseAddress + 0x0C,Register::maskFromRange(31,16)>,
		Register::maskFromRange(15,0)> prescale{};
	struct MatchRegister{
		static constexpr int address = baseAddress + 0x18;
		template<typename T>
		static constexpr Register::BitLocation<
			Register::Address<baseAddress + 0x18 + (T::value * 4),Register::maskFromRange(31,16)>,
			Register::maskFromRange(15,0)>
		select(T){
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
