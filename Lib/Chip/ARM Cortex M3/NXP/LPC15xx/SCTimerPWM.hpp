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
struct HALT				{using address = Register::Address<baseAddress + 0x00C>;};
struct STOP				{using address = Register::Address<baseAddress + 0x010>;};
struct START			{using address = Register::Address<baseAddress + 0x014>;};
struct DITHER			{using address = Register::Address<baseAddress + 0x018>;};
struct COUNT			{using address = Register::Address<baseAddress + 0x040>;};
struct STATE			{using address = Register::Address<baseAddress + 0x044,Register::maskFromRange(15,5,31,21)>;};
struct INPUT			{using address = Register::Address<baseAddress + 0x048,Register::maskFromRange(15,8,31,24)>;};
struct REGMODE			{using address = Register::Address<baseAddress + 0x04C>;};
struct OUTPUT			{using address = Register::Address<baseAddress + 0x050,Register::maskFromRange(31,10)>;};
struct OUTPUTDIRCTRL	{using address = Register::Address<baseAddress + 0x054,Register::maskFromRange(31,20)>;};
;
;
;
;
;
;
;
;




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
	static constexpr Register::RWBitLocT<address,17>	limitEvent1_H{};
	static constexpr Register::RWBitLocT<address,18>	limitEvent2_H{};
	static constexpr Register::RWBitLocT<address,19>	limitEvent3_H{};
	static constexpr Register::RWBitLocT<address,20>	limitEvent4_H{};
	static constexpr Register::RWBitLocT<address,21>	limitEvent5_H{};
	static constexpr Register::RWBitLocT<address,22>	limitEvent6_H{};
	static constexpr Register::RWBitLocT<address,23>	limitEvent7_H{};
	static constexpr Register::RWBitLocT<address,24>	limitEvent8_H{};
	static constexpr Register::RWBitLocT<address,25>	limitEvent9_H{};
	static constexpr Register::RWBitLocT<address,26>	limitEvent10_H{};
	static constexpr Register::RWBitLocT<address,27>	limitEvent11_H{};
	static constexpr Register::RWBitLocT<address,28>	limitEvent12_H{};
	static constexpr Register::RWBitLocT<address,29>	limitEvent13_H{};
	static constexpr Register::RWBitLocT<address,30>	limitEvent14_H{};
	static constexpr Register::RWBitLocT<address,31>	limitEvent15_H{};
};
struct HALT{
	static constexpr Register::RWBitLocT<address, 0>	haltEvent0_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 1>	haltEvent1_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 2>	haltEvent2_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 3>	haltEvent3_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 4>	haltEvent4_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 5>	haltEvent5_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 6>	haltEvent6_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 7>	haltEvent7_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 8>	haltEvent8_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 9>	haltEvent9_LOrUnified{};
	static constexpr Register::RWBitLocT<address,10>	haltEvent10_LOrUnified{};
	static constexpr Register::RWBitLocT<address,11>	haltEvent11_LOrUnified{};
	static constexpr Register::RWBitLocT<address,12>	haltEvent12_LOrUnified{};
	static constexpr Register::RWBitLocT<address,13>	haltEvent13_LOrUnified{};
	static constexpr Register::RWBitLocT<address,14>	haltEvent14_LOrUnified{};
	static constexpr Register::RWBitLocT<address,15>	haltEvent15_LOrUnified{};

