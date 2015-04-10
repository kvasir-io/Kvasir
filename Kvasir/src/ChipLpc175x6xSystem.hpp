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
			static constexpr typename MakeAction<I>::Type makeAction(){ return typename MakeAction<I>::Type{}; };
			using Register = Register::FunctionalT<address,0xFF,MPL::List<Register::Policy::ReadableP,Register::Policy::WriteableP>>;
		};
		struct PLL0ClockSourceSelect{
			static constexpr int address = 0x400FC10C;
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
			Register::apply(ClockConfig::CpuClockDivider::makeAction<3>());
			Register::apply(ClockConfig::PLL0ClockSourceSelect::mainOscillator);

			Register::apply(ClockConfig::FlashConfiguration::sixSysclock);
//			TTraits::SystemPLLControl::FeedbackDivider::write(I);
//			TTraits::SystemPLLControl::PostDivider::write(static_cast<typename TTraits::SystemPLLControl::PostDividerRatio>(J));
//			Register::apply(TTraits::systemPllPowerOn);
//			while(TTraits::SystemPllStatus::read() == TTraits::SystemPllStatusOption::noLock);
//			TTraits::SystemAHBClock::Divider::write(1);
//			Register::apply(TTraits::MainClock::pllOutput);
//			Register::apply(TTraits::MainClock::sourceSame);
//			Register::apply(TTraits::MainClock::sourceUpdate);
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
