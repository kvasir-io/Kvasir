#pragma once
#include "Io.hpp"

namespace Kvasir{
namespace ADC{
	namespace CON
	{
		constexpr int adress{0x4001C000};

		//TODO make function register abstraction for CLKDIV

		//Bits 9:8 are reserved

		constexpr Register::WriteBitActionT<adress,10,true>		lowPowerModeEnable{};
		constexpr Register::WriteBitActionT<adress,10,false>	lowPowerModeDisable{};

		//Bits 29:11 are reserved

		constexpr Register::WriteBitActionT<adress,30,true>		calibrationCycleStart{};

		//Bit 30 is reserved
	}
	namespace ConversionSequenceACON
	{
		constexpr int adress{0x4001C008};

		constexpr Register::WriteBitActionT<adress,0,true> 		channelEnable_00{};
		constexpr Register::WriteBitActionT<adress,0,false> 	channelDisable_00{};

		constexpr Register::WriteBitActionT<adress,1,true> 		channelEnable_01{};
		constexpr Register::WriteBitActionT<adress,1,false> 	channelDisable_01{};

		constexpr Register::WriteBitActionT<adress,2,true> 		channelEnable_02{};
		constexpr Register::WriteBitActionT<adress,2,false> 	channelDisable_02{};

		constexpr Register::WriteBitActionT<adress,3,true> 		channelEnable_03{};
		constexpr Register::WriteBitActionT<adress,3,false> 	channelDisable_03{};

		constexpr Register::WriteBitActionT<adress,4,true> 		channelEnable_04{};
		constexpr Register::WriteBitActionT<adress,4,false> 	channelDisable_04{};

		constexpr Register::WriteBitActionT<adress,5,true> 		channelEnable_05{};
		constexpr Register::WriteBitActionT<adress,5,false> 	channelDisable_05{};

		constexpr Register::WriteBitActionT<adress,6,true> 		channelEnable_06{};
		constexpr Register::WriteBitActionT<adress,6,false> 	channelDisable_06{};

		constexpr Register::WriteBitActionT<adress,7,true> 		channelEnable_07{};
		constexpr Register::WriteBitActionT<adress,7,false> 	channelDisable_07{};

		constexpr Register::WriteBitActionT<adress,8,true> 		channelEnable_08{};
		constexpr Register::WriteBitActionT<adress,8,false> 	channelDisable_08{};

		constexpr Register::WriteBitActionT<adress,9,true> 		channelEnable_09{};
		constexpr Register::WriteBitActionT<adress,9,false> 	channelDisable_09{};

		constexpr Register::WriteBitActionT<adress,10,true> 	channelEnable_10{};
		constexpr Register::WriteBitActionT<adress,10,false> 	channelDisable_10{};

		constexpr Register::WriteBitActionT<adress,11,true> 	channelEnable_11{};
		constexpr Register::WriteBitActionT<adress,11,false> 	channelDisable_11{};

		constexpr Register::WriteActionT<adress,0xFFF,0>		channelDisable_ALL{};

		//TODO make enum for triggerdistinction

		//Bits 17:15 are reserved

		constexpr Register::WriteBitActionT<adress,18,true>		triggerOnRisingEdge{};
		constexpr Register::WriteBitActionT<adress,18,false>	triggerOnFallingEdge{};

		constexpr Register::WriteBitActionT<adress,19,true>		syncBypassEnable{};
		constexpr Register::WriteBitActionT<adress,19,false>	syncBypassDisable{};

		//Bits 20:25 are reserved

		constexpr Register::WriteActionT<adress,0x3<<26,0x1>	startOneConversion{};
		constexpr Register::WriteActionT<adress,0x3<<26,0x2>	stratBurstConversion{};
		constexpr Register::WriteActionT<adress,0x3<<26,0x0>	terminateMultipleConversions{};
		constexpr Register::WriteBitActionT<adress,28,true>		stepConversionModeEnable{};
		constexpr Register::WriteBitActionT<adress,28,false>	stepConversionModeDisable{};

		constexpr Register::WriteBitActionT<adress,29,true>		lowPriorityOnSeqA{};
		constexpr Register::WriteBitActionT<adress,29,false>	highPriorityOnSeqA{};

		constexpr Register::WriteBitActionT<adress,30,true>		interruptAfterEachSequence{};
		constexpr Register::WriteBitActionT<adress,30,false>	interruptAfterEachConversion{};

		constexpr Register::WriteBitActionT<adress,31,true>		sequenceEnable{};
		constexpr Register::WriteBitActionT<adress,31,false>	sequenceDisable{};
	}
	namespace ConversionSequenceBCON
	{
		constexpr int adress{0x4001C00C};