	static constexpr Register::RWBitLocT<address,16>	haltEvent0_H{};
	static constexpr Register::RWBitLocT<address,17>	haltEvent1_H{};
	static constexpr Register::RWBitLocT<address,18>	haltEvent2_H{};
	static constexpr Register::RWBitLocT<address,19>	haltEvent3_H{};
	static constexpr Register::RWBitLocT<address,20>	haltEvent4_H{};
	static constexpr Register::RWBitLocT<address,21>	haltEvent5_H{};
	static constexpr Register::RWBitLocT<address,22>	haltEvent6_H{};
	static constexpr Register::RWBitLocT<address,23>	haltEvent7_H{};
	static constexpr Register::RWBitLocT<address,24>	haltEvent8_H{};
	static constexpr Register::RWBitLocT<address,25>	haltEvent9_H{};
	static constexpr Register::RWBitLocT<address,26>	haltEvent10_H{};
	static constexpr Register::RWBitLocT<address,27>	haltEvent11_H{};
	static constexpr Register::RWBitLocT<address,28>	haltEvent12_H{};
	static constexpr Register::RWBitLocT<address,29>	haltEvent13_H{};
	static constexpr Register::RWBitLocT<address,30>	haltEvent14_H{};
	static constexpr Register::RWBitLocT<address,31>	haltEvent15_H{};
};
struct STOP{
	static constexpr Register::RWBitLocT<address, 0>	stopEvent0_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 1>	stopEvent1_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 2>	stopEvent2_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 3>	stopEvent3_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 4>	stopEvent4_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 5>	stopEvent5_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 6>	stopEvent6_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 7>	stopEvent7_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 8>	stopEvent8_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 9>	stopEvent9_LOrUnified{};
	static constexpr Register::RWBitLocT<address,10>	stopEvent10_LOrUnified{};
	static constexpr Register::RWBitLocT<address,11>	stopEvent11_LOrUnified{};
	static constexpr Register::RWBitLocT<address,12>	stopEvent12_LOrUnified{};
	static constexpr Register::RWBitLocT<address,13>	stopEvent13_LOrUnified{};
	static constexpr Register::RWBitLocT<address,14>	stopEvent14_LOrUnified{};
	static constexpr Register::RWBitLocT<address,15>	stopEvent15_LOrUnified{};

	static constexpr Register::RWBitLocT<address,16>	stopEvent0_H{};
	static constexpr Register::RWBitLocT<address,17>	stopEvent1_H{};
	static constexpr Register::RWBitLocT<address,18>	stopEvent2_H{};
	static constexpr Register::RWBitLocT<address,19>	stopEvent3_H{};
	static constexpr Register::RWBitLocT<address,20>	stopEvent4_H{};
	static constexpr Register::RWBitLocT<address,21>	stopEvent5_H{};
	static constexpr Register::RWBitLocT<address,22>	stopEvent6_H{};
	static constexpr Register::RWBitLocT<address,23>	stopEvent7_H{};
	static constexpr Register::RWBitLocT<address,24>	stopEvent8_H{};
	static constexpr Register::RWBitLocT<address,25>	stopEvent9_H{};
	static constexpr Register::RWBitLocT<address,26>	stopEvent10_H{};
	static constexpr Register::RWBitLocT<address,27>	stopEvent11_H{};
	static constexpr Register::RWBitLocT<address,28>	stopEvent12_H{};
	static constexpr Register::RWBitLocT<address,29>	stopEvent13_H{};
	static constexpr Register::RWBitLocT<address,30>	stopEvent14_H{};
	static constexpr Register::RWBitLocT<address,31>	stopEvent15_H{};
};
struct START{
	static constexpr Register::RWBitLocT<address, 0>	startEvent0_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 1>	startEvent1_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 2>	startEvent2_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 3>	startEvent3_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 4>	startEvent4_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 5>	startEvent5_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 6>	startEvent6_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 7>	startEvent7_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 8>	startEvent8_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 9>	startEvent9_LOrUnified{};
	static constexpr Register::RWBitLocT<address,10>	startEvent10_LOrUnified{};
	static constexpr Register::RWBitLocT<address,11>	startEvent11_LOrUnified{};
	static constexpr Register::RWBitLocT<address,12>	startEvent12_LOrUnified{};
	static constexpr Register::RWBitLocT<address,13>	startEvent13_LOrUnified{};
	static constexpr Register::RWBitLocT<address,14>	startEvent14_LOrUnified{};
	static constexpr Register::RWBitLocT<address,15>	startEvent15_LOrUnified{};

