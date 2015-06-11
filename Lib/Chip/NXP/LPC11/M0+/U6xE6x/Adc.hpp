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
#include "Io/Io.hpp"
//#include "System.hpp"
#include "Common/Tags.hpp"

//#define LQFP48_Package
//#define LQFP64_Package
//#define LQFP100_Package


namespace Kvasir{
namespace ADC{

	constexpr int baseAddressAdc				{0x4001C000};


	constexpr int offsetCtrl					{0x000};
	//reserved offset							{0x004};
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

	namespace Control
	{
		using Address = Register::Address::Normal<
				baseAddressAdc+offsetCtrl,
				Register::maskFromRange(9,8,29,11,31,31)>;
		static constexpr	Register::FieldLocT<Address,7,0> 		clkDiv{};
		//Bits 9:8 are reserved
		static constexpr 	Register::BitLocT<Address,10>	lowPowerModeEnabled{};
		//Bits 29:11 are reserved
		static constexpr 	Register::BitLocT<Address,30>	calibrationCycleStart{};
		//Bit 31 is reserved

		//SEQA_CTRL
		struct ConversionSequenceA
		{
			using Address = Register::Address::Normal<
					baseAddressAdc+offsetSeqA_Ctrl,
					Register::maskFromRange(17,15,25,20)
					>;

			//factory for CHANNELS bits
			template<typename TChannel>
			static constexpr Register::BitLocT<Address,TChannel::value> sampled(TChannel){
				static_assert(TChannel::value < 12, "adc channel not supported on this chip");
				return {};
			}
			//shortcut for disabling all CHANNELS
			static constexpr 	auto sampledDisableAllChannels = write(Register::FieldLocT<Address,11,0>{},Register::value<0>());
			static constexpr	Register::FieldLocT<Address, 14, 12> 						hardwareTriggerSourceSelect{};
			//Bits 17:15 are reserved
			enum class TriggerPolicy {	triggerOnRisingEdge,
										triggerOnFallingEdge};
			static constexpr Register::BitLocT<Address, 18, TriggerPolicy> triggerPolicy{};
				template<TriggerPolicy T>
				static constexpr decltype(write(triggerPolicy,Register::value<TriggerPolicy, T>())) writeTriggerPolicy(){ return{}; }
			static constexpr	Register::RWLocation<address, (1 <<19)>				syncBypassEnabled{};
			//Bits 20:25 are reserved
			enum class ConversionControl {	startOneConversion,
											startBurstConversion,
											terminateMultipleConversion};
				static constexpr Register::RWLocation<address,(0x03 <<26),~(0x03 <<26), ConversionControl> conversionControl{};
				template<ConversionControl C>
				static constexpr decltype(write(conversionControl, Register::value<ConversionControl, C>())) writeConversionControl(){ return{}; }
			static constexpr	Register::RWLocation<address, (1 <<28)>				stepConversionModeEnabled{};
			static constexpr	Register::RWLocation<address, (1 <<29)>				setLowPriorityOnSeqAEnabled{};
			enum class InterruptThrowCondition {interruptAfterEachSequence,
												interruptAfterEachConversion};
				static constexpr Register::RWLocation<address,(1 <<30),~(1 <<30), InterruptThrowCondition> interruptThrowCondition{};
				template<InterruptThrowCondition I>
				static constexpr decltype(write(interruptThrowCondition, Register::value<InterruptThrowCondition, I>())) writeInterruptThrowCondition(){ return{}; };
			static constexpr	Register::RWLocation<address, (1 <<31)>				sequenceEnabled{};
		}
		struct ConversionSequenceB
		{
				constexpr int address{baseAddressAdc+offsetSeqB_Ctrl};

