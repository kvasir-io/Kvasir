#pragma once
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
#include "CoreCommon.hpp"
#include "Io.hpp"
#include "Register.hpp"
#include "Tags.hpp"
#include "MPLTypes.hpp"

namespace Kvasir{
namespace Core{
	namespace Interrupt{
		template<int I>
		using Type = ::Kvasir::Nvic::Type<I>;

		constexpr Type<0> pinInterrupt0{};
		constexpr Type<1> pinInterrupt1{};
		constexpr Type<2> pinInterrupt2{};
		constexpr Type<3> pinInterrupt3{};
		constexpr Type<4> pinInterrupt4{};
		constexpr Type<5> pinInterrupt5{};
		constexpr Type<6> pinInterrupt6{};
		constexpr Type<7> pinInterrupt7{};
		constexpr Type<8> groupInterrupt0{};
		constexpr Type<9> groupInterrupt1{};
		constexpr Type<10> i2C1{};
		constexpr Type<11> uart1Or4{};
		constexpr Type<12> uart2Or3{};
		constexpr Type<13> sct0Or1{};
		constexpr Type<14> ssp1{};
		constexpr Type<15> i2c0{};
		constexpr Type<16> counterTimer16Bank0{};
		constexpr Type<17> counterTimer16Bank1{};
		constexpr Type<18> counterTimer32Bank0{};
		constexpr Type<19> counterTimer32Bank1{};
		constexpr Type<20> ssp0{};
		constexpr Type<21> usart0{};
		constexpr Type<22> usbIrq{};
		constexpr Type<23> usbFiq{};
		constexpr Type<24> adcA{};
		constexpr Type<25> rtc{};
		constexpr Type<26> bodAndWdt{};
		constexpr Type<27> flash{};
		constexpr Type<28> dma{};
		constexpr Type<29> adcb{};
		constexpr Type<30> usbWakeup{};
	}
}
	namespace Io{
		template<int Port, int Pin>
		struct MakeAction<Action::Input,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
			Register::WriteActionT<(0xA0002000 + Port*4),(1<<Pin),0>{};
		template<int Port, int Pin>
		struct MakeAction<Action::Output,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
			Register::WriteActionT<(0xA0002000 + Port*4),(1<<Pin),(1<<Pin)>{};
		template<int Port, int Pin>
		struct MakeAction<Action::Set,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
			Register::BlindWriteActionT<(0xA0002200 + Port*4),(1<<Pin),(1<<Pin)>{};
		template<int Port, int Pin>
		struct MakeAction<Action::Clear,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
			Register::BlindWriteActionT<(0xA0002280 + Port*4),(1<<Pin),(1<<Pin)>{};
		template<int Port, int Pin>
		struct MakeAction<Action::Toggle,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
			Register::BlindWriteActionT<(0xA0002300 + Port*4),(1<<Pin),(1<<Pin)>{};
		template<int Pin, int Function>
		struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<0>,MPL::Int<Pin>>> :
			Register::WriteActionT<(0x40044000 + Pin*4),0x03,Function>{};
		template<int Pin, int Function>
		struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<1>,MPL::Int<Pin>>> :
			Register::WriteActionT<(0x40044060 + Pin*4),0x03,Function>{};
		template<int Pin, int Function>
		struct MakeAction<Action::PinFunction<Function>,PinLocation<MPL::Int<2>,MPL::Int<Pin>>> :
			Register::WriteActionT<(0x400440F0 + Pin*4),0x03,Function>{};
	}

