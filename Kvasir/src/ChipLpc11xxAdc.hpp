#pragma once
#include "Io.hpp"

namespace Kvasir{
namespace ADC{
	namespace Control
	{
		constexpr int adress{0x4001C000};

		using ADCChannel0Enable = Register::WriteBitActionT<adress,0,true>;
		constexpr ADCChannel0Enable adcChannel0Enable{};
		using ADCChannel0Disable = Register::WriteBitActionT<adress,0,false>;
		constexpr ADCChannel0Disable adcChannel0Disable{};

		using ADCChannel1Enable = Register::WriteBitActionT<adress,1,true>;
		constexpr ADCChannel1Enable adcChannel1Enable{};
		using ADCChannel1Disable = Register::WriteBitActionT<adress,1,false>;
		constexpr ADCChannel1Disable adcChannel1Disable{};

		using ADCChannel2Enable = Register::WriteBitActionT<adress,2,true>;
		constexpr ADCChannel2Enable adcChannel2Enable{};
		using ADCChannel2Disable = Register::WriteBitActionT<adress,2,false>;
		constexpr ADCChannel2Disable adcChannel2Disable{};

		using ADCChannel3Enable = Register::WriteBitActionT<adress,3,true>;
		constexpr ADCChannel3Enable adcChannel3Enable{};
		using ADCChannel3Disable = Register::WriteBitActionT<adress,3,false>;
		constexpr ADCChannel3Disable adcChannel3Disable{};

		using ADCChannel4Enable = Register::WriteBitActionT<adress,4,true>;
		constexpr ADCChannel4Enable adcChannel4Enable{};
		using ADCChannel4Disable = Register::WriteBitActionT<adress,4,false>;
		constexpr ADCChannel4Disable adcChannel4Disable{};

		using ADCChannel5Enable = Register::WriteBitActionT<adress,5,true>;
		constexpr ADCChannel5Enable adcChannel5Enable{};
		using ADCChannel5Disable = Register::WriteBitActionT<adress,5,false>;
		constexpr ADCChannel5Disable adcChannel5Disable{};

		using ADCChannel6Enable = Register::WriteBitActionT<adress,6,true>;
		constexpr ADCChannel6Enable adcChannel6Enable{};
		using ADCChannel6Disable = Register::WriteBitActionT<adress,6,false>;
		constexpr ADCChannel6Disable adcChannel6Disable{};

		using ADCChannel7Enable = Register::WriteBitActionT<adress,7,true>;
		constexpr ADCChannel7Enable adcChannel7Enable{};
		using ADCChannel7Disable = Register::WriteBitActionT<adress,7,false>;
		constexpr ADCChannel7Disable adcChannel7Disable{};

		//Clock-Divider

		using ADCBurstModeEnable = Register::WriteBitActionT<adress,16,true>;
		constexpr ADCBurstModeEnable adcBurstModeEnabel{};




	}
	namespace InterruptEnable
	{
		constexpr int adress{0x4001C00C};

		using ADCChannel0InterruptEnable = Register::WriteBitActionT<adress,0,true>;
		constexpr ADCChannel0InterruptEnable adcChannel0InterruptEnable{};
		using ADCChannel0InterruptDisable = Register::WriteBitActionT<adress,0,false>;
		constexpr ADCChannel0InterruptDisable adcChannel0InterruptDisable{};

		using ADCChannel1InterruptEnable = Register::WriteBitActionT<adress,1,true>;
		constexpr ADCChannel1InterruptEnable adcChannel1InterruptEnable{};
		using ADCChannel1InterruptDisable = Register::WriteBitActionT<adress,1,false>;
		constexpr ADCChannel1InterruptDisable adcChannel1InterruptDisable{};

		using ADCChannel2InterruptEnable = Register::WriteBitActionT<adress,2,true>;
		constexpr ADCChannel2InterruptEnable adcChannel2InterruptEnable{};
		using ADCChannel2InterruptDisable = Register::WriteBitActionT<adress,2,false>;
		constexpr ADCChannel2InterruptDisable adcChannel2InterruptDisable{};

		using ADCChannel3InterruptEnable = Register::WriteBitActionT<adress,3,true>;
		constexpr ADCChannel3InterruptEnable adcChannel3InterruptEnable{};
		using ADCChannel3InterruptDisable = Register::WriteBitActionT<adress,3,false>;
		constexpr ADCChannel3InterruptDisable adcChannel3InterruptDisable{};

		using ADCChannel4InterruptEnable = Register::WriteBitActionT<adress,4,true>;
		constexpr ADCChannel4InterruptEnable adcChannel4InterruptEnable{};
		using ADCChannel4InterruptDisable = Register::WriteBitActionT<adress,4,false>;
		constexpr ADCChannel4InterruptDisable adcChannel4InterruptDisable{};

		using ADCChannel5InterruptEnable = Register::WriteBitActionT<adress,5,true>;
		constexpr ADCChannel5InterruptEnable adcChannel5InterruptEnable{};
		using ADCChannel5InterruptDisable = Register::WriteBitActionT<adress,5,false>;
		constexpr ADCChannel5InterruptDisable adcChannel5InterruptDisable{};

		using ADCChannel6InterruptEnable = Register::WriteBitActionT<adress,6,true>;
		constexpr ADCChannel6InterruptEnable adcChannel6InterruptEnable{};
		using ADCChannel6InterruptDisable = Register::WriteBitActionT<adress,6,false>;
		constexpr ADCChannel6InterruptDisable adcChannel6InterruptDisable{};

		using ADCChannel7InterruptEnable = Register::WriteBitActionT<adress,7,true>;
		constexpr ADCChannel7InterruptEnable adcChannel7InterruptEnable{};
		using ADCChannel7InterruptDisable = Register::WriteBitActionT<adress,7,false>;
		constexpr ADCChannel7InterruptDisable adcChannel7InterruptDisable{};

		using ADCResetAllChannels = Register::BlindWriteActionT<adress,0xFF,0x00>;
		constexpr ADCResetAllChannels adcResetAllChannels{};

		using ADCGlobalInterruptEnable = Register::WriteBitActionT<adress,8,true>;
		constexpr ADCGlobalInterruptEnable adcGlobalInterruptEnable{};
		using ADCGlobalInterruptDisable = Register::WriteBitActionT<adress,8,true>;
		constexpr ADCGlobalInterruptDisable adcGlobalInterruptDisable{};
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
