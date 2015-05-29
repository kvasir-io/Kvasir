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
#include "../../../../Io.hpp"
#include "System.hpp"

namespace Kvasir{
namespace ADC{

	constexpr int baseAddressAdc0				{0x40000000};
	constexpr int baseAddressAdc1				{0x40080000};

	constexpr int offsetCtrl					{0x000};
	constexpr int offsetInsel					{0x004};
	constexpr int offsetSeqA_Ctrl				{0x008};
	constexpr int offsetSeqB_Ctrl				{0x00C};
	constexpr int offsetSeqA_Gdat				{0x010};
	constexpr int offsetSeqB_Gdat				{0x014};
	constexpr int offsetDat0					{0x020};
	constexpr int offsetDat1					{0x024};
	constexpr int offsetDat2					{0x028};
	constexpr int offsetDat3					{0x02C};
	constexpr int offsetDat4					{0x030};
	constexpr int offsetDat5					{0x034};
	constexpr int offsetDat6					{0x038};
	constexpr int offsetDat7					{0x03C};
	constexpr int offsetDat8					{0x040};
	constexpr int offsetDat9					{0x044};
	constexpr int offsetDat10					{0x048};
	constexpr int offsetDat11					{0x04C};
	constexpr int offsetThr0_Low				{0x050};
	constexpr int offsetThr1_Low				{0x054};
	constexpr int offsetThr0_High				{0x058};
	constexpr int offsetThr1_High				{0x05C};
	constexpr int offsetChannelThrSel			{0x060};
	constexpr int offsetInten					{0x064};
	constexpr int offsetFlags					{0x068};
	constexpr int offsetTrm						{0x06C};


	namespace CtrlAdc0
	{
		constexpr int address{baseAddressAdc0+offsetCtrl};
		static constexpr	Register::RWLocation<address, 0xFF> 		clkDiv{};
		static constexpr 	Register::RWLocation<address, (1 << 8)>		asynchronousModeEnabled{};
		static constexpr 	Register::RWLocation<address, (1 << 9)>		mode10BitEnabled{};
		static constexpr 	Register::RWLocation<address, (1 <<10)>		lowPowerModeEnabled{};
	//Bits 29:11 are reserved
		static constexpr	Register::BWLocation<address, (1 <<30)>		calibrationCycleStart{};
		//Bit 30 is reserved
	}
	namespace CtrlAdc1
	{
		constexpr int address{baseAddressAdc1+offsetCtrl};
		static constexpr	Register::RWLocation<address, 0xFF> 		clkDiv{};
		static constexpr 	Register::RWLocation<address, (1 << 8)>		asynchronousModeEnabled{};
		static constexpr 	Register::RWLocation<address, (1 << 9)>		mode10BitEnabled{};
		static constexpr 	Register::RWLocation<address, (1 <<10)>		lowPowerModeEnabled{};
	//Bits 29:11 are reserved
		static constexpr	Register::BWLocation<address, (1 <<30)>		calibrationCycleStart{};
	//Bit 30 is reserved
	}


	namespace InselAdc0
	{
		constexpr int address{baseAddressAdc0+offsetInsel};
		enum class InputChannel0 {	adcn_0,
									coreVoltageRegulator,
									internalVoltageRef,
									temperaturSensor,
									vdda,
									noConnectionOrLoad};
		static constexpr Register::RWLocation<address,(0xF<<18),~(0xF<<18), InputChannel0> inputChannel0{};
		template<InputChannel0 I>
		static constexpr decltype(write(inputChannel0,Register::value<InputChannel0, I>())) writeInputChannel0(){ return{}; };
	}
	namespace InselAdc1
	{
		constexpr int address{baseAddressAdc1+offsetInsel};
		enum class InputChannel0 {	adcn_0,
									coreVoltageRegulator,
									internalVoltageRef,
									temperaturSensor,
									vdda,
									noConnectionOrLoad};
		static constexpr Register::RWLocation<address,(0xF<<18),~(0xF<<18), InputChannel0> inputChannel0{};
		template<InputChannel0 I>
		static constexpr decltype(write(inputChannel0,Register::value<InputChannel0, I>())) writeInputChannel0(){ return{}; };
	}


