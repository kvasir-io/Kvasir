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
#include "Io/Io.hpp"
//#include "Chip/Lpc1549.hpp"
//#include "Chip/Lpc11u68.hpp"
#include "Chip/ARM Cortex M3/NXP/LPC15xx/Io.hpp"
//#include "Chip/ARM Cortex M3/NXP/LPC15xx/Adc.hpp"
#include "Chip/ARM Cortex M3/NXP/LPC15xx/Interrupt.hpp"

using namespace Kvasir;
using namespace MPL;
using namespace Register;

using Address1 = Address<1,0>;

enum class E{a,b};
using Test = Register::RWFieldLocT<Address1,2,0,E>;
using Test1 = Register::RWFieldLocT<Address1,4,3>;
using Test2 = Register::RWFieldLocT<Address1,8,7>;
constexpr Test test{};
constexpr Test1 test1{};
constexpr Test2 test2{};

constexpr Register::RWBitLocT<Address1,1> bit1{};
constexpr Register::RWBitLocT<Address1,2> bit2{};
constexpr Register::RWBitLocT<Address1,3> bit3{};
constexpr Register::RSTCBitLocT<Address1,4> bit4{};
constexpr Register::RSTCBitLocT<Address1,5> bit5{};

using namespace Kvasir::Io;
constexpr auto mpin1 = makePinLocation(port0,pin1);
constexpr auto mpin2 = makePinLocation(port0,pin2);
constexpr auto mpin3 = makePinLocation(port0,pin3);

constexpr auto pocmd = makeOutput(mpin1,mpin2);
//constexpr auto myPort = makePort(mpin1,mpin2,mpin3);
//constexpr auto oCmd = makeOutput(myPort);
//constexpr auto iCmd = makeInput(myPort);
//constexpr auto wcmd = write(myPort,value<100>());

void FTest(){
	using namespace Register;
	using namespace MPL;
//	using IndexedActions = TransformT<List<decltype(set(System::AHBClock::Enabled::spi0)),decltype(set(System::AHBClock::Enabled::spi1))>,BuildIndicesT<2>,Template<Register::Detail::MakeIndexedAction>>;
//	using FlattenedActions = FlattenT<IndexedActions>;
//	using Steps = SplitT<FlattenedActions,SequencePoint>;
//	using Merged = Register::Detail::MergeActionStepsT<Steps>;
//	using Actions = MPL::FlattenT<Merged>;
//	Print<Merged> a{};
}


int main(){
	auto a = read(test,test1); //multiple reads factory
	auto b = set(bit1,bit2);
	auto c = clear(bit1,bit2);
	auto d = reset(bit4,bit5);
	auto res = apply(read(test),read(test1));
	auto aai = get<0>(res);
	auto ttt = set(mpin1,mpin2,mpin3);
	auto tttt = set(mpin2,mpin3);
}

