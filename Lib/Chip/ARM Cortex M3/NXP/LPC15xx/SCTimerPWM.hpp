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
#include "Register/Register.hpp"

namespace Kvasir{
namespace SCT0{
static constexpr int baseAddress = 0x1C018000;
struct CONFIG			{using address = Register::Address<baseAddress + 0x000,Register::maskFromRange(31,19)>;};
struct CTRL				{using address = Register::Address<baseAddress + 0x004,Register::maskFromRange(15,13,31,29)>;};
struct LIMIT			{using address = Register::Address<baseAddress + 0x008>;};

struct CONFIG{
	static constexpr Register::RWBitLocT<address, 0>	unifiedSctimerEnabled{};

	enum class clk		{	systemClock,
							prescaledSystemClock,
							sctInput,
							prescaledSctInput};
	static constexpr Register::RWFieldLocT<address, 2, 1>	clkMode{};
	template<clk C>
	static constexpr decltype(write(clkMode,Register::value<clk,C>())) writeClkMode(){ return{}; };

	enum class sctClk	{	risingEdgesOnInput0,	fallingEdgesOnInput0,
							risingEdgesOnInput1,	fallingEdgesOnInput1,
							risingEdgesOnInput2,	fallingEdgesOnInput2,
							risingEdgesOnInput3,	fallingEdgesOnInput3,
							risingEdgesOnInput4,	fallingEdgesOnInput4,
							risingEdgesOnInput5,	fallingEdgesOnInput5,
							risingEdgesOnInput6,	fallingEdgesOnInput6,
							risingEdgesOnInput7,	fallingEdgesOnInput7};
	static constexpr Register::RWFieldLocT<address,6,3>		cksel{};
	template<sctClk SC>
	static constexpr decltype(write(cksel,Register::value<sctClk,SC>())) writeCksel(){ return{}; };

	static constexpr Register::RWBitLocT<address, 7>		noReload_LEnabled{};
	static constexpr Register::RWBitLocT<address, 8>		noReload_HEnabled{};

	static constexpr decltype(write(Register::RWFieldLocT<address,16,9>(),Register::value<0>())) resetAllPinSyncronisation(){return{};};

	template<typename T>
	static constexpr Register::RWBitLocT<address, 9+T::value> syncChannel(T){return{};};

	template<typename T,typename... Ts>
	static constexpr MPL::List<decltype(syncChannel(T)),decltype(syncChannel(Ts))...> syncChannel(T,Ts...){return{};};

	static constexpr Register::RWBitLocT<address, 17>		autoLimit_LEnabled{};
	static constexpr Register::RWBitLocT<address, 18>		autoLimit_HEnabled{};
};
struct CTRL{
	static constexpr Register::RWBitLocT<address, 0>		down_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 1>		stop_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 2>		halt_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 3>		clrCtr_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 4>		biDir_LOrUnified{};
	static constexpr Register::RWFieldLocT<address, 12, 5>	pre_LOrUnified{};

	static constexpr Register::RWBitLocT<address, 16>		down_H{};
	static constexpr Register::RWBitLocT<address, 17>		stop_H{};
	static constexpr Register::RWBitLocT<address, 18>		halt_H{};
	static constexpr Register::RWBitLocT<address, 19>		clrCtr_H{};
	static constexpr Register::RWBitLocT<address, 20>		biDir_H{};
	static constexpr Register::RWFieldLocT<address, 28, 21>	pre_H{};
};
struct LIMIT{
	static constexpr Register::RWBitLocT<address, 0>	limitEvent0_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 1>	limitEvent1_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 2>	limitEvent2_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 3>	limitEvent3_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 4>	limitEvent4_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 5>	limitEvent5_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 6>	limitEvent6_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 7>	limitEvent7_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 8>	limitEvent8_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 9>	limitEvent9_LOrUnified{};
	static constexpr Register::RWBitLocT<address,10>	limitEvent10_LOrUnified{};
	static constexpr Register::RWBitLocT<address,11>	limitEvent11_LOrUnified{};
	static constexpr Register::RWBitLocT<address,12>	limitEvent12_LOrUnified{};
	static constexpr Register::RWBitLocT<address,13>	limitEvent13_LOrUnified{};
	static constexpr Register::RWBitLocT<address,14>	limitEvent14_LOrUnified{};
	static constexpr Register::RWBitLocT<address,15>	limitEvent15_LOrUnified{};

	static constexpr Register::RWBitLocT<address,16>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,17>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,18>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,19>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,20>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,21>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,22>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,23>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,24>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,25>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,26>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,27>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,28>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,29>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,30>	limitEvent0_H{};
	static constexpr Register::RWBitLocT<address,31>	limitEvent0_H{};


};


}
}
