#pragma once

#include "CoreCommon.hpp"

namespace Kvasir{
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

	namespace PeripheralClock{
		constexpr int address{0x400FC1A8};
		namespace Detail{
			//abstraction for PCLKSEL0 and 1, see UM10360 4.7.3
			template<int Offset,int Value>
			struct Make0 : Register::WriteActionT<address,(0x03 << (Offset*2)),((Value & 0x03) << (Offset*2))>{};
			template<int Offset,int Value>
			struct Make1 : Register::WriteActionT<address+4,(0x03 << (Offset*2)),((Value & 0x03) << (Offset*2))>{};
			template<int Offset, int Value>
			using Make0T = typename Make0<Offset,Value>::Type;
			template<int Offset, int Value>
			using Make1T = typename Make1<Offset,Value>::Type;
		}
		static constexpr Detail::Make0T<0,1> wdtDividedBy1{};
		static constexpr Detail::Make0T<0,2> wdtDividedBy2{};
		static constexpr Detail::Make0T<0,0> wdtDividedBy4{};
		static constexpr Detail::Make0T<0,3> wdtDividedBy8{};

		static constexpr Detail::Make0T<1,1> timer0DividedBy1{};
		static constexpr Detail::Make0T<1,2> timer0DividedBy2{};
		static constexpr Detail::Make0T<1,0> timer0DividedBy4{};
		static constexpr Detail::Make0T<1,3> timer0DividedBy8{};

		static constexpr Detail::Make0T<2,1> timer1DividedBy1{};
		static constexpr Detail::Make0T<2,2> timer1DividedBy2{};
		static constexpr Detail::Make0T<2,0> timer1DividedBy4{};
		static constexpr Detail::Make0T<2,3> timer1DividedBy8{};

		static constexpr Detail::Make0T<3,1> uart0DividedBy1{};
		static constexpr Detail::Make0T<3,2> uart0DividedBy2{};
		static constexpr Detail::Make0T<3,0> uart0DividedBy4{};
		static constexpr Detail::Make0T<3,3> uart0DividedBy8{};

		static constexpr Detail::Make0T<4,1> uart1DividedBy1{};
		static constexpr Detail::Make0T<4,2> uart1DividedBy2{};
		static constexpr Detail::Make0T<4,0> uart1DividedBy4{};
		static constexpr Detail::Make0T<4,3> uart1DividedBy8{};
		//5 reserved
		static constexpr Detail::Make0T<6,1> pwm1DividedBy1{};
		static constexpr Detail::Make0T<6,2> pwm1DividedBy2{};
		static constexpr Detail::Make0T<6,0> pwm1DividedBy4{};
		static constexpr Detail::Make0T<6,3> pwm1DividedBy8{};

		static constexpr Detail::Make0T<7,1> i2c0DividedBy1{};
		static constexpr Detail::Make0T<7,2> i2c0DividedBy2{};
		static constexpr Detail::Make0T<7,0> i2c0DividedBy4{};
		static constexpr Detail::Make0T<7,3> i2c0DividedBy8{};

		static constexpr Detail::Make0T<8,1> spiDividedBy1{};
		static constexpr Detail::Make0T<8,2> spiDividedBy2{};
		static constexpr Detail::Make0T<8,0> spiDividedBy4{};
		static constexpr Detail::Make0T<8,3> spiDividedBy8{};
		//9 reserved
		static constexpr Detail::Make0T<10,1> ssp1DividedBy1{};
		static constexpr Detail::Make0T<10,2> ssp1DividedBy2{};
		static constexpr Detail::Make0T<10,0> ssp1DividedBy4{};
		static constexpr Detail::Make0T<10,3> ssp1DividedBy8{};

		static constexpr Detail::Make0T<11,1> dacDividedBy1{};
		static constexpr Detail::Make0T<11,2> dacDividedBy2{};
		static constexpr Detail::Make0T<11,0> dacDividedBy4{};
		static constexpr Detail::Make0T<11,3> dacDividedBy8{};

		static constexpr Detail::Make0T<12,1> adcDividedBy1{};
		static constexpr Detail::Make0T<12,2> adcDividedBy2{};
		static constexpr Detail::Make0T<12,0> adcDividedBy4{};
		static constexpr Detail::Make0T<12,3> adcDividedBy8{};

		static constexpr Detail::Make0T<13,1> can1DividedBy1{};
		static constexpr Detail::Make0T<13,2> can1DividedBy2{};
		static constexpr Detail::Make0T<13,0> can1DividedBy4{};
		static constexpr Detail::Make0T<13,3> can1DividedBy8{};

		static constexpr Detail::Make0T<14,1> can2DividedBy1{};
		static constexpr Detail::Make0T<14,2> can2DividedBy2{};
		static constexpr Detail::Make0T<14,0> can2DividedBy4{};
		static constexpr Detail::Make0T<14,3> can2DividedBy8{};

