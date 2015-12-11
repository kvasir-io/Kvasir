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
#include "Types.hpp"

namespace Kvasir {
	namespace MPL {
		namespace IntegralConstants{
			constexpr Unsigned<0> _0{};
			constexpr Unsigned<1> _1{};
			constexpr Unsigned<2> _2{};
			constexpr Unsigned<3> _3{};
			constexpr Unsigned<4> _4{};
			constexpr Unsigned<5> _5{};
			constexpr Unsigned<6> _6{};
			constexpr Unsigned<7> _7{};
			constexpr Unsigned<8> _8{};
			constexpr Unsigned<9> _9{};

			template<unsigned L, unsigned R>
			constexpr inline Unsigned<(L*10 + R)> operator ,(Unsigned<L>, Unsigned<R> ) {
				return{};
			}
		}
	}
}