		namespace PowerConfiguration {
		constexpr int address{0x40048238};
		using IrcOscilatorOutputOn = Register::WriteBitActionT<address,0,false>;
		constexpr IrcOscilatorOutputOn ircOscilatorOutputOn{};
		using IrcOscilatorOutputOff = Register::WriteBitActionT<address,0,true>;
		constexpr IrcOscilatorOutputOff ircOscilatorOutputOff{};
		using IrcOscilatorOn = Register::WriteBitActionT<address,1,false>;
		constexpr IrcOscilatorOn ircOscilatorOn{};
		using IrcOscilatorOff = Register::WriteBitActionT<address,1,true>;
		constexpr IrcOscilatorOff ircOscilatorOff{};
		using FlashOn = Register::WriteBitActionT<address,2,false>;
		constexpr FlashOn flashOn{};
		using FlashOff = Register::WriteBitActionT<address,2,true>;
		constexpr FlashOff flashOff{};
		using BrownOutDetectOn = Register::WriteBitActionT<address,3,false>;
		constexpr BrownOutDetectOn brownOutDetectOn{};
		using BrownOutDetectOff = Register::WriteBitActionT<address,3,true>;
		constexpr BrownOutDetectOff brownOutDetectOff{};
		using AdcOn = Register::WriteBitActionT<address,4,false>;
		constexpr AdcOn adcOn{};
		using AdcOff = Register::WriteBitActionT<address,4,true>;
		constexpr AdcOff adcOff{};
		using CrystalOscilatorOn = Register::WriteBitActionT<address,5,false>;
		constexpr CrystalOscilatorOn crystalOscilatorOn{};
		using CrystalOscilatorOff = Register::WriteBitActionT<address,5,true>;
		constexpr CrystalOscilatorOff crystalOscilatorOff{};
		using WatchdogOscilatorOn = Register::WriteBitActionT<address,6,false>;
		constexpr WatchdogOscilatorOn watchdogOscilatorOn{};
		using WatchdogOscilatorOff = Register::WriteBitActionT<address,6,true>;
		constexpr WatchdogOscilatorOff watchdogOscilatorOff{};
		using SystemPllOn = Register::WriteBitActionT<address,7,false>;
		constexpr SystemPllOn systemPllOn{};
		using SystemPllOff = Register::WriteBitActionT<address,7,true>;
		constexpr SystemPllOff systemPllOff{};
		using UsbPllOn = Register::WriteBitActionT<address,8,false>;
		constexpr UsbPllOn usbPllOn{};
		using UsbPllOff = Register::WriteBitActionT<address,8,true>;
		constexpr UsbPllOff usbPllOff{};
		using UsbTransceiverOn = Register::WriteBitActionT<address,10,false>;
		constexpr UsbTransceiverOn usbTransceiverOn{};
		using UsbTransceiverOff = Register::WriteBitActionT<address,10,true>;
		constexpr UsbTransceiverOff usbTransceiverOff{};
		using TemperaturSensorOn = Register::WriteBitActionT<address,13,false>;
		constexpr TemperaturSensorOn temperaturSensorOn{};
		using TemperaturSensorOff = Register::WriteBitActionT<address,13,true>;
		constexpr TemperaturSensorOff temperaturSensorOff{};
	}



	struct SystemClockConfig{
	private:
		static constexpr int ioconAddress = 0x400440F0;
		using XtalinOscilatorMode = Register::WriteActionT<ioconAddress,0x07,0x01>;
		using XtaloutOscilatorMode = Register::WriteActionT<ioconAddress+4,0x07,0x01>;
		using XtalinPullUpInactive = Register::WriteActionT<ioconAddress,0x18,0x00>;
		using XtaloutPullUpInactive = Register::WriteActionT<ioconAddress+4,0x18,0x00>;
		using XtalinAnalogMode = Register::WriteBitActionT<ioconAddress,7,false>;
		using XtaloutAnalogMode = Register::WriteBitActionT<ioconAddress+4,7,false>;
	public:
		using ExternalCrystalInit = MPL::List<SystemClockControl::IoconClockOn,Register::SequencePoint,
				XtalinOscilatorMode,
				XtaloutOscilatorMode,
				XtalinPullUpInactive,
				XtaloutPullUpInactive,
				XtalinAnalogMode,
				XtaloutAnalogMode>;
		static constexpr ExternalCrystalInit externalCrystalInit{};
		static constexpr PowerConfiguration::CrystalOscilatorOn crystalOscilatorPowerOn{};
		static constexpr PowerConfiguration::SystemPllOff systemPllPowerOff{};
		static constexpr PowerConfiguration::SystemPllOn systemPllPowerOn{};

		struct FlashConfiguration{
			static constexpr int address{0x4003C010};
			using OneSysclock = Register::WriteActionT<address,0x03,0x00>;
			static constexpr OneSysclock oneSysclock{};
			using TwoSysclock = Register::WriteActionT<address,0x03,0x01>;
			static constexpr TwoSysclock twoSysclock{};
		};
		struct MainClock{
			static constexpr int address{0x40048070};
			using InternalRc = Register::WriteActionT<address,0x03,0x00>;
			static constexpr InternalRc internalRc{};
			using PllInput = Register::WriteActionT<address,0x03,0x01>;
			static constexpr PllInput pllInput{};
			using WatchdogOscilator = Register::WriteActionT<address,0x03,0x02>;
			static constexpr WatchdogOscilator watchdogOscilator{};
			using PllOutput = Register::WriteActionT<address,0x03,0x03>;
			static constexpr PllOutput pllOutput{};

