#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration (SYSCON)
    namespace Nonesysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40048000,0xfffffffc,0,unsigned>;
        ///System memory remap. Value 0x3 is reserved.
        enum class mapVal {
            bootLoaderModeIn=0x00000000,     ///<Boot Loader Mode. Interrupt vectors are re-mapped to Boot ROM.
            userRamModeInter=0x00000001,     ///<User RAM Mode. Interrupt vectors are re-mapped to Static RAM.
            userFlashModeInt=0x00000002,     ///<User Flash Mode. Interrupt vectors are not re-mapped and reside in Flash.
        };
        namespace mapValC{
            constexpr MPL::Value<mapVal,mapVal::bootLoaderModeIn> bootLoaderModeIn{};
            constexpr MPL::Value<mapVal,mapVal::userRamModeInter> userRamModeInter{};
            constexpr MPL::Value<mapVal,mapVal::userFlashModeInt> userFlashModeInt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,mapVal> map{}; 
    }
    namespace Nonepresetctrl{    ///<Peripheral reset control
        using Addr = Register::Address<0x40048004,0xffffe000,0,unsigned>;
        ///SPI0 reset control
        enum class spi0RstNVal {
            assertTheSpi0Rese=0x00000000,     ///<Assert the SPI0 reset.
            clearTheSpi0Reset=0x00000001,     ///<Clear the SPI0 reset.
        };
        namespace spi0RstNValC{
            constexpr MPL::Value<spi0RstNVal,spi0RstNVal::assertTheSpi0Rese> assertTheSpi0Rese{};
            constexpr MPL::Value<spi0RstNVal,spi0RstNVal::clearTheSpi0Reset> clearTheSpi0Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,spi0RstNVal> spi0RstN{}; 
        ///SPI1 reset control
        enum class spi1RstNVal {
            assertTheSpi1Rese=0x00000000,     ///<Assert the SPI1 reset.
            clearTheSpi1Reset=0x00000001,     ///<Clear the SPI1 reset.
        };
        namespace spi1RstNValC{
            constexpr MPL::Value<spi1RstNVal,spi1RstNVal::assertTheSpi1Rese> assertTheSpi1Rese{};
            constexpr MPL::Value<spi1RstNVal,spi1RstNVal::clearTheSpi1Reset> clearTheSpi1Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,spi1RstNVal> spi1RstN{}; 
        ///UART fractional baud rate generator (UARTFRG) reset control
        enum class uartfrgRstNVal {
            assertTheUartfrgR=0x00000000,     ///<Assert the UARTFRG reset.
            clearTheUartfrgRe=0x00000001,     ///<Clear the UARTFRG reset.
        };
        namespace uartfrgRstNValC{
            constexpr MPL::Value<uartfrgRstNVal,uartfrgRstNVal::assertTheUartfrgR> assertTheUartfrgR{};
            constexpr MPL::Value<uartfrgRstNVal,uartfrgRstNVal::clearTheUartfrgRe> clearTheUartfrgRe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,uartfrgRstNVal> uartfrgRstN{}; 
        ///USART0 reset control
        enum class usart0RstNVal {
            assertTheUsart0Re=0x00000000,     ///<Assert the USART0 reset.
            clearTheUsart0Res=0x00000001,     ///<Clear the USART0 reset.
        };
        namespace usart0RstNValC{
            constexpr MPL::Value<usart0RstNVal,usart0RstNVal::assertTheUsart0Re> assertTheUsart0Re{};
            constexpr MPL::Value<usart0RstNVal,usart0RstNVal::clearTheUsart0Res> clearTheUsart0Res{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,usart0RstNVal> usart0RstN{}; 
        ///U1ART1 reset control
        enum class uart1RstNVal {
            assertTheUartRese=0x00000000,     ///<Assert the UART reset.
            clearTheUart1Rese=0x00000001,     ///<Clear the UART1 reset.
        };
        namespace uart1RstNValC{
            constexpr MPL::Value<uart1RstNVal,uart1RstNVal::assertTheUartRese> assertTheUartRese{};
            constexpr MPL::Value<uart1RstNVal,uart1RstNVal::clearTheUart1Rese> clearTheUart1Rese{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,uart1RstNVal> uart1RstN{}; 
        ///UART2 reset control
        enum class uart2RstNVal {
            assertTheUart2Res=0x00000000,     ///<Assert the UART2 reset.
            clearTheUart2Rese=0x00000001,     ///<Clear the UART2 reset.
        };
        namespace uart2RstNValC{
            constexpr MPL::Value<uart2RstNVal,uart2RstNVal::assertTheUart2Res> assertTheUart2Res{};
            constexpr MPL::Value<uart2RstNVal,uart2RstNVal::clearTheUart2Rese> clearTheUart2Rese{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,uart2RstNVal> uart2RstN{}; 
        ///I2C reset control
        enum class i2cRstNVal {
            assertTheI2cReset=0x00000000,     ///<Assert the I2C reset.
            clearTheI2cReset=0x00000001,     ///<Clear the I2C reset.
        };
        namespace i2cRstNValC{
            constexpr MPL::Value<i2cRstNVal,i2cRstNVal::assertTheI2cReset> assertTheI2cReset{};
            constexpr MPL::Value<i2cRstNVal,i2cRstNVal::clearTheI2cReset> clearTheI2cReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,i2cRstNVal> i2cRstN{}; 
        ///Multi-rate timer (MRT) reset control
        enum class mrtRstNVal {
            assertTheMrtReset=0x00000000,     ///<Assert the MRT reset.
            clearTheMrtReset=0x00000001,     ///<Clear the MRT reset.
        };
        namespace mrtRstNValC{
            constexpr MPL::Value<mrtRstNVal,mrtRstNVal::assertTheMrtReset> assertTheMrtReset{};
            constexpr MPL::Value<mrtRstNVal,mrtRstNVal::clearTheMrtReset> clearTheMrtReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,mrtRstNVal> mrtRstN{}; 
        ///SCT reset control
        enum class sctRstNVal {
            assertTheSctReset=0x00000000,     ///<Assert the SCT reset.
            clearTheSctReset=0x00000001,     ///<Clear the SCT reset.
        };
        namespace sctRstNValC{
            constexpr MPL::Value<sctRstNVal,sctRstNVal::assertTheSctReset> assertTheSctReset{};
            constexpr MPL::Value<sctRstNVal,sctRstNVal::clearTheSctReset> clearTheSctReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,sctRstNVal> sctRstN{}; 
        ///Self wake-up timer (WKT) reset control
        enum class wktRstNVal {
            assertTheWktReset=0x00000000,     ///<Assert the WKT reset.
            clearTheWktReset=0x00000001,     ///<Clear the WKT reset.
        };
        namespace wktRstNValC{
            constexpr MPL::Value<wktRstNVal,wktRstNVal::assertTheWktReset> assertTheWktReset{};
            constexpr MPL::Value<wktRstNVal,wktRstNVal::clearTheWktReset> clearTheWktReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wktRstNVal> wktRstN{}; 
        ///GPIO and GPIO pin interrupt reset control
        enum class gpioRstNVal {
            assertTheGpioRese=0x00000000,     ///<Assert the GPIO reset.
            clearTheGpioReset=0x00000001,     ///<Clear the GPIO reset.
        };
        namespace gpioRstNValC{
            constexpr MPL::Value<gpioRstNVal,gpioRstNVal::assertTheGpioRese> assertTheGpioRese{};
            constexpr MPL::Value<gpioRstNVal,gpioRstNVal::clearTheGpioReset> clearTheGpioReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,gpioRstNVal> gpioRstN{}; 
        ///Flash controller reset control
        enum class flashRstNVal {
            assertTheFlashCon=0x00000000,     ///<Assert the flash controller reset.
            clearTheFlashCont=0x00000001,     ///<Clear the flash controller reset.
        };
        namespace flashRstNValC{
            constexpr MPL::Value<flashRstNVal,flashRstNVal::assertTheFlashCon> assertTheFlashCon{};
            constexpr MPL::Value<flashRstNVal,flashRstNVal::clearTheFlashCont> clearTheFlashCont{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,flashRstNVal> flashRstN{}; 
        ///Analog comparator reset control
        enum class acmpRstNVal {
            assertTheAnalogCo=0x00000000,     ///<Assert the analog comparator reset.
            clearTheAnalogCom=0x00000001,     ///<Clear the analog comparator controller reset.
        };
        namespace acmpRstNValC{
            constexpr MPL::Value<acmpRstNVal,acmpRstNVal::assertTheAnalogCo> assertTheAnalogCo{};
            constexpr MPL::Value<acmpRstNVal,acmpRstNVal::clearTheAnalogCom> clearTheAnalogCom{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,acmpRstNVal> acmpRstN{}; 
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
            disabledOscillator=0x00000000,     ///<Disabled. Oscillator is not bypassed.
            enabledPllInput=0x00000001,     ///<Enabled. PLL input (sys_osc_clk) is fed directly from the XTALIN pin bypassing the oscillator. Use this mode when using an external clock source instead of the crystal oscillator.
        };
        namespace bypassValC{
            constexpr MPL::Value<bypassVal,bypassVal::disabledOscillator> disabledOscillator{};
            constexpr MPL::Value<bypassVal,bypassVal::enabledPllInput> enabledPllInput{};
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
        ///Status of the external RESET pin. External reset status.
        enum class extrstVal {
            noResetEventDetec=0x00000000,     ///<No reset event detected.
            resetDetectedWrit=0x00000001,     ///<Reset detected. Writing a one clears this reset.
        };
        namespace extrstValC{
            constexpr MPL::Value<extrstVal,extrstVal::noResetEventDetec> noResetEventDetec{};
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
            irc=0x00000000,     ///<IRC
            crystalOscillator=0x00000001,     ///<Crystal Oscillator (SYSOSC)
            reserved=0x00000002,     ///<Reserved.
            clkinExternalCloc=0x00000003,     ///<CLKIN. External clock input.
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::irc> irc{};
            constexpr MPL::Value<selVal,selVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
            constexpr MPL::Value<selVal,selVal::clkinExternalCloc> clkinExternalCloc{};
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
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            pllOutput=0x00000003,     ///<PLL output
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
            constexpr MPL::Value<selVal,selVal::pllInput> pllInput{};
            constexpr MPL::Value<selVal,selVal::watchdogOscillator> watchdogOscillator{};
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
        using Addr = Register::Address<0x40048080,0xfff00000,0,unsigned>;
        ///Enables the clock for the AHB, the APB bridge, the Cortex-M0+ core clocks, SYSCON, and the PMU. This bit is read only and always reads as 1.
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
        ///Enables clock for SRAM.
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
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace flashregValC{
            constexpr MPL::Value<flashregVal,flashregVal::disable> disable{};
            constexpr MPL::Value<flashregVal,flashregVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,flashregVal> flashreg{}; 
        ///Enables clock for flash.
        enum class flashVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace flashValC{
            constexpr MPL::Value<flashVal,flashVal::disable> disable{};
            constexpr MPL::Value<flashVal,flashVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,flashVal> flash{}; 
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
        ///Enables clock for GPIO port registers and GPIO pin interrupt registers.
        enum class gpioVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace gpioValC{
            constexpr MPL::Value<gpioVal,gpioVal::disable> disable{};
            constexpr MPL::Value<gpioVal,gpioVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,gpioVal> gpio{}; 
        ///Enables clock for switch matrix.
        enum class swmVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace swmValC{
            constexpr MPL::Value<swmVal,swmVal::disable> disable{};
            constexpr MPL::Value<swmVal,swmVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,swmVal> swm{}; 
        ///Enables clock for state configurable timer.
        enum class sctVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace sctValC{
            constexpr MPL::Value<sctVal,sctVal::disable> disable{};
            constexpr MPL::Value<sctVal,sctVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,sctVal> sct{}; 
        ///Enables clock for self wake-up timer.
        enum class wktVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace wktValC{
            constexpr MPL::Value<wktVal,wktVal::disable> disable{};
            constexpr MPL::Value<wktVal,wktVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wktVal> wkt{}; 
        ///Enables clock for multi-rate timer.
        enum class mrtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace mrtValC{
            constexpr MPL::Value<mrtVal,mrtVal::disable> disable{};
            constexpr MPL::Value<mrtVal,mrtVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,mrtVal> mrt{}; 
        ///Enables clock for SPI0.
        enum class spi0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace spi0ValC{
            constexpr MPL::Value<spi0Val,spi0Val::disable> disable{};
            constexpr MPL::Value<spi0Val,spi0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,spi0Val> spi0{}; 
        ///Enables clock for SPI1.
        enum class spi1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace spi1ValC{
            constexpr MPL::Value<spi1Val,spi1Val::disable> disable{};
            constexpr MPL::Value<spi1Val,spi1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,spi1Val> spi1{}; 
        ///Enables clock for CRC.
        enum class crcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace crcValC{
            constexpr MPL::Value<crcVal,crcVal::disable> disable{};
            constexpr MPL::Value<crcVal,crcVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,crcVal> crc{}; 
        ///Enables clock for UART0.
        enum class uart0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace uart0ValC{
            constexpr MPL::Value<uart0Val,uart0Val::disable> disable{};
            constexpr MPL::Value<uart0Val,uart0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,uart0Val> uart0{}; 
        ///Enables clock for UART1.
        enum class uart1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace uart1ValC{
            constexpr MPL::Value<uart1Val,uart1Val::disable> disable{};
            constexpr MPL::Value<uart1Val,uart1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,uart1Val> uart1{}; 
        ///Enables clock for UART2.
        enum class uart2Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace uart2ValC{
            constexpr MPL::Value<uart2Val,uart2Val::disable> disable{};
            constexpr MPL::Value<uart2Val,uart2Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,uart2Val> uart2{}; 
        ///Enables clock for WWDT.
        enum class wwdtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace wwdtValC{
            constexpr MPL::Value<wwdtVal,wwdtVal::disable> disable{};
            constexpr MPL::Value<wwdtVal,wwdtVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,wwdtVal> wwdt{}; 
        ///Enables clock for IOCON block.
        enum class ioconVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ioconValC{
            constexpr MPL::Value<ioconVal,ioconVal::disable> disable{};
            constexpr MPL::Value<ioconVal,ioconVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ioconVal> iocon{}; 
        ///Enables clock to analog comparator.
        enum class acmpVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace acmpValC{
            constexpr MPL::Value<acmpVal,acmpVal::disable> disable{};
            constexpr MPL::Value<acmpVal,acmpVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,acmpVal> acmp{}; 
    }
    namespace Noneuartclkdiv{    ///<UART clock divider
        using Addr = Register::Address<0x40048094,0xffffff00,0,unsigned>;
        ///UART clock divider values.  0: Clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneclkoutsel{    ///<CLKOUT clock source select
        using Addr = Register::Address<0x400480e0,0xfffffffc,0,unsigned>;
        ///CLKOUT clock source
        enum class selVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            crystalOscillator=0x00000001,     ///<Crystal oscillator (SYSOSC)
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            mainClock=0x00000003,     ///<Main clock
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
            constexpr MPL::Value<selVal,selVal::crystalOscillator> crystalOscillator{};
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
    namespace Noneclkoutdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x400480e8,0xffffff00,0,unsigned>;
        ///CLKOUT clock divider values 0: Disable CLKOUT clock divider.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneuartfrgdiv{    ///<UART fractional generator divider value
        using Addr = Register::Address<0x400480f0,0xffffff00,0,unsigned>;
        ///Denominator of the fractional divider. DIV is equal to the programmed value +1. Always set to 0xFF to use with the fractional baud rate generator.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneuartfrgmult{    ///<UART fractional generator multiplier value
        using Addr = Register::Address<0x400480f4,0xffffff00,0,unsigned>;
        ///Numerator of the fractional divider. MULT is equal to the programmed value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mult{}; 
    }
    namespace Noneexttracecmd{    ///<External trace buffer command register
        using Addr = Register::Address<0x400480fc,0xfffffffc,0,unsigned>;
        ///Trace start command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        ///Trace stop command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop{}; 
    }
    namespace Nonepioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x40048100,0xfffc0000,0,unsigned>;
        ///State of PIO0_17 through PIO0_0 at power-on reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Noneioconclkdiv6{    ///<Peripheral clock 6 to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048134,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv5{    ///<Peripheral clock 5 to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048138,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv4{    ///<Peripheral clock 4 to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x4004813c,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv3{    ///<Peripheral clock 3 to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048140,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv2{    ///<Peripheral clock 2 to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048144,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv1{    ///<Peripheral clock 1 to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048148,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv0{    ///<Peripheral clock 0 to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x4004814c,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonebodctrl{    ///<Brown-Out Detect
        using Addr = Register::Address<0x40048150,0xffffffe0,0,unsigned>;
        ///BOD reset level
        enum class bodrstlevVal {
            level0TheResetA=0x00000000,     ///<Level 0: The reset assertion threshold voltage is ; the reset de-assertion threshold voltage is .
            level1TheResetA=0x00000001,     ///<Level 1: The reset assertion threshold voltage is ; the reset de-assertion threshold voltage is .
            level2TheResetA=0x00000002,     ///<Level 2: The reset assertion threshold voltage is ; the reset de-assertion threshold voltage is .
            level3TheResetA=0x00000003,     ///<Level 3: The reset assertion threshold voltage is ; the reset de-assertion threshold voltage is.
        };
        namespace bodrstlevValC{
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level0TheResetA> level0TheResetA{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level1TheResetA> level1TheResetA{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level2TheResetA> level2TheResetA{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level3TheResetA> level3TheResetA{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,bodrstlevVal> bodrstlev{}; 
        ///BOD interrupt level
        enum class bodintvalVal {
            level0TheInterru=0x00000000,     ///<Level 0: The interrupt assertion threshold voltage is ; the interrupt de-assertion threshold voltage is
            level1theInterrup=0x00000001,     ///<Level 1:The interrupt assertion threshold voltage is ; the interrupt de-assertion threshold voltage is .
            level2TheInterru=0x00000002,     ///<Level 2: The interrupt assertion threshold voltage is  ; the interrupt de-assertion threshold voltage is .
            level3TheInterru=0x00000003,     ///<Level 3: The interrupt assertion threshold voltage is ; the interrupt de-assertion threshold voltage is .
        };
        namespace bodintvalValC{
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level0TheInterru> level0TheInterru{};
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
    namespace Noneirqlatency{    ///<IQR delay. Allows trade-off between interrupt latency and determinism.
        using Addr = Register::Address<0x40048170,0xffffff00,0,unsigned>;
        ///8-bit latency value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> latency{}; 
    }
    namespace Nonenmisrc{    ///<NMI Source Control
        using Addr = Register::Address<0x40048174,0x7fffffe0,0,unsigned>;
        ///The IRQ number of the interrupt that acts as the Non-Maskable Interrupt (NMI) if bit 31 is 1. See Table 58 for the list of interrupt sources and their IRQ numbers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> irqno{}; 
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt (NMI) source selected by bits 4:0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmien{}; 
    }
    namespace Nonepintsel0{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048178,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel1{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x4004817c,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel2{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048180,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel3{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048184,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel4{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048188,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel5{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x4004818c,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel6{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048190,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel7{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048194,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonestarterp0{    ///<Start logic 0 pin wake-up enable register
        using Addr = Register::Address<0x40048204,0xffffff00,0,unsigned>;
        ///GPIO pin interrupt 0 wake-up
        enum class pint0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint0ValC{
            constexpr MPL::Value<pint0Val,pint0Val::disabled> disabled{};
            constexpr MPL::Value<pint0Val,pint0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pint0Val> pint0{}; 
        ///GPIO pin interrupt 1 wake-up
        enum class pint1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint1ValC{
            constexpr MPL::Value<pint1Val,pint1Val::disabled> disabled{};
            constexpr MPL::Value<pint1Val,pint1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pint1Val> pint1{}; 
        ///GPIO pin interrupt 2 wake-up
        enum class pint2Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint2ValC{
            constexpr MPL::Value<pint2Val,pint2Val::disabled> disabled{};
            constexpr MPL::Value<pint2Val,pint2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pint2Val> pint2{}; 
        ///GPIO pin interrupt 3 wake-up
        enum class pint3Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint3ValC{
            constexpr MPL::Value<pint3Val,pint3Val::disabled> disabled{};
            constexpr MPL::Value<pint3Val,pint3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pint3Val> pint3{}; 
        ///GPIO pin interrupt 4 wake-up
        enum class pint4Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint4ValC{
            constexpr MPL::Value<pint4Val,pint4Val::disabled> disabled{};
            constexpr MPL::Value<pint4Val,pint4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pint4Val> pint4{}; 
        ///GPIO pin interrupt 5 wake-up
        enum class pint5Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint5ValC{
            constexpr MPL::Value<pint5Val,pint5Val::disabled> disabled{};
            constexpr MPL::Value<pint5Val,pint5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pint5Val> pint5{}; 
        ///GPIO pin interrupt 6 wake-up
        enum class pint6Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint6ValC{
            constexpr MPL::Value<pint6Val,pint6Val::disabled> disabled{};
            constexpr MPL::Value<pint6Val,pint6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pint6Val> pint6{}; 
        ///GPIO pin interrupt 7 wake-up
        enum class pint7Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint7ValC{
            constexpr MPL::Value<pint7Val,pint7Val::disabled> disabled{};
            constexpr MPL::Value<pint7Val,pint7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pint7Val> pint7{}; 
    }
    namespace Nonestarterp1{    ///<Start logic 1 interrupt wake-up enable register
        using Addr = Register::Address<0x40048214,0xffff4fff,0,unsigned>;
        ///WWDT interrupt wake-up
        enum class wwdtVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace wwdtValC{
            constexpr MPL::Value<wwdtVal,wwdtVal::disabled> disabled{};
            constexpr MPL::Value<wwdtVal,wwdtVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,wwdtVal> wwdt{}; 
        ///BOD interrupt wake-up
        enum class bodVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace bodValC{
            constexpr MPL::Value<bodVal,bodVal::disabled> disabled{};
            constexpr MPL::Value<bodVal,bodVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,bodVal> bod{}; 
        ///Self wake-up timer interrupt wake-up
        enum class wktVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace wktValC{
            constexpr MPL::Value<wktVal,wktVal::disabled> disabled{};
            constexpr MPL::Value<wktVal,wktVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,wktVal> wkt{}; 
    }
    namespace Nonepdsleepcfg{    ///<Power-down states in deep-sleep mode
        using Addr = Register::Address<0x40048230,0xffffffb7,0,unsigned>;
        ///BOD power-down control for Deep-sleep and Power-down mode
        enum class bodPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace bodPdValC{
            constexpr MPL::Value<bodPdVal,bodPdVal::powered> powered{};
            constexpr MPL::Value<bodPdVal,bodPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bodPdVal> bodPd{}; 
        ///Watchdog oscillator power-down control for Deep-sleep and Power-down mode. Changing this bit to powered-down has no effect when the LOCK bit in the WWDT MOD register is set. In this case, the watchdog oscillator is always running.
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
    namespace Nonepdawakecfg{    ///<Power-down states for wake-up from deep-sleep
        using Addr = Register::Address<0x40048234,0xffff7f10,0,unsigned>;
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
        ///Crystal oscillator wake-up configuration
        enum class sysoscPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace sysoscPdValC{
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::powered> powered{};
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sysoscPdVal> sysoscPd{}; 
        ///Watchdog oscillator wake-up configuration. Changing this bit to powered-down has no effect when the LOCK bit in the WWDT MOD register is set. In this case, the watchdog oscillator is always running.
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
        ///Analog comparator wake-up configuration
        enum class acmpVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace acmpValC{
            constexpr MPL::Value<acmpVal,acmpVal::powered> powered{};
            constexpr MPL::Value<acmpVal,acmpVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,acmpVal> acmp{}; 
    }
    namespace Nonepdruncfg{    ///<Power configuration register
        using Addr = Register::Address<0x40048238,0xffff7f10,0,unsigned>;
        ///IRC oscillator output power
        enum class ircoutPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace ircoutPdValC{
            constexpr MPL::Value<ircoutPdVal,ircoutPdVal::powered> powered{};
            constexpr MPL::Value<ircoutPdVal,ircoutPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ircoutPdVal> ircoutPd{}; 
        ///IRC oscillator power down
        enum class ircPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace ircPdValC{
            constexpr MPL::Value<ircPdVal,ircPdVal::powered> powered{};
            constexpr MPL::Value<ircPdVal,ircPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ircPdVal> ircPd{}; 
        ///Flash power down
        enum class flashPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace flashPdValC{
            constexpr MPL::Value<flashPdVal,flashPdVal::powered> powered{};
            constexpr MPL::Value<flashPdVal,flashPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,flashPdVal> flashPd{}; 
        ///BOD power down
        enum class bodPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace bodPdValC{
            constexpr MPL::Value<bodPdVal,bodPdVal::powered> powered{};
            constexpr MPL::Value<bodPdVal,bodPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bodPdVal> bodPd{}; 
        ///Crystal oscillator power down
        enum class sysoscPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace sysoscPdValC{
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::powered> powered{};
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sysoscPdVal> sysoscPd{}; 
        ///Watchdog oscillator power down. Changing this bit to powered-down has no effect when the LOCK bit in the WWDT MOD register is set. In this case, the watchdog oscillator is always running.
        enum class wdtoscPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace wdtoscPdValC{
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::powered> powered{};
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wdtoscPdVal> wdtoscPd{}; 
        ///System PLL power down
        enum class syspllPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace syspllPdValC{
            constexpr MPL::Value<syspllPdVal,syspllPdVal::powered> powered{};
            constexpr MPL::Value<syspllPdVal,syspllPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,syspllPdVal> syspllPd{}; 
        ///Analog comparator power down
        enum class acmpVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace acmpValC{
            constexpr MPL::Value<acmpVal,acmpVal::powered> powered{};
            constexpr MPL::Value<acmpVal,acmpVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,acmpVal> acmp{}; 
    }
    namespace NonedeviceId{    ///<Device ID
        using Addr = Register::Address<0x400483f4,0x00000000,0,unsigned>;
        ///TBD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
}
