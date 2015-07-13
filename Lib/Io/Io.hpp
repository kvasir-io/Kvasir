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
	constexpr Port< 0> 	port0{};
	constexpr Port< 1> 	port1{};
	constexpr Port< 2> 	port2{};
	constexpr Port< 3> 	port3{};
	constexpr Port< 4> 	port4{};
	constexpr Port< 5> 	port5{};
	constexpr Port< 6> 	port6{};
	constexpr Port< 7> 	port7{};
	constexpr Port< 8> 	port8{};
	constexpr Port< 9> 	port9{};
	constexpr Port<10> 	port10{};
	constexpr Port<11> 	port11{};
	constexpr Port<12> 	port12{};
	constexpr Port<13> 	port13{};
	constexpr Port<14> 	port14{};
	constexpr Port<15> 	port15{};

	template<int I>
	struct Pin{
		static constexpr int value = I;
		using Type = Port<I>;
	};
	constexpr Pin< 0> 	pin0{};
	constexpr Pin< 1> 	pin1{};
	constexpr Pin< 2> 	pin2{};
	constexpr Pin< 3> 	pin3{};
	constexpr Pin< 4> 	pin4{};
	constexpr Pin< 5> 	pin5{};
	constexpr Pin< 6> 	pin6{};
	constexpr Pin< 7> 	pin7{};
	constexpr Pin< 8> 	pin8{};
	constexpr Pin< 9> 	pin9{};
	constexpr Pin<10> 	pin10{};
	constexpr Pin<11> 	pin11{};
	constexpr Pin<12> 	pin12{};
	constexpr Pin<13> 	pin13{};
	constexpr Pin<14> 	pin14{};
	constexpr Pin<15> 	pin15{};
	constexpr Pin<16> 	pin16{};
	constexpr Pin<17> 	pin17{};
	constexpr Pin<18> 	pin18{};
	constexpr Pin<19> 	pin19{};
	constexpr Pin<20> 	pin20{};
	constexpr Pin<21> 	pin21{};
	constexpr Pin<22> 	pin22{};
	constexpr Pin<23> 	pin23{};
	constexpr Pin<24> 	pin24{};
	constexpr Pin<25> 	pin25{};
	constexpr Pin<26> 	pin26{};
	constexpr Pin<27> 	pin27{};
	constexpr Pin<28> 	pin28{};
	constexpr Pin<29> 	pin29{};
	constexpr Pin<30> 	pin30{};
	constexpr Pin<31> 	pin31{};

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
