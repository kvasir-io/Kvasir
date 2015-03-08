#pragma once
#include "CoreCommon.hpp"
#include "Gpio.hpp"
#include "Register.hpp"
#include "Tags.hpp"

namespace Kvasir{
namespace Core{
	namespace Interrupt{
		template<int I>
		using Type = ::Kvasir::Interrupt::Type<I>;
		using PinInterrupt0 = Type<0>;
		using PinInterrupt1 = Type<1>;
		using PinInterrupt2 = Type<2>;
		using PinInterrupt3 = Type<3>;
		using PinInterrupt4 = Type<4>;
		using PinInterrupt5 = Type<5>;
		using PinInterrupt6 = Type<6>;
		using PinInterrupt7 = Type<7>;
		using GroupInterrupt0 = Type<8>;
		using GroupInterrupt1 = Type<9>;
		using I2C1 = Type<10>;
		using Uart1Or4 = Type<11>;
		using Uart2Or3 = Type<12>;
		using Sct0Or1 = Type<13>;
		using Ssp1 = Type<14>;
		using I2C0 = Type<15>;
		using CounterTimer16Bank0 = Type<16>;
		using CounterTimer16Bank1 = Type<17>;
		using CounterTimer32Bank0 = Type<18>;
		using CounterTimer32Bank1 = Type<19>;
		using Ssp0 = Type<20>;
		using Usart0 = Type<21>;
		using UsbIrq = Type<22>;
		using UsbFiq = Type<23>;
		using AdcA = Type<24>;
		using Rtc = Type<25>;
		using BodAndWdt = Type<26>;
		using Flash = Type<27>;
		using Dma = Type<28>;
		using AdcB = Type<29>;
		using UsbWakeup = Type<30>;
		constexpr PinInterrupt0 pinInterrupt0;
		constexpr PinInterrupt1 pinInterrupt1;
		constexpr PinInterrupt2 pinInterrupt2;
		constexpr PinInterrupt3 pinInterrupt3;
		constexpr PinInterrupt4 pinInterrupt4;
		constexpr PinInterrupt5 pinInterrupt5;
		constexpr PinInterrupt6 pinInterrupt6;
		constexpr PinInterrupt7 pinInterrupt7;
		constexpr GroupInterrupt0 groupInterrupt0;
		constexpr GroupInterrupt1 groupInterrupt1;
		constexpr I2C1 i2C1;
		constexpr Uart1Or4 uart1Or4;
		constexpr Uart2Or3 uart2Or3;
		constexpr Sct0Or1 sct0Or1;
		constexpr Ssp1 ssp1;
		constexpr I2C0 i2c0;
		constexpr CounterTimer16Bank0 counterTimer16Bank0;
		constexpr CounterTimer16Bank1 counterTimer16Bank1;
		constexpr CounterTimer32Bank0 counterTimer32Bank0;
		constexpr CounterTimer32Bank1 counterTimer32Bank1;
		constexpr Ssp0 ssp0;
		constexpr Usart0 usart0;
		constexpr UsbIrq usbIrq;
		constexpr UsbFiq usbFiq;
		constexpr AdcA adcA;
		constexpr Rtc rtc;
		constexpr BodAndWdt bodAndWdt;
		constexpr Flash flash;
		constexpr Dma dma;
		constexpr AdcB adcb;
		constexpr UsbWakeup usbWakeup;
	}
}
	namespace Gpio{
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
	}

