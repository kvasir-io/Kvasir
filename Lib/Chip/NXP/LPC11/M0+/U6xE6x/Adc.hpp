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
#include "System.hpp"
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
		using Address = Register::Address<
				baseAddressAdc+offsetCtrl,
				Register::maskFromRange(9,8,29,11,31,31)>;
		static constexpr	Register::RWFieldLocT<Address,7,0> 		clkDiv{};
		//Bits 9:8 are reserved
		static constexpr 	Register::RWBitLocT<Address,10>	lowPowerModeEnabled{};
		//Bits 29:11 are reserved
		static constexpr 	Register::RWBitLocT<Address,30>	calibrationCycleStart{};
		//Bit 31 is reserved

		//SEQA_CTRL
		namespace ConversionSequenceA
		{
			using Address = Register::Address<
					baseAddressAdc+offsetSeqA_Ctrl,
					Register::maskFromRange(17,15,25,20)
					>;

			//factory for CHANNELS bits
			template<typename TChannel>
			static constexpr Register::RWBitLocT<Address,Tag::Detail::getChannelValue<TChannel>()> sampled(TChannel){
				static_assert(Tag::Detail::getChannelValue<TChannel>() < 12, "adc channel not supported on this chip");
				return {};
			}
			//shortcut for disabling all CHANNELS
			static constexpr 	auto sampledDisableAllChannels = write(Register::RWFieldLocT<Address,11,0>{},Register::value<0>());
			static constexpr	Register::RWFieldLocT<Address, 14, 12> 						hardwareTriggerSourceSelect{};
			//Bits 17:15 are reserved
			enum class TriggerPolicy {	triggerOnRisingEdge,
										triggerOnFallingEdge};
			static constexpr Register::RWBitLocT<Address, 18, TriggerPolicy> triggerPolicy{};
			template<TriggerPolicy T>
			static constexpr decltype(write(triggerPolicy,Register::value<TriggerPolicy, T>())) writeTriggerPolicy(){ return{}; }
			static constexpr	Register::RWBitLocT<Address, 19>				syncBypassEnabled{};
			//Bits 20:25 are reserved
			enum class ConversionControl {	startOneConversion,
											startBurstConversion,
											terminateMultipleConversion};
				static constexpr Register::RWFieldLocT<Address,27,26, ConversionControl> conversionControl{};
				template<ConversionControl C>
				static constexpr decltype(write(conversionControl, Register::value<ConversionControl, C>())) writeConversionControl(){ return{}; }
			static constexpr	Register::RWBitLocT<Address, 28>				stepConversionModeEnabled{};
			static constexpr	Register::RWBitLocT<Address, 29>				setLowPriorityOnSeqAEnabled{};
			enum class InterruptThrowCondition {interruptAfterEachSequence,
												interruptAfterEachConversion};
				static constexpr Register::RWBitLocT<Address, 30, InterruptThrowCondition> interruptThrowCondition{};
				template<InterruptThrowCondition I>
				static constexpr decltype(write(interruptThrowCondition, Register::value<InterruptThrowCondition, I>())) writeInterruptThrowCondition(){ return{}; };
			static constexpr	Register::RWBitLocT<Address, 31>				sequenceEnabled{};
		};
		namespace ConversionSequenceB
		{
			using Address = Register::Address<
					baseAddressAdc+offsetSeqB_Ctrl,
					Register::maskFromRange(17,15,25,20)
					>;

			//factory for CHANNELS bits
			template<typename TChannel>
			static constexpr Register::RWBitLocT<Address,Tag::Detail::getChannelValue<TChannel>()> sampled(TChannel){
				static_assert(Tag::Detail::getChannelValue<TChannel>() < 12, "adc channel not supported on this chip");
				return {};
			}

			//shortcut for disabling all CHANNELS
			static constexpr 	auto sampledDisableAllChannels = write(Register::RWFieldLocT<Address,11,0>{},Register::value<0>());
			static constexpr	Register::RWFieldLocT<Address, 14, 12> 						hardwareTriggerSourceSelect{};
			//Bits 17:15 are reserved
			enum class TriggerPolicy {	triggerOnRisingEdge,
										triggerOnFallingEdge};
			static constexpr Register::RWBitLocT<Address, 18, TriggerPolicy> triggerPolicy{};
			template<TriggerPolicy T>
			static constexpr decltype(write(triggerPolicy,Register::value<TriggerPolicy, T>())) writeTriggerPolicy(){ return{}; }
			static constexpr	Register::RWBitLocT<Address, 19>				syncBypassEnabled{};
			//Bits 20:25 are reserved
			enum class ConversionControl {	startOneConversion,
											startBurstConversion,
											terminateMultipleConversion};
			static constexpr Register::RWFieldLocT<Address,27,26, ConversionControl> conversionControl{};
			template<ConversionControl C>
			static constexpr decltype(write(conversionControl, Register::value<ConversionControl, C>())) writeConversionControl(){ return{}; }
			static constexpr	Register::RWBitLocT<Address, 28>				stepConversionModeEnabled{};
			static constexpr	Register::RWBitLocT<Address, 29>				setLowPriorityOnSeqAEnabled{};
			enum class InterruptThrowCondition {interruptAfterEachSequence,
												interruptAfterEachConversion};
			static constexpr Register::RWBitLocT<Address, 30, InterruptThrowCondition> interruptThrowCondition{};
			template<InterruptThrowCondition I>
			static constexpr decltype(write(interruptThrowCondition, Register::value<InterruptThrowCondition, I>())) writeInterruptThrowCondition(){ return{}; };
			static constexpr	Register::RWBitLocT<Address, 31>				sequenceEnabled{};
		};
	}


	namespace GlobalDataRegisterSequenceAAdc{
		using Address = Register::Address<
				baseAddressAdc+offsetSeqA_Gdat,
				Register::maskFromRange(3,0,25,20)
				>;
	//Bits 3:0 are reserved
		static constexpr 	Register::RWFieldLocT<Address, 15, 4>		lastConvertedResult{};
		static constexpr	Register::RWFieldLocT<Address, 17, 16>	thCmpRange{};
		static constexpr	Register::RWFieldLocT<Address, 19, 18>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::RWFieldLocT<Address, 29, 26>	lastConvertedChannel{};
		static constexpr	Register::RWBitLocT<Address, 30>			overrun{};
		static constexpr	Register::RWBitLocT<Address, 31>			dataValid{};
	}
	namespace GlobalDataRegisterSequenceBAdc{
		using Address = Register::Address<
				baseAddressAdc+offsetSeqB_Gdat,
				Register::maskFromRange(3,0,25,20)
				>;
	//Bits 3:0 are reserved
		static constexpr 	Register::RWFieldLocT<Address, 15, 4>		lastConvertedResult{};
		static constexpr	Register::RWFieldLocT<Address, 17, 16>	thCmpRange{};
		static constexpr	Register::RWFieldLocT<Address, 19, 18>	thCmpCross{};
	//Bits 25:20 are reserved
		static constexpr	Register::RWFieldLocT<Address, 29, 26>	lastConvertedChannel{};
		static constexpr	Register::RWBitLocT<Address, 30>			overrun{};
		static constexpr	Register::RWBitLocT<Address, 31>			dataValid{};
	}
	namespace DataRegister{
		template<int Offset>
		using Address = Register::Address<
				baseAddressAdc+Offset,
				Register::maskFromRange(3,0,29,20),
				0,
				unsigned,
				Register::SpecialReadMode
				>;

		//Bits 3:0 are reserved
		template<typename TChannel>
		constexpr Register::ROFieldLocT<Address<Tag::Detail::getChannelValue<TChannel>()>, 15, 4> makeLastConvertedResult(TChannel){ return {};}
		template<typename TChannel>
		constexpr Register::ROFieldLocT<Address<Tag::Detail::getChannelValue<TChannel>()>, 17, 16> makeThresholdRangeResult(TChannel){ return {};}
		template<typename TChannel>
		constexpr Register::ROFieldLocT<Address<Tag::Detail::getChannelValue<TChannel>()>, 19, 18> makeThresholdCrossingResult(TChannel){ return {};}
		//Bits 25:20 are reserved
		//Bits 29:26 are not helpfull
		template<typename TChannel>
		constexpr Register::ROBitLocT<Address<Tag::Detail::getChannelValue<TChannel>()>, 30> makeOverrun(TChannel){ return {};}
		template<typename TChannel>
		constexpr Register::ROBitLocT<Address<Tag::Detail::getChannelValue<TChannel>()>, 31> makeDataValid(TChannel){ return {};}
	}

	namespace CompareLowThresh0
	{
		using Address = Register::Address<
			baseAddressAdc+offsetThr0_Low,
			Register::maskFromRange(3,0,31,26)
			>;
		//Bits 3:0 are reserved
		static constexpr	Register::RWFieldLocT<Address, 15,4>	thLow{};
		//Bits 26:31 are reserved
	}
	namespace CompareLowThresh1
	{
		using Address = Register::Address<
			baseAddressAdc+offsetThr1_Low,
			Register::maskFromRange(3,0,31,26)
			>;
		//Bits 3:0 are reserved
		static constexpr	Register::RWFieldLocT<Address, 15,4>	thLow{};
		//Bits 26:31 are reserved
	}
	namespace CompareHighThresh0
	{
		using Address = Register::Address<
			baseAddressAdc+offsetThr0_High,
			Register::maskFromRange(3,0,31,26)
			>;
		//Bits 3:0 are reserved
		static constexpr	Register::RWFieldLocT<Address, 15,4>	thHigh{};
		//Bits 26:31 are reserved
	}
	namespace CompareHighThresh1
	{
		using Address = Register::Address<
			baseAddressAdc+offsetThr1_High,
			Register::maskFromRange(3,0,31,26)
			>;
		//Bits 3:0 are reserved
		static constexpr	Register::RWFieldLocT<Address, 15,4>	thHigh{};
		//Bits 26:31 are reserved
	}
	namespace ChannelThrSel
	{
		using Address = Register::Address<
				baseAddressAdc+offsetChannelThrSel,
				Register::maskFromRange(31,12)
				>;
		enum class ChannelThresholdSelect{		compareAgainstThreshold0,
												compareAgainstThreshold1};
		template<typename TChannel>
		static constexpr Register::RWBitLocT<Address,Tag::Detail::getChannelValue<TChannel>(),ChannelThresholdSelect> makeThresholdSelect(TChannel){ return {}; }
		//Bits 31:12 are reserved
	}


	namespace InterruptEnable
	{
		using Address = Register::Address<
			baseAddressAdc+offsetInten,
			Register::maskFromRange(31,27)
			>;
		static constexpr	Register::RWBitLocT<Address, 0>		seqAInterruptEnabled{};
		static constexpr	Register::RWBitLocT<Address, 1>		seqBInterruptEnabled{};
		static constexpr	Register::RWBitLocT<Address, 2>		overrunInterruptEnabled{};

		enum class InterruptPolicy { 	interruptDisabled,
										interruptIfOutside,
										interruptOnCrossing};
		template<typename TChannel>
		static constexpr Register::RWFieldLocT<Address, (4+2*Tag::Detail::getChannelValue<TChannel>()), (3+2*Tag::Detail::getChannelValue<TChannel>()), InterruptPolicy> makeInterruptPolicy(TChannel){return{};}
		template<InterruptPolicy I, typename TChannel>
		static constexpr decltype(write(makeInterruptPolicy(TChannel{})(), Register::value<InterruptPolicy, I>())) writeInterruptPolicy(TChannel){ return{}; };
	//Bits 31:27 are reserved
	}

	namespace Flags
	{
		using Address = Register::Address<
				baseAddressAdc+offsetFlags,
				Register::maskFromRange(27,26)
				>;
		template<typename TChannel>
		static constexpr decltype(read(Register::RWBitLocT<Address, Tag::Detail::getChannelValue<TChannel>()>())) thCompareStatus(TChannel){ return{}; };
		template<typename TChannel>
		static constexpr decltype(write(Register::RWBitLocT<Address, Tag::Detail::getChannelValue<TChannel>()>())) resetThCompareStatus(TChannel){ return{}; };
		template<typename TChannel>
		static constexpr decltype(read(Register::ROBitLocT<Address, Tag::Detail::getChannelValue<TChannel>()>())) overrunStatus(TChannel){ return{}; };
		static constexpr 	Register::ROBitLocT<Address, 24>		seqAOverrun{};
		static constexpr	Register::ROBitLocT<Address, 25>		seqBOverrun{};
		//Bits 27:26 are reserved
		static constexpr 	Register::ROBitLocT<Address, 28>		seqAInt{};
		static constexpr 	Register::ROBitLocT<Address, 29>		seqBInt{};
		static constexpr	Register::ROBitLocT<Address, 30>		thCmpInt{};
		static constexpr 	Register::ROBitLocT<Address, 31>		ovRInt{};
	}

	namespace Trim
	{
		using Address = Register::Address<
					0x4001C06C,
					Register::maskFromRange(4,0,31,6)
					>;

		//Bits 4:0 are reserved

		constexpr decltype(set(Register::RWBitLocT<Address,5>{}))			vddaHigh{};		// 2.7 to 3.6 Volts
		constexpr decltype(clear(Register::RWBitLocT<Address,5>{}))		vddaLow{};		// 2.4 to 2.7 Volts

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
	struct SetPinFunctionToAdc<Io::PinLocation<0,Pin>> :
		Io::MakeAction<Io::Action::PinFunction<Detail::getAdcPinLocationPort0(Pin)>,Io::PinLocation<0,Pin>>{
		static_assert(Detail::getAdcPinLocationPort0(Pin) != -1,"the supplied pin does not have ADC functionality");
	};
	template<int Pin>
	struct SetPinFunctionToAdc<Io::PinLocation<1,Pin>> :
		Io::MakeAction<Io::Action::PinFunction<Detail::getAdcPinLocationPort1(Pin)>,Io::PinLocation<1,Pin>>{
		static_assert(Detail::getAdcPinLocationPort1(Pin) != -1,"the supplied pin does not have ADC functionality");
	};
	template<int Pin>
	struct SetPinFunctionToAdc<Io::PinLocation<2,Pin>> :
		Io::MakeAction<Io::Action::PinFunction<Detail::getAdcPinLocationPort2(Pin)>,Io::PinLocation<2,Pin>>{
		static_assert(Detail::getAdcPinLocationPort2(Pin) != -1,"the supplied pin does not have ADC functionality");
	};
	struct Config{
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
		static constexpr auto powerOn = clear(System::PowerConfiguration::adcPoweredDown);
	};
}
}
