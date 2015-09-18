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
#include "Common/Tags.hpp"
#include "MPL/Utility.hpp"
#include "Register/Register.hpp"
template<typename T>
struct KvasirSystemClock {
	static_assert(Kvasir::MPL::AlwaysFalse<T>::value,"You must define the system clock in every source file, put it in a header");
};
namespace Kvasir{
namespace SystemClock{

}
}


#define KVASIR_CLOCK(arg) \
	template<> \
	struct KvasirSystemClock<Kvasir::Tag::User>{ \
		using Type = arg; \
	}; \
	extern void KVASIR_START_must_only_be_defined_once_and_KVASIR_CLOCK_must_be_the_same_type_in_all_units(arg);

