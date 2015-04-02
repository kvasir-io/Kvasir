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

namespace Kvasir{
namespace Core{
	namespace Interrupt{
		template<int I>
		using Type = ::Kvasir::Nvic::Type<I>;
		using WatchdogTimer = Type<0>;
		using Timer0 = Type<1>;
		using Timer1 = Type<2>;
		using Timer2 = Type<3>;
		using Timer3 = Type<4>;
		using Uart0 = Type<5>;
		using Uart1 = Type<6>;
		using Uart2 = Type<7>;
		using Uart3 = Type<8>;
		using Pwm = Type<9>;
		using I2C0 = Type<10>;
		using I2C1 = Type<11>;
		using I2C2 = Type<12>;
		using SPI = Type<13>;
		using SSP0 = Type<14>;
		using SSP1 = Type<15>;
		using PLL0 = Type<16>;
		using RTC = Type<17>;
		using ExternalInt0 = Type<18>;
		using ExternalInt1 = Type<19>;
		using ExternalInt2 = Type<20>;
		using ExternalInt3 = Type<21>;
		using AnalogDigitalConverter = Type<22>;
		using BrownOutDetect = Type<23>;
		using USB = Type<24>;
		using CAN = Type<25>;
		using DMA = Type<26>;
		using I2S = Type<27>;
		using Ethernet = Type<28>;
		using RepetitiveIinterruptTimer = Type<29>;
		using MotorControlPWM = Type<30>;
		using QEI = Type<31>;
		constexpr WatchdogTimer watchdogTimer;
		constexpr Timer0 timer0;
		constexpr Timer1 timer1;
		constexpr Timer2 timer2;
		constexpr Timer3 timer3;
		constexpr Uart0 uart0;
		constexpr Uart1 uart1;
		constexpr Uart2 uart2;
		constexpr Uart3 uart3;
		constexpr Pwm pwm;
		constexpr I2C0 i2C0;
		constexpr I2C1 i2C1;
		constexpr I2C2 i2C2;
		constexpr SPI spi;
		constexpr SSP0 ssp0;
		constexpr SSP1 ssp1;
		constexpr PLL0 pll0;
		constexpr RTC rtc;
		constexpr ExternalInt0 externalInt0;
		constexpr ExternalInt1 externalInt1;
		constexpr ExternalInt2 externalInt2;
		constexpr ExternalInt3 externalInt3;
		constexpr AnalogDigitalConverter analogDiditalConverter;
		constexpr BrownOutDetect brownOutDetect;
		constexpr USB usb;
		constexpr CAN can;
		constexpr DMA dma;
		constexpr I2S i2s;
		constexpr Ethernet ethernet;
		constexpr RepetitiveIinterruptTimer repetitiveInterruptTimer;
		constexpr MotorControlPWM motorControlPWM;
		constexpr QEI qei;
	}
}
	namespace Usb {
		struct DefaultConfig{
			static constexpr int ep0BufSize = 8;



		};
	}

	namespace System{
	namespace PowerControlForPeripherals{
		constexpr int address{0x400FC0C4};
		constexpr Register::WriteBitActionT<address,1,true> tc0PowerOn{};
		constexpr Register::WriteBitActionT<address,1,false> tc0PowerOff{};
		constexpr Register::WriteBitActionT<address,2,true> tc1PowerOn{};
		constexpr Register::WriteBitActionT<address,2,false> tc1PowerOff{};
		constexpr Register::WriteBitActionT<address,3,true> uart0PowerOn{};
		constexpr Register::WriteBitActionT<address,3,false> uart0PowerOff{};
		constexpr Register::WriteBitActionT<address,4,true> uart1PowerOn{};
		constexpr Register::WriteBitActionT<address,4,false> uart1PowerOff{};
		constexpr Register::WriteBitActionT<address,6,true> pwm1PowerOn{};
		constexpr Register::WriteBitActionT<address,6,false> pwm1PowerOff{};
		constexpr Register::WriteBitActionT<address,7,true> i2C0PowerOn{};
		constexpr Register::WriteBitActionT<address,7,false> i2C0PowerOff{};
		constexpr Register::WriteBitActionT<address,8,true> spiPowerOn{};
		constexpr Register::WriteBitActionT<address,8,false> spiPowerOff{};
		constexpr Register::WriteBitActionT<address,9,true> rtcPowerOn{};
		constexpr Register::WriteBitActionT<address,9,false> rtcPowerOff{};
		constexpr Register::WriteBitActionT<address,10,true> ssp1PowerOn{};
		constexpr Register::WriteBitActionT<address,10,false> ssp1PowerOff{};
		constexpr Register::WriteBitActionT<address,12,true> adcPowerOn{};
		constexpr Register::WriteBitActionT<address,12,false> adcPowerOff{};
		constexpr Register::WriteBitActionT<address,13,true> can1PowerOn{};
		constexpr Register::WriteBitActionT<address,13,false> can1PowerOff{};
		constexpr Register::WriteBitActionT<address,14,true> can2PowerOn{};
		constexpr Register::WriteBitActionT<address,14,false> can2PowerOff{};
		constexpr Register::WriteBitActionT<address,15,true> gpioPowerOn{};
		constexpr Register::WriteBitActionT<address,15,false> gpioPowerOff{};
		constexpr Register::WriteBitActionT<address,16,true> ritPowerOn{};
		constexpr Register::WriteBitActionT<address,16,false> ritPowerOff{};
		constexpr Register::WriteBitActionT<address,17,true> mcPwmPowerOn{};
		constexpr Register::WriteBitActionT<address,17,false> mcPwmPowerOff{};
		constexpr Register::WriteBitActionT<address,18,true> qeiPowerOn{};
		constexpr Register::WriteBitActionT<address,18,false> qeiPowerOff{};
		constexpr Register::WriteBitActionT<address,19,true> i2c1PowerOn{};
		constexpr Register::WriteBitActionT<address,19,false> i2c1PowerOff{};
		constexpr Register::WriteBitActionT<address,21,true> ssp0PowerOn{};
		constexpr Register::WriteBitActionT<address,21,false> ssp0PowerOff{};
		constexpr Register::WriteBitActionT<address,22,true> tc2PowerOn{};
		constexpr Register::WriteBitActionT<address,22,false> tc2PowerOff{};
		constexpr Register::WriteBitActionT<address,23,true> tc3PowerOn{};
		constexpr Register::WriteBitActionT<address,23,false> tc3PowerOff{};
		constexpr Register::WriteBitActionT<address,24,true> uart2PowerOn{};
		constexpr Register::WriteBitActionT<address,24,false> uart2PowerOff{};
		constexpr Register::WriteBitActionT<address,25,true> uart3PowerOn{};
		constexpr Register::WriteBitActionT<address,25,false> uart3PowerOff{};
		constexpr Register::WriteBitActionT<address,26,true> i2c2PowerOn{};
		constexpr Register::WriteBitActionT<address,26,false> i2c2PowerOff{};
		constexpr Register::WriteBitActionT<address,27,true> i2sPowerOn{};
		constexpr Register::WriteBitActionT<address,27,false> i2sPowerOff{};
		constexpr Register::WriteBitActionT<address,29,true> dmaPowerOn{};
		constexpr Register::WriteBitActionT<address,29,false> dmaPowerOff{};
		constexpr Register::WriteBitActionT<address,30,true> enetPowerOn{};
		constexpr Register::WriteBitActionT<address,30,false> enetPowerOff{};
		constexpr Register::WriteBitActionT<address,31,true> usbPowerOn{};
		constexpr Register::WriteBitActionT<address,31,false> usbPowerOff{};
	}

