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
#include "Interrupt.hpp"

namespace Kvasir{
namespace Timer{
template<typename TDerived, typename TConfig>
struct Base {
protected:
	static void onMatch0() {};
	static void onMatch1() {};
	static void onMatch2() {};
	static void onMatch3() {};
	static void onCapture0() {};
	static void onCapture1() {};
	static void onCapture2() {};
private:
	static void onIsr(){
		auto i = TConfig::Interrupt::Status::read();
		int clearBits{0};
		if(i & (1<<0)){
			clearBits &= (1<<0);
			TDerived::onMatch0();
		}
		if(i & (1<<1)){
			clearBits &= (1<<1);
			TDerived::onMatch1();
		}
		if(i & (1<<2)){
			clearBits &= (1<<2);
			TDerived::onMatch2();
		}
		if(i & (1<<3)){
			clearBits &= (1<<3);
			TDerived::onMatch3();
		}
		if(i & (1<<4)){
			clearBits &= (1<<4);
			TDerived::onCapture0();
		}
		if(i & (1<<5)){
			clearBits &= (1<<5);
			TDerived::onCapture1();
		}
		if(i & (1<<6)){
			clearBits &= (1<<6);
			TDerived::onCapture2();
		}
		TConfig::Interrupt::Clear::write(clearBits);

	}
protected:
	using Config = TConfig;
public:
	static constexpr Nvic::Isr<(&onIsr),MPL::RemoveCVT<decltype(TConfig::isr)>> isr{};
	static constexpr auto powerClockEnable = Config::powerClockEnable;
	static constexpr auto init = MPL::list(
			Config::Prescale::template makeSet<Config::prescaleValue>(),
			Config::matchReg0Init,
			Config::matchReg1Init,
			Config::matchReg2Init,
			Config::matchReg3Init,
			Config::captureReg0Init,
			Config::captureReg1Init,
			Config::captureReg2Init,
			Register::sequencePoint,
			Config::Control::couterEnable,
			makeEnable(TConfig::isr)
			);
};
}
}