				static constexpr	Register::RWLocation<address, 1>					channel00Enabled{};
				static constexpr	Register::RWLocation<address, (1 << 1)>				channel01Enabled{};
				static constexpr	Register::RWLocation<address, (1 << 2)>				channel02Enabled{};
				static constexpr	Register::RWLocation<address, (1 << 3)>				channel03Enabled{};
				static constexpr	Register::RWLocation<address, (1 << 4)>				channel04Enabled{};
				static constexpr	Register::RWLocation<address, (1 << 5)>				channel05Enabled{};
				static constexpr 	Register::RWLocation<address, (1 << 6)>				channel06Enabled{};
				static constexpr	Register::RWLocation<address, (1 << 7)>				channel07Enabled{};
				static constexpr	Register::RWLocation<address, (1 << 8)>				channel08Enabled{};
				static constexpr	Register::RWLocation<address, (1 << 9)>				channel09Enabled{};
				static constexpr	Register::RWLocation<address, (1 <<10)>				channel10Enabled{};
				static constexpr	Register::RWLocation<address, (1 <<11)>				channel11Enabled{};
				constexpr 			Register::WriteActionT<address,0xFFF,0>				channelDisable_ALL{};
				static constexpr	Register::RWLocation<address, (0x07 << 12)> 		writeHardwareTriggerSource{};
				//Bits 17:15 are reserved
				enum class TriggerPolicy {	triggerOnRisingEdge,
											triggerOnFallingEdge};
					static constexpr Register::RWLocation<address,(1 <<18),~(1 <<18), TriggerPolicy> triggerPolicy{};
					template<TriggerPolicy T>
					static constexpr decltype(write(triggerPolicy,Register::value<TriggerPolicy, T>())) writeTriggerPolicy(){ return{}; }
				static constexpr	Register::RWLocation<address, (1 <<19)>				syncBypassEnabled{};
				//Bits 20:25 are reserved
				enum class ConversionControl {	startOneConversion,
												startBurstConversion,
												terminateMultipleConversion};
					static constexpr Register::RWLocation<address,(0x03 <<26),~(0x03 <<26), ConversionControl> conversionControl{};
					template<ConversionControl C>
					static constexpr decltype(write(conversionControl, Register::value<ConversionControl, C>())) writeConversionControl(){ return{}; }
				static constexpr	Register::RWLocation<address, (1 <<28)>				stepConversionModeEnabled{};
				static constexpr	Register::RWLocation<address, (1 <<29)>				setLowPriorityOnSeqAEnabled{};
				enum class InterruptThrowCondition {interruptAfterEachSequence,
													interruptAfterEachConversion};
					static constexpr Register::RWLocation<address,(1 <<30),~(1 <<30), InterruptThrowCondition> interruptThrowCondition{};
					template<InterruptThrowCondition I>
					static constexpr decltype(write(interruptThrowCondition, Register::value<InterruptThrowCondition, I>())) writeInterruptThrowCondition(){ return{}; };
				static constexpr	Register::RWLocation<address, (1 <<31)>				sequenceEnabled{};
		}
	}


