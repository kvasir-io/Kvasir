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
#include "../../../../../Io.hpp"
#include "System.hpp"

namespace Kvasir{
namespace ADC{
	namespace CON
	{
		constexpr int address{0x4001C000};

		//TODO make function register abstraction for CLKDIV

		//Bits 9:8 are reserved

		static constexpr Register::RWLocation<address, (1 <<10)>	lowPowerModeEnabled{};
//		constexpr Register::WriteBitActionT<address,10,true>		lowPowerModeEnable{};
//		constexpr Register::WriteBitActionT<address,10,false>	lowPowerModeDisable{};

		//Bits 29:11 are reserved

		static constexpr Register::RWLocation<address, (1 <<30)>	calibrationCycleStart{};
//		constexpr Register::WriteBitActionT<address,30,true>		calibrationCycleStart{};

		//Bit 30 is reserved
	}
	namespace ConversionSequenceACON
	{
		constexpr int address{0x4001C008};

		static constexpr	Register::RWLocation<address, 1>			channel00Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 1)>		channel01Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 2)>		channel02Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 3)>		channel03Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 4)>		channel04Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 5)>		channel05Enabled{};
		static constexpr 	Register::RWLocation<address, (1 << 6)>		channel06Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 7)>		channel07Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 8)>		channel08Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 9)>		channel09Enabled{};
		static constexpr	Register::RWLocation<address, (1 <<10)>		channel10Enabled{};
		static constexpr	Register::RWLocation<address, (1 <<11)>		channel11Enabled{};

		// TODO implement routine to write whole byte
		constexpr Register::WriteActionT<address,0xFFF,0>		channelDisable_ALL{};

		//TODO make enum for triggerdistinction

		//Bits 17:15 are reserved

		constexpr Register::WriteBitActionT<address,18,true>		triggerOnRisingEdge{};
		constexpr Register::WriteBitActionT<address,18,false>	triggerOnFallingEdge{};

		static constexpr	Register::RWLocation<address, (1 <<19)>		syncBypassEnabled{};

		//Bits 20:25 are reserved

		constexpr Register::WriteActionT<address,0x3<<26,0x1>	startOneConversion{};
		constexpr Register::WriteActionT<address,0x3<<26,0x2>	stratBurstConversion{};
		constexpr Register::WriteActionT<address,0x3<<26,0x0>	terminateMultipleConversions{};
		constexpr Register::WriteBitActionT<address,28,true>		stepConversionModeEnable{};
		constexpr Register::WriteBitActionT<address,28,false>	stepConversionModeDisable{};

		static constexpr	Register::RWLocation<address, (1 <<29)>		priorityOnSeqADecreaseEnabled{};
		constexpr Register::WriteBitActionT<address,30,true>		interruptAfterEachSequence{};
		constexpr Register::WriteBitActionT<address,30,false>	interruptAfterEachConversion{};

		static constexpr	Register::RWLocation<address, (1 <<31)>		sequenceEnabled{};
	}
	namespace ConversionSequenceBCON
	{
		constexpr int address{0x4001C00C};

		static constexpr	Register::RWLocation<address, 1>			channel00Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 1)>		channel01Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 2)>		channel02Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 3)>		channel03Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 4)>		channel04Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 5)>		channel05Enabled{};
		static constexpr 	Register::RWLocation<address, (1 << 6)>		channel06Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 7)>		channel07Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 8)>		channel08Enabled{};
		static constexpr	Register::RWLocation<address, (1 << 9)>		channel09Enabled{};
		static constexpr	Register::RWLocation<address, (1 <<10)>		channel10Enabled{};
		static constexpr	Register::RWLocation<address, (1 <<11)>		channel11Enabled{};

		// TODO implement routine to write whole byte
		constexpr Register::WriteActionT<address,0xFFF,0>		channelDisable_ALL{};

		//TODO make enum for triggerdistinction

		//Bits 17:15 are reserved

		constexpr Register::WriteBitActionT<address,18,true>		triggerOnRisingEdge{};
		constexpr Register::WriteBitActionT<address,18,false>	triggerOnFallingEdge{};

		static constexpr	Register::RWLocation<address, (1 <<19)>		syncBypassEnabled{};

		//Bits 20:25 are reserved

		constexpr Register::WriteActionT<address,0x3<<26,0x1>	startOneConversion{};
		constexpr Register::WriteActionT<address,0x3<<26,0x2>	stratBurstConversion{};
		constexpr Register::WriteActionT<address,0x3<<26,0x0>	terminateMultipleConversions{};
		constexpr Register::WriteBitActionT<address,28,true>		stepConversionModeEnable{};
		constexpr Register::WriteBitActionT<address,28,false>	stepConversionModeDisable{};

		// Bit 29 is reserved ->have a look at Kvasir::ADC::ConversionSequanceACON

		constexpr Register::WriteBitActionT<address,30,true>		interruptAfterEachSequence{};
		constexpr Register::WriteBitActionT<address,30,false>	interruptAfterEachConversion{};

		static constexpr	Register::RWLocation<address, (1 <<31)>		sequenceEnabled{};
	}

	namespace GlobalDataRegisterSequenceA{constexpr int address{0x4001C010};/*Fill in the getters*/}
	namespace GlobalDataRegisterSequenceB{constexpr int address{0x4001C014};/*Fill in the getters*/}
	namespace Channel00DataRegister{constexpr int address{0x4001C020};/*Fill in the getters*/}
	namespace Channel01DataRegister{constexpr int address{0x4001C024};/*Fill in the getters*/}
	namespace Channel02DataRegister{constexpr int address{0x4001C028};/*Fill in the getters*/}
	namespace Channel03DataRegister{constexpr int address{0x4001C02C};/*Fill in the getters*/}
	namespace Channel04DataRegister{constexpr int address{0x4001C030};/*Fill in the getters*/}
	namespace Channel05DataRegister{constexpr int address{0x4001C034};/*Fill in the getters*/}
	namespace Channel06DataRegister{constexpr int address{0x4001C038};/*Fill in the getters*/}
	namespace Channel07DataRegister{constexpr int address{0x4001C03C};/*Fill in the getters*/}
	namespace Channel08DataRegister{constexpr int address{0x4001C040};/*Fill in the getters*/}
	namespace Channel09DataRegister{constexpr int address{0x4001C044};/*Fill in the getters*/}
	namespace Channel10DataRegister{constexpr int address{0x4001C048};/*Fill in the getters*/}
	namespace Channel11DataRegister{constexpr int address{0x4001C04C};/*Fill in the getters*/}

	namespace CompareLowThresh0
	{
		constexpr int address{0x4001C050};

		//Bits 3:0 are reserved

		//TODO fill in method to set lower threshold 15:4

		//Bits 26:31 are reserved
	}
	namespace CompareLowThresh1
	{
		constexpr int address{0x4001C054};

		//Bits 3:0 are reserved

		//TODO fill in method to set lower threshold 15:4

		//Bits 26:31 are reserved
	}
	namespace CompareHighThresh0
	{
		constexpr int address{0x4001C058};

		//Bits 3:0 are reserved

		//TODO fill in method to set upper threshold 15:4

		//Bits 26:31 are reserved
	}
	namespace CompareHighThresh1
	{
		constexpr int address{0x4001C05C};

		//Bits 3:0 are reserved

		//TODO fill in method to set upper threshold 15:4

		//Bits 26:31 are reserved
	}
	namespace ChannelThresholdSelect
	{
		constexpr int address{0x4001C060};

		static constexpr 	Register::RWLocation<address, 1>			channel00ThresholdEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 1)>		channel01ThresholdEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 2)>		channel02ThresholdEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 3)>		channel03ThresholdEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 4)>		channel04ThresholdEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 5)>		channel05ThresholdEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 6)>		channel06ThresholdEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 7)>		channelThresholdEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 8)>		channel08ThresholdEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 9)>		channel09ThresholdEnabled{};
		static constexpr	Register::RWLocation<address, (1 <<10)>		channel10ThresholdEnabled{};
		static constexpr	Register::RWLocation<address, (1 <<11)>		channel11ThresholdEnabled{};

		//Bits 31:12 are reserved
	}

	namespace InterruptEnable
	{
		constexpr int address{0x4001C064};

		static constexpr 	Register::RWLocation<address, 1>			seqAInterruptEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 1)>		seqBInterruptEnabled{};
		static constexpr	Register::RWLocation<address, (1 << 2)>		overrunInterruptEnabled{};

		enum class ThreshCompareInterruptTrigger {disableInterrupt, ifOutside, onCrossing, doNotUse};

		static constexpr Register::RWLocation<address, 0x03<< 3, ~0x03<< 3, TheshCompareInterruptTrigger> threshCompareTrigger00{};
		template <ThreshCompareInterruptTrigger T>
		constexpr decltype(write(theshCompareTrigger00, Register::value<ThreshCompareInterruptTrigger,T>())) setThreshCompareTrigger00(){ return{}; }

		static constexpr Register::RWLocation<address, 0x03<< 5, ~0x03<< 5, TheshCompareInterruptTrigger> threshCompareTrigger01{};
		template <ThreshCompareInterruptTrigger T>
		constexpr decltype(write(theshCompareTrigger01, Register::value<ThreshCompareInterruptTrigger,T>())) setThreshCompareTrigger01(){ return{}; }

		static constexpr Register::RWLocation<address, 0x03<< 7, ~0x03<< 7, TheshCompareInterruptTrigger> threshCompareTrigger02{};
		template <ThreshCompareInterruptTrigger T>
		constexpr decltype(write(theshCompareTrigger02, Register::value<ThreshCompareInterruptTrigger,T>())) setThreshCompareTrigger02(){ return{}; }

		static constexpr Register::RWLocation<address, 0x03<< 9, ~0x03<< 9, TheshCompareInterruptTrigger> threshCompareTrigger03{};
		template <ThreshCompareInterruptTrigger T>
		constexpr decltype(write(theshCompareTrigger03, Register::value<ThreshCompareInterruptTrigger,T>())) setThreshCompareTrigger03(){ return{}; }

		static constexpr Register::RWLocation<address, 0x03<<11, ~0x03<<11, TheshCompareInterruptTrigger> threshCompareTrigger04{};
		template <ThreshCompareInterruptTrigger T>
		constexpr decltype(write(theshCompareTrigger04, Register::value<ThreshCompareInterruptTrigger,T>())) setThreshCompareTrigger04(){ return{}; }

		static constexpr Register::RWLocation<address, 0x03<<13, ~0x03<<13, TheshCompareInterruptTrigger> threshCompareTrigger05{};
		template <ThreshCompareInterruptTrigger T>
		constexpr decltype(write(theshCompareTrigger05, Register::value<ThreshCompareInterruptTrigger,T>())) setThreshCompareTrigger05(){ return{}; }

		static constexpr Register::RWLocation<address, 0x03<<15, ~0x03<<15, TheshCompareInterruptTrigger> threshCompareTrigger06{};
		template <ThreshCompareInterruptTrigger T>
		constexpr decltype(write(theshCompareTrigger06, Register::value<ThreshCompareInterruptTrigger,T>())) setThreshCompareTrigger06(){ return{}; }

		static constexpr Register::RWLocation<address, 0x03<<17, ~0x03<<17, TheshCompareInterruptTrigger> threshCompareTrigger07{};
		template <ThreshCompareInterruptTrigger T>
		constexpr decltype(write(theshCompareTrigger07, Register::value<ThreshCompareInterruptTrigger,T>())) setThreshCompareTrigger07(){ return{}; }

		static constexpr Register::RWLocation<address, 0x03<<19, ~0x03<<19, TheshCompareInterruptTrigger> threshCompareTrigger08{};
		template <ThreshCompareInterruptTrigger T>
		constexpr decltype(write(theshCompareTrigger08, Register::value<ThreshCompareInterruptTrigger,T>())) setThreshCompareTrigger08(){ return{}; }

		static constexpr Register::RWLocation<address, 0x03<<21, ~0x03<<21, TheshCompareInterruptTrigger> threshCompareTrigger09{};
		template <ThreshCompareInterruptTrigger T>
		constexpr decltype(write(theshCompareTrigger09, Register::value<ThreshCompareInterruptTrigger,T>())) setThreshCompareTrigger09(){ return{}; }

		static constexpr Register::RWLocation<address, 0x03<<23, ~0x03<<23, TheshCompareInterruptTrigger> threshCompareTrigger10{};
		template <ThreshCompareInterruptTrigger T>
		constexpr decltype(write(theshCompareTrigger10, Register::value<ThreshCompareInterruptTrigger,T>())) setThreshCompareTrigger10(){ return{}; }

		static constexpr Register::RWLocation<address, 0x03<<25, ~0x03<<25, TheshCompareInterruptTrigger> threshCompareTrigger11{};
		template <ThreshCompareInterruptTrigger T>
		constexpr decltype(write(theshCompareTrigger11, Register::value<ThreshCompareInterruptTrigger,T>())) setThreshCompareTrigger11(){ return{}; }


		//Bits 31:27 are reserved
	}

	namespace Flags
	{
		constexpr int address{0x4001C068};

		//TODO fill in getter methods
		//Bits 27:26 are reserved
	}

	namespace Trim
	{
		constexpr int address{0x4001C06C};

		//Bits 4:0 are reserved

		constexpr Register::WriteBitActionT<address,5,true>		vddaHigh{};		// 2.7 to 3.6 Volts
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