		constexpr Register::WriteBitActionT<adress,0,true> 		channelEnable_00{};
		constexpr Register::WriteBitActionT<adress,0,false> 	channelDisable_00{};

		constexpr Register::WriteBitActionT<adress,1,true> 		channelEnable_01{};
		constexpr Register::WriteBitActionT<adress,1,false> 	channelDisable_01{};

		constexpr Register::WriteBitActionT<adress,2,true> 		channelEnable_02{};
		constexpr Register::WriteBitActionT<adress,2,false> 	channelDisable_02{};

		constexpr Register::WriteBitActionT<adress,3,true> 		channelEnable_03{};
		constexpr Register::WriteBitActionT<adress,3,false> 	channelDisable_03{};

		constexpr Register::WriteBitActionT<adress,4,true> 		channelEnable_04{};
		constexpr Register::WriteBitActionT<adress,4,false> 	channelDisable_04{};

		constexpr Register::WriteBitActionT<adress,5,true> 		channelEnable_05{};
		constexpr Register::WriteBitActionT<adress,5,false> 	channelDisable_05{};

		constexpr Register::WriteBitActionT<adress,6,true> 		channelEnable_06{};
		constexpr Register::WriteBitActionT<adress,6,false> 	channelDisable_06{};

		constexpr Register::WriteBitActionT<adress,7,true> 		channelEnable_07{};
		constexpr Register::WriteBitActionT<adress,7,false> 	channelDisable_07{};

		constexpr Register::WriteBitActionT<adress,8,true> 		channelEnable_08{};
		constexpr Register::WriteBitActionT<adress,8,false> 	channelDisable_08{};

		constexpr Register::WriteBitActionT<adress,9,true> 		channelEnable_09{};
		constexpr Register::WriteBitActionT<adress,9,false> 	channelDisable_09{};

		constexpr Register::WriteBitActionT<adress,10,true> 	channelEnable_10{};
		constexpr Register::WriteBitActionT<adress,10,false> 	channelDisable_10{};

		constexpr Register::WriteBitActionT<adress,11,true> 	channelEnable_11{};
		constexpr Register::WriteBitActionT<adress,11,false> 	channelDisable_11{};

		constexpr Register::WriteActionT<adress,0xFFF,0>		channelDisable_ALL{};

		//TODO make enum for triggerdistinction

		//Bits 17:15 are reserved

		constexpr Register::WriteBitActionT<adress,18,true>		triggerOnRisingEdge{};
		constexpr Register::WriteBitActionT<adress,18,false>	triggerOnFallingEdge{};

		constexpr Register::WriteBitActionT<adress,19,true>		syncBypassEnable{};
		constexpr Register::WriteBitActionT<adress,19,false>	syncBypassDisable{};

		//Bits 20:25 are reserved

		constexpr Register::WriteActionT<adress,0x3<<26,0x1>	startOneConversion{};
		constexpr Register::WriteActionT<adress,0x3<<26,0x2>	stratBurstConversion{};
		constexpr Register::WriteActionT<adress,0x3<<26,0x0>	terminateMultipleConversions{};
		constexpr Register::WriteBitActionT<adress,28,true>		stepConversionModeEnable{};
		constexpr Register::WriteBitActionT<adress,28,false>	stepConversionModeDisable{};

		// Bit 29 is reserved ->have a look at Kvasir::ADC::ConversionSequanceACON

		constexpr Register::WriteBitActionT<adress,30,true>		interruptAfterEachSequence{};
		constexpr Register::WriteBitActionT<adress,30,false>	interruptAfterEachConversion{};

		constexpr Register::WriteBitActionT<adress,31,true>		sequenceEnable{};
		constexpr Register::WriteBitActionT<adress,31,false>	sequenceDisable{};
	}

	namespace GlobalDataRegisterSequenceA{constexpr int adress{0x4001C010};/*Fill in the getters*/}
	namespace GlobalDataRegisterSequenceB{constexpr int adress{0x4001C014};/*Fill in the getters*/}
	namespace Channel00DataRegister{constexpr int adress{0x4001C020};/*Fill in the getters*/}
	namespace Channel01DataRegister{constexpr int adress{0x4001C024};/*Fill in the getters*/}
	namespace Channel02DataRegister{constexpr int adress{0x4001C028};/*Fill in the getters*/}
	namespace Channel03DataRegister{constexpr int adress{0x4001C02C};/*Fill in the getters*/}
	namespace Channel04DataRegister{constexpr int adress{0x4001C030};/*Fill in the getters*/}
	namespace Channel05DataRegister{constexpr int adress{0x4001C034};/*Fill in the getters*/}
	namespace Channel06DataRegister{constexpr int adress{0x4001C038};/*Fill in the getters*/}
	namespace Channel07DataRegister{constexpr int adress{0x4001C03C};/*Fill in the getters*/}
	namespace Channel08DataRegister{constexpr int adress{0x4001C040};/*Fill in the getters*/}
	namespace Channel09DataRegister{constexpr int adress{0x4001C044};/*Fill in the getters*/}
	namespace Channel10DataRegister{constexpr int adress{0x4001C048};/*Fill in the getters*/}
	namespace Channel11DataRegister{constexpr int adress{0x4001C04C};/*Fill in the getters*/}