		static constexpr Detail::Make0T<15,1> canAcceptanceFilteringDividedBy1{};
		static constexpr Detail::Make0T<15,2> canAcceptanceFilteringDividedBy2{};
		static constexpr Detail::Make0T<15,0> canAcceptanceFilteringDividedBy4{};
		static constexpr Detail::Make0T<15,3> canAcceptanceFilteringDividedBy8{};


		static constexpr Detail::Make1T<0,1> qeiDividedBy1{};
		static constexpr Detail::Make1T<0,2> qeiDividedBy2{};
		static constexpr Detail::Make1T<0,0> qeiDividedBy4{};
		static constexpr Detail::Make1T<0,3> qeiDividedBy8{};

		static constexpr Detail::Make1T<1,1> gpioIntDividedBy1{};
		static constexpr Detail::Make1T<1,2> gpioIntDividedBy2{};
		static constexpr Detail::Make1T<1,0> gpioIntDividedBy4{};
		static constexpr Detail::Make1T<1,3> gpioIntDividedBy8{};

		static constexpr Detail::Make1T<2,1> pinConnectBlockDividedBy1{};
		static constexpr Detail::Make1T<2,2> pinConnectBlockDividedBy2{};
		static constexpr Detail::Make1T<2,0> pinConnectBlockDividedBy4{};
		static constexpr Detail::Make1T<2,3> pinConnectBlockDividedBy8{};

		static constexpr Detail::Make1T<3,1> i2c1DividedBy1{};
		static constexpr Detail::Make1T<3,2> i2c1DividedBy2{};
		static constexpr Detail::Make1T<3,0> i2c1DividedBy4{};
		static constexpr Detail::Make1T<3,3> i2c1DividedBy8{};
		//4 reserved
		static constexpr Detail::Make1T<5,1> ssp0DividedBy1{};
		static constexpr Detail::Make1T<5,2> ssp0DividedBy2{};
		static constexpr Detail::Make1T<5,0> ssp0DividedBy4{};
		static constexpr Detail::Make1T<5,3> ssp0DividedBy8{};

		static constexpr Detail::Make1T<6,1> timer2DividedBy1{};
		static constexpr Detail::Make1T<6,2> timer2DividedBy2{};
		static constexpr Detail::Make1T<6,0> timer2DividedBy4{};
		static constexpr Detail::Make1T<6,3> timer2DividedBy8{};

		static constexpr Detail::Make1T<7,1> timer3DividedBy1{};
		static constexpr Detail::Make1T<7,2> timer3DividedBy2{};
		static constexpr Detail::Make1T<7,0> timer3DividedBy4{};
		static constexpr Detail::Make1T<7,3> timer3DividedBy8{};

		static constexpr Detail::Make1T<8,1> uart2DividedBy1{};
		static constexpr Detail::Make1T<8,2> uart2DividedBy2{};
		static constexpr Detail::Make1T<8,0> uart2DividedBy4{};
		static constexpr Detail::Make1T<8,3> uart2DividedBy8{};

		static constexpr Detail::Make1T<9,1> uart3DividedBy1{};
		static constexpr Detail::Make1T<9,2> uart3DividedBy2{};
		static constexpr Detail::Make1T<9,0> uart3DividedBy4{};
		static constexpr Detail::Make1T<9,3> uart3DividedBy8{};

		static constexpr Detail::Make1T<10,1> i2c2DividedBy1{};
		static constexpr Detail::Make1T<10,2> i2c2DividedBy2{};
		static constexpr Detail::Make1T<10,0> i2c2DividedBy4{};
		static constexpr Detail::Make1T<10,3> i2c2DividedBy8{};

		static constexpr Detail::Make1T<11,1> i2sDividedBy1{};
		static constexpr Detail::Make1T<11,2> i2sDividedBy2{};
		static constexpr Detail::Make1T<11,0> i2sDividedBy4{};
		static constexpr Detail::Make1T<11,3> i2sDividedBy8{};
		//12 reserved
		static constexpr Detail::Make1T<13,1> ritDividedBy1{};
		static constexpr Detail::Make1T<13,2> ritDividedBy2{};
		static constexpr Detail::Make1T<13,0> ritDividedBy4{};
		static constexpr Detail::Make1T<13,3> ritDividedBy8{};

		static constexpr Detail::Make1T<14,1> sysconDividedBy1{};
		static constexpr Detail::Make1T<14,2> sysconDividedBy2{};
		static constexpr Detail::Make1T<14,0> sysconDividedBy4{};
		static constexpr Detail::Make1T<14,3> sysconDividedBy8{};

