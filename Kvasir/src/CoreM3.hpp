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

	namespace SystemClockControl{			//SYSAHBCLKCTRL register actions
		constexpr int address{0x40048080};
		//bit 0 is sys which is always on
		constexpr Register::WriteBitActionT<address,1,true> romClockOn;
		using RomClockOff = Register::WriteBitActionT<address,1,false>;
		constexpr RomClockOff romClockOff;
		using Ram0ClockOn = Register::WriteBitActionT<address,2,true>;
		constexpr Ram0ClockOn ram0ClockOn;
		using Ram0ClockOff = Register::WriteBitActionT<address,2,false>;
		constexpr Ram0ClockOff ram0ClockOff;
		using FlashRegClockOn = Register::WriteBitActionT<address,3,true>;
		constexpr FlashRegClockOn flashRegClockOn;
		using FlashRegClockOff = Register::WriteBitActionT<address,3,false>;
		constexpr FlashRegClockOff flashRegClockOff;
		using FlashArrayClockOn = Register::WriteBitActionT<address,4,true>;
		constexpr FlashArrayClockOn flashArrayClockOn;
		using FlashArrayClockOff = Register::WriteBitActionT<address,4,false>;
		constexpr FlashArrayClockOff flashArrayClockOff;
		using I2C0ClockOn = Register::WriteBitActionT<address,5,true>;
		constexpr I2C0ClockOn i2C0ClockOn;
		using I2C0ClockOff = Register::WriteBitActionT<address,5,false>;
		constexpr I2C0ClockOff i2C0ClockOff;
		using GpioClockOn = Register::WriteBitActionT<address,6,true>;
		constexpr GpioClockOn gpioClockOn;
		using GpioClockOff = Register::WriteBitActionT<address,6,false>;
		constexpr GpioClockOff gpioClockOff;
		using Ct16B0ClockOn = Register::WriteBitActionT<address,7,true>;
		constexpr Ct16B0ClockOn ct16B0ClockOn;
		using Ct16B0ClockOff = Register::WriteBitActionT<address,7,false>;
		constexpr Ct16B0ClockOff ct16B0ClockOff;
		using Ct16B1ClockOn = Register::WriteBitActionT<address,8,true>;
		constexpr Ct16B1ClockOn ct16B1ClockOn;
		using Ct16B1ClockOff = Register::WriteBitActionT<address,8,false>;
		constexpr Ct16B0ClockOff ct16B1ClockOff;
		using SourceUpdate = Register::WriteBitActionT<address,8,true>;
		constexpr SourceUpdate sourceUpdate;
		using Ct32B0ClockOn = Register::WriteBitActionT<address,9,true>;
		constexpr Ct32B0ClockOn ct32B0ClockOn;
		using Ct32B0ClockOff = Register::WriteBitActionT<address,9,false>;
		constexpr Ct32B0ClockOff ct32B0ClockOff;
		using Ct32B1ClockOn = Register::WriteBitActionT<address,10,true>;
		constexpr Ct32B1ClockOn ct32B1ClockOn;
		using Ct32B1ClockOff = Register::WriteBitActionT<address,10,false>;
		constexpr Ct32B0ClockOff ct32B1ClockOff;
		using Ssp0ClockOn = Register::WriteBitActionT<address,11,true>;
		constexpr Ssp0ClockOn ssp0ClockOn;
		using Ssp0ClockOff = Register::WriteBitActionT<address,11,false>;
		constexpr Ssp0ClockOff ssp0ClockOff;
		using Usart0ClockOn = Register::WriteBitActionT<address,12,true>;
		constexpr Usart0ClockOn usart0ClockOn;
		using Usart0ClockOff = Register::WriteBitActionT<address,12,false>;
		constexpr Usart0ClockOff usart0ClockOff;
		using AdcClockOn = Register::WriteBitActionT<address,13,true>;
		constexpr AdcClockOn adcClockOn;
		using AdcClockOff = Register::WriteBitActionT<address,13,false>;
		constexpr AdcClockOff adcClockOff;
		using UsbClockOn = Register::WriteBitActionT<address,14,true>;
		constexpr UsbClockOn usbClockOn;
		using UsbClockOff = Register::WriteBitActionT<address,14,false>;
		constexpr UsbClockOff usbClockOff;
		using WwdtClockOn = Register::WriteBitActionT<address,15,true>;
		constexpr WwdtClockOn wwdtClockOn;
		using WwdtClockOff = Register::WriteBitActionT<address,15,false>;
		constexpr WwdtClockOff wwdtClockOff;
		using IoconClockOn = Register::WriteBitActionT<address,16,true>;
		constexpr IoconClockOn ioconClockOn;
		using IoconClockOff = Register::WriteBitActionT<address,16,false>;
		constexpr IoconClockOff ioconClockOff;
		//17 reserved
		using Ssp1ClockOn = Register::WriteBitActionT<address,18,true>;
		constexpr Ssp1ClockOn ssp1ClockOn;
		using Ssp1ClockOff = Register::WriteBitActionT<address,18,false>;
		constexpr Ssp1ClockOff ssp1ClockOff;
		using PintCLockOn = Register::WriteBitActionT<address,19,true>;
		constexpr PintCLockOn pintCLockOn;
		using PintCLockOff = Register::WriteBitActionT<address,19,false>;
		constexpr PintCLockOff pintCLockOff;
		using Usart1ClockOn = Register::WriteBitActionT<address,20,true>;
		constexpr Usart1ClockOn usart1ClockOn;
		using Usart1ClockOff = Register::WriteBitActionT<address,20,false>;
		constexpr Usart1ClockOff usart1ClockOff;
		using Usart2ClockOn = Register::WriteBitActionT<address,21,true>;
		constexpr Usart2ClockOn usart2ClockOn;
		using Usart2ClockOff = Register::WriteBitActionT<address,21,false>;
		constexpr Usart2ClockOff usart2ClockOff;
		using Usart3And4ClockOn = Register::WriteBitActionT<address,22,true>;
		constexpr Usart3And4ClockOn usart3And4ClockOn;
		using Usart3And4ClockOff = Register::WriteBitActionT<address,22,false>;
		constexpr Usart3And4ClockOff usart3And4ClockOff;
		using Group0IntClockOn = Register::WriteBitActionT<address,23,true>;
		constexpr Group0IntClockOn group0IntClockOn;
		using Group0IntClockOff = Register::WriteBitActionT<address,23,false>;
		constexpr Group0IntClockOff group0IntClockOff;
		using Group1IntClockOn = Register::WriteBitActionT<address,24,true>;
		constexpr Group1IntClockOn group1IntClockOn;
		using Group1IntClockOff = Register::WriteBitActionT<address,24,false>;
		constexpr Group1IntClockOff group1IntClockOff;
		using I2C1ClockOn = Register::WriteBitActionT<address,25,true>;
		constexpr I2C1ClockOn i2C1ClockOn;
		using I2C1ClockOff = Register::WriteBitActionT<address,25,false>;
		constexpr I2C1ClockOff i2C1ClockOff;
		//TODO implement rest
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
		using ExternalCrystalInit = MPL::List<
				SystemClockControl::IoconClockOn,
				Register::SequencePoint,
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
