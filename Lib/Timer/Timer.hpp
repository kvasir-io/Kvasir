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
#include "Common/Tags.hpp"

namespace Kvasir{
namespace Timer{
namespace Detail{
	template<typename T, typename U>
	auto callOnMatch(U u)->MPL::VoidT<decltype((T::onMatch(U{})))>{
		T::onMatch(u);
	}
	template<typename T>
	void callOnMatch(...){

	}
	template<typename T, typename U>
	auto callOnCapture(U u)->MPL::VoidT<decltype((T::onCapture(U{})))>{
		T::onCapture(u);
	}
	template<typename T>
	void callOnCapture(...){

	}

	//chip files must specialize this traits class
	template<typename T, typename U>
	struct OnIsrActionTraits {
		static_assert(MPL::AlwaysFalse<T>::value,"chip file implementation error");
	};
}
template<typename TDerived, typename TConfig>
struct Base {
	using Config = TConfig;
private:
	static void onIsr(){
		Detail::OnIsrActionTraits<Tag::User,TDerived>{}();
	}
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