		static constexpr Detail::Make1T<15,1> motorControlDividedBy1{};
		static constexpr Detail::Make1T<15,2> motorControlDividedBy2{};
		static constexpr Detail::Make1T<15,0> motorControlDividedBy4{};
		static constexpr Detail::Make1T<15,3> motorControlDividedBy8{};


	}

	namespace ControlStatus{
		constexpr int address{0x400FC1A0};
		constexpr Register::WriteBitActionT<address,4,0> oscillatorRange1to20Mhz{};
		constexpr Register::WriteBitActionT<address,4,1> oscillatorRange15to25Mhz{};
		constexpr Register::WriteBitActionT<address,5,0> mainOscillatorDisable{};
		constexpr Register::WriteBitActionT<address,5,1> mainOscillatorEnable{};
		using MainOscilatorStatus = Register::FunctionalT<address,(1<<6),Register::Policy::ReadableP,Register::Policy::BoolConversionP>;
	}

	struct CpuClockConfig{
		struct Flash{
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
		struct Divider{
			//see table 38 in UM10360
			static constexpr int address = 0x400FC104;
			template<int I>
			using MakeAction = Register::WriteActionT<address,0xFF,I>;
			template<int I>
			static constexpr typename MakeAction<I>::Type makeAction(){ return typename MakeAction<I>::Type{}; };
			using Register = Register::FunctionalT<address,0xFF,MPL::List<Register::Policy::ReadableP,Register::Policy::WriteableP>>;
		};
		struct PllSourceSelect{
			static constexpr int address = 0x400FC10C;
			static constexpr Register::WriteActionT<address,0x03,0> internalRc{};
			static constexpr Register::WriteActionT<address,0x03,1> mainOscillator{};
			static constexpr Register::WriteActionT<address,0x03,2> rtcOscillator{};
		};
		struct PllControl{
			static constexpr int address = 0x400FC080;
			static constexpr Register::BlindWriteActionT<address,0x03,1> enable{};
			static constexpr Register::BlindWriteActionT<address,0x03,0> disable{};
			static constexpr Register::BlindWriteActionT<address,0x03,3> connect{};
		};
		struct PllConfiguration{
			static constexpr int address = 0x400FC084;
			template<int I>
			using MakeMultiplierAction = Register::WriteActionT<address,0x7FFF,I>;
			template<int I>
			static constexpr typename MakeMultiplierAction<I>::Type makeMultiplierAction(){ return typename MakeMultiplierAction<I>::Type{}; };
			template<int I>
			using MakeDividerAction = Register::WriteActionT<address,0xFF0000,(I<<16)>;
			template<int I>
			static constexpr typename MakeDividerAction<I>::Type makeDividerAction(){ return typename MakeDividerAction<I>::Type{}; };

		};
		struct PllStatus{
			static constexpr int address = 0x400FC088;
			using LockStatus = Register::FunctionalT<address,(1<<26),Register::Policy::ReadableP,Register::Policy::BoolConversionP>;
		};
		struct PllFeed{
			static constexpr int address = 0x400FC08C;
			static constexpr Register::WriteActionT<address,0xFF,0xAA> firstStep{};
			static constexpr Register::WriteActionT<address,0xFF,0x55> secondStep{};
		};
	};
	struct UsbClockConfig{
		struct PllControl{
			static constexpr int address = 0x400FC0A0; //PLL1CON
			static constexpr Register::BlindWriteActionT<address,0x03,1> enable{};
			static constexpr Register::BlindWriteActionT<address,0x03,0> disable{};
			static constexpr Register::BlindWriteActionT<address,0x03,3> connect{};
		};
		struct PllConfiguration{
			static constexpr int address = 0x400FC0A4; //PLL1CFG
			template<int I>
			using MakeMultiplierAction = Register::WriteActionT<address,0x1F,I>;
			template<int I>
			static constexpr typename MakeMultiplierAction<I>::Type makeMultiplierAction(){ return typename MakeMultiplierAction<I>::Type{}; };
			template<int I>
			using MakeDividerAction = Register::WriteActionT<address,0x60,(I<<5)>;
			template<int I>
			static constexpr typename MakeDividerAction<I>::Type makeDividerAction(){ return typename MakeDividerAction<I>::Type{}; };

		};
		struct PllStatus{
			static constexpr int address = 0x400FC0A8;  //PLL1STAT
			using LockStatus = Register::FunctionalT<address,(1<<10),Register::Policy::ReadableP,Register::Policy::BoolConversionP>;
		};
		struct PllFeed{
			static constexpr int address = 0x400FC0AC;
			static constexpr Register::WriteActionT<address,0xFF,0xAA> firstStep{};
			static constexpr Register::WriteActionT<address,0xFF,0x55> secondStep{};
		};
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
