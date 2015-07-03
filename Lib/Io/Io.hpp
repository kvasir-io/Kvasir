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
#include "MPL/Utility.hpp"

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
	struct Port{
		static constexpr int value = I;
		using Type = Port<I>;
	};
	constexpr Port< 0> 	port0 ;
	constexpr Port< 1> 	port1 ;
	constexpr Port< 2> 	port2 ;
	constexpr Port< 3> 	port3 ;
	constexpr Port< 4> 	port4 ;
	constexpr Port< 5> 	port5 ;
	constexpr Port< 6> 	port6 ;
	constexpr Port< 7> 	port7 ;
	constexpr Port< 8> 	port8 ;
	constexpr Port< 9> 	port9 ;
	constexpr Port<10> 	port10;
	constexpr Port<11> 	port11;
	constexpr Port<12> 	port12;
	constexpr Port<13> 	port13;
	constexpr Port<14> 	port14;
	constexpr Port<15> 	port15;

	template<int I>
	struct Pin{
		static constexpr int value = I;
		using Type = Port<I>;
	};
	constexpr Pin< 0> 	Pin0 ;
	constexpr Pin< 1> 	Pin1 ;
	constexpr Pin< 2> 	Pin2 ;
	constexpr Pin< 3> 	Pin3 ;
	constexpr Pin< 4> 	Pin4 ;
	constexpr Pin< 5> 	Pin5 ;
	constexpr Pin< 6> 	Pin6 ;
	constexpr Pin< 7> 	Pin7 ;
	constexpr Pin< 8> 	Pin8 ;
	constexpr Pin< 9> 	Pin9 ;
	constexpr Pin<10> 	Pin10;
	constexpr Pin<11> 	Pin11;
	constexpr Pin<12> 	Pin12;
	constexpr Pin<13> 	Pin13;
	constexpr Pin<14> 	Pin14;
	constexpr Pin<15> 	Pin15;
	constexpr Pin<16> 	Pin16;
	constexpr Pin<17> 	Pin17;
	constexpr Pin<18> 	Pin18;
	constexpr Pin<19> 	Pin19;
	constexpr Pin<20> 	Pin20;
	constexpr Pin<21> 	Pin21;
	constexpr Pin<22> 	Pin22;
	constexpr Pin<23> 	Pin23;
	constexpr Pin<24> 	Pin24;
	constexpr Pin<25> 	Pin25;
	constexpr Pin<26> 	Pin26;
	constexpr Pin<27> 	Pin27;
	constexpr Pin<28> 	Pin28;
	constexpr Pin<29> 	Pin29;
	constexpr Pin<30> 	Pin30;
	constexpr Pin<31> 	Pin31;

	template<typename TAction, typename TPortPin>
	struct MakeAction{
		static_assert(MPL::AlwaysFalse<TAction>::value,"could not find this configuration in the included Core");
	};

	//common public interface

	template<typename TPort, typename TPin>
	struct PinLocation {
		using Type = PinLocation<TPort,TPin>;
	};
	template<int Port, int Pin>
	using PinLocationT = PinLocation<MPL::Int<Port>,MPL::Int<Pin>>;

	template<typename TAction, typename TPortPin>
	using MakeActionT = typename MakeAction<TAction,TPortPin>::Type;

	template<typename TAction, typename TPortPin>
	constexpr MakeActionT<TAction,TPortPin> action(TAction,TPortPin){ return MakeActionT<TAction,TPortPin>{}; };

	template<typename TPortPin>
	constexpr MakeActionT<Action::Input,TPortPin> makeInput(TPortPin){ return{}; };
	template<typename TPortPin>
	constexpr MakeActionT<Action::Output,TPortPin> makeOutput(TPortPin){ return{}; };
	template<typename TPortPin>
	constexpr MakeActionT<Action::Set,TPortPin> set(TPortPin){ return{}; };
	template<typename TPortPin>
	constexpr MakeActionT<Action::Clear,TPortPin> clear(TPortPin){ return{}; };
	template<typename TPortPin>
	constexpr MakeActionT<Action::Toggle,TPortPin> toggle(TPortPin){ return{}; };

	template<typename TPort, typename TPin>
	constexpr PinLocationT<TPort::value,TPin::value> makePinLocation(TPort,TPin){ return{}; };
}
}