	struct Timer16B0 {
		using IsrType = Core::Interrupt::CounterTimer16Bank0;
		static constexpr Core::EnableIrqT<IsrType> enableIrq{};
		static constexpr Register::WriteActionT<0x40048080,(1<<7),(1<<7)> clockEnable{};
		static constexpr Register::WriteActionT<0x40048080,(1<<7),0> clockDisable{};
		static constexpr int baseAddress = 0x4000C000;
		using InterruptStatusRegister = Register::Single<MPL::Int<baseAddress>,MPL::Int<0x7F>,MPL::List<Register::Policy::ReadableP,Register::Policy::WriteableP>>;
		static constexpr Register::WriteActionT<baseAddress + 0x04,(1<<0),(1<<0)> couterEnable{};
		static constexpr Register::WriteActionT<baseAddress + 0x04,(1<<0),0> couterDisable{};
		struct MatchControl{
			static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<0),(1<<0)> r0InterruptEnable{};
			static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<1),(1<<1)> r0ResetOnMatch{};
			static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<2),(1<<2)> r0StopOnMatch{};
			static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<3),(1<<3)> r1InterruptEnable{};
			static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<4),(1<<4)> r1ResetOnMatch{};
			static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<5),(1<<5)> r1StopOnMatch{};
			static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<6),(1<<6)> r2InterruptEnable{};
			static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<7),(1<<7)> r2ResetOnMatch{};
			static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<8),(1<<8)> r2StopOnMatch{};
			static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<9),(1<<9)> r3InterruptEnable{};
			static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<10),(1<<10)> r3ResetOnMatch{};
			static constexpr Register::WriteActionT<baseAddress + 0x14,(1<<11),(1<<11)> r3StopOnMatch{};
		};
		template<int I>
		using SetPrescaleT = Register::BlindWriteActionT<baseAddress + 0x0C,0xFFFFFFFF,I>;
		template<int I>
		using SetR0ValueT = Register::BlindWriteActionT<baseAddress + 0x18,0xFFFFFFFF,I>;
		template<int I>
		using SetR1ValueT = Register::BlindWriteActionT<baseAddress + 0x1C,0xFFFFFFFF,I>;
		template<int I>
		using SetR2ValueT = Register::BlindWriteActionT<baseAddress + 0x20,0xFFFFFFFF,I>;
		template<int I>
		using SetR3ValueT = Register::BlindWriteActionT<baseAddress + 0x24,0xFFFFFFFF,I>;


	};
	namespace PowerConfiguration {
		constexpr int address{0x40048238};
		using IrcOscilatorOutputOn = Register::WriteBitActionT<address,0,true>;
		constexpr IrcOscilatorOutputOn ircOscilatorOutputOn;
		using IrcOscilatorOutputOff = Register::WriteBitActionT<address,0,false>;
		constexpr IrcOscilatorOutputOff ircOscilatorOutputOff;
		using IrcOscilatorOn = Register::WriteBitActionT<address,1,true>;
		constexpr IrcOscilatorOn ircOscilatorOn;
		using IrcOscilatorOff = Register::WriteBitActionT<address,1,false>;
		constexpr IrcOscilatorOff ircOscilatorOff;
		using FlashOn = Register::WriteBitActionT<address,2,true>;
		constexpr FlashOn flashOn;
		using FlashOff = Register::WriteBitActionT<address,2,false>;
		constexpr FlashOff flashOff;
		using BrownOutDetectOn = Register::WriteBitActionT<address,3,true>;
		constexpr BrownOutDetectOn brownOutDetectOn;
		using BrownOutDetectOff = Register::WriteBitActionT<address,3,false>;
		constexpr BrownOutDetectOff brownOutDetectOff;
		using AdcOn = Register::WriteBitActionT<address,4,true>;
		constexpr AdcOn adcOn;
		using AdcOff = Register::WriteBitActionT<address,4,false>;
		constexpr AdcOff adcOff;
		using CrystalOscilatorOn = Register::WriteBitActionT<address,5,true>;
		constexpr CrystalOscilatorOn crystalOscilatorOn;
		using CrystalOscilatorOff = Register::WriteBitActionT<address,5,false>;
		constexpr CrystalOscilatorOff crystalOscilatorOff;
		using WatchdogOscilatorOn = Register::WriteBitActionT<address,6,true>;
		constexpr WatchdogOscilatorOn watchdogOscilatorOn;
		using WatchdogOscilatorOff = Register::WriteBitActionT<address,6,false>;
		constexpr WatchdogOscilatorOff watchdogOscilatorOff;
		using SystemPllOn = Register::WriteBitActionT<address,7,true>;
		constexpr SystemPllOn systemPllOn;
		using SystemPllOff = Register::WriteBitActionT<address,7,false>;
		constexpr SystemPllOff systemPllOff;
		using UsbPllOn = Register::WriteBitActionT<address,8,true>;
		constexpr UsbPllOn usbPllOn;
		using UsbPllOff = Register::WriteBitActionT<address,8,false>;
		constexpr UsbPllOff usbPllOff;
		using UsbTransceiverOn = Register::WriteBitActionT<address,10,true>;
		constexpr UsbTransceiverOn usbTransceiverOn;
		using UsbTransceiverOff = Register::WriteBitActionT<address,10,false>;
		constexpr UsbTransceiverOff usbTransceiverOff;
		using TemperaturSensorOn = Register::WriteBitActionT<address,13,true>;
		constexpr TemperaturSensorOn temperaturSensorOn;
		using TemperaturSensorOff = Register::WriteBitActionT<address,13,false>;
		constexpr TemperaturSensorOff temperaturSensorOff;
	}
	namespace SystemPllClock{
		constexpr int address{0x40048040};
		using InternalRc = Register::WriteActionT<address,0x03,0x00>;
		constexpr InternalRc internalRc;
		using SystemOscilator = Register::WriteActionT<address,0x03,0x01>;
		constexpr SystemOscilator systemOscilator;
		using Clock32khz = Register::WriteActionT<address,0x03,0x03>;
		constexpr Clock32khz clock32khz;

		using SourceUpdate = Register::WriteBitActionT<address+4,0,true>;
		constexpr SourceUpdate sourceUpdate;
		using SourceSame = Register::WriteBitActionT<address+4,0,false>;
		constexpr SourceSame sourceSame;
	}
	namespace MainClock{
		constexpr int address{0x40048070};
		using InternalRc = Register::WriteActionT<address,0x03,0x00>;
		constexpr InternalRc internalRc;
		using PllInput = Register::WriteActionT<address,0x03,0x01>;
		constexpr PllInput pllInput;
		using WatchdogOscilator = Register::WriteActionT<address,0x03,0x02>;
		constexpr WatchdogOscilator watchdogOscilator;
		using PllOutput = Register::WriteActionT<address,0x03,0x03>;
		constexpr PllOutput pllOutput;

		using SourceUpdate = Register::WriteBitActionT<address+4,0,true>;
		constexpr SourceUpdate sourceUpdate;
		using SourceSame = Register::WriteBitActionT<address+4,0,false>;
		constexpr SourceSame sourceSame;
	}
	namespace FlashConfiguration{
		constexpr int address{0x4003C010};
		using OneSysclock = Register::WriteActionT<address,0x03,0x00>;
		constexpr OneSysclock oneSysclock;
		using TwoSysclock = Register::WriteActionT<address,0x03,0x01>;
		constexpr TwoSysclock twoSysclock;
	}
	template<int I, int J>
	struct ClockInitializationRawMode{
		void operator()(){
			Register::apply(PowerConfiguration::ircOscilatorOn);
			Register::apply(SystemPllClock::internalRc);
			Register::apply(SystemPllClock::sourceUpdate);
			Register::apply(PowerConfiguration::systemPllOff);
			*(int*)0x40048008 = (I & 0x1F) | ((J & 0x3) << 5);  	//TODO make register abstraction
			Register::apply(PowerConfiguration::systemPllOn);
			while((*(int*)0x4004800C & 1) == 0){}						//TODO make register abstraction
			*(int*) 0x40048078 = 1;
			Register::apply(MainClock::pllOutput);
			Register::apply(MainClock::sourceSame);
			Register::apply(MainClock::sourceUpdate);
		}
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
			    // Optionally enable RAM banks that may be off by default at reset
			#if !defined (DONT_ENABLE_DISABLED_RAMBANKS)
			    volatile unsigned int *SYSCON_SYSAHBCLKCTRL = (unsigned int *) 0x40048080;
			    // Ensure that RAM1(26) and USBSRAM(27) bits in SYSAHBCLKCTRL are set
			    *SYSCON_SYSAHBCLKCTRL |= (1 << 26) | (1 <<27);
			#endif

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