			using SourceUpdate = Register::WriteBitActionT<address+4,0,true>;
			static constexpr SourceUpdate sourceUpdate{};
			using SourceSame = Register::WriteBitActionT<address+4,0,false>;
			static constexpr SourceSame sourceSame{};
		};
		struct SystemPllClock{
			static constexpr int address{0x40048040};
			using InternalRc = Register::WriteActionT<address,0x03,0x00>;
			static constexpr InternalRc internalRc{};
			using SystemOscilator = Register::WriteActionT<address,0x03,0x01>;
			static constexpr SystemOscilator systemOscilator{};
			using Clock32khz = Register::WriteActionT<address,0x03,0x03>;
			static constexpr Clock32khz clock32khz{};

			using SourceUpdate = Register::WriteBitActionT<address+4,0,true>;
			static constexpr SourceUpdate sourceUpdate{};
			using SourceSame = Register::WriteBitActionT<address+4,0,false>;
			static constexpr SourceSame sourceSame{};
		};
		struct SystemPLLControl{
			enum class PostDividerRatio {div1 = 0, div2 = (1<<5), div4 = (2<<6), div8 = (3<<7)};
			using Address = MPL::Int<0x40048008>;
			using FeedbackDivider = Register::Single<Address,MPL::Int<0x1F>,MPL::List<Register::Policy::ReadableP,Register::Policy::WriteableP>>;
			using PostDivider = Register::Single<Address,MPL::Int<(3 << 5)>,MPL::List<Register::Policy::ReadableP,Register::Policy::WriteableP>,Register::Policy::EnumConversionP<PostDividerRatio>>;
		};
		enum class SystemPllStatusOption{noLock,lock};
		using SystemPllStatus = Register::Single<MPL::Int<0x4004800C>,MPL::Int<0x01>,Register::Policy::ReadableP,Register::Policy::EnumConversionP<SystemPllStatusOption>>;
		struct SystemAHBClock{
			using Address = MPL::Int<0x40048078>;
			using Divider = Register::Single<Address,MPL::Int<0xFF>,MPL::List<Register::Policy::ReadableP,Register::Policy::WriteableP>>;
		};
	};

	namespace Startup{
		//*****************************************************************************
		// Functions to carry out the initialization of RW and BSS data sections. These
		// are written as separate functions rather than being inlined within the
		// ResetISR() function in order to cope with MCUs with multiple banks of
		// memory.
		//*****************************************************************************
		__attribute__ ((section(".after_vectors")))
		void data_init(unsigned int romstart, unsigned int start, unsigned int len) {
			unsigned int *pulDest = (unsigned int*) start;
			unsigned int *pulSrc = (unsigned int*) romstart;
			unsigned int loop;
			for (loop = 0; loop < len; loop = loop + 4)
				*pulDest++ = *pulSrc++;
		}

		__attribute__ ((section(".after_vectors")))
		void bss_init(unsigned int start, unsigned int len) {
			unsigned int *pulDest = (unsigned int*) start;
			unsigned int loop;
			for (loop = 0; loop < len; loop = loop + 4)
				*pulDest++ = 0;
		}
		template<typename... Ts>
		struct FirstInitStep<Tag::User, Ts...>{
			void operator()(){

				// enable RAM banks that may be off by default at reset
				volatile unsigned int *SYSCON_SYSAHBCLKCTRL = (unsigned int *) 0x40048080;
				// Ensure that RAM1(26) and USBSRAM(27) bits in SYSAHBCLKCTRL are set
				*SYSCON_SYSAHBCLKCTRL |= (1 << 26) | (1 <<27);


			    // Copy the data sections from flash to SRAM.
			    unsigned int LoadAddr, ExeAddr, SectionLen;
			    unsigned int *SectionTableAddr;

			    // Load base address of Global Section Table
			    SectionTableAddr = &__data_section_table;

			    // Copy the data sections from flash to SRAM.
			    while (SectionTableAddr < &__data_section_table_end) {
			        LoadAddr = *SectionTableAddr++;
			        ExeAddr = *SectionTableAddr++;
			        SectionLen = *SectionTableAddr++;
			        data_init(LoadAddr, ExeAddr, SectionLen);
			    }
			    // At this point, SectionTableAddr = &__bss_section_table;
			    // Zero fill the bss segment
			    while (SectionTableAddr < &__bss_section_table_end) {
			        ExeAddr = *SectionTableAddr++;
			        SectionLen = *SectionTableAddr++;
			        bss_init(ExeAddr, SectionLen);
			    }
			}
		};
	}
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
