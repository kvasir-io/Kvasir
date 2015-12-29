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
namespace Kvasir{
namespace Tag {
	struct User {};
	struct None {};
	namespace Adc {
		template<int I>
		struct Channel{ static constexpr int value = I; };
		static constexpr Channel<0> channel0{};
		static constexpr Channel<1> channel1{};
		static constexpr Channel<2> channel2{};
		static constexpr Channel<3> channel3{};
		static constexpr Channel<4> channel4{};
		static constexpr Channel<5> channel5{};
		static constexpr Channel<6> channel6{};
		static constexpr Channel<7> channel7{};
		static constexpr Channel<8> channel8{};
		static constexpr Channel<9> channel9{};
		static constexpr Channel<10> channel10{};
		static constexpr Channel<11> channel11{};
		static constexpr Channel<12> channel12{};
		static constexpr Channel<13> channel13{};
		static constexpr Channel<14> channel14{};
		static constexpr Channel<15> channel15{};
	}
	namespace Capture {
		template<int I>
		struct Channel{ static constexpr int value{I}; };
		static constexpr Channel<0> c0{};
		static constexpr Channel<1> c1{};
		static constexpr Channel<2> c2{};
		static constexpr Channel<3> c3{};
		static constexpr Channel<4> c4{};
		static constexpr Channel<5> c5{};
		static constexpr Channel<6> c6{};
		static constexpr Channel<7> c7{};
		static constexpr Channel<8> c8{};
		static constexpr Channel<9> c9{};
		static constexpr Channel<10> c10{};
		static constexpr Channel<11> c11{};
		static constexpr Channel<12> c12{};
		static constexpr Channel<13> c13{};
		static constexpr Channel<14> c14{};
		static constexpr Channel<15> c15{};
	}
	namespace Match{
		template<int I>
		struct Channel{ static constexpr int value{I}; };
		static constexpr Channel<0> m0{};
		static constexpr Channel<1> m1{};
		static constexpr Channel<2> m2{};
		static constexpr Channel<3> m3{};
		static constexpr Channel<4> m4{};
		static constexpr Channel<5> m5{};
		static constexpr Channel<6> m6{};
		static constexpr Channel<7> m7{};
		static constexpr Channel<8> m8{};
		static constexpr Channel<9> m9{};
		static constexpr Channel<10> m10{};
		static constexpr Channel<11> m11{};
		static constexpr Channel<12> m12{};
		static constexpr Channel<13> m13{};
		static constexpr Channel<14> m14{};
		static constexpr Channel<15> m15{};
	}
	namespace Detail{
		template<typename T>
		struct IsChannel{
			static constexpr bool value = false;
		};
		template<int I>
		struct IsChannel<Adc::Channel<I>>{
			static constexpr bool value = true;
		};
		template<typename T>
		constexpr int getChannelValue(){
			static_assert(IsChannel<T>::value,"expected a Tags::Adc::Channel");
			return T::value;
		}
	}
}
}