	static constexpr Register::RWBitLocT<address,16>	startEvent0_H{};
	static constexpr Register::RWBitLocT<address,17>	startEvent1_H{};
	static constexpr Register::RWBitLocT<address,18>	startEvent2_H{};
	static constexpr Register::RWBitLocT<address,19>	startEvent3_H{};
	static constexpr Register::RWBitLocT<address,20>	startEvent4_H{};
	static constexpr Register::RWBitLocT<address,21>	startEvent5_H{};
	static constexpr Register::RWBitLocT<address,22>	startEvent6_H{};
	static constexpr Register::RWBitLocT<address,23>	startEvent7_H{};
	static constexpr Register::RWBitLocT<address,24>	startEvent8_H{};
	static constexpr Register::RWBitLocT<address,25>	startEvent9_H{};
	static constexpr Register::RWBitLocT<address,26>	startEvent10_H{};
	static constexpr Register::RWBitLocT<address,27>	startEvent11_H{};
	static constexpr Register::RWBitLocT<address,28>	startEvent12_H{};
	static constexpr Register::RWBitLocT<address,29>	startEvent13_H{};
	static constexpr Register::RWBitLocT<address,30>	startEvent14_H{};
	static constexpr Register::RWBitLocT<address,31>	startEvent15_H{};
};
struct DITHER{
	static constexpr Register::RWBitLocT<address, 0>	ditherEvent0_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 1>	ditherEvent1_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 2>	ditherEvent2_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 3>	ditherEvent3_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 4>	ditherEvent4_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 5>	ditherEvent5_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 6>	ditherEvent6_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 7>	ditherEvent7_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 8>	ditherEvent8_LOrUnified{};
	static constexpr Register::RWBitLocT<address, 9>	ditherEvent9_LOrUnified{};
	static constexpr Register::RWBitLocT<address,10>	ditherEvent10_LOrUnified{};
	static constexpr Register::RWBitLocT<address,11>	ditherEvent11_LOrUnified{};
	static constexpr Register::RWBitLocT<address,12>	ditherEvent12_LOrUnified{};
	static constexpr Register::RWBitLocT<address,13>	ditherEvent13_LOrUnified{};
	static constexpr Register::RWBitLocT<address,14>	ditherEvent14_LOrUnified{};
	static constexpr Register::RWBitLocT<address,15>	ditherEvent15_LOrUnified{};