	namespace ConversionSequenceACONAdc0
	{
		constexpr int address{baseAddressAdc0+offsetSeqA_Ctrl};
		static constexpr	Register::RWLocation<address, (1 << 0)>		channel00Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 1)>		channel01Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 2)>		channel02Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 3)>		channel03Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 4)>		channel04Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 5)>		channel05Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 6)>		channel06Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 7)>		channel07Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 8)>		channel08Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 9)>		channel09Enabled{};
		static constexpr	Register::RWLocation<address, (1 <<10)>		channel10Enabled{};
		static constexpr	Register::RWLocation<address, (1 <<11)>		channel11Enabled{};
		static constexpr 	Register::WriteActionT<address,0xFFF,0>		channelDisable_ALL{};
		static constexpr	Register::RWLocation<address, 0xF>			triggerInputNumber{};
	//Bits 17:16 are reserved
		enum class TriggerPolicy {	triggerOnRisingEdge,
									triggerOnFallingEdge};
		static constexpr Register::RWLocation<address,(1 <<18),~(1 <<18), TriggerPolicy> triggerPolicy{};
		template<TriggerPolicy T>
		static constexpr decltype(write(triggerPolicy,Register::value<TriggerPolicy, T>())) writeTriggerPolicy(){ return{}; };
		static constexpr Register::BWLocation<address, (1 <<19)>		syncBypassEnabled{};
	//Bits 20:25 are reserved
		static constexpr	Register::BWLocation<address, (1 <<26)>		startConversationSequence{};
		static constexpr	Register::RWLocation<address, (1 <<27)>		burstModeEnabled{};
		static constexpr	Register::RWLocation<address, (1 <<28)>		singlestepConversionModeEnabled{};
		static constexpr	Register::RWLocation<address, (1 <<29)>		lowPriorityEnabled{};
		enum class InterruptThrowCondition {	interruptAfterEachSequence,
												interruptAfterEachConversion};
		static constexpr Register::RWLocation<address,(1 <<30),~(1 <<30), InterruptThrowCondition> interruptThrowCondition{};
		template<InterruptThrowCondition I>
		static constexpr decltype(write(interruptThrowCondition, Register::value<InterruptThrowCondition, I>())) writeInterruptThrowCondition(){ return{}; };
		static constexpr	Register::RWLocation<address, (1 <<31)>		sequenceEnabled{};
	}
	namespace ConversionSequenceBCONAdc0
	{
		constexpr int address{baseAddressAdc0+offsetSeqB_Ctrl};
		static constexpr	Register::RWLocation<address, (1 << 0)>		channel00Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 1)>		channel01Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 2)>		channel02Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 3)>		channel03Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 4)>		channel04Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 5)>		channel05Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 6)>		channel06Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 7)>		channel07Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 8)>		channel08Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 9)>		channel09Enabled{};
		static constexpr	Register::RWLocation<address, (1 <<10)>		channel10Enabled{};
		static constexpr	Register::RWLocation<address, (1 <<11)>		channel11Enabled{};
		static constexpr 	Register::WriteActionT<address,0xFFF,0>		channelDisable_ALL{};
		static constexpr	Register::RWLocation<address, 0xF>			triggerInputNumber{};
	//Bits 17:16 are reserved
		enum class TriggerPolicy {	triggerOnRisingEdge,
									triggerOnFallingEdge};
		static constexpr Register::RWLocation<address,(1 <<18),~(1 <<18), TriggerPolicy> triggerPolicy{};
		template<TriggerPolicy T>
		static constexpr decltype(write(triggerPolicy,Register::value<TriggerPolicy, T>())) writeTriggerPolicy(){ return{}; };
		static constexpr Register::BWLocation<address, (1 <<19)>		syncBypassEnabled{};
	//Bits 20:25 are reserved
		static constexpr	Register::BWLocation<address, (1 <<26)>		startConversationSequence{};
		static constexpr	Register::RWLocation<address, (1 <<27)>		burstModeEnabled{};
		static constexpr	Register::RWLocation<address, (1 <<28)>		singlestepConversionModeEnabled{};
	//Bit 29 is reserved
		enum class InterruptThrowCondition {	interruptAfterEachSequence,
												interruptAfterEachConversion};
		static constexpr Register::RWLocation<address,(1 <<30),~(1 <<30), InterruptThrowCondition> interruptThrowCondition{};
		template<InterruptThrowCondition I>
		static constexpr decltype(write(interruptThrowCondition, Register::value<InterruptThrowCondition, I>())) writeInterruptThrowCondition(){ return{}; };
		static constexpr	Register::RWLocation<address, (1 <<31)>		sequenceEnabled{};
	}
	namespace ConversionSequenceACONAdc1
	{
		constexpr int address{baseAddressAdc1+offsetSeqA_Ctrl};
		static constexpr	Register::RWLocation<address, (1 << 0)>		channel00Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 1)>		channel01Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 2)>		channel02Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 3)>		channel03Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 4)>		channel04Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 5)>		channel05Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 6)>		channel06Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 7)>		channel07Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 8)>		channel08Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 9)>		channel09Enabled{};
		static constexpr	Register::RWLocation<address, (1 <<10)>		channel10Enabled{};
		static constexpr	Register::RWLocation<address, (1 <<11)>		channel11Enabled{};
		static constexpr 	Register::WriteActionT<address,0xFFF,0>		channelDisable_ALL{};
		static constexpr	Register::RWLocation<address, 0xF>			triggerInputNumber{};
	//Bits 17:16 are reserved
		enum class TriggerPolicy {	triggerOnRisingEdge,
									triggerOnFallingEdge};
		static constexpr Register::RWLocation<address,(1 <<18),~(1 <<18), TriggerPolicy> triggerPolicy{};
		template<TriggerPolicy T>
		static constexpr decltype(write(triggerPolicy,Register::value<TriggerPolicy, T>())) writeTriggerPolicy(){ return{}; };
		static constexpr Register::BWLocation<address, (1 <<19)>		syncBypassEnabled{};
	//Bits 20:25 are reserved
		static constexpr	Register::BWLocation<address, (1 <<26)>		startConversationSequence{};
		static constexpr	Register::RWLocation<address, (1 <<27)>		burstModeEnabled{};
		static constexpr	Register::RWLocation<address, (1 <<28)>		singlestepConversionModeEnabled{};
		static constexpr	Register::RWLocation<address, (1 <<29)>		lowPriorityEnabled{};
		enum class InterruptThrowCondition {	interruptAfterEachSequence,
												interruptAfterEachConversion};
		static constexpr Register::RWLocation<address,(1 <<30),~(1 <<30), InterruptThrowCondition> interruptThrowCondition{};
		template<InterruptThrowCondition I>
		static constexpr decltype(write(interruptThrowCondition, Register::value<InterruptThrowCondition, I>())) writeInterruptThrowCondition(){ return{}; };
		static constexpr	Register::RWLocation<address, (1 <<31)>		sequenceEnabled{};
	}
	namespace ConversionSequenceBCONAdc1
	{
		constexpr int address{baseAddressAdc1+offsetSeqB_Ctrl};
		static constexpr	Register::RWLocation<address, (1 << 0)>		channel00Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 1)>		channel01Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 2)>		channel02Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 3)>		channel03Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 4)>		channel04Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 5)>		channel05Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 6)>		channel06Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 7)>		channel07Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 8)>		channel08Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 9)>		channel09Enabled{};
		static constexpr	Register::RWLocation<address, (1 <<10)>		channel10Enabled{};
		static constexpr	Register::RWLocation<address, (1 <<11)>		channel11Enabled{};
		static constexpr 	Register::WriteActionT<address,0xFFF,0>		channelDisable_ALL{};
		static constexpr	Register::RWLocation<address, 0xF>			triggerInputNumber{};
	//Bits 17:16 are reserved
		enum class TriggerPolicy {	triggerOnRisingEdge,
									triggerOnFallingEdge};
		static constexpr Register::RWLocation<address,(1 <<18),~(1 <<18), TriggerPolicy> triggerPolicy{};
		template<TriggerPolicy T>
		static constexpr decltype(write(triggerPolicy,Register::value<TriggerPolicy, T>())) writeTriggerPolicy(){ return{}; };
		static constexpr Register::BWLocation<address, (1 <<19)>		syncBypassEnabled{};
	//Bits 20:25 are reserved
		static constexpr	Register::BWLocation<address, (1 <<26)>		startConversationSequence{};
		static constexpr	Register::RWLocation<address, (1 <<27)>		burstModeEnabled{};
		static constexpr	Register::RWLocation<address, (1 <<28)>		singlestepConversionModeEnabled{};
	//Bit 29 is reserved
		enum class InterruptThrowCondition {	interruptAfterEachSequence,
												interruptAfterEachConversion};
		static constexpr Register::RWLocation<address,(1 <<30),~(1 <<30), InterruptThrowCondition> interruptThrowCondition{};
		template<InterruptThrowCondition I>
		static constexpr decltype(write(interruptThrowCondition, Register::value<InterruptThrowCondition, I>())) writeInterruptThrowCondition(){ return{}; };
		static constexpr	Register::RWLocation<address, (1 <<31)>		sequenceEnabled{};
	}

	namespace GlobalDataRegisterSequenceAAdc0{
		constexpr int address{baseAddressAdc0+offsetSeqA_Gdat};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	lastConvertedChannel{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace GlobalDataRegisterSequenceBAdc0{
		constexpr int address{baseAddressAdc0+offsetSeqB_Gdat};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	lastConvertedChannel{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat0Adc0{
		constexpr int address{baseAddressAdc0+offsetDat0};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat1Adc0{
		constexpr int address{baseAddressAdc0+offsetDat1};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat2Adc0{
		constexpr int address{baseAddressAdc0+offsetDat2};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat3Adc0{
		constexpr int address{baseAddressAdc0+offsetDat3};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat5Adc0{
		constexpr int address{baseAddressAdc0+offsetDat5};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat6Adc0{
		constexpr int address{baseAddressAdc0+offsetDat6};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat7Adc0{
		constexpr int address{baseAddressAdc0+offsetDat7};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat8Adc0{
		constexpr int address{baseAddressAdc0+offsetDat8};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat9Adc0{
		constexpr int address{baseAddressAdc0+offsetDat9};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat10Adc0{
		constexpr int address{baseAddressAdc0+offsetDat10};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat11Adc0{
		constexpr int address{baseAddressAdc0+offsetDat11};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}





	namespace GlobalDataRegisterSequenceAAdc1{
		constexpr int address{baseAddressAdc1+offsetSeqA_Gdat};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	lastConvertedChannel{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace GlobalDataRegisterSequenceBAdc1{
		constexpr int address{baseAddressAdc1+offsetSeqB_Gdat};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	lastConvertedChannel{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat0Adc1{
		constexpr int address{baseAddressAdc1+offsetDat0};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat1Adc1{
		constexpr int address{baseAddressAdc1+offsetDat1};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat2Adc1{
		constexpr int address{baseAddressAdc1+offsetDat2};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat3Adc1{
		constexpr int address{baseAddressAdc1+offsetDat3};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat5Adc1{
		constexpr int address{baseAddressAdc1+offsetDat5};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat6Adc1{
		constexpr int address{baseAddressAdc1+offsetDat6};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat7Adc1{
		constexpr int address{baseAddressAdc1+offsetDat7};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat8Adc1{
		constexpr int address{baseAddressAdc1+offsetDat8};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat9Adc1{
		constexpr int address{baseAddressAdc1+offsetDat9};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat10Adc1{
		constexpr int address{baseAddressAdc1+offsetDat10};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat11Adc1{
		constexpr int address{baseAddressAdc1+offsetDat11};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}



	namespace CompareLowThresh0Adc0
	{
		constexpr int address{baseAddressAdc0+offsetThr0_Low};
	//Bits 3:0 are reserved
		static constexpr	Register::RWLocation<address, (0xFFF<<4)>	thLow{};
	//Bits 26:31 are reserved
	}
	namespace CompareLowThresh1Adc0
	{
		constexpr int address{baseAddressAdc0+offsetThr1_Low};
	//Bits 3:0 are reserved
		static constexpr	Register::RWLocation<address, (0xFFF<<4)>	thLow{};
	//Bits 26:31 are reserved
	}
	namespace CompareHighThresh0Adc0
	{
		constexpr int address{baseAddressAdc0+offsetThr0_High};
	//Bits 3:0 are reserved
		static constexpr	Register::RWLocation<address, (0xFFF<<4)>	thHigh{};
	//Bits 26:31 are reserved
	}
	namespace CompareHighThresh1Adc0
	{
		constexpr int address{baseAddressAdc0+offsetThr1_High};
	//Bits 3:0 are reserved
		static constexpr	Register::RWLocation<address, (0xFFF<<4)>	thHigh{};
	//Bits 26:31 are reserved
	}

	namespace CompareLowThresh0Adc1
	{
		constexpr int address{baseAddressAdc1+offsetThr0_Low};
	//Bits 3:0 are reserved
		static constexpr	Register::RWLocation<address, (0xFFF<<4)>	thLow{};
	//Bits 26:31 are reserved
	}
	namespace CompareLowThresh1Adc1
	{
		constexpr int address{baseAddressAdc1+offsetThr1_Low};
	//Bits 3:0 are reserved
		static constexpr	Register::RWLocation<address, (0xFFF<<4)>	thLow{};
	//Bits 26:31 are reserved
	}
	namespace CompareHighThresh0Adc1
	{
		constexpr int address{baseAddressAdc1+offsetThr0_High};
	//Bits 3:0 are reserved
		static constexpr	Register::RWLocation<address, (0xFFF<<4)>	thHigh{};
	//Bits 26:31 are reserved
	}
	namespace CompareHighThresh1Adc1
	{
		constexpr int address{baseAddressAdc1+offsetThr1_High};
	//Bits 3:0 are reserved
		static constexpr	Register::RWLocation<address, (0xFFF<<4)>	thHigh{};
	//Bits 26:31 are reserved
	}

	namespace ChannelThresholdSelectAdc0
	{
		constexpr int address{baseAddressAdc0+offsetChannelThrSel};
		enum class ChannelThresholdSelect{		compareAgainstThreshold0,
												compareAgainstThreshold1};
		template<ChannelThresholdSelect C, typename TChannel>
		static constexpr decltype(write(Register::RWLocation<address, (1 << (TChannel::value)),~(1 << (TChannel::value)), ChannelThresholdSelect>{},
				Register::value<ChannelThresholdSelect, C>())) writeChannelThresholdSelect(TChannel){ return{}; };
	//Bits 31:12 are reserved
	}

	namespace ChannelThresholdSelectAdc1
	{
		constexpr int address{baseAddressAdc1+offsetChannelThrSel};
		enum class ChannelThresholdSelect{		compareAgainstThreshold0,
												compareAgainstThreshold1};
		template<ChannelThresholdSelect C, typename TChannel>
		static constexpr decltype(write(Register::RWLocation<address, (1 << (TChannel::value)),~(1 << (TChannel::value)), ChannelThresholdSelect>{},
				Register::value<ChannelThresholdSelect, C>())) writeChannelThresholdSelect(TChannel){ return{}; };
	//Bits 31:12 are reserved
	}

	namespace InterruptEnableAdc0
	{
		constexpr int address{baseAddressAdc0+offsetInten};

		static constexpr	Register::RWLocation<address, (1 << 0)>		seqAInterruptEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 1)>		seqBInterruptEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 2)>		overrunInterruptEnabled{};

		enum class InterruptPolicy { 	interruptDisabled,
										interruptIfOutside,
										interruptOnCrossing};
		template<InterruptPolicy I, typename TChannel>
		static constexpr decltype(write(Register::RWLocation<address, (0x03 << (3+2*TChannel::value)),~(0x03 << (3+2*TChannel::value)), InterruptPolicy>,
				Register::value<InterruptPolicy, I>())) writeInterruptPolicy(TChannel){ return{}; };
	//Bits 31:27 are reserved
	}
	namespace InterruptEnableAdc1
	{
		constexpr int address{baseAddressAdc1+offsetInten};

		static constexpr	Register::RWLocation<address, (1 << 0)>		seqAInterruptEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 1)>		seqBInterruptEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 2)>		overrunInterruptEnabled{};

		enum class InterruptPolicy { 	interruptDisabled,
										interruptIfOutside,
										interruptOnCrossing};
		template<InterruptPolicy I, typename TChannel>
		static constexpr decltype(write(Register::RWLocation<address, (0x03 << (3+2*TChannel::value)),~(0x03 << (3+2*TChannel::value)), InterruptPolicy>{},
				Register::value<InterruptPolicy, I>())) writeInterruptPolicy(TChannel){ return{}; };
	//Bits 31:27 are reserved
	}

	namespace FlagsAdc0
	{
		constexpr int address{baseAddressAdc0+offsetFlags};
		template<typename TChannel>
		static constexpr decltype(read(Register::ROLocation<address, (1 << (1*TChannel::value))>())) thCompareStatus(TChannel){ return{}; };
		template<typename TChannel>
		static constexpr decltype(write(Register::BWLocation<address, (1 << (1*TChannel::value))>())) resetThCompareStatus(TChannel){ return{}; };
		template<typename TChannel>
		static constexpr decltype(read(Register::ROLocation<address, (1 << (12+TChannel::value))>())) overrunStatus(TChannel){ return{}; };
		static constexpr 	Register::ROLocation<address, (1 <<24)>		seqAOverrun{};
		static constexpr	Register::ROLocation<address, (1 <<25)>		seqBOverrun{};
		//Bits 27:26 are reserved
	}
	namespace FlagsAdc1
	{
		constexpr int address{baseAddressAdc1+offsetFlags};
		template<typename TChannel>
		static constexpr decltype(read(Register::ROLocation<address, (1 << (1*TChannel::value))>())) thCompareStatus(TChannel){ return{}; };
		template<typename TChannel>
		static constexpr decltype(write(Register::BWLocation<address, (1 << (1*TChannel::value))>())) resetThCompareStatus(TChannel){ return{}; };
		template<typename TChannel>
		static constexpr decltype(read(Register::ROLocation<address, (1 << (12+TChannel::value))>())) overrunStatus(TChannel){ return{}; };
		static constexpr 	Register::ROLocation<address, (1 <<24)>		seqAOverrun{};
		static constexpr	Register::ROLocation<address, (1 <<25)>		seqBOverrun{};
		//Bits 27:26 are reserved
	}


	namespace Trim
	{
		constexpr int address{0x4001C06C};

		//Bits 4:0 are reserved

		constexpr Register::WriteBitActionT<address,5,true>			vddaHigh{};		// 2.7 to 3.6 Volts
		constexpr Register::WriteBitActionT<address,5,false>		vddaLow{};		// 2.4 to 2.7 Volts

		//Bits 31:6 are reserved
	}


	namespace Detail{
		//this function should return the pin function number for ADC mode which corresponds
		//to the pin number passed in or -1 in case there is no ADC functionality on the pin
		constexpr int getAdcPinLocationPort0(int pin){
			return (pin >= 11 && pin <= 15) ? 2 : (
					(pin == 16 || pin == 22 || pin == 23) ? 1 : -1);
		}
		constexpr int getAdcPinLocationPort1(int pin){
			return (pin == 3 || pin == 29) ? 4 : (
					(pin == 9 || pin == 22) ? 3 : -1);
			}
		constexpr int getAdcPinLocationPort2(int pin){
			return -1;  //no functionality on this port
			}
	}
	template<typename T>
	struct SetPinFunctionToAdc{
		static_assert(MPL::AlwaysFalse<T>::value,"");
	};
	template<int Pin>
	struct SetPinFunctionToAdc<Io::PinLocation<MPL::Int<0>,MPL::Int<Pin>>> :
		Io::MakeAction<Io::Action::PinFunction<Detail::getAdcPinLocationPort0(Pin)>,Io::PinLocation<MPL::Int<0>,MPL::Int<Pin>>>{
		static_assert(Detail::getAdcPinLocationPort0(Pin) != -1,"the supplied pin does not have ADC functionality");
	};
	template<int Pin>
	struct SetPinFunctionToAdc<Io::PinLocation<MPL::Int<1>,MPL::Int<Pin>>> :
		Io::MakeAction<Io::Action::PinFunction<Detail::getAdcPinLocationPort0(Pin)>,Io::PinLocation<MPL::Int<0>,MPL::Int<Pin>>>{
		static_assert(Detail::getAdcPinLocationPort0(Pin) != -1,"the supplied pin does not have ADC functionality");
	};
	template<int Pin>
	struct SetPinFunctionToAdc<Io::PinLocation<MPL::Int<2>,MPL::Int<Pin>>> :
		Io::MakeAction<Io::Action::PinFunction<Detail::getAdcPinLocationPort0(Pin)>,Io::PinLocation<MPL::Int<0>,MPL::Int<Pin>>>{
		static_assert(Detail::getAdcPinLocationPort0(Pin) != -1,"the supplied pin does not have ADC functionality");
	};

	struct Config0{
		//static constexpr auto powerOn = clear(System::PowerConfiguration::adc0PoweredDown);
		static constexpr Tag::None channel0Pin{};
		static constexpr Tag::None channel1Pin{};
		static constexpr Tag::None channel2Pin{};
		static constexpr Tag::None channel3Pin{};
		static constexpr Tag::None channel4Pin{};
		static constexpr Tag::None channel5Pin{};
		static constexpr Tag::None channel6Pin{};
		static constexpr Tag::None channel7Pin{};
		static constexpr Tag::None channel8Pin{};
		static constexpr Tag::None channel9Pin{};
		static constexpr Tag::None channel10Pin{};
		static constexpr Tag::None channel11Pin{};
	};

	struct Config1{
		static constexpr auto powerOn = clear(System::PowerConfiguration::adc1PoweredDown);
		static constexpr Tag::None channel0Pin{};
		static constexpr Tag::None channel1Pin{};
		static constexpr Tag::None channel2Pin{};
		static constexpr Tag::None channel3Pin{};
		static constexpr Tag::None channel4Pin{};
		static constexpr Tag::None channel5Pin{};
		static constexpr Tag::None channel6Pin{};
		static constexpr Tag::None channel7Pin{};
		static constexpr Tag::None channel8Pin{};
		static constexpr Tag::None channel9Pin{};
		static constexpr Tag::None channel10Pin{};
		static constexpr Tag::None channel11Pin{};
	};
}
}