	namespace GlobalDataRegisterSequenceAAdc{
		constexpr int address{baseAddressAdc+offsetSeqA_Gdat};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	lastConvertedChannel{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace GlobalDataRegisterSequenceBAdc{
		constexpr int address{baseAddressAdc+offsetSeqB_Gdat};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	lastConvertedChannel{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat0{
		constexpr int address{baseAddressAdc+offsetDat0};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat1{
		constexpr int address{baseAddressAdc+offsetDat1};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat2{
		constexpr int address{baseAddressAdc+offsetDat2};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat3{
		constexpr int address{baseAddressAdc+offsetDat3};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat5{
		constexpr int address{baseAddressAdc+offsetDat5};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat6{
		constexpr int address{baseAddressAdc+offsetDat6};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat7{
		constexpr int address{baseAddressAdc+offsetDat7};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat8{
		constexpr int address{baseAddressAdc+offsetDat8};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat9{
		constexpr int address{baseAddressAdc+offsetDat9};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat10{
		constexpr int address{baseAddressAdc+offsetDat10};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}
	namespace DataRegisterDat11{
		constexpr int address{baseAddressAdc+offsetDat11};
	//Bits 3:0 are reserved
		static constexpr 	Register::ROLocation<address, (0xFFF<<4)>	lastConvertedResult{};
		static constexpr	Register::ROLocation<address, (0x03<<16)>	thCmpRange{};
		static constexpr	Register::ROLocation<address, (0x03<<18)>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::ROLocation<address, (0xF <<26)>	channelIdentity{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		overrun{};
		static constexpr	Register::ROLocation<address, (1 <<31)>		dataValid{};
	}

	namespace CompareLowThresh0
	{
		constexpr int address{baseAddressAdc+offsetThr0_Low};
	//Bits 3:0 are reserved
		static constexpr	Register::RWLocation<address, (0xFFF<<4)>	thLow{};
	//Bits 26:31 are reserved
	}
	namespace CompareLowThresh1
	{
		constexpr int address{baseAddressAdc+offsetThr1_Low};
	//Bits 3:0 are reserved
		static constexpr	Register::RWLocation<address, (0xFFF<<4)>	thLow{};
	//Bits 26:31 are reserved
	}
	namespace CompareHighThresh0
	{
		constexpr int address{baseAddressAdc+offsetThr0_High};
	//Bits 3:0 are reserved
		static constexpr	Register::RWLocation<address, (0xFFF<<4)>	thHigh{};
	//Bits 26:31 are reserved
	}
	namespace CompareHighThresh1
	{
		constexpr int address{baseAddressAdc+offsetThr1_High};
	//Bits 3:0 are reserved
		static constexpr	Register::RWLocation<address, (0xFFF<<4)>	thHigh{};
	//Bits 26:31 are reserved
	}
	namespace ChannelThrSel
	{
		constexpr int address{baseAddressAdc+offsetChannelThrSel};
		enum class ChannelThresholdSelect{		compareAgainstThreshold0,
												compareAgainstThreshold1};
		template<ChannelThresholdSelect C, typename TChannel>
		static constexpr decltype(write(Register::RWLocation<address,(1 << (TChannel::value)),~(1 << (TChannel::value)),ChannelThresholdSelect>{},
										Register::value<ChannelThresholdSelect, C>()))	writeChannelThresholdSelect(TChannel){ return{}; };
		//Bits 31:12 are reserved
	}


	namespace InterruptEnable
	{
		constexpr int address{baseAddressAdc+offsetInten};

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

	namespace Flags
	{
		constexpr int address{baseAddressAdc+offsetFlags};
		template<typename TChannel>
		static constexpr decltype(read(Register::ROLocation<address, (1 << (1*TChannel::value))>())) thCompareStatus(TChannel){ return{}; };
		template<typename TChannel>
		static constexpr decltype(write(Register::BWLocation<address, (1 << (1*TChannel::value))>())) resetThCompareStatus(TChannel){ return{}; };
		template<typename TChannel>
		static constexpr decltype(read(Register::ROLocation<address, (1 << (12+TChannel::value))>())) overrunStatus(TChannel){ return{}; };
		static constexpr 	Register::ROLocation<address, (1 <<24)>		seqAOverrun{};
		static constexpr	Register::ROLocation<address, (1 <<25)>		seqBOverrun{};
		//Bits 27:26 are reserved
		static constexpr 	Register::ROLocation<address, (1 <<28)>		seqAInt{};
		static constexpr 	Register::ROLocation<address, (1 <<29)>		seqBInt{};
		static constexpr	Register::ROLocation<address, (1 <<30)>		thCmpInt{};
		static constexpr 	Register::ROLocation<address, (1 <<31)>		ovRInt{};
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
		Io::MakeAction<Io::Action::PinFunction<Detail::getAdcPinLocationPort1(Pin)>,Io::PinLocation<MPL::Int<0>,MPL::Int<Pin>>>{
		static_assert(Detail::getAdcPinLocationPort0(Pin) != -1,"the supplied pin does not have ADC functionality");
	};
	template<int Pin>
	struct SetPinFunctionToAdc<Io::PinLocation<MPL::Int<2>,MPL::Int<Pin>>> :
		Io::MakeAction<Io::Action::PinFunction<Detail::getAdcPinLocationPort2(Pin)>,Io::PinLocation<MPL::Int<0>,MPL::Int<Pin>>>{
		static_assert(Detail::getAdcPinLocationPort0(Pin) != -1,"the supplied pin does not have ADC functionality");
	};
	struct Config{
		static constexpr auto powerOn = clear(System::PowerConfiguration::adcPoweredDown);
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
