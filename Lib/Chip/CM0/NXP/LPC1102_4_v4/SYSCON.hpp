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
            userFlashModeInt=0x00000003,     ///<User Flash Mode. Interrupt vectors are not re-mapped and reside in Flash.
        };
        namespace mapValC{
            constexpr MPL::Value<mapVal,mapVal::bootLoaderModeIn> bootLoaderModeIn{};
            constexpr MPL::Value<mapVal,mapVal::userRamModeInter> userRamModeInter{};
            constexpr MPL::Value<mapVal,mapVal::userFlashModeInt> userFlashModeInt{};
            constexpr MPL::Value<mapVal,mapVal::userFlashModeInt> userFlashModeInt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,mapVal> map{}; 
    }
    namespace Nonepresetctrl{    ///<Peripheral reset control
        using Addr = Register::Address<0x40048004,0xfffffffe,0,unsigned>;
        ///SPI0 reset control
        enum class ssp0RstNVal {
            resetsTheSpi0Peri=0x00000000,     ///<Resets the SPI0 peripheral.
            spi0ResetDeAssert=0x00000001,     ///<SPI0 reset de-asserted.
        };
        namespace ssp0RstNValC{
            constexpr MPL::Value<ssp0RstNVal,ssp0RstNVal::resetsTheSpi0Peri> resetsTheSpi0Peri{};
            constexpr MPL::Value<ssp0RstNVal,ssp0RstNVal::spi0ResetDeAssert> spi0ResetDeAssert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ssp0RstNVal> ssp0RstN{}; 
    }
    namespace Nonesyspllctrl{    ///<System PLL control
        using Addr = Register::Address<0x40048008,0xffffff80,0,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1. 00000: Division ratio M = 1 to 11111: Division ration M = 32
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
            bypassEnabledPll=0x00000001,     ///<Bypass enabled. PLL input (sys_osc_clk) is fed directly from the XTALIN pin bypassing the oscillator. Use this mode when using an external clock source instead of the crystal oscillator.
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
    namespace Noneircctrl{    ///<IRC control
        using Addr = Register::Address<0x40048028,0xffffff00,0,unsigned>;
        ///Trim value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> trim{}; 
    }
    namespace Nonesysrststat{    ///<System reset status register
        using Addr = Register::Address<0x40048030,0xffffffe0,0,unsigned>;
        ///POR reset status
        enum class porVal {
            noPorDetected=0x00000000,     ///<No POR detected
            porDetectedWritin=0x00000001,     ///<POR detected. Writing a one clears this reset.
        };
        namespace porValC{
            constexpr MPL::Value<porVal,porVal::noPorDetected> noPorDetected{};
            constexpr MPL::Value<porVal,porVal::porDetectedWritin> porDetectedWritin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,porVal> por{}; 
        ///Status of the external RESET pin
        enum class extrstVal {
            noResetPinEventD=0x00000000,     ///<No RESET pin event detected
            resetDetectedWrit=0x00000001,     ///<RESET detected. Writing a one clears this reset.
        };
        namespace extrstValC{
            constexpr MPL::Value<extrstVal,extrstVal::noResetPinEventD> noResetPinEventD{};
            constexpr MPL::Value<extrstVal,extrstVal::resetDetectedWrit> resetDetectedWrit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,extrstVal> extrst{}; 
        ///Status of the Watchdog reset
        enum class wdtVal {
            noWdtResetDetecte=0x00000000,     ///<No WDT reset detected
            wdtResetDetected=0x00000001,     ///<WDT reset detected. Writing a one clears this reset.
        };
        namespace wdtValC{
            constexpr MPL::Value<wdtVal,wdtVal::noWdtResetDetecte> noWdtResetDetecte{};
            constexpr MPL::Value<wdtVal,wdtVal::wdtResetDetected> wdtResetDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wdtVal> wdt{}; 
        ///Status of the Brown-out detect reset
        enum class bodVal {
            noBodResetDetecte=0x00000000,     ///<No BOD reset detected
            bodResetDetected=0x00000001,     ///<BOD reset detected. Writing a one clears this reset.
        };
        namespace bodValC{
            constexpr MPL::Value<bodVal,bodVal::noBodResetDetecte> noBodResetDetecte{};
            constexpr MPL::Value<bodVal,bodVal::bodResetDetected> bodResetDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bodVal> bod{}; 
        ///Status of the software system reset
        enum class sysrstVal {
            noSystemResetDete=0x00000000,     ///<No System reset detected
            systemResetDetecte=0x00000001,     ///<System reset detected. Writing a one clears this reset.
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
            ircOscillator=0x00000000,     ///<IRC oscillator
            systemOscillator=0x00000001,     ///<System oscillator
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
            constexpr MPL::Value<selVal,selVal::systemOscillator> systemOscillator{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
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
            ircOscillator=0x00000000,     ///<IRC oscillator
            inputClockToSyste=0x00000001,     ///<Input clock to system PLL
            wdtOscillator=0x00000002,     ///<WDT oscillator
            systemPllClockOut=0x00000003,     ///<System PLL clock out
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
            constexpr MPL::Value<selVal,selVal::inputClockToSyste> inputClockToSyste{};
            constexpr MPL::Value<selVal,selVal::wdtOscillator> wdtOscillator{};
            constexpr MPL::Value<selVal,selVal::systemPllClockOut> systemPllClockOut{};
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
    namespace Nonesysahbclkdiv{    ///<System AHB clock divider
        using Addr = Register::Address<0x40048078,0xffffff00,0,unsigned>;
        ///System AHB clock divider values 0: System clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonesysahbclkctrl{    ///<System AHB clock control
        using Addr = Register::Address<0x40048080,0xfffe4020,0,unsigned>;
        ///Enables clock for AHB to APB bridge, to the AHB matrix, to the Cortex-M0 FCLK and HCLK, to the SysCon, and to the PMU. This bit is read only.
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
        ///Enables clock for flash register interface.
        enum class flashregVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace flashregValC{
            constexpr MPL::Value<flashregVal,flashregVal::disabled> disabled{};
            constexpr MPL::Value<flashregVal,flashregVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,flashregVal> flashreg{}; 
        ///Enables clock for flash array access.
        enum class flasharrayVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace flasharrayValC{
            constexpr MPL::Value<flasharrayVal,flasharrayVal::disabled> disabled{};
            constexpr MPL::Value<flasharrayVal,flasharrayVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,flasharrayVal> flasharray{}; 
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
        ///Enables clock for SPI0.
        enum class ssp0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ssp0ValC{
            constexpr MPL::Value<ssp0Val,ssp0Val::disable> disable{};
            constexpr MPL::Value<ssp0Val,ssp0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ssp0Val> ssp0{}; 
        ///Enables clock for UART.
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
    }
    namespace Nonessp0clkdiv{    ///<SPI0 clock divder
        using Addr = Register::Address<0x40048094,0xffffff00,0,unsigned>;
        ///SPI0_PCLK clock divider values 0: Disable SPI0_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneuartclkdiv{    ///<UART clock divder
        using Addr = Register::Address<0x40048098,0xffffff00,0,unsigned>;
        ///UART_PCLK clock divider values 0: Disable UART_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonewdtclksel{    ///<WDT clock source select
        using Addr = Register::Address<0x400480d0,0xfffffffc,0,unsigned>;
        ///WDT clock source
        enum class selVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            mainClock=0x00000001,     ///<Main clock
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            reserved=0x00000003,     ///<Reserved
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
            constexpr MPL::Value<selVal,selVal::mainClock> mainClock{};
            constexpr MPL::Value<selVal,selVal::watchdogOscillator> watchdogOscillator{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Nonewdtclkuen{    ///<WDT clock source update enable
        using Addr = Register::Address<0x400480d4,0xfffffffe,0,unsigned>;
        ///Enable WDT clock source update
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
    namespace Nonewdtclkdiv{    ///<WDT clock divider
        using Addr = Register::Address<0x400480d8,0xffffff00,0,unsigned>;
        ///WDT clock divider values 0: Disable WDCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneclkoutclksel{    ///<CLKOUT clock source select
        using Addr = Register::Address<0x400480e0,0xfffffffc,0,unsigned>;
        ///CLKOUT clock source
        enum class selVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            systemOscillator=0x00000001,     ///<System oscillator
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            mainClock=0x00000003,     ///<Main clock
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
            constexpr MPL::Value<selVal,selVal::systemOscillator> systemOscillator{};
            constexpr MPL::Value<selVal,selVal::watchdogOscillator> watchdogOscillator{};
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
    namespace Noneclkoutclkdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x400480e8,0xffffff00,0,unsigned>;
        ///Clock output divider values 0: Disable CLKOUT.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonepioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x40048100,0xfff300fe,0,unsigned>;
        ///Raw reset status input PIO0_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cappio00{}; 
        ///Raw reset status input PIO0_8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cappio08{}; 
        ///Raw reset status input PIO0_9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cappio09{}; 
        ///Raw reset status input PIO0_10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cappio010{}; 
        ///Raw reset status input PIO0_11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cappio011{}; 
        ///Raw reset status input PIO1_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cappio10{}; 
        ///Raw reset status input PIO1_1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cappio11{}; 
        ///Raw reset status input PIO1_2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cappio12{}; 
        ///Raw reset status input PIO1_3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cappio13{}; 
        ///Raw reset status input PIO1_6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cappio16{}; 
        ///Raw reset status input PIO1_7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cappio17{}; 
    }
    namespace Nonebodctrl{    ///<BOD control
        using Addr = Register::Address<0x40048150,0xffffffe0,0,unsigned>;
        ///BOD reset level
        enum class bodrstlevVal {
            level0Reserved=0x00000000,     ///<Level 0: Reserved.
            level1TheResetA=0x00000001,     ///<Level 1: The reset assertion threshold voltage is 2.06 V; the reset de-assertion threshold voltage is 2.15 V.
            level2TheResetA=0x00000002,     ///<Level 2: The reset assertion threshold voltage is 2.35 V; the reset de-assertion threshold voltage is 2.43 V.
            level3TheResetA=0x00000003,     ///<Level 3: The reset assertion threshold voltage is 2.63 V; the reset de-assertion threshold voltage is 2.71 V.
        };
        namespace bodrstlevValC{
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level0Reserved> level0Reserved{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level1TheResetA> level1TheResetA{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level2TheResetA> level2TheResetA{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level3TheResetA> level3TheResetA{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,bodrstlevVal> bodrstlev{}; 
        ///BOD interrupt level
        enum class bodintvalVal {
            level0Reserved=0x00000000,     ///<Level 0: Reserved.
            level1theInterrup=0x00000001,     ///<Level 1:The interrupt assertion threshold voltage is 2.22 V; the interrupt de-assertion threshold voltage is 2.35 V.
            level2TheInterru=0x00000002,     ///<Level 2: The interrupt assertion threshold voltage is 2.52 V; the interrupt de-assertion threshold voltage is 2.66 V.
            level3TheInterru=0x00000003,     ///<Level 3: The interrupt assertion threshold voltage is 2.80 V; the interrupt de-assertion threshold voltage is 2.90 V.
        };
        namespace bodintvalValC{
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level0Reserved> level0Reserved{};
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level1theInterrup> level1theInterrup{};
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level2TheInterru> level2TheInterru{};
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level3TheInterru> level3TheInterru{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,bodintvalVal> bodintval{}; 
        ///BOD reset enable
        enum class bodrstenaVal {
            disableResetFuncti=0x00000000,     ///<Disable reset function.
            enableResetFunctio=0x00000001,     ///<Enable reset function.
        };
        namespace bodrstenaValC{
            constexpr MPL::Value<bodrstenaVal,bodrstenaVal::disableResetFuncti> disableResetFuncti{};
            constexpr MPL::Value<bodrstenaVal,bodrstenaVal::enableResetFunctio> enableResetFunctio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bodrstenaVal> bodrstena{}; 
    }
    namespace Nonesystckcal{    ///<System tick counter calibration
        using Addr = Register::Address<0x40048154,0xfc000000,0,unsigned>;
        ///System tick timer calibration value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> cal{}; 
    }
    namespace Nonestartaprp0{    ///<Start logic edge control register 0
        using Addr = Register::Address<0x40048200,0xffffe0fe,0,unsigned>;
        ///Edge select for start logic input PIO0_0
        enum class aprpio00Val {
            fallingEdge=0x00000000,     ///<Falling edge
            risingEdge=0x00000001,     ///<Rising edge
        };
        namespace aprpio00ValC{
            constexpr MPL::Value<aprpio00Val,aprpio00Val::fallingEdge> fallingEdge{};
            constexpr MPL::Value<aprpio00Val,aprpio00Val::risingEdge> risingEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,aprpio00Val> aprpio00{}; 
        ///Edge select for start logic input PIO0_8
        enum class aprpio08Val {
            fallingEdge=0x00000000,     ///<Falling edge
            risingEdge=0x00000001,     ///<Rising edge
        };
        namespace aprpio08ValC{
            constexpr MPL::Value<aprpio08Val,aprpio08Val::fallingEdge> fallingEdge{};
            constexpr MPL::Value<aprpio08Val,aprpio08Val::risingEdge> risingEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,aprpio08Val> aprpio08{}; 
        ///Edge select for start logic input PIO0_9
        enum class aprpio09Val {
            fallingEdge=0x00000000,     ///<Falling edge
            risingEdge=0x00000001,     ///<Rising edge
        };
        namespace aprpio09ValC{
            constexpr MPL::Value<aprpio09Val,aprpio09Val::fallingEdge> fallingEdge{};
            constexpr MPL::Value<aprpio09Val,aprpio09Val::risingEdge> risingEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,aprpio09Val> aprpio09{}; 
        ///Edge select for start logic input PIO0_10
        enum class aprpio010Val {
            fallingEdge=0x00000000,     ///<Falling edge
            risingEdge=0x00000001,     ///<Rising edge
        };
        namespace aprpio010ValC{
            constexpr MPL::Value<aprpio010Val,aprpio010Val::fallingEdge> fallingEdge{};
            constexpr MPL::Value<aprpio010Val,aprpio010Val::risingEdge> risingEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,aprpio010Val> aprpio010{}; 
        ///Edge select for start logic input PIO0_11
        enum class aprpio011Val {
            fallingEdge=0x00000000,     ///<Falling edge
            risingEdge=0x00000001,     ///<Rising edge
        };
        namespace aprpio011ValC{
            constexpr MPL::Value<aprpio011Val,aprpio011Val::fallingEdge> fallingEdge{};
            constexpr MPL::Value<aprpio011Val,aprpio011Val::risingEdge> risingEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,aprpio011Val> aprpio011{}; 
        ///Edge select for start logic input PIO1_0.
        enum class aprpio10Val {
            fallingEdge=0x00000000,     ///<Falling edge
            risingEdge=0x00000001,     ///<Rising edge
        };
        namespace aprpio10ValC{
            constexpr MPL::Value<aprpio10Val,aprpio10Val::fallingEdge> fallingEdge{};
            constexpr MPL::Value<aprpio10Val,aprpio10Val::risingEdge> risingEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,aprpio10Val> aprpio10{}; 
    }
    namespace Nonestarterp0{    ///<Start logic signal enable register 0
        using Addr = Register::Address<0x40048204,0xffffe0fe,0,unsigned>;
        ///Enable start signal for start logic input PIO0_0
        enum class erpio00Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace erpio00ValC{
            constexpr MPL::Value<erpio00Val,erpio00Val::disabled> disabled{};
            constexpr MPL::Value<erpio00Val,erpio00Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,erpio00Val> erpio00{}; 
        ///Enable start signal for start logic input PIO0_8
        enum class erpio08Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace erpio08ValC{
            constexpr MPL::Value<erpio08Val,erpio08Val::disabled> disabled{};
            constexpr MPL::Value<erpio08Val,erpio08Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,erpio08Val> erpio08{}; 
        ///Enable start signal for start logic input PIO0_9
        enum class erpio09Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace erpio09ValC{
            constexpr MPL::Value<erpio09Val,erpio09Val::disabled> disabled{};
            constexpr MPL::Value<erpio09Val,erpio09Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,erpio09Val> erpio09{}; 
        ///Enable start signal for start logic input PIO0_10
        enum class erpio010Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace erpio010ValC{
            constexpr MPL::Value<erpio010Val,erpio010Val::disabled> disabled{};
            constexpr MPL::Value<erpio010Val,erpio010Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,erpio010Val> erpio010{}; 
        ///Enable start signal for start logic input PIO0_11
        enum class erpio011Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace erpio011ValC{
            constexpr MPL::Value<erpio011Val,erpio011Val::disabled> disabled{};
            constexpr MPL::Value<erpio011Val,erpio011Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,erpio011Val> erpio011{}; 
        ///Enable start signal for start logic input PIO1_0
        enum class erpio10Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace erpio10ValC{
            constexpr MPL::Value<erpio10Val,erpio10Val::disabled> disabled{};
            constexpr MPL::Value<erpio10Val,erpio10Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,erpio10Val> erpio10{}; 
    }
    namespace Nonestartrsrp0clr{    ///<Start logic reset register 0
        using Addr = Register::Address<0x40048208,0xffffe0fe,0,unsigned>;
        ///Start signal reset for start logic input PIO0_0
        enum class rsrpio00Val {
            =0x00000000,     ///<RESERVED
            writeResetStartS=0x00000001,     ///<Write: reset start signal
        };
        namespace rsrpio00ValC{
            constexpr MPL::Value<rsrpio00Val,rsrpio00Val::> {};
            constexpr MPL::Value<rsrpio00Val,rsrpio00Val::writeResetStartS> writeResetStartS{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rsrpio00Val> rsrpio00{}; 
        ///Start signal reset for start logic input PIO0_8
        enum class rsrpio08Val {
            =0x00000000,     ///<RESERVED
            writeResetStartS=0x00000001,     ///<Write: reset start signal
        };
        namespace rsrpio08ValC{
            constexpr MPL::Value<rsrpio08Val,rsrpio08Val::> {};
            constexpr MPL::Value<rsrpio08Val,rsrpio08Val::writeResetStartS> writeResetStartS{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,rsrpio08Val> rsrpio08{}; 
        ///Start signal reset for start logic input PIO0_9
        enum class rsrpio09Val {
            =0x00000000,     ///<RESERVED
            writeResetStartS=0x00000001,     ///<Write: reset start signal
        };
        namespace rsrpio09ValC{
            constexpr MPL::Value<rsrpio09Val,rsrpio09Val::> {};
            constexpr MPL::Value<rsrpio09Val,rsrpio09Val::writeResetStartS> writeResetStartS{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,rsrpio09Val> rsrpio09{}; 
        ///Start signal reset for start logic input PIO0_10
        enum class rsrpio010Val {
            =0x00000000,     ///<RESERVED
            writeResetStartS=0x00000001,     ///<Write: reset start signal
        };
        namespace rsrpio010ValC{
            constexpr MPL::Value<rsrpio010Val,rsrpio010Val::> {};
            constexpr MPL::Value<rsrpio010Val,rsrpio010Val::writeResetStartS> writeResetStartS{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rsrpio010Val> rsrpio010{}; 
        ///Start signal reset for start logic input PIO0_11
        enum class rsrpio011Val {
            =0x00000000,     ///<RESERVED
            writeResetStartS=0x00000001,     ///<Write: reset start signal
        };
        namespace rsrpio011ValC{
            constexpr MPL::Value<rsrpio011Val,rsrpio011Val::> {};
            constexpr MPL::Value<rsrpio011Val,rsrpio011Val::writeResetStartS> writeResetStartS{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,rsrpio011Val> rsrpio011{}; 
        ///Start signal reset for start logic input PIO1_0
        enum class rsrpio10Val {
            =0x00000000,     ///<RESERVED
            writeResetStartS=0x00000001,     ///<Write: reset start signal
        };
        namespace rsrpio10ValC{
            constexpr MPL::Value<rsrpio10Val,rsrpio10Val::> {};
            constexpr MPL::Value<rsrpio10Val,rsrpio10Val::writeResetStartS> writeResetStartS{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,rsrpio10Val> rsrpio10{}; 
    }
    namespace Nonestartsrp0{    ///<Start logic status register 0
        using Addr = Register::Address<0x4004820c,0xffffe0fe,0,unsigned>;
        ///Start signal status for start logic input 0PIO0_0
        enum class srpio00Val {
            noStartSignalRece=0x00000000,     ///<No start signal received
            startSignalPending=0x00000001,     ///<Start signal pending
        };
        namespace srpio00ValC{
            constexpr MPL::Value<srpio00Val,srpio00Val::noStartSignalRece> noStartSignalRece{};
            constexpr MPL::Value<srpio00Val,srpio00Val::startSignalPending> startSignalPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,srpio00Val> srpio00{}; 
        ///Start signal status for start logic input PIO0_8
        enum class srpio08Val {
            noStartSignalRece=0x00000000,     ///<No start signal received
            startSignalPending=0x00000001,     ///<Start signal pending
        };
        namespace srpio08ValC{
            constexpr MPL::Value<srpio08Val,srpio08Val::noStartSignalRece> noStartSignalRece{};
            constexpr MPL::Value<srpio08Val,srpio08Val::startSignalPending> startSignalPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srpio08Val> srpio08{}; 
        ///Start signal status for start logic input PIO0_9
        enum class srpio09Val {
            noStartSignalRece=0x00000000,     ///<No start signal received
            startSignalPending=0x00000001,     ///<Start signal pending
        };
        namespace srpio09ValC{
            constexpr MPL::Value<srpio09Val,srpio09Val::noStartSignalRece> noStartSignalRece{};
            constexpr MPL::Value<srpio09Val,srpio09Val::startSignalPending> startSignalPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,srpio09Val> srpio09{}; 
        ///Start signal status for start logic input PIO0_10
        enum class srpio010Val {
            noStartSignalRece=0x00000000,     ///<No start signal received
            startSignalPending=0x00000001,     ///<Start signal pending
        };
        namespace srpio010ValC{
            constexpr MPL::Value<srpio010Val,srpio010Val::noStartSignalRece> noStartSignalRece{};
            constexpr MPL::Value<srpio010Val,srpio010Val::startSignalPending> startSignalPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,srpio010Val> srpio010{}; 
        ///Start signal status for start logic input PIO0_11
        enum class srpio011Val {
            noStartSignalRece=0x00000000,     ///<No start signal received
            startSignalPending=0x00000001,     ///<Start signal pending
        };
        namespace srpio011ValC{
            constexpr MPL::Value<srpio011Val,srpio011Val::noStartSignalRece> noStartSignalRece{};
            constexpr MPL::Value<srpio011Val,srpio011Val::startSignalPending> startSignalPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,srpio011Val> srpio011{}; 
        ///Start signal status for start logic input PIO1_0
        enum class srpio10Val {
            noStartSignalRece=0x00000000,     ///<No start signal received
            startSignalPending=0x00000001,     ///<Start signal pending
        };
        namespace srpio10ValC{
            constexpr MPL::Value<srpio10Val,srpio10Val::noStartSignalRece> noStartSignalRece{};
            constexpr MPL::Value<srpio10Val,srpio10Val::startSignalPending> startSignalPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,srpio10Val> srpio10{}; 
    }
    namespace Nonepdsleepcfg{    ///<Power-down states in Deep-sleep mode
        using Addr = Register::Address<0x40048230,0xffffffb7,0,unsigned>;
        ///BOD power-down control in Deep-sleep mode, see Table 35.
        enum class bodPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace bodPdValC{
            constexpr MPL::Value<bodPdVal,bodPdVal::powered> powered{};
            constexpr MPL::Value<bodPdVal,bodPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bodPdVal> bodPd{}; 
        ///Watchdog oscillator power control in Deep-sleep mode, see Table 35.
        enum class wdtoscPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace wdtoscPdValC{
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::powered> powered{};
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wdtoscPdVal> wdtoscPd{}; 
    }
    namespace Nonepdawakecfg{    ///<Power-down states after wake-up from Deep-sleep mode
        using Addr = Register::Address<0x40048234,0xffffff00,0,unsigned>;
        ///IRC oscillator output wake-up configuration
        enum class ircoutPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace ircoutPdValC{
            constexpr MPL::Value<ircoutPdVal,ircoutPdVal::powered> powered{};
            constexpr MPL::Value<ircoutPdVal,ircoutPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ircoutPdVal> ircoutPd{}; 
        ///IRC oscillator power-down wake-up configuration
        enum class ircPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace ircPdValC{
            constexpr MPL::Value<ircPdVal,ircPdVal::powered> powered{};
            constexpr MPL::Value<ircPdVal,ircPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ircPdVal> ircPd{}; 
        ///Flash wake-up configuration
        enum class flashPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace flashPdValC{
            constexpr MPL::Value<flashPdVal,flashPdVal::powered> powered{};
            constexpr MPL::Value<flashPdVal,flashPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,flashPdVal> flashPd{}; 
        ///BOD wake-up configuration
        enum class bodPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace bodPdValC{
            constexpr MPL::Value<bodPdVal,bodPdVal::powered> powered{};
            constexpr MPL::Value<bodPdVal,bodPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bodPdVal> bodPd{}; 
        ///ADC wake-up configuration
        enum class adcPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace adcPdValC{
            constexpr MPL::Value<adcPdVal,adcPdVal::powered> powered{};
            constexpr MPL::Value<adcPdVal,adcPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,adcPdVal> adcPd{}; 
        ///System oscillator wake-up configuration
        enum class sysoscPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace sysoscPdValC{
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::powered> powered{};
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sysoscPdVal> sysoscPd{}; 
        ///Watchdog oscillator wake-up configuration
        enum class wdtoscPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace wdtoscPdValC{
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::powered> powered{};
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wdtoscPdVal> wdtoscPd{}; 
        ///System PLL wake-up configuration
        enum class syspllPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace syspllPdValC{
            constexpr MPL::Value<syspllPdVal,syspllPdVal::powered> powered{};
            constexpr MPL::Value<syspllPdVal,syspllPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,syspllPdVal> syspllPd{}; 
    }
    namespace Nonepdruncfg{    ///<Power-down configuration register
        using Addr = Register::Address<0x40048238,0xffffff00,0,unsigned>;
        ///IRC oscillator output power-down
        enum class ircoutPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace ircoutPdValC{
            constexpr MPL::Value<ircoutPdVal,ircoutPdVal::powered> powered{};
            constexpr MPL::Value<ircoutPdVal,ircoutPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ircoutPdVal> ircoutPd{}; 
        ///IRC oscillator power-down
        enum class ircPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace ircPdValC{
            constexpr MPL::Value<ircPdVal,ircPdVal::powered> powered{};
            constexpr MPL::Value<ircPdVal,ircPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ircPdVal> ircPd{}; 
        ///Flash power-down
        enum class flashPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace flashPdValC{
            constexpr MPL::Value<flashPdVal,flashPdVal::powered> powered{};
            constexpr MPL::Value<flashPdVal,flashPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,flashPdVal> flashPd{}; 
        ///BOD power-down
        enum class bodPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace bodPdValC{
            constexpr MPL::Value<bodPdVal,bodPdVal::powered> powered{};
            constexpr MPL::Value<bodPdVal,bodPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bodPdVal> bodPd{}; 
        ///ADC power-down
        enum class adcPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace adcPdValC{
            constexpr MPL::Value<adcPdVal,adcPdVal::powered> powered{};
            constexpr MPL::Value<adcPdVal,adcPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,adcPdVal> adcPd{}; 
        ///System oscillator power-down
        enum class sysoscPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace sysoscPdValC{
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::powered> powered{};
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sysoscPdVal> sysoscPd{}; 
        ///Watchdog oscillator power-down
        enum class wdtoscPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace wdtoscPdValC{
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::powered> powered{};
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wdtoscPdVal> wdtoscPd{}; 
        ///System PLL power-down
        enum class syspllPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace syspllPdValC{
            constexpr MPL::Value<syspllPdVal,syspllPdVal::powered> powered{};
            constexpr MPL::Value<syspllPdVal,syspllPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,syspllPdVal> syspllPd{}; 
    }
    namespace NonedeviceId{    ///<Device ID
        using Addr = Register::Address<0x400483f4,0x00000000,0,unsigned>;
        ///Part ID numbers for LPC1102/04 parts LPC1102 = 0x2500 102B LPC1104 = 0x2548 102B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
}
