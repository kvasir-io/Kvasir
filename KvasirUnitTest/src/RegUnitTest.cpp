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
#include "Register.hpp"

using namespace Kvasir;
using namespace MPL;
using namespace Register;

enum class E{a,b};
void FTest(){
	using namespace Register;

	//Print<Reads> a{};
}

using Test = Kvasir::Register::RWLocation<1,2,0,E>;
constexpr Test test{};
int main(){
	auto b = E::b;
	constexpr auto w = write(test,value<E,E::a>());
	constexpr auto d = write(test,value<E,E::a>());
	apply(w, d);
}

