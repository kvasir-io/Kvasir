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

namespace Kvasir {
namespace Io{
	namespace Action{
		struct Input{};
		struct Output{};
		struct Set{};
		struct Clear{};
		struct Toggle{};
		struct PinLocation{};
		template<int I>
		struct PinFunction{ static constexpr int value = I;};
		constexpr Input input;
		constexpr Output output{};
		constexpr PinLocation pinlocation{};
		constexpr Set set{};
		constexpr Clear clear{};
		constexpr Toggle toggle{};
		constexpr PinFunction<0> pinFunction0{};
		constexpr PinFunction<1> pinFunction1{};
		constexpr PinFunction<2> pinFunction2{};
		constexpr PinFunction<3> pinFunction3{};
		constexpr PinFunction<4> pinFunction4{};
	};

	template<int I>
	struct HwPort{
		static constexpr int value = I;
		using Type = HwPort<I>;
	};

	template<int I>
	struct Pin{
		static constexpr int value = I;
		using Type = Pin<I>;
	};

	template<typename TPort, typename TPin>
	struct PinLocation {
		using Type = PinLocation<TPort,TPin>;
	};
	template<int Port, int Pin>
	using PinLocationT = PinLocation<MPL::Int<Port>,MPL::Int<Pin>>;

}
}