	static constexpr Register::RWBitLocT<address,16>	ditherEvent0_H{};
	static constexpr Register::RWBitLocT<address,17>	ditherEvent1_H{};
	static constexpr Register::RWBitLocT<address,18>	ditherEvent2_H{};
	static constexpr Register::RWBitLocT<address,19>	ditherEvent3_H{};
	static constexpr Register::RWBitLocT<address,20>	ditherEvent4_H{};
	static constexpr Register::RWBitLocT<address,21>	ditherEvent5_H{};
	static constexpr Register::RWBitLocT<address,22>	ditherEvent6_H{};
	static constexpr Register::RWBitLocT<address,23>	ditherEvent7_H{};
	static constexpr Register::RWBitLocT<address,24>	ditherEvent8_H{};
	static constexpr Register::RWBitLocT<address,25>	ditherEvent9_H{};
	static constexpr Register::RWBitLocT<address,26>	ditherEvent10_H{};
	static constexpr Register::RWBitLocT<address,27>	ditherEvent11_H{};
	static constexpr Register::RWBitLocT<address,28>	ditherEvent12_H{};
	static constexpr Register::RWBitLocT<address,29>	ditherEvent13_H{};
	static constexpr Register::RWBitLocT<address,30>	ditherEvent14_H{};
	static constexpr Register::RWBitLocT<address,31>	ditherEvent15_H{};
};
struct COUNT{
	static constexpr Register::RWFieldLocT<address, 15,0>		counterValue_L{};
	static constexpr Register::RWFieldLocT<address, 31,16>		counterValue_H{};
};
struct STATE{
	static constexpr Register::RWFieldLocT<address,4,0>			state_LOrUnified{};
	static constexpr Register::RWFieldLocT<address,20,16>		state_H{};
};
struct INPUT{
	static constexpr Register::ROBitLocT<address,0>			directInput0State{};
	static constexpr Register::ROBitLocT<address,1>			directInput1State{};
	static constexpr Register::ROBitLocT<address,2>			directInput2State{};
	static constexpr Register::ROBitLocT<address,3>			directInput3State{};
	static constexpr Register::ROBitLocT<address,4>			directInput4State{};
	static constexpr Register::ROBitLocT<address,5>			directInput5State{};
	static constexpr Register::ROBitLocT<address,6>			directInput6State{};
	static constexpr Register::ROBitLocT<address,7>			directInput7State{};
	static constexpr Register::ROBitLocT<address,16>		synchronizedInput0State{};
	static constexpr Register::ROBitLocT<address,17>		synchronizedInput1State{};
	static constexpr Register::ROBitLocT<address,18>		synchronizedInput2State{};
	static constexpr Register::ROBitLocT<address,19>		synchronizedInput3State{};
	static constexpr Register::ROBitLocT<address,20>		synchronizedInput4State{};
	static constexpr Register::ROBitLocT<address,21>		synchronizedInput5State{};
	static constexpr Register::ROBitLocT<address,22>		synchronizedInput6State{};
	static constexpr Register::ROBitLocT<address,23>		synchronizedInput7State{};
};
struct REGMODE{
	static constexpr Register::RWBitLocT<address,0>			capturingOnRegister0EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,1>			capturingOnRegister1EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,2>			capturingOnRegister2EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,3>			capturingOnRegister3EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,4>			capturingOnRegister4EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,5>			capturingOnRegister5EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,6>			capturingOnRegister6EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,7>			capturingOnRegister7EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,8>			capturingOnRegister8EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,9>			capturingOnRegister9EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,10>		capturingOnRegister10EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,11>		capturingOnRegister11EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,12>		capturingOnRegister12EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,13>		capturingOnRegister13EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,14>		capturingOnRegister14EnabledElseItsMatch_LOrUnified{};
	static constexpr Register::RWBitLocT<address,15>		capturingOnRegister15EnabledElseItsMatch_LOrUnified{};

	static constexpr Register::RWBitLocT<address,16>			capturingOnRegister0EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,17>			capturingOnRegister1EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,18>			capturingOnRegister2EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,19>			capturingOnRegister3EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,20>			capturingOnRegister4EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,21>			capturingOnRegister5EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,22>			capturingOnRegister6EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,23>			capturingOnRegister7EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,24>			capturingOnRegister8EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,25>			capturingOnRegister9EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,26>			capturingOnRegister10EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,27>			capturingOnRegister11EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,28>			capturingOnRegister12EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,29>			capturingOnRegister13EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,30>			capturingOnRegister14EnabledElseItsMatch_H{};
	static constexpr Register::RWBitLocT<address,31>			capturingOnRegister15EnabledElseItsMatch_H{};
};
struct OUTPUT{
	static constexpr Register::RWBitLocT<address,0>		pwmOutput0{};
	static constexpr Register::RWBitLocT<address,1>		pwmOutput1{};
	static constexpr Register::RWBitLocT<address,2>		pwmOutput2{};
	static constexpr Register::RWBitLocT<address,3>		pwmOutput3{};
	static constexpr Register::RWBitLocT<address,4>		pwmOutput4{};
	static constexpr Register::RWBitLocT<address,5>		pwmOutput5{};
	static constexpr Register::RWBitLocT<address,6>		pwmOutput6{};
	static constexpr Register::RWBitLocT<address,7>		pwmOutput7{};
	static constexpr Register::RWBitLocT<address,8>		pwmOutput8{};
	static constexpr Register::RWBitLocT<address,9>		pwmOutput9{};
};
struct OUTPUTDIRCTRL{
	enum class setAndClearMode	{	doNotDependOnAnyCounter,
									areReversedWhenLOrUnifiedIsCountingDown,
									areReversedWhen
	};
};


}
}
