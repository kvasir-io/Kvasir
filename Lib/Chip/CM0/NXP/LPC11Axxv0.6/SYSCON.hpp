#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration 
    namespace Nonesysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40048000,0xfffffffc,0,unsigned>;
        ///System memory remap
        enum class mapVal {
            bootLoaderModeIn=0x00000000,     ///<Boot Loader Mode. Interrupt vectors are re-mapped to Boot ROM.
            userRamModeInter=0x00000001,     ///<User RAM Mode. Interrupt vectors are re-mapped to Static RAM.
            userFlashModeInt=0x00000002,     ///<User Flash Mode. Interrupt vectors are not re-mapped and reside in Flash.
            reserved=0x00000003,     ///<Reserved
        };
        namespace mapValC{
            constexpr MPL::Value<mapVal,mapVal::bootLoaderModeIn> bootLoaderModeIn{};
            constexpr MPL::Value<mapVal,mapVal::userRamModeInter> userRamModeInter{};
            constexpr MPL::Value<mapVal,mapVal::userFlashModeInt> userFlashModeInt{};
            constexpr MPL::Value<mapVal,mapVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,mapVal> map{}; 
    }
    namespace Nonepresetctrl{    ///<Peripheral reset control
        using Addr = Register::Address<0x40048004,0xfffff008,0,unsigned>;
        ///SSP0 reset control
        enum class ssp0RstNVal {
            resetsTheSsp0Peri=0x00000000,     ///<Resets the SSP0 peripheral.
            ssp0ResetDeAssert=0x00000001,     ///<SSP0 reset de-asserted.
        };
        namespace ssp0RstNValC{
            constexpr MPL::Value<ssp0RstNVal,ssp0RstNVal::resetsTheSsp0Peri> resetsTheSsp0Peri{};
            constexpr MPL::Value<ssp0RstNVal,ssp0RstNVal::ssp0ResetDeAssert> ssp0ResetDeAssert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ssp0RstNVal> ssp0RstN{}; 
        ///I2C reset control
        enum class i2cRstNVal {
            resetsTheI2cPerip=0x00000000,     ///<Resets the I2C peripheral.
            i2cResetDeAsserte=0x00000001,     ///<I2C reset de-asserted.
        };
        namespace i2cRstNValC{
            constexpr MPL::Value<i2cRstNVal,i2cRstNVal::resetsTheI2cPerip> resetsTheI2cPerip{};
            constexpr MPL::Value<i2cRstNVal,i2cRstNVal::i2cResetDeAsserte> i2cResetDeAsserte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,i2cRstNVal> i2cRstN{}; 
        ///SSP1 reset control
        enum class ssp1RstNVal {
            resetsTheSsp1Peri=0x00000000,     ///<Resets the SSP1 peripheral.
            ssp1ResetDeAssert=0x00000001,     ///<SSP1 reset de-asserted.
        };
        namespace ssp1RstNValC{
            constexpr MPL::Value<ssp1RstNVal,ssp1RstNVal::resetsTheSsp1Peri> resetsTheSsp1Peri{};
            constexpr MPL::Value<ssp1RstNVal,ssp1RstNVal::ssp1ResetDeAssert> ssp1ResetDeAssert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ssp1RstNVal> ssp1RstN{}; 
        ///UART reset control
        enum class uartRstNVal {
            resetsTheUartPeri=0x00000000,     ///<Resets the UART peripheral.
            uartResetDeAssert=0x00000001,     ///<UART reset de-asserted.
        };
        namespace uartRstNValC{
            constexpr MPL::Value<uartRstNVal,uartRstNVal::resetsTheUartPeri> resetsTheUartPeri{};
            constexpr MPL::Value<uartRstNVal,uartRstNVal::uartResetDeAssert> uartResetDeAssert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,uartRstNVal> uartRstN{}; 
        ///CT16B0 reset control
        enum class ct16b0RstNVal {
            resetsTheCt16b0Pe=0x00000000,     ///<Resets the CT16B0 peripheral.
            ct16b0ResetDeAsse=0x00000001,     ///<CT16B0 reset de-asserted.
        };
        namespace ct16b0RstNValC{
            constexpr MPL::Value<ct16b0RstNVal,ct16b0RstNVal::resetsTheCt16b0Pe> resetsTheCt16b0Pe{};
            constexpr MPL::Value<ct16b0RstNVal,ct16b0RstNVal::ct16b0ResetDeAsse> ct16b0ResetDeAsse{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ct16b0RstNVal> ct16b0RstN{}; 
        ///CT16B1 reset control
        enum class ct16b1RstNVal {
            resetsTheCt16b1Pe=0x00000000,     ///<Resets the CT16B1 peripheral.
            ct16b1ResetDeAsse=0x00000001,     ///<CT16B1 reset de-asserted.
        };
        namespace ct16b1RstNValC{
            constexpr MPL::Value<ct16b1RstNVal,ct16b1RstNVal::resetsTheCt16b1Pe> resetsTheCt16b1Pe{};
            constexpr MPL::Value<ct16b1RstNVal,ct16b1RstNVal::ct16b1ResetDeAsse> ct16b1ResetDeAsse{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ct16b1RstNVal> ct16b1RstN{}; 
        ///CT32B0 reset control
        enum class ct32b0RstNVal {
            resetsTheCt32b0Pe=0x00000000,     ///<Resets the CT32B0 peripheral.
            ct32b0ResetDeAsse=0x00000001,     ///<CT32B0 reset de-asserted.
        };
        namespace ct32b0RstNValC{
            constexpr MPL::Value<ct32b0RstNVal,ct32b0RstNVal::resetsTheCt32b0Pe> resetsTheCt32b0Pe{};
            constexpr MPL::Value<ct32b0RstNVal,ct32b0RstNVal::ct32b0ResetDeAsse> ct32b0ResetDeAsse{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ct32b0RstNVal> ct32b0RstN{}; 
        ///CT32B1 reset control
        enum class ct32b1RstNVal {
            resetsTheCt32b1Pe=0x00000000,     ///<Resets the CT32B1 peripheral.
            ct32b1ResetDeAsse=0x00000001,     ///<CT32B1 reset de-asserted.
        };
        namespace ct32b1RstNValC{
            constexpr MPL::Value<ct32b1RstNVal,ct32b1RstNVal::resetsTheCt32b1Pe> resetsTheCt32b1Pe{};
            constexpr MPL::Value<ct32b1RstNVal,ct32b1RstNVal::ct32b1ResetDeAsse> ct32b1ResetDeAsse{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ct32b1RstNVal> ct32b1RstN{}; 
        ///Analog comparator reset control
        enum class acompRstNVal {
            resetsTheAnalogCo=0x00000000,     ///<Resets the Analog comparator peripheral.
            analogComparatorRe=0x00000001,     ///<Analog comparator reset de-asserted.
        };
        namespace acompRstNValC{
            constexpr MPL::Value<acompRstNVal,acompRstNVal::resetsTheAnalogCo> resetsTheAnalogCo{};
            constexpr MPL::Value<acompRstNVal,acompRstNVal::analogComparatorRe> analogComparatorRe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,acompRstNVal> acompRstN{}; 
        ///DAC reset control
        enum class dacRstNVal {
            resetsTheDacPerip=0x00000000,     ///<Resets the DAC peripheral.
            dacResetDeAsserte=0x00000001,     ///<DAC reset de-asserted.
        };
        namespace dacRstNValC{
            constexpr MPL::Value<dacRstNVal,dacRstNVal::resetsTheDacPerip> resetsTheDacPerip{};
            constexpr MPL::Value<dacRstNVal,dacRstNVal::dacResetDeAsserte> dacResetDeAsserte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,dacRstNVal> dacRstN{}; 
        ///ADC reset control
        enum class adcRstNVal {
            resetsTheAdcPerip=0x00000000,     ///<Resets the ADC peripheral.
            adcResetDeAsserte=0x00000001,     ///<ADC reset de-asserted.
        };
        namespace adcRstNValC{
            constexpr MPL::Value<adcRstNVal,adcRstNVal::resetsTheAdcPerip> resetsTheAdcPerip{};
            constexpr MPL::Value<adcRstNVal,adcRstNVal::adcResetDeAsserte> adcResetDeAsserte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,adcRstNVal> adcRstN{}; 
    }
    namespace Nonesyspllctrl{    ///<System PLL control
        using Addr = Register::Address<0x40048008,0xffffff80,0,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1. 00000: Division ratio M = 1 to 11111: Division ratio M = 32
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> msel{}; 
        ///Post divider ratio P. The division ratio is 2 x P.
        enum class pselVal {
            pEq1=0x00000000,     ///<P = 1
            pEq2=0x00000001,     ///<P = 2
            pEq4=0x00000002,     ///<P = 4
            pEq8=0x00000003,     ///<P = 8
        };
        namespace pselValC{
            constexpr MPL::Value<pselVal,pselVal::pEq1> pEq1{};
            constexpr MPL::Value<pselVal,pselVal::pEq2> pEq2{};
            constexpr MPL::Value<pselVal,pselVal::pEq4> pEq4{};
            constexpr MPL::Value<pselVal,pselVal::pEq8> pEq8{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,pselVal> psel{}; 
    }
    namespace Nonesyspllstat{    ///<System PLL status
        using Addr = Register::Address<0x4004800c,0xfffffffe,0,unsigned>;
        ///PLL lock status
        enum class lockVal {
            pllNotLocked=0x00000000,     ///<PLL not locked
            pllLocked=0x00000001,     ///<PLL locked
        };
        namespace lockValC{
            constexpr MPL::Value<lockVal,lockVal::pllNotLocked> pllNotLocked{};
            constexpr MPL::Value<lockVal,lockVal::pllLocked> pllLocked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lockVal> lock{}; 
    }
    namespace Nonesysoscctrl{    ///<System oscillator control
        using Addr = Register::Address<0x40048020,0xfffffffc,0,unsigned>;
        ///Bypass system oscillator
        enum class bypassVal {
            oscillatorIsNotBy=0x00000000,     ///<Oscillator is not bypassed.
            bypassEnabledPll=0x00000001,     ///<Bypass enabled. PLL input (sys_osc_clk) is fed directly from the XTALIN pins.
        };
        namespace bypassValC{
            constexpr MPL::Value<bypassVal,bypassVal::oscillatorIsNotBy> oscillatorIsNotBy{};
            constexpr MPL::Value<bypassVal,bypassVal::bypassEnabledPll> bypassEnabledPll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bypassVal> bypass{}; 
        ///Determines frequency range for Low-power oscillator.
        enum class freqrangeVal {
            v120MhzFrequency=0x00000000,     ///<1 - 20 MHz frequency range.
            v1525MhzFrequenc=0x00000001,     ///<15 - 25 MHz frequency range
        };
        namespace freqrangeValC{
            constexpr MPL::Value<freqrangeVal,freqrangeVal::v120MhzFrequency> v120MhzFrequency{};
            constexpr MPL::Value<freqrangeVal,freqrangeVal::v1525MhzFrequenc> v1525MhzFrequenc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,freqrangeVal> freqrange{}; 
    }
    namespace Nonewdtoscctrl{    ///<Watchdog oscillator control
        using Addr = Register::Address<0x40048024,0xfffffe00,0,unsigned>;
        ///Select divider for Fclkana.  wdt_osc_clk = Fclkana/ (2 x (1 + DIVSEL)) 00000: 2 x (1 + DIVSEL) = 2 00001: 2 x (1 + DIVSEL) = 4 to 11111: 2 x (1 + DIVSEL) = 64
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Select watchdog oscillator analog output frequency (Fclkana).
        enum class freqselVal {
            operationIsUndefin=0x00000000,     ///<Operation is undefined for this value. Startup code should program a non-zero value in this field as soon after reset as possible.
            v06Mhz=0x00000001,     ///<0.6 MHz
            v105Mhz=0x00000002,     ///<1.05 MHz
            v14Mhz=0x00000003,     ///<1.4 MHz
            v175Mhz=0x00000004,     ///<1.75 MHz
            v21Mhz=0x00000005,     ///<2.1 MHz
            v24Mhz=0x00000006,     ///<2.4 MHz
            v27Mhz=0x00000007,     ///<2.7 MHz
            v30Mhz=0x00000008,     ///<3.0 MHz
            v325Mhz=0x00000009,     ///<3.25 MHz
            v35Mhz=0x0000000a,     ///<3.5 MHz
            v375Mhz=0x0000000b,     ///<3.75 MHz
            v40Mhz=0x0000000c,     ///<4.0 MHz
            v42Mhz=0x0000000d,     ///<4.2 MHz
            v44Mhz=0x0000000e,     ///<4.4 MHz
            v46Mhz=0x0000000f,     ///<4.6 MHz
        };
        namespace freqselValC{
            constexpr MPL::Value<freqselVal,freqselVal::operationIsUndefin> operationIsUndefin{};
            constexpr MPL::Value<freqselVal,freqselVal::v06Mhz> v06Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v105Mhz> v105Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v14Mhz> v14Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v175Mhz> v175Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v21Mhz> v21Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v24Mhz> v24Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v27Mhz> v27Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v30Mhz> v30Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v325Mhz> v325Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v35Mhz> v35Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v375Mhz> v375Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v40Mhz> v40Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v42Mhz> v42Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v44Mhz> v44Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v46Mhz> v46Mhz{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,5),Register::ReadWriteAccess,freqselVal> freqsel{}; 
    }
    namespace Noneircctrl{    ///<IRC oscillator control
        using Addr = Register::Address<0x40048028,0xffffff00,0,unsigned>;
        ///Trim value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> trim{}; 
    }
    namespace Nonelfoscctrl{    ///<LF oscillator control
        using Addr = Register::Address<0x4004802c,0xfffffe00,0,unsigned>;
        ///Select divider for Fclkana.  wdt_osc_clk = Fclkana/ (2 x (1 + DIVSEL)) 00000: 2 x (1 + DIVSEL) = 2 00001: 2 x (1 + DIVSEL) = 4 to 11111: 2 x (1 + DIVSEL) = 64
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Select watchdog oscillator analog output frequency (Fclkana).
        enum class freqselVal {
            operationIsUndefin=0x00000000,     ///<Operation is undefined for this value. Startup code should program a non-zero value in this field as soon after reset as possible.
            v06Mhz=0x00000001,     ///<0.6 MHz
            v105Mhz=0x00000002,     ///<1.05 MHz
            v14Mhz=0x00000003,     ///<1.4 MHz
            v175Mhz=0x00000004,     ///<1.75 MHz
            v21Mhz=0x00000005,     ///<2.1 MHz
            v24Mhz=0x00000006,     ///<2.4 MHz
            v27Mhz=0x00000007,     ///<2.7 MHz
            v30Mhz=0x00000008,     ///<3.0 MHz
            v325Mhz=0x00000009,     ///<3.25 MHz
            v35Mhz=0x0000000a,     ///<3.5 MHz
            v375Mhz=0x0000000b,     ///<3.75 MHz
            v40Mhz=0x0000000c,     ///<4.0 MHz
            v42Mhz=0x0000000d,     ///<4.2 MHz
            v44Mhz=0x0000000e,     ///<4.4 MHz
            v46Mhz=0x0000000f,     ///<4.6 MHz
        };
        namespace freqselValC{
            constexpr MPL::Value<freqselVal,freqselVal::operationIsUndefin> operationIsUndefin{};
            constexpr MPL::Value<freqselVal,freqselVal::v06Mhz> v06Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v105Mhz> v105Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v14Mhz> v14Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v175Mhz> v175Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v21Mhz> v21Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v24Mhz> v24Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v27Mhz> v27Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v30Mhz> v30Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v325Mhz> v325Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v35Mhz> v35Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v375Mhz> v375Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v40Mhz> v40Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v42Mhz> v42Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v44Mhz> v44Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v46Mhz> v46Mhz{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,5),Register::ReadWriteAccess,freqselVal> freqsel{}; 
    }
    namespace Nonesysrststat{    ///<System reset status register
        using Addr = Register::Address<0x40048030,0xffffffe0,0,unsigned>;
        ///POR reset status
        enum class porVal {
            noPorDetected=0x00000000,     ///<No POR detected
            porDetected=0x00000001,     ///<POR detected
        };
        namespace porValC{
            constexpr MPL::Value<porVal,porVal::noPorDetected> noPorDetected{};
            constexpr MPL::Value<porVal,porVal::porDetected> porDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,porVal> por{}; 
        ///External reset status
        enum class extrstVal {
            noResetEventDetec=0x00000000,     ///<No RESET event detected
            resetDetected=0x00000001,     ///<RESET detected
        };
        namespace extrstValC{
            constexpr MPL::Value<extrstVal,extrstVal::noResetEventDetec> noResetEventDetec{};
            constexpr MPL::Value<extrstVal,extrstVal::resetDetected> resetDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,extrstVal> extrst{}; 
        ///Status of the Watchdog reset
        enum class wdtVal {
            noWdtResetDetecte=0x00000000,     ///<No WDT reset detected
            wdtResetDetected=0x00000001,     ///<WDT reset detected
        };
        namespace wdtValC{
            constexpr MPL::Value<wdtVal,wdtVal::noWdtResetDetecte> noWdtResetDetecte{};
            constexpr MPL::Value<wdtVal,wdtVal::wdtResetDetected> wdtResetDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wdtVal> wdt{}; 
        ///Status of the Brown-out detect reset
        enum class bodVal {
            noBodResetDetecte=0x00000000,     ///<No BOD reset detected
            bodResetDetected=0x00000001,     ///<BOD reset detected
        };
        namespace bodValC{
            constexpr MPL::Value<bodVal,bodVal::noBodResetDetecte> noBodResetDetecte{};
            constexpr MPL::Value<bodVal,bodVal::bodResetDetected> bodResetDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bodVal> bod{}; 
        ///Status of the software system reset
        enum class sysrstVal {
            noSystemResetDete=0x00000000,     ///<No System reset detected
            systemResetDetecte=0x00000001,     ///<System reset detected
        };
        namespace sysrstValC{
            constexpr MPL::Value<sysrstVal,sysrstVal::noSystemResetDete> noSystemResetDete{};
            constexpr MPL::Value<sysrstVal,sysrstVal::systemResetDetecte> systemResetDetecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,sysrstVal> sysrst{}; 
    }
    namespace Nonesyspllclksel{    ///<System PLL clock source select
        using Addr = Register::Address<0x40048040,0xfffffffc,0,unsigned>;
        ///System PLL clock source
        enum class selVal {
            irc=0x00000000,     ///<IRC
            crystalOscillator=0x00000001,     ///<Crystal Oscillator (XTAL)
            clkinPin=0x00000002,     ///<CLKIN pin
            reserved=0x00000003,     ///<Reserved
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::irc> irc{};
            constexpr MPL::Value<selVal,selVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<selVal,selVal::clkinPin> clkinPin{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Nonesyspllclkuen{    ///<System PLL clock source update enable
        using Addr = Register::Address<0x40048044,0xfffffffe,0,unsigned>;
        ///Enable system PLL clock source update
        enum class enaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        namespace enaValC{
            constexpr MPL::Value<enaVal,enaVal::noChange> noChange{};
            constexpr MPL::Value<enaVal,enaVal::updateClockSource> updateClockSource{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enaVal> ena{}; 
    }
    namespace Nonemainclksel{    ///<Main clock source select
        using Addr = Register::Address<0x40048070,0xfffffffc,0,unsigned>;
        ///Clock source for main clock
        enum class selVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            pllInput=0x00000001,     ///<PLL input
            lfOscillator=0x00000002,     ///<LF Oscillator
            pllOutput=0x00000003,     ///<PLL output
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
            constexpr MPL::Value<selVal,selVal::pllInput> pllInput{};
            constexpr MPL::Value<selVal,selVal::lfOscillator> lfOscillator{};
            constexpr MPL::Value<selVal,selVal::pllOutput> pllOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Nonemainclkuen{    ///<Main clock source update enable
        using Addr = Register::Address<0x40048074,0xfffffffe,0,unsigned>;
        ///Enable main clock source update
        enum class enaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        namespace enaValC{
            constexpr MPL::Value<enaVal,enaVal::noChange> noChange{};
            constexpr MPL::Value<enaVal,enaVal::updateClockSource> updateClockSource{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enaVal> ena{}; 
    }
    namespace Nonesysahbclkdiv{    ///<System clock divider
        using Addr = Register::Address<0x40048078,0xffffff00,0,unsigned>;
        ///System AHB clock divider values 0: System clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonesysahbclkctrl{    ///<System clock control
        using Addr = Register::Address<0x40048080,0xfe424000,0,unsigned>;
        ///Enables the clock for the AHB, the APB bridge, the Cortex-M0 FCLK and HCLK, SysCon, and the PMU. This bit is read only and always reads as 1.
        enum class sysVal {
            reserved=0x00000000,     ///<Reserved
            enable=0x00000001,     ///<Enable
        };
        namespace sysValC{
            constexpr MPL::Value<sysVal,sysVal::reserved> reserved{};
            constexpr MPL::Value<sysVal,sysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sysVal> sys{}; 
        ///Enables clock for ROM.
        enum class romVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace romValC{
            constexpr MPL::Value<romVal,romVal::disable> disable{};
            constexpr MPL::Value<romVal,romVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,romVal> rom{}; 
        ///Enables clock for RAM.
        enum class ramVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ramValC{
            constexpr MPL::Value<ramVal,ramVal::disable> disable{};
            constexpr MPL::Value<ramVal,ramVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ramVal> ram{}; 
        ///Enables clock for flash/EEPROM register interface.
        enum class flashregVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace flashregValC{
            constexpr MPL::Value<flashregVal,flashregVal::disabled> disabled{};
            constexpr MPL::Value<flashregVal,flashregVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,flashregVal> flashreg{}; 
        ///Enables clock for flash/EEPROM array access.
        enum class flasharrayVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace flasharrayValC{
            constexpr MPL::Value<flasharrayVal,flasharrayVal::disabled> disabled{};
            constexpr MPL::Value<flasharrayVal,flasharrayVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,flasharrayVal> flasharray{}; 
        ///Enables clock for I2C.
        enum class i2cVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace i2cValC{
            constexpr MPL::Value<i2cVal,i2cVal::disable> disable{};
            constexpr MPL::Value<i2cVal,i2cVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,i2cVal> i2c{}; 
        ///Enables clock for GPIO.
        enum class gpioVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace gpioValC{
            constexpr MPL::Value<gpioVal,gpioVal::disable> disable{};
            constexpr MPL::Value<gpioVal,gpioVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,gpioVal> gpio{}; 
        ///Enables clock for 16-bit counter/timer 0.
        enum class ct16b0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ct16b0ValC{
            constexpr MPL::Value<ct16b0Val,ct16b0Val::disable> disable{};
            constexpr MPL::Value<ct16b0Val,ct16b0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ct16b0Val> ct16b0{}; 
        ///Enables clock for 16-bit counter/timer 1.
        enum class ct16b1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ct16b1ValC{
            constexpr MPL::Value<ct16b1Val,ct16b1Val::disable> disable{};
            constexpr MPL::Value<ct16b1Val,ct16b1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ct16b1Val> ct16b1{}; 
        ///Enables clock for 32-bit counter/timer 0.
        enum class ct32b0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ct32b0ValC{
            constexpr MPL::Value<ct32b0Val,ct32b0Val::disable> disable{};
            constexpr MPL::Value<ct32b0Val,ct32b0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ct32b0Val> ct32b0{}; 
        ///Enables clock for 32-bit counter/timer 1.
        enum class ct32b1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ct32b1ValC{
            constexpr MPL::Value<ct32b1Val,ct32b1Val::disable> disable{};
            constexpr MPL::Value<ct32b1Val,ct32b1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ct32b1Val> ct32b1{}; 
        ///Enables clock for SSP0.
        enum class ssp0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ssp0ValC{
            constexpr MPL::Value<ssp0Val,ssp0Val::disable> disable{};
            constexpr MPL::Value<ssp0Val,ssp0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ssp0Val> ssp0{}; 
        ///Enables clock for UART. Note that the UART pins must be configured in the IOCON block before the UART clock can be enabled.
        enum class uartVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace uartValC{
            constexpr MPL::Value<uartVal,uartVal::disable> disable{};
            constexpr MPL::Value<uartVal,uartVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,uartVal> uart{}; 
        ///Enables clock for ADC.
        enum class adcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace adcValC{
            constexpr MPL::Value<adcVal,adcVal::disable> disable{};
            constexpr MPL::Value<adcVal,adcVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,adcVal> adc{}; 
        ///Enables clock for WDT.
        enum class wdtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace wdtValC{
            constexpr MPL::Value<wdtVal,wdtVal::disable> disable{};
            constexpr MPL::Value<wdtVal,wdtVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,wdtVal> wdt{}; 
        ///Enables clock for I/O configuration block.
        enum class ioconVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ioconValC{
            constexpr MPL::Value<ioconVal,ioconVal::disable> disable{};
            constexpr MPL::Value<ioconVal,ioconVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ioconVal> iocon{}; 
        ///Enables clock for SSP1.
        enum class ssp1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ssp1ValC{
            constexpr MPL::Value<ssp1Val,ssp1Val::disable> disable{};
            constexpr MPL::Value<ssp1Val,ssp1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ssp1Val> ssp1{}; 
        ///GPIO Pin interrupts
        enum class pintVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace pintValC{
            constexpr MPL::Value<pintVal,pintVal::disable> disable{};
            constexpr MPL::Value<pintVal,pintVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,pintVal> pint{}; 
        ///Enables clock for ACOMP.
        enum class acompVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace acompValC{
            constexpr MPL::Value<acompVal,acompVal::disable> disable{};
            constexpr MPL::Value<acompVal,acompVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,acompVal> acomp{}; 
        ///Enables clock for DAC.
        enum class dacVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace dacValC{
            constexpr MPL::Value<dacVal,dacVal::disable> disable{};
            constexpr MPL::Value<dacVal,dacVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,dacVal> dac{}; 
        ///GPIO Port 0 interrupt
        enum class p0intVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace p0intValC{
            constexpr MPL::Value<p0intVal,p0intVal::disable> disable{};
            constexpr MPL::Value<p0intVal,p0intVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,p0intVal> p0int{}; 
        ///GPIO Port 1interrupt
        enum class p1intVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace p1intValC{
            constexpr MPL::Value<p1intVal,p1intVal::disable> disable{};
            constexpr MPL::Value<p1intVal,p1intVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,p1intVal> p1int{}; 
    }
    namespace Nonessp0clkdiv{    ///<SSP0 clock divider
        using Addr = Register::Address<0x40048094,0xffffff00,0,unsigned>;
        ///SSP0_PCLK clock divider values 0: Disable SSP1_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneuartclkdiv{    ///<UART clock divider
        using Addr = Register::Address<0x40048098,0xffffff00,0,unsigned>;
        ///UART_PCLK clock divider values 0: Disable UART_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonessp1clkdiv{    ///<SSP1 clock divider
        using Addr = Register::Address<0x4004809c,0xffffff00,0,unsigned>;
        ///SSP1_PCLK clock divider values 0: Disable SSP1_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneclkoutsel{    ///<CLKOUT clock source select
        using Addr = Register::Address<0x400480e0,0xfffffffc,0,unsigned>;
        ///CLKOUT clock source
        enum class selVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            crystalOscillator=0x00000001,     ///<Crystal oscillator (XTAL)
            lfOscillator=0x00000002,     ///<LF oscillator
            mainClock=0x00000003,     ///<Main clock
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
            constexpr MPL::Value<selVal,selVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<selVal,selVal::lfOscillator> lfOscillator{};
            constexpr MPL::Value<selVal,selVal::mainClock> mainClock{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Noneclkoutuen{    ///<CLKOUT clock source update enable
        using Addr = Register::Address<0x400480e4,0xfffffffe,0,unsigned>;
        ///Enable CLKOUT clock source update
        enum class enaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        namespace enaValC{
            constexpr MPL::Value<enaVal,enaVal::noChange> noChange{};
            constexpr MPL::Value<enaVal,enaVal::updateClockSource> updateClockSource{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enaVal> ena{}; 
    }
    namespace Noneclkoutdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x400480e8,0xffffff00,0,unsigned>;
        ///CLKOUT clock divider values 0: Disable CLKOUT clock divider.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonepioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x40048100,0x00000000,0,unsigned>;
        ///State of PIO0_31 through PIO0_0 at power-on reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Nonepioporcap1{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40048104,0xfffffc00,0,unsigned>;
        ///State of PIO1_9 through PIO1_0 at power-on reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Nonebodr{    ///<Brown-Out Detect
        using Addr = Register::Address<0x40048150,0xffffffb3,0,unsigned>;
        ///BOD interrupt threshold
        enum class bodintvalVal {
            level2TheInterru=0x00000002,     ///<Level 2: the interrupt assertion threshold voltage is 2.52 V; the interrupt de-assertion threshold voltage is 2.66 V.
            level3TheInterru=0x00000003,     ///<Level 3: the interrupt assertion threshold voltage is 2.80 V; the interrupt de-assertion threshold voltage is 2.90 V.
        };
        namespace bodintvalValC{
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level2TheInterru> level2TheInterru{};
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level3TheInterru> level3TheInterru{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,bodintvalVal> bodintval{}; 
        ///This bit is 1 if the BOD is requesting an interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodint{}; 
    }
    namespace Nonesystckcal{    ///<System tick counter calibration
        using Addr = Register::Address<0x40048158,0xfc000000,0,unsigned>;
        ///System tick timer calibration value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> cal{}; 
    }
    namespace Nonenmisrc{    ///<NMI Source Control
        using Addr = Register::Address<0x40048174,0x7fffffe0,0,unsigned>;
        ///The IRQ number of the interrupt that is to act as the Non-Maskable interrupt (NMI) if bit 31 is 1. See Section 4.3 for the list of interrupt sources and their IRQ numbers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> irqno{}; 
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt (NMI) source selected by bits 4:0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmien{}; 
    }
    namespace Nonepintsel0{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048178,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
    }
    namespace Nonepintsel1{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x4004817c,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
    }
    namespace Nonepintsel2{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048180,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
    }
    namespace Nonepintsel3{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048184,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
    }
    namespace Nonepintsel4{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048188,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
    }
    namespace Nonepintsel5{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x4004818c,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
    }
    namespace Nonepintsel6{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048190,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
    }
    namespace Nonepintsel7{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048194,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
    }
    namespace Nonepdruncfg{    ///<Power configuration register
        using Addr = Register::Address<0x40048238,0xfffe1f08,0,unsigned>;
        ///IRC oscillator output power-down
        enum class ircoutPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace ircoutPdValC{
            constexpr MPL::Value<ircoutPdVal,ircoutPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<ircoutPdVal,ircoutPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ircoutPdVal> ircoutPd{}; 
        ///IRC oscillator power-down
        enum class ircPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace ircPdValC{
            constexpr MPL::Value<ircPdVal,ircPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<ircPdVal,ircPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ircPdVal> ircPd{}; 
        ///Flash power-down
        enum class flashPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace flashPdValC{
            constexpr MPL::Value<flashPdVal,flashPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<flashPdVal,flashPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,flashPdVal> flashPd{}; 
        ///ADC power-down
        enum class adcPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace adcPdValC{
            constexpr MPL::Value<adcPdVal,adcPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<adcPdVal,adcPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,adcPdVal> adcPd{}; 
        ///Crystal oscillator power-down
        enum class xtalPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace xtalPdValC{
            constexpr MPL::Value<xtalPdVal,xtalPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<xtalPdVal,xtalPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,xtalPdVal> xtalPd{}; 
        ///Watchdog oscillator power-down
        enum class wdtoscPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace wdtoscPdValC{
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wdtoscPdVal> wdtoscPd{}; 
        ///System PLL power-down
        enum class syspllPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace syspllPdValC{
            constexpr MPL::Value<syspllPdVal,syspllPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<syspllPdVal,syspllPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,syspllPdVal> syspllPd{}; 
        ///Low frequency oscillator power-down
        enum class lfoscPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace lfoscPdValC{
            constexpr MPL::Value<lfoscPdVal,lfoscPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<lfoscPdVal,lfoscPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,lfoscPdVal> lfoscPd{}; 
        ///DAC power-down
        enum class dacPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace dacPdValC{
            constexpr MPL::Value<dacPdVal,dacPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<dacPdVal,dacPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,dacPdVal> dacPd{}; 
        ///Temperature Sensor power-down
        enum class tsPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace tsPdValC{
            constexpr MPL::Value<tsPdVal,tsPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<tsPdVal,tsPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,tsPdVal> tsPd{}; 
        ///Analog Comparator power-down
        enum class acompPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace acompPdValC{
            constexpr MPL::Value<acompPdVal,acompPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<acompPdVal,acompPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,acompPdVal> acompPd{}; 
    }
    namespace NonedeviceId{    ///<Device ID
        using Addr = Register::Address<0x400483f4,0x00000000,0,unsigned>;
        ///Part ID number for LPC11Axx  LPC11A11FBD48/001 = 0x455E C02B LPC11A11FHN33/001 = 0x455E C02B LPC11A12FBD48/101 = 0x4574 802B LPC11A12FHN33/101 = 0x4574 802B LPC11A13FBD48/201 = 0x4582 402B LPC11A13FHI33/201 = 0x4582 402B LPC11A14FBD48/301 = 0x35A0 002B; 0x45A0 002B LPC11A14FHN33/301 = 0x35A0 002B; 0x45A0 002B LPC11A02UK = 0x4D5C C02B LPC11A04UK = 0x4D80 002B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
}