	namespace CompareLowThresh0
	{
		constexpr int adress{0x4001C050};

		//Bits 3:0 are reserved

		//TODO fill in method to set lower threshold 15:4

		//Bits 26:31 are reserved
	}
	namespace CompareLowThresh1
	{
		constexpr int adress{0x4001C054};

		//Bits 3:0 are reserved

		//TODO fill in method to set lower threshold 15:4

		//Bits 26:31 are reserved
	}
	namespace CompareHighThresh0
	{
		constexpr int adress{0x4001C058};

		//Bits 3:0 are reserved

		//TODO fill in method to set upper threshold 15:4

		//Bits 26:31 are reserved
	}
	namespace CompareHighThresh1
	{
		constexpr int adress{0x4001C05C};

		//Bits 3:0 are reserved

		//TODO fill in method to set upper threshold 15:4

		//Bits 26:31 are reserved
	}
	namespace ChannelThresholdSelect
	{
		constexpr int adress{0x4001C060};

		constexpr Register::WriteBitActionT<adress,0,false>		channel00Thresh0Enable{};
		constexpr Register::WriteBitActionT<adress,0,true>		channel00Thresh1Enable{};

		constexpr Register::WriteBitActionT<adress,1,false>		channel01Thresh0Enable{};
		constexpr Register::WriteBitActionT<adress,1,true>		channel01Thresh1Enable{};

		constexpr Register::WriteBitActionT<adress,2,false>		channel02Thresh0Enable{};
		constexpr Register::WriteBitActionT<adress,2,true>		channel02Thresh1Enable{};

		constexpr Register::WriteBitActionT<adress,3,false>		channel03Thresh0Enable{};
		constexpr Register::WriteBitActionT<adress,3,true>		channel03Thresh1Enable{};

		constexpr Register::WriteBitActionT<adress,4,false>		channel04Thresh0Enable{};
		constexpr Register::WriteBitActionT<adress,4,true>		channel04Thresh1Enable{};

		constexpr Register::WriteBitActionT<adress,5,false>		channel05Thresh0Enable{};
		constexpr Register::WriteBitActionT<adress,5,true>		channel05Thresh1Enable{};

		constexpr Register::WriteBitActionT<adress,6,false>		channel06Thresh0Enable{};
		constexpr Register::WriteBitActionT<adress,6,true>		channel06Thresh1Enable{};

		constexpr Register::WriteBitActionT<adress,7,false>		channel07Thresh0Enable{};
		constexpr Register::WriteBitActionT<adress,7,true>		channel07Thresh1Enable{};

		constexpr Register::WriteBitActionT<adress,8,false>		channel08Thresh0Enable{};
		constexpr Register::WriteBitActionT<adress,8,true>		channel08Thresh1Enable{};

		constexpr Register::WriteBitActionT<adress,9,false>		channel09Thresh0Enable{};
		constexpr Register::WriteBitActionT<adress,9,true>		channel09Thresh1Enable{};

		constexpr Register::WriteBitActionT<adress,10,false>	channel10Thresh0Enable{};
		constexpr Register::WriteBitActionT<adress,10,true>		channel10Thresh1Enable{};

		constexpr Register::WriteBitActionT<adress,11,false>	channel11Thresh0Enable{};
		constexpr Register::WriteBitActionT<adress,11,true>		channel11Thresh1Enable{};

		//Bits 31:12 are reserved
	}

	namespace InterruptEnable
	{
		constexpr int adress{0x4001C064};

		constexpr Register::WriteBitActionT<adress,0,true>		seqAInterruptEnable{};
		constexpr Register::WriteBitActionT<adress,0,false>		seqAInterruptDisable{};

		constexpr Register::WriteBitActionT<adress,1,true>		seqBInterruptEnable{};
		constexpr Register::WriteBitActionT<adress,1,false>		seqBInterruptDisable{};

		constexpr Register::WriteBitActionT<adress,2,true>		overrunInterruptEnable{};
		constexpr Register::WriteBitActionT<adress,2,false>		overrunInterruptDisable{};