	namespace ControlStatus{
		constexpr int address{0x400FC1A0};
		constexpr Register::WriteBitActionT<address,4,0> oscillatorRange1to20Mhz{};
		constexpr Register::WriteBitActionT<address,4,1> oscillatorRange15to25Mhz{};
		constexpr Register::WriteBitActionT<address,5,0> mainOscillatorDisable{};
		constexpr Register::WriteBitActionT<address,5,1> mainOscillatorEnable{};
		using MainOscilatorStatus = Register::FunctionalT<address,(1<<6),Register::Policy::ReadableP,Register::Policy::BoolConversionP>;
	}

	struct ClockConfig{
		static constexpr auto externalCrystalInit = list(ControlStatus::mainOscillatorEnable);

		struct FlashConfiguration{
			static constexpr int address{0x400FC000};
			template<int I>
			struct MakeAction : Register::WriteActionT<address,(0x0F << 12),(I << 12)>{};
			template<int I>
			using MakeActionT = typename MakeAction<I>::Type;
			static constexpr MakeActionT<0> oneSysclock{};
			static constexpr MakeActionT<1> twoSysclock{};
			static constexpr MakeActionT<2> threeSysclock{};
			static constexpr MakeActionT<3> fourSysclock{};
			static constexpr MakeActionT<4> fiveSysclock{};
			static constexpr MakeActionT<5> sixSysclock{};
		};
		struct CpuClockDivider{
			//see table 38 in UM10360
			static constexpr int address = 0x400FC104;
			template<int I>
			using MakeAction = Register::WriteActionT<address,0xFF,I>;
			template<int I>
			constexpr typename MakeAction<I>::Type makeAction(){ return typename MakeAction<I>::Type{}; };
			using Register = Register::FunctionalT<address,0xFF,MPL::List<Register::Policy::ReadableP,Register::Policy::WriteableP>>;
		};
		struct PLL0ClockSourceSelect{
			static constexpr Register::WriteActionT<address,0x03,0> internalRc{};
			static constexpr Register::WriteActionT<address,0x03,1> mainOscillator{};
			static constexpr Register::WriteActionT<address,0x03,2> rtcOscillator{};
		};
	};

	//work around!
	template<int I, int J>
	struct ExternalOsciRawSettings{
	protected:

	public:
		static void init(){
			Register::apply(ClockConfig::externalCrystalInit);
			/* Wait for osc to stabilize */
			while(ControlStatus::MainOscilatorStatus::read() == false){}
			Register::apply(TTraits::CpuClockDivider::makeAction<3>());
			Register::apply(TTraits::PLL0ClockSourceSelect::mainOscillator);
			Register::apply(TTraits::SystemPllClock::sourceSame);
			Register::apply(TTraits::SystemPllClock::sourceUpdate);
			Register::apply(TTraits::FlashConfiguration::twoSysclock);
			TTraits::SystemPLLControl::FeedbackDivider::write(I);
			TTraits::SystemPLLControl::PostDivider::write(static_cast<typename TTraits::SystemPLLControl::PostDividerRatio>(J));
			Register::apply(TTraits::systemPllPowerOn);
			while(TTraits::SystemPllStatus::read() == TTraits::SystemPllStatusOption::noLock);
			TTraits::SystemAHBClock::Divider::write(1);
			Register::apply(TTraits::MainClock::pllOutput);
			Register::apply(TTraits::MainClock::sourceSame);
			Register::apply(TTraits::MainClock::sourceUpdate);
		}
	};
	}

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
}
