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
#include "Register/Register.hpp"
//#include "Chip/Lpc1549.hpp"

using namespace Kvasir;
using namespace MPL;
using namespace Register;

using Address1 = Address::Normal<1,0>;

enum class E{a,b};
using Test = Register::FieldLocT<Address1,2,0,E>;
using Test1 = Register::FieldLocT<Address1,4,3>;
using Test2 = Register::FieldLocT<Address1,8,7>;
constexpr Test test{};
constexpr Test1 test1{};
constexpr Test2 test2{};
void FTest(){
	using namespace Register;
	using namespace MPL;
	using IndexedActions = TransformT<List<decltype(set(System::AHBClock::Enabled::spi0)),decltype(set(System::AHBClock::Enabled::spi1))>,BuildIndicesT<2>,Template<Register::Detail::MakeIndexedAction>>;
	using FlattenedActions = FlattenT<IndexedActions>;
	using Steps = SplitT<FlattenedActions,SequencePoint>;
	using Merged = Register::Detail::MergeActionStepsT<Steps>;
	using Actions = MPL::FlattenT<Merged>;
	Print<Merged> a{};
}


int main(){
	auto b = E::b;
	constexpr auto w = write(test,value<E,E::a>());
	constexpr auto d = write(test,value<E,E::a>());
	apply(w, d);
}