		constexpr Register::WriteActionT<adress,0x3<<3,0x0>		channel00InterruptDisable{};
		constexpr Register::WriteActionT<adress,0x3<<3,0x1>		channel00InterruptIfOutside{};
		constexpr Register::WriteActionT<adress,0x3<<3,0x2>		channel00InterruptIfCrossing{};

		constexpr Register::WriteActionT<adress,0x3<<5,0x0>		channel00InterruptDisable{};
		constexpr Register::WriteActionT<adress,0x3<<5,0x1>		channel00InterruptIfOutside{};
		constexpr Register::WriteActionT<adress,0x3<<5,0x2>		channel00InterruptIfCrossing{};

		constexpr Register::WriteActionT<adress,0x3<<7,0x0>		channel00InterruptDisable{};
		constexpr Register::WriteActionT<adress,0x3<<7,0x1>		channel00InterruptIfOutside{};
		constexpr Register::WriteActionT<adress,0x3<<7,0x2>		channel00InterruptIfCrossing{};

		constexpr Register::WriteActionT<adress,0x3<<9,0x0>		channel00InterruptDisable{};
		constexpr Register::WriteActionT<adress,0x3<<9,0x1>		channel00InterruptIfOutside{};
		constexpr Register::WriteActionT<adress,0x3<<9,0x2>		channel00InterruptIfCrossing{};

		constexpr Register::WriteActionT<adress,0x3<<11,0x0>	channel00InterruptDisable{};
		constexpr Register::WriteActionT<adress,0x3<<11,0x1>	channel00InterruptIfOutside{};
		constexpr Register::WriteActionT<adress,0x3<<11,0x2>	channel00InterruptIfCrossing{};

		constexpr Register::WriteActionT<adress,0x3<<12,0x0>	channel00InterruptDisable{};
		constexpr Register::WriteActionT<adress,0x3<<12,0x1>	channel00InterruptIfOutside{};
		constexpr Register::WriteActionT<adress,0x3<<12,0x2>	channel00InterruptIfCrossing{};

		constexpr Register::WriteActionT<adress,0x3<<15,0x0>	channel00InterruptDisable{};
		constexpr Register::WriteActionT<adress,0x3<<15,0x1>	channel00InterruptIfOutside{};
		constexpr Register::WriteActionT<adress,0x3<<15,0x2>	channel00InterruptIfCrossing{};

		constexpr Register::WriteActionT<adress,0x3<<17,0x0>	channel00InterruptDisable{};
		constexpr Register::WriteActionT<adress,0x3<<17,0x1>	channel00InterruptIfOutside{};
		constexpr Register::WriteActionT<adress,0x3<<17,0x2>	channel00InterruptIfCrossing{};

		constexpr Register::WriteActionT<adress,0x3<<19,0x0>	channel00InterruptDisable{};
		constexpr Register::WriteActionT<adress,0x3<<19,0x1>	channel00InterruptIfOutside{};
		constexpr Register::WriteActionT<adress,0x3<<19,0x2>	channel00InterruptIfCrossing{};

		constexpr Register::WriteActionT<adress,0x3<<21,0x0>	channel00InterruptDisable{};
		constexpr Register::WriteActionT<adress,0x3<<21,0x1>	channel00InterruptIfOutside{};
		constexpr Register::WriteActionT<adress,0x3<<21,0x2>	channel00InterruptIfCrossing{};

		constexpr Register::WriteActionT<adress,0x3<<23,0x0>	channel00InterruptDisable{};
		constexpr Register::WriteActionT<adress,0x3<<23,0x1>	channel00InterruptIfOutside{};
		constexpr Register::WriteActionT<adress,0x3<<23,0x2>	channel00InterruptIfCrossing{};

		constexpr Register::WriteActionT<adress,0x3<<25,0x0>	channel00InterruptDisable{};
		constexpr Register::WriteActionT<adress,0x3<<25,0x1>	channel00InterruptIfOutside{};
		constexpr Register::WriteActionT<adress,0x3<<25,0x2>	channel00InterruptIfCrossing{};

		//Bits 31:27 are reserved
	}

	namespace Flags
	{
		constexpr int adress{0x4001C068};

		//TODO fill in getter methods
		//Bits 27:26 are reserved
	}

	namespace Trim
	{
		constexpr int adress{0x4001C06C};

		//Bits 4:0 are reserved

		constexpr Register::WriteBitActionT<adress,5,true>		vddaHigh{};		// 2.7 to 3.6 Volts
		constexpr Register::WriteBitActionT<adress,5,false>		vddaLow{};		// 2.4 to 2.7 Volts

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
		static constexpr auto powerOn = PowerConfiguration::adcOn;
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
