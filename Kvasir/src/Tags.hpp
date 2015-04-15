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
	namespace ADC {
		struct Channel{};
		struct Channel0 : Channel{ static constexpr int value = 0; };
		struct Channel1 : Channel{ static constexpr int value = 1; };
		struct Channel2 : Channel{ static constexpr int value = 2; };
		struct Channel3 : Channel{ static constexpr int value = 3; };
		struct Channel4 : Channel{ static constexpr int value = 4; };
		struct Channel5 : Channel{ static constexpr int value = 5; };
		struct Channel6 : Channel{ static constexpr int value = 6; };
		struct Channel7 : Channel{ static constexpr int value = 7; };
		struct Channel8 : Channel{ static constexpr int value = 8; };
		struct Channel9 : Channel{ static constexpr int value = 9; };
		struct Channel10 : Channel{ static constexpr int value = 10; };
		struct Channel11 : Channel{ static constexpr int value = 11; };
		struct Channel12 : Channel{ static constexpr int value = 12; };
		struct Channel13 : Channel{ static constexpr int value = 13; };
		struct Channel14 : Channel{ static constexpr int value = 14; };
		struct Channel15 : Channel{ static constexpr int value = 15; };
	}
	namespace Capture {
		struct Channel{};
		struct Channel0 : Channel{ static constexpr int value = 0; };
		struct Channel1 : Channel{ static constexpr int value = 1; };
		struct Channel2 : Channel{ static constexpr int value = 2; };
		struct Channel3 : Channel{ static constexpr int value = 3; };
		struct Channel4 : Channel{ static constexpr int value = 4; };
		struct Channel5 : Channel{ static constexpr int value = 5; };
		struct Channel6 : Channel{ static constexpr int value = 6; };
		struct Channel7 : Channel{ static constexpr int value = 7; };
		struct Channel8 : Channel{ static constexpr int value = 8; };
		struct Channel9 : Channel{ static constexpr int value = 9; };
		struct Channel10 : Channel{ static constexpr int value = 10; };
		struct Channel11 : Channel{ static constexpr int value = 11; };
		struct Channel12 : Channel{ static constexpr int value = 12; };
		struct Channel13 : Channel{ static constexpr int value = 13; };
		struct Channel14 : Channel{ static constexpr int value = 14; };
		struct Channel15 : Channel{ static constexpr int value = 15; };
	}
	namespace Match{
		struct Channel{};
		struct Channel0 : Channel{ static constexpr int value = 0; };
		struct Channel1 : Channel{ static constexpr int value = 1; };
		struct Channel2 : Channel{ static constexpr int value = 2; };
		struct Channel3 : Channel{ static constexpr int value = 3; };
		struct Channel4 : Channel{ static constexpr int value = 4; };
		struct Channel5 : Channel{ static constexpr int value = 5; };
		struct Channel6 : Channel{ static constexpr int value = 6; };
		struct Channel7 : Channel{ static constexpr int value = 7; };
		struct Channel8 : Channel{ static constexpr int value = 8; };
		struct Channel9 : Channel{ static constexpr int value = 9; };
		struct Channel10 : Channel{ static constexpr int value = 10; };
		struct Channel11 : Channel{ static constexpr int value = 11; };
		struct Channel12 : Channel{ static constexpr int value = 12; };
		struct Channel13 : Channel{ static constexpr int value = 13; };
		struct Channel14 : Channel{ static constexpr int value = 14; };
		struct Channel15 : Channel{ static constexpr int value = 15; };
	}
}
}
