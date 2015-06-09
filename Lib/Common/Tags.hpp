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
		struct Base{};
		struct C0 : Base{ static constexpr int value = 0; };
		struct C1 : Base{ static constexpr int value = 1; };
		struct C2 : Base{ static constexpr int value = 2; };
		struct C3 : Base{ static constexpr int value = 3; };
		struct C4 : Base{ static constexpr int value = 4; };
		struct C5 : Base{ static constexpr int value = 5; };
		struct C6 : Base{ static constexpr int value = 6; };
		struct C7 : Base{ static constexpr int value = 7; };
		struct C8 : Base{ static constexpr int value = 8; };
		struct C9 : Base{ static constexpr int value = 9; };
		struct C10 : Base{ static constexpr int value = 10; };
		struct C11 : Base{ static constexpr int value = 11; };
		struct C12 : Base{ static constexpr int value = 12; };
		struct C13 : Base{ static constexpr int value = 13; };
		struct C14 : Base{ static constexpr int value = 14; };
		struct C15 : Base{ static constexpr int value = 15; };
	}
	struct Match{
		struct Base{};
		struct M0 : Base{ static constexpr int value = 0; };
		struct M1 : Base{ static constexpr int value = 1; };
		struct M2 : Base{ static constexpr int value = 2; };
		struct M3 : Base{ static constexpr int value = 3; };
		struct M4 : Base{ static constexpr int value = 4; };
		struct M5 : Base{ static constexpr int value = 5; };
		struct M6 : Base{ static constexpr int value = 6; };
		struct M7 : Base{ static constexpr int value = 7; };
		struct M8 : Base{ static constexpr int value = 8; };
		struct M9 : Base{ static constexpr int value = 9; };
		struct M10 : Base{ static constexpr int value = 10; };
		struct M11 : Base{ static constexpr int value = 11; };
		struct M12 : Base{ static constexpr int value = 12; };
		struct M13 : Base{ static constexpr int value = 13; };
		struct M14 : Base{ static constexpr int value = 14; };
		struct M15 : Base{ static constexpr int value = 15; };
	};
}
}
