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
template<typename TDerived, typename TConfig>
struct Base {
protected:
	static void onMatch(...) {};
	static void onCapture(...) {};
private:
	static void onIsr(){
		auto i = apply(read(TConfig::Interrupt::status));
		unsigned clearBits{0};
		if((unsigned)i & (1u<<0)){
			clearBits |= (1<<0);
			TDerived::onMatch(TConfig::match0);
		}
		if(i & (1u<<1)){
			clearBits |= (1<<1);
			TDerived::onMatch(TConfig::match0);
		}
		if(i & (1u<<2)){
			clearBits |= (1<<2);
			TDerived::onMatch(TConfig::match0);
		}
		if(i & (1u<<3)){
			clearBits |= (1<<3);
			TDerived::onMatch(TConfig::match0);
		}
		if(i & (1u<<4)){
			clearBits |= (1<<4);
			TDerived::onCapture(TConfig::capture0);
		}
		if(i & (1u<<5)){
			clearBits |= (1<<5);
			TDerived::onCapture(TConfig::capture1);
		}
		if(i & (1u<<6)){
			clearBits |= (1<<6);
			TDerived::onCapture(TConfig::capture2);
		}
		apply(write(TConfig::Interrupt::clear, clearBits));

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
