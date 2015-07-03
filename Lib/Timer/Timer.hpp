#pragma once
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
#include "Common/Interrupt.hpp"

namespace Kvasir{
namespace Timer{
namespace Detail{
	template<typename T, typename U>
	auto callOnMatch(U u)->MPL::VoidT<decltype((T::onMatch(U{})))>{
		T::onMatch(u);
	}
	void callOnMatch(...){

	}
	template<typename T, typename U>
	auto callOnCapture(U u)->MPL::VoidT<decltype((T::onCapture(U{})))>{
		T::onCapture(u);
	}
	void callOnCapture(...){

	}
}
template<typename TDerived, typename TConfig>
struct Base {
private:
	static void onIsr(){
		using TC = TConfig;
		using IS = typename TC::InterruptStatus;
		auto res = apply(
				read(IS::select(TC::match0)),
				read(IS::select(TC::match1)),
				read(IS::select(TC::match2)),
				read(IS::select(TC::match3)),
				read(IS::select(TC::capture0)),
				read(IS::select(TC::capture1)),
				read(IS::select(TC::capture2))
				);
		unsigned clearBits{0};
		if(::Kvasir::Register::get<0>(res)){
			apply(reset(IS::select(TC::match0)));
			Detail::callOnMatch(TConfig::match0);
		}
		if(::Kvasir::Register::get<1>(res)){
			apply(reset(IS::select(TC::match1)));
			Detail::callOnMatch(TConfig::match1);
		}
		if(::Kvasir::Register::get<2>(res)){
			apply(reset(IS::select(TC::match2)));
			Detail::callOnMatch(TConfig::match2);
		}
		if(::Kvasir::Register::get<3>(res)){
			apply(reset(IS::select(TC::match3)));
			Detail::callOnMatch(TConfig::match3);
		}
		if(::Kvasir::Register::get<4>(res)){
			apply(reset(IS::select(TC::capture0)));
			Detail::callOnCapture(TConfig::capture0);
		}
		if(::Kvasir::Register::get<5>(res)){
			apply(reset(IS::select(TC::capture1)));
			Detail::callOnCapture(TConfig::capture1);
		}
		if(::Kvasir::Register::get<6>(res)){
			apply(reset(IS::select(TC::capture2)));
			Detail::callOnCapture(TConfig::capture2);
		}

	}
protected:
	using Config = TConfig;
public:
	static constexpr Nvic::Isr<(&onIsr),MPL::RemoveCVT<decltype(TConfig::isr)>> isr{};
	static constexpr auto powerClockEnable = Config::powerClockEnable;
	static constexpr auto init = MPL::list(
			write(Config::prescale, Register::value<Config::prescaleValue>()),
			Config::userInit,
			Register::sequencePoint,
			set(Config::Control::couterEnable),
			makeEnable(TConfig::isr)
			);
};
}
}
