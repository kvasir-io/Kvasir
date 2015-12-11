#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration (SYSCON)
    namespace Nonesysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40048000,0xfffffffc,0,unsigned>;
        ///System memory remap. Value 0x3 is reserved.
        enum class MapVal {
            bootLoaderModeIn=0x00000000,     ///<Boot Loader Mode. Interrupt vectors are re-mapped to Boot ROM.
            userRamModeInter=0x00000001,     ///<User RAM Mode. Interrupt vectors are re-mapped to Static RAM.
            userFlashModeInt=0x00000002,     ///<User Flash Mode. Interrupt vectors are not re-mapped and reside in Flash.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MapVal> map{}; 
        namespace MapValC{
            constexpr Register::FieldValue<decltype(map)::Type,MapVal::bootLoaderModeIn> bootLoaderModeIn{};
            constexpr Register::FieldValue<decltype(map)::Type,MapVal::userRamModeInter> userRamModeInter{};
            constexpr Register::FieldValue<decltype(map)::Type,MapVal::userFlashModeInt> userFlashModeInt{};
        }
        }
    }
    namespace Nonepresetctrl{    ///<Peripheral reset control
        using Addr = Register::Address<0x40048004,0xffffe000,0,unsigned>;
        ///SPI0 reset control
        enum class Spi0rstnVal {
            assertTheSpi0Rese=0x00000000,     ///<Assert the SPI0 reset.
            clearTheSpi0Reset=0x00000001,     ///<Clear the SPI0 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Spi0rstnVal> spi0RstN{}; 
        namespace Spi0rstnValC{
            constexpr Register::FieldValue<decltype(spi0RstN)::Type,Spi0rstnVal::assertTheSpi0Rese> assertTheSpi0Rese{};
            constexpr Register::FieldValue<decltype(spi0RstN)::Type,Spi0rstnVal::clearTheSpi0Reset> clearTheSpi0Reset{};
        }
        }
        ///SPI1 reset control
        enum class Spi1rstnVal {
            assertTheSpi1Rese=0x00000000,     ///<Assert the SPI1 reset.
            clearTheSpi1Reset=0x00000001,     ///<Clear the SPI1 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Spi1rstnVal> spi1RstN{}; 
        namespace Spi1rstnValC{
            constexpr Register::FieldValue<decltype(spi1RstN)::Type,Spi1rstnVal::assertTheSpi1Rese> assertTheSpi1Rese{};
            constexpr Register::FieldValue<decltype(spi1RstN)::Type,Spi1rstnVal::clearTheSpi1Reset> clearTheSpi1Reset{};
        }
        }
        ///UART fractional baud rate generator (UARTFRG) reset control
        enum class UartfrgrstnVal {
            assertTheUartfrgR=0x00000000,     ///<Assert the UARTFRG reset.
            clearTheUartfrgRe=0x00000001,     ///<Clear the UARTFRG reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,UartfrgrstnVal> uartfrgRstN{}; 
        namespace UartfrgrstnValC{
            constexpr Register::FieldValue<decltype(uartfrgRstN)::Type,UartfrgrstnVal::assertTheUartfrgR> assertTheUartfrgR{};
            constexpr Register::FieldValue<decltype(uartfrgRstN)::Type,UartfrgrstnVal::clearTheUartfrgRe> clearTheUartfrgRe{};
        }
        }
        ///USART0 reset control
        enum class Usart0rstnVal {
            assertTheUsart0Re=0x00000000,     ///<Assert the USART0 reset.
            clearTheUsart0Res=0x00000001,     ///<Clear the USART0 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Usart0rstnVal> usart0RstN{}; 
        namespace Usart0rstnValC{
            constexpr Register::FieldValue<decltype(usart0RstN)::Type,Usart0rstnVal::assertTheUsart0Re> assertTheUsart0Re{};
            constexpr Register::FieldValue<decltype(usart0RstN)::Type,Usart0rstnVal::clearTheUsart0Res> clearTheUsart0Res{};
        }
        }
        ///U1ART1 reset control
        enum class Uart1rstnVal {
            assertTheUartRese=0x00000000,     ///<Assert the UART reset.
            clearTheUart1Rese=0x00000001,     ///<Clear the UART1 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Uart1rstnVal> uart1RstN{}; 
        namespace Uart1rstnValC{
            constexpr Register::FieldValue<decltype(uart1RstN)::Type,Uart1rstnVal::assertTheUartRese> assertTheUartRese{};
            constexpr Register::FieldValue<decltype(uart1RstN)::Type,Uart1rstnVal::clearTheUart1Rese> clearTheUart1Rese{};
        }
        }
        ///UART2 reset control
        enum class Uart2rstnVal {
            assertTheUart2Res=0x00000000,     ///<Assert the UART2 reset.
            clearTheUart2Rese=0x00000001,     ///<Clear the UART2 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Uart2rstnVal> uart2RstN{}; 
        namespace Uart2rstnValC{
            constexpr Register::FieldValue<decltype(uart2RstN)::Type,Uart2rstnVal::assertTheUart2Res> assertTheUart2Res{};
            constexpr Register::FieldValue<decltype(uart2RstN)::Type,Uart2rstnVal::clearTheUart2Rese> clearTheUart2Rese{};
        }
        }
        ///I2C reset control
        enum class I2crstnVal {
            assertTheI2cReset=0x00000000,     ///<Assert the I2C reset.
            clearTheI2cReset=0x00000001,     ///<Clear the I2C reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,I2crstnVal> i2cRstN{}; 
        namespace I2crstnValC{
            constexpr Register::FieldValue<decltype(i2cRstN)::Type,I2crstnVal::assertTheI2cReset> assertTheI2cReset{};
            constexpr Register::FieldValue<decltype(i2cRstN)::Type,I2crstnVal::clearTheI2cReset> clearTheI2cReset{};
        }
        }
        ///Multi-rate timer (MRT) reset control
        enum class MrtrstnVal {
            assertTheMrtReset=0x00000000,     ///<Assert the MRT reset.
            clearTheMrtReset=0x00000001,     ///<Clear the MRT reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,MrtrstnVal> mrtRstN{}; 
        namespace MrtrstnValC{
            constexpr Register::FieldValue<decltype(mrtRstN)::Type,MrtrstnVal::assertTheMrtReset> assertTheMrtReset{};
            constexpr Register::FieldValue<decltype(mrtRstN)::Type,MrtrstnVal::clearTheMrtReset> clearTheMrtReset{};
        }
        }
        ///SCT reset control
        enum class SctrstnVal {
            assertTheSctReset=0x00000000,     ///<Assert the SCT reset.
            clearTheSctReset=0x00000001,     ///<Clear the SCT reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SctrstnVal> sctRstN{}; 
        namespace SctrstnValC{
            constexpr Register::FieldValue<decltype(sctRstN)::Type,SctrstnVal::assertTheSctReset> assertTheSctReset{};
            constexpr Register::FieldValue<decltype(sctRstN)::Type,SctrstnVal::clearTheSctReset> clearTheSctReset{};
        }
        }
        ///Self wake-up timer (WKT) reset control
        enum class WktrstnVal {
            assertTheWktReset=0x00000000,     ///<Assert the WKT reset.
            clearTheWktReset=0x00000001,     ///<Clear the WKT reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,WktrstnVal> wktRstN{}; 
        namespace WktrstnValC{
            constexpr Register::FieldValue<decltype(wktRstN)::Type,WktrstnVal::assertTheWktReset> assertTheWktReset{};
            constexpr Register::FieldValue<decltype(wktRstN)::Type,WktrstnVal::clearTheWktReset> clearTheWktReset{};
        }
        }
        ///GPIO and GPIO pin interrupt reset control
        enum class GpiorstnVal {
            assertTheGpioRese=0x00000000,     ///<Assert the GPIO reset.
            clearTheGpioReset=0x00000001,     ///<Clear the GPIO reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,GpiorstnVal> gpioRstN{}; 
        namespace GpiorstnValC{
            constexpr Register::FieldValue<decltype(gpioRstN)::Type,GpiorstnVal::assertTheGpioRese> assertTheGpioRese{};
            constexpr Register::FieldValue<decltype(gpioRstN)::Type,GpiorstnVal::clearTheGpioReset> clearTheGpioReset{};
        }
        }
        ///Flash controller reset control
        enum class FlashrstnVal {
            assertTheFlashCon=0x00000000,     ///<Assert the flash controller reset.
            clearTheFlashCont=0x00000001,     ///<Clear the flash controller reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,FlashrstnVal> flashRstN{}; 
        namespace FlashrstnValC{
            constexpr Register::FieldValue<decltype(flashRstN)::Type,FlashrstnVal::assertTheFlashCon> assertTheFlashCon{};
            constexpr Register::FieldValue<decltype(flashRstN)::Type,FlashrstnVal::clearTheFlashCont> clearTheFlashCont{};
        }
        }
        ///Analog comparator reset control
        enum class AcmprstnVal {
            assertTheAnalogCo=0x00000000,     ///<Assert the analog comparator reset.
            clearTheAnalogCom=0x00000001,     ///<Clear the analog comparator controller reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,AcmprstnVal> acmpRstN{}; 
        namespace AcmprstnValC{
            constexpr Register::FieldValue<decltype(acmpRstN)::Type,AcmprstnVal::assertTheAnalogCo> assertTheAnalogCo{};
            constexpr Register::FieldValue<decltype(acmpRstN)::Type,AcmprstnVal::clearTheAnalogCom> clearTheAnalogCom{};
        }
        }
    }
    namespace Nonesyspllctrl{    ///<System PLL control
        using Addr = Register::Address<0x40048008,0xffffff80,0,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1. 00000: Division ratio M = 1 to 11111: Division ratio M = 32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> msel{}; 
        ///Post divider ratio P. The division ratio is 2 x P.
        enum class PselVal {
            pEq1=0x00000000,     ///<P = 1
            pEq2=0x00000001,     ///<P = 2
            pEq4=0x00000002,     ///<P = 4
            pEq8=0x00000003,     ///<P = 8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq1> pEq1{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq2> pEq2{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq4> pEq4{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq8> pEq8{};
        }
        }
    }
    namespace Nonesyspllstat{    ///<System PLL status
        using Addr = Register::Address<0x4004800c,0xfffffffe,0,unsigned>;
        ///PLL lock status
        enum class LockVal {
            pllNotLocked=0x00000000,     ///<PLL not locked
            pllLocked=0x00000001,     ///<PLL locked
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LockVal> lock{}; 
        namespace LockValC{
            constexpr Register::FieldValue<decltype(lock)::Type,LockVal::pllNotLocked> pllNotLocked{};
            constexpr Register::FieldValue<decltype(lock)::Type,LockVal::pllLocked> pllLocked{};
        }
        }
    }
    namespace Nonesysoscctrl{    ///<System oscillator control
        using Addr = Register::Address<0x40048020,0xfffffffc,0,unsigned>;
        ///Bypass system oscillator
        enum class BypassVal {
            disabledOscillator=0x00000000,     ///<Disabled. Oscillator is not bypassed.
            enabledPllInput=0x00000001,     ///<Enabled. PLL input (sys_osc_clk) is fed directly from the XTALIN pin bypassing the oscillator. Use this mode when using an external clock source instead of the crystal oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::disabledOscillator> disabledOscillator{};
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::enabledPllInput> enabledPllInput{};
        }
        }
        ///Determines frequency range for Low-power oscillator.
        enum class FreqrangeVal {
            v120MhzFrequency=0x00000000,     ///<1 - 20 MHz frequency range.
            v1525MhzFrequenc=0x00000001,     ///<15 - 25 MHz frequency range
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FreqrangeVal> freqrange{}; 
        namespace FreqrangeValC{
            constexpr Register::FieldValue<decltype(freqrange)::Type,FreqrangeVal::v120MhzFrequency> v120MhzFrequency{};
            constexpr Register::FieldValue<decltype(freqrange)::Type,FreqrangeVal::v1525MhzFrequenc> v1525MhzFrequenc{};
        }
        }
    }
    namespace Nonewdtoscctrl{    ///<Watchdog oscillator control
        using Addr = Register::Address<0x40048024,0xfffffe00,0,unsigned>;
        ///Select divider for Fclkana.  wdt_osc_clk = Fclkana/ (2 x (1 + DIVSEL)) 00000: 2 x (1 + DIVSEL) = 2 00001: 2 x (1 + DIVSEL) = 4 to 11111: 2 x (1 + DIVSEL) = 64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Select watchdog oscillator analog output frequency (Fclkana).
        enum class FreqselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,5),Register::ReadWriteAccess,FreqselVal> freqsel{}; 
        namespace FreqselValC{
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v06Mhz> v06Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v105Mhz> v105Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v14Mhz> v14Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v175Mhz> v175Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v21Mhz> v21Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v24Mhz> v24Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v27Mhz> v27Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v30Mhz> v30Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v325Mhz> v325Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v35Mhz> v35Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v375Mhz> v375Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v40Mhz> v40Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v42Mhz> v42Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v44Mhz> v44Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v46Mhz> v46Mhz{};
        }
        }
    }
    namespace Nonesysrststat{    ///<System reset status register
        using Addr = Register::Address<0x40048030,0xffffffe0,0,unsigned>;
        ///POR reset status
        enum class PorVal {
            noPorDetected=0x00000000,     ///<No POR detected
            porDetectedWritin=0x00000001,     ///<POR detected. Writing a one clears this reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PorVal> por{}; 
        namespace PorValC{
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::noPorDetected> noPorDetected{};
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::porDetectedWritin> porDetectedWritin{};
        }
        }
        ///Status of the external RESET pin. External reset status.
        enum class ExtrstVal {
            noResetEventDetec=0x00000000,     ///<No reset event detected.
            resetDetectedWrit=0x00000001,     ///<Reset detected. Writing a one clears this reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ExtrstVal> extrst{}; 
        namespace ExtrstValC{
            constexpr Register::FieldValue<decltype(extrst)::Type,ExtrstVal::noResetEventDetec> noResetEventDetec{};
            constexpr Register::FieldValue<decltype(extrst)::Type,ExtrstVal::resetDetectedWrit> resetDetectedWrit{};
        }
        }
        ///Status of the Watchdog reset
        enum class WdtVal {
            noWdtResetDetecte=0x00000000,     ///<No WDT reset detected
            wdtResetDetected=0x00000001,     ///<WDT reset detected. Writing a one clears this reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WdtVal> wdt{}; 
        namespace WdtValC{
            constexpr Register::FieldValue<decltype(wdt)::Type,WdtVal::noWdtResetDetecte> noWdtResetDetecte{};
            constexpr Register::FieldValue<decltype(wdt)::Type,WdtVal::wdtResetDetected> wdtResetDetected{};
        }
        }
        ///Status of the Brown-out detect reset
        enum class BodVal {
            noBodResetDetecte=0x00000000,     ///<No BOD reset detected
            bodResetDetected=0x00000001,     ///<BOD reset detected. Writing a one clears this reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodVal> bod{}; 
        namespace BodValC{
            constexpr Register::FieldValue<decltype(bod)::Type,BodVal::noBodResetDetecte> noBodResetDetecte{};
            constexpr Register::FieldValue<decltype(bod)::Type,BodVal::bodResetDetected> bodResetDetected{};
        }
        }
        ///Status of the software system reset
        enum class SysrstVal {
            noSystemResetDete=0x00000000,     ///<No System reset detected
            systemResetDetecte=0x00000001,     ///<System reset detected. Writing a one clears this reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SysrstVal> sysrst{}; 
        namespace SysrstValC{
            constexpr Register::FieldValue<decltype(sysrst)::Type,SysrstVal::noSystemResetDete> noSystemResetDete{};
            constexpr Register::FieldValue<decltype(sysrst)::Type,SysrstVal::systemResetDetecte> systemResetDetecte{};
        }
        }
    }
    namespace Nonesyspllclksel{    ///<System PLL clock source select
        using Addr = Register::Address<0x40048040,0xfffffffc,0,unsigned>;
        ///System PLL clock source
        enum class SelVal {
            irc=0x00000000,     ///<IRC
            crystalOscillator=0x00000001,     ///<Crystal Oscillator (SYSOSC)
            clkinExternalCloc=0x00000003,     ///<CLKIN. External clock input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::irc> irc{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::clkinExternalCloc> clkinExternalCloc{};
        }
        }
    }
    namespace Nonesyspllclkuen{    ///<System PLL clock source update enable
        using Addr = Register::Address<0x40048044,0xfffffffe,0,unsigned>;
        ///Enable system PLL clock source update
        enum class EnaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnaVal> ena{}; 
        namespace EnaValC{
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::updateClockSource> updateClockSource{};
        }
        }
    }
    namespace Nonemainclksel{    ///<Main clock source select
        using Addr = Register::Address<0x40048070,0xfffffffc,0,unsigned>;
        ///Clock source for main clock
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            pllInput=0x00000001,     ///<PLL input
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            pllOutput=0x00000003,     ///<PLL output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::pllInput> pllInput{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::watchdogOscillator> watchdogOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::pllOutput> pllOutput{};
        }
        }
    }
    namespace Nonemainclkuen{    ///<Main clock source update enable
        using Addr = Register::Address<0x40048074,0xfffffffe,0,unsigned>;
        ///Enable main clock source update
        enum class EnaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnaVal> ena{}; 
        namespace EnaValC{
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::updateClockSource> updateClockSource{};
        }
        }
    }
    namespace Nonesysahbclkdiv{    ///<System clock divider
        using Addr = Register::Address<0x40048078,0xffffff00,0,unsigned>;
        ///System AHB clock divider values 0: System clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonesysahbclkctrl{    ///<System clock control
        using Addr = Register::Address<0x40048080,0xfff00000,0,unsigned>;
        ///Enables the clock for the AHB, the APB bridge, the Cortex-M0+ core clocks, SYSCON, and the PMU. This bit is read only and always reads as 1.
        enum class SysVal {
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SysVal> sys{}; 
        namespace SysValC{
            constexpr Register::FieldValue<decltype(sys)::Type,SysVal::enable> enable{};
        }
        }
        ///Enables clock for ROM.
        enum class RomVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RomVal> rom{}; 
        namespace RomValC{
            constexpr Register::FieldValue<decltype(rom)::Type,RomVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rom)::Type,RomVal::enable> enable{};
        }
        }
        ///Enables clock for SRAM.
        enum class RamVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RamVal> ram{}; 
        namespace RamValC{
            constexpr Register::FieldValue<decltype(ram)::Type,RamVal::disable> disable{};
            constexpr Register::FieldValue<decltype(ram)::Type,RamVal::enable> enable{};
        }
        }
        ///Enables clock for flash register interface.
        enum class FlashregVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FlashregVal> flashreg{}; 
        namespace FlashregValC{
            constexpr Register::FieldValue<decltype(flashreg)::Type,FlashregVal::disable> disable{};
            constexpr Register::FieldValue<decltype(flashreg)::Type,FlashregVal::enable> enable{};
        }
        }
        ///Enables clock for flash.
        enum class FlashVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FlashVal> flash{}; 
        namespace FlashValC{
            constexpr Register::FieldValue<decltype(flash)::Type,FlashVal::disable> disable{};
            constexpr Register::FieldValue<decltype(flash)::Type,FlashVal::enable> enable{};
        }
        }
        ///Enables clock for I2C.
        enum class I2cVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,I2cVal> i2c{}; 
        namespace I2cValC{
            constexpr Register::FieldValue<decltype(i2c)::Type,I2cVal::disable> disable{};
            constexpr Register::FieldValue<decltype(i2c)::Type,I2cVal::enable> enable{};
        }
        }
        ///Enables clock for GPIO port registers and GPIO pin interrupt registers.
        enum class GpioVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,GpioVal> gpio{}; 
        namespace GpioValC{
            constexpr Register::FieldValue<decltype(gpio)::Type,GpioVal::disable> disable{};
            constexpr Register::FieldValue<decltype(gpio)::Type,GpioVal::enable> enable{};
        }
        }
        ///Enables clock for switch matrix.
        enum class SwmVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SwmVal> swm{}; 
        namespace SwmValC{
            constexpr Register::FieldValue<decltype(swm)::Type,SwmVal::disable> disable{};
            constexpr Register::FieldValue<decltype(swm)::Type,SwmVal::enable> enable{};
        }
        }
        ///Enables clock for state configurable timer.
        enum class SctVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SctVal> sct{}; 
        namespace SctValC{
            constexpr Register::FieldValue<decltype(sct)::Type,SctVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sct)::Type,SctVal::enable> enable{};
        }
        }
        ///Enables clock for self wake-up timer.
        enum class WktVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,WktVal> wkt{}; 
        namespace WktValC{
            constexpr Register::FieldValue<decltype(wkt)::Type,WktVal::disable> disable{};
            constexpr Register::FieldValue<decltype(wkt)::Type,WktVal::enable> enable{};
        }
        }
        ///Enables clock for multi-rate timer.
        enum class MrtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,MrtVal> mrt{}; 
        namespace MrtValC{
            constexpr Register::FieldValue<decltype(mrt)::Type,MrtVal::disable> disable{};
            constexpr Register::FieldValue<decltype(mrt)::Type,MrtVal::enable> enable{};
        }
        }
        ///Enables clock for SPI0.
        enum class Spi0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Spi0Val> spi0{}; 
        namespace Spi0ValC{
            constexpr Register::FieldValue<decltype(spi0)::Type,Spi0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(spi0)::Type,Spi0Val::enable> enable{};
        }
        }
        ///Enables clock for SPI1.
        enum class Spi1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Spi1Val> spi1{}; 
        namespace Spi1ValC{
            constexpr Register::FieldValue<decltype(spi1)::Type,Spi1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(spi1)::Type,Spi1Val::enable> enable{};
        }
        }
        ///Enables clock for CRC.
        enum class CrcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,CrcVal> crc{}; 
        namespace CrcValC{
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::enable> enable{};
        }
        }
        ///Enables clock for UART0.
        enum class Uart0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Uart0Val> uart0{}; 
        namespace Uart0ValC{
            constexpr Register::FieldValue<decltype(uart0)::Type,Uart0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(uart0)::Type,Uart0Val::enable> enable{};
        }
        }
        ///Enables clock for UART1.
        enum class Uart1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Uart1Val> uart1{}; 
        namespace Uart1ValC{
            constexpr Register::FieldValue<decltype(uart1)::Type,Uart1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(uart1)::Type,Uart1Val::enable> enable{};
        }
        }
        ///Enables clock for UART2.
        enum class Uart2Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Uart2Val> uart2{}; 
        namespace Uart2ValC{
            constexpr Register::FieldValue<decltype(uart2)::Type,Uart2Val::disable> disable{};
            constexpr Register::FieldValue<decltype(uart2)::Type,Uart2Val::enable> enable{};
        }
        }
        ///Enables clock for WWDT.
        enum class WwdtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,WwdtVal> wwdt{}; 
        namespace WwdtValC{
            constexpr Register::FieldValue<decltype(wwdt)::Type,WwdtVal::disable> disable{};
            constexpr Register::FieldValue<decltype(wwdt)::Type,WwdtVal::enable> enable{};
        }
        }
        ///Enables clock for IOCON block.
        enum class IoconVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,IoconVal> iocon{}; 
        namespace IoconValC{
            constexpr Register::FieldValue<decltype(iocon)::Type,IoconVal::disable> disable{};
            constexpr Register::FieldValue<decltype(iocon)::Type,IoconVal::enable> enable{};
        }
        }
        ///Enables clock to analog comparator.
        enum class AcmpVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,AcmpVal> acmp{}; 
        namespace AcmpValC{
            constexpr Register::FieldValue<decltype(acmp)::Type,AcmpVal::disable> disable{};
            constexpr Register::FieldValue<decltype(acmp)::Type,AcmpVal::enable> enable{};
        }
        }
    }
    namespace Noneuartclkdiv{    ///<UART clock divider
        using Addr = Register::Address<0x40048094,0xffffff00,0,unsigned>;
        ///UART clock divider values.  0: Clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneclkoutsel{    ///<CLKOUT clock source select
        using Addr = Register::Address<0x400480e0,0xfffffffc,0,unsigned>;
        ///CLKOUT clock source
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            crystalOscillator=0x00000001,     ///<Crystal oscillator (SYSOSC)
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            mainClock=0x00000003,     ///<Main clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::watchdogOscillator> watchdogOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::mainClock> mainClock{};
        }
        }
    }
    namespace Noneclkoutuen{    ///<CLKOUT clock source update enable
        using Addr = Register::Address<0x400480e4,0xfffffffe,0,unsigned>;
        ///Enable CLKOUT clock source update
        enum class EnaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnaVal> ena{}; 
        namespace EnaValC{
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::updateClockSource> updateClockSource{};
        }
        }
    }
    namespace Noneclkoutdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x400480e8,0xffffff00,0,unsigned>;
        ///CLKOUT clock divider values 0: Disable CLKOUT clock divider.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneuartfrgdiv{    ///<UART fractional generator divider value
        using Addr = Register::Address<0x400480f0,0xffffff00,0,unsigned>;
        ///Denominator of the fractional divider. DIV is equal to the programmed value +1. Always set to 0xFF to use with the fractional baud rate generator.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneuartfrgmult{    ///<UART fractional generator multiplier value
        using Addr = Register::Address<0x400480f4,0xffffff00,0,unsigned>;
        ///Numerator of the fractional divider. MULT is equal to the programmed value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mult{}; 
    }
    namespace Noneexttracecmd{    ///<External trace buffer command register
        using Addr = Register::Address<0x400480fc,0xfffffffc,0,unsigned>;
        ///Trace start command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        ///Trace stop command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop{}; 
    }
    namespace Nonepioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x40048100,0xfffc0000,0,unsigned>;
        ///State of PIO0_17 through PIO0_0 at power-on reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Noneioconclkdiv6{    ///<Peripheral clock 6 to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048134,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv5{    ///<Peripheral clock 5 to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048138,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv4{    ///<Peripheral clock 4 to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x4004813c,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv3{    ///<Peripheral clock 3 to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048140,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv2{    ///<Peripheral clock 2 to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048144,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv1{    ///<Peripheral clock 1 to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048148,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv0{    ///<Peripheral clock 0 to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x4004814c,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonebodctrl{    ///<Brown-Out Detect
        using Addr = Register::Address<0x40048150,0xffffffe0,0,unsigned>;
        ///BOD reset level
        enum class BodrstlevVal {
            level0TheResetA=0x00000000,     ///<Level 0: The reset assertion threshold voltage is ; the reset de-assertion threshold voltage is .
            level1TheResetA=0x00000001,     ///<Level 1: The reset assertion threshold voltage is ; the reset de-assertion threshold voltage is .
            level2TheResetA=0x00000002,     ///<Level 2: The reset assertion threshold voltage is ; the reset de-assertion threshold voltage is .
            level3TheResetA=0x00000003,     ///<Level 3: The reset assertion threshold voltage is ; the reset de-assertion threshold voltage is.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,BodrstlevVal> bodrstlev{}; 
        namespace BodrstlevValC{
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level0TheResetA> level0TheResetA{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level1TheResetA> level1TheResetA{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level2TheResetA> level2TheResetA{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level3TheResetA> level3TheResetA{};
        }
        }
        ///BOD interrupt level
        enum class BodintvalVal {
            level0TheInterru=0x00000000,     ///<Level 0: The interrupt assertion threshold voltage is ; the interrupt de-assertion threshold voltage is
            level1theInterrup=0x00000001,     ///<Level 1:The interrupt assertion threshold voltage is ; the interrupt de-assertion threshold voltage is .
            level2TheInterru=0x00000002,     ///<Level 2: The interrupt assertion threshold voltage is  ; the interrupt de-assertion threshold voltage is .
            level3TheInterru=0x00000003,     ///<Level 3: The interrupt assertion threshold voltage is ; the interrupt de-assertion threshold voltage is .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,BodintvalVal> bodintval{}; 
        namespace BodintvalValC{
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level0TheInterru> level0TheInterru{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level1theInterrup> level1theInterrup{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level2TheInterru> level2TheInterru{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level3TheInterru> level3TheInterru{};
        }
        }
        ///BOD reset enable
        enum class BodrstenaVal {
            disableResetFuncti=0x00000000,     ///<Disable reset function.
            enableResetFunctio=0x00000001,     ///<Enable reset function.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BodrstenaVal> bodrstena{}; 
        namespace BodrstenaValC{
            constexpr Register::FieldValue<decltype(bodrstena)::Type,BodrstenaVal::disableResetFuncti> disableResetFuncti{};
            constexpr Register::FieldValue<decltype(bodrstena)::Type,BodrstenaVal::enableResetFunctio> enableResetFunctio{};
        }
        }
    }
    namespace Nonesystckcal{    ///<System tick counter calibration
        using Addr = Register::Address<0x40048154,0xfc000000,0,unsigned>;
        ///System tick timer calibration value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> cal{}; 
    }
    namespace Noneirqlatency{    ///<IQR delay. Allows trade-off between interrupt latency and determinism.
        using Addr = Register::Address<0x40048170,0xffffff00,0,unsigned>;
        ///8-bit latency value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> latency{}; 
    }
    namespace Nonenmisrc{    ///<NMI Source Control
        using Addr = Register::Address<0x40048174,0x7fffffe0,0,unsigned>;
        ///The IRQ number of the interrupt that acts as the Non-Maskable Interrupt (NMI) if bit 31 is 1. See Table 58 for the list of interrupt sources and their IRQ numbers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> irqno{}; 
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt (NMI) source selected by bits 4:0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmien{}; 
    }
    namespace Nonepintsel0{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048178,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel1{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x4004817c,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel2{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048180,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel3{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048184,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel4{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048188,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel5{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x4004818c,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel6{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048190,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel7{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048194,0xffffffc0,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO0_17 correspond to numbers 0 to 17).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonestarterp0{    ///<Start logic 0 pin wake-up enable register
        using Addr = Register::Address<0x40048204,0xffffff00,0,unsigned>;
        ///GPIO pin interrupt 0 wake-up
        enum class Pint0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pint0Val> pint0{}; 
        namespace Pint0ValC{
            constexpr Register::FieldValue<decltype(pint0)::Type,Pint0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint0)::Type,Pint0Val::enabled> enabled{};
        }
        }
        ///GPIO pin interrupt 1 wake-up
        enum class Pint1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pint1Val> pint1{}; 
        namespace Pint1ValC{
            constexpr Register::FieldValue<decltype(pint1)::Type,Pint1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint1)::Type,Pint1Val::enabled> enabled{};
        }
        }
        ///GPIO pin interrupt 2 wake-up
        enum class Pint2Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pint2Val> pint2{}; 
        namespace Pint2ValC{
            constexpr Register::FieldValue<decltype(pint2)::Type,Pint2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint2)::Type,Pint2Val::enabled> enabled{};
        }
        }
        ///GPIO pin interrupt 3 wake-up
        enum class Pint3Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pint3Val> pint3{}; 
        namespace Pint3ValC{
            constexpr Register::FieldValue<decltype(pint3)::Type,Pint3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint3)::Type,Pint3Val::enabled> enabled{};
        }
        }
        ///GPIO pin interrupt 4 wake-up
        enum class Pint4Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pint4Val> pint4{}; 
        namespace Pint4ValC{
            constexpr Register::FieldValue<decltype(pint4)::Type,Pint4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint4)::Type,Pint4Val::enabled> enabled{};
        }
        }
        ///GPIO pin interrupt 5 wake-up
        enum class Pint5Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pint5Val> pint5{}; 
        namespace Pint5ValC{
            constexpr Register::FieldValue<decltype(pint5)::Type,Pint5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint5)::Type,Pint5Val::enabled> enabled{};
        }
        }
        ///GPIO pin interrupt 6 wake-up
        enum class Pint6Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pint6Val> pint6{}; 
        namespace Pint6ValC{
            constexpr Register::FieldValue<decltype(pint6)::Type,Pint6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint6)::Type,Pint6Val::enabled> enabled{};
        }
        }
        ///GPIO pin interrupt 7 wake-up
        enum class Pint7Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pint7Val> pint7{}; 
        namespace Pint7ValC{
            constexpr Register::FieldValue<decltype(pint7)::Type,Pint7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint7)::Type,Pint7Val::enabled> enabled{};
        }
        }
    }
    namespace Nonestarterp1{    ///<Start logic 1 interrupt wake-up enable register
        using Addr = Register::Address<0x40048214,0xffff4fff,0,unsigned>;
        ///WWDT interrupt wake-up
        enum class WwdtVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,WwdtVal> wwdt{}; 
        namespace WwdtValC{
            constexpr Register::FieldValue<decltype(wwdt)::Type,WwdtVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(wwdt)::Type,WwdtVal::enabled> enabled{};
        }
        }
        ///BOD interrupt wake-up
        enum class BodVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,BodVal> bod{}; 
        namespace BodValC{
            constexpr Register::FieldValue<decltype(bod)::Type,BodVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bod)::Type,BodVal::enabled> enabled{};
        }
        }
        ///Self wake-up timer interrupt wake-up
        enum class WktVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,WktVal> wkt{}; 
        namespace WktValC{
            constexpr Register::FieldValue<decltype(wkt)::Type,WktVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(wkt)::Type,WktVal::enabled> enabled{};
        }
        }
    }
    namespace Nonepdsleepcfg{    ///<Power-down states in deep-sleep mode
        using Addr = Register::Address<0x40048230,0xffffffb7,0,unsigned>;
        ///BOD power-down control for Deep-sleep and Power-down mode
        enum class BodpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::poweredDown> poweredDown{};
        }
        }
        ///Watchdog oscillator power-down control for Deep-sleep and Power-down mode. Changing this bit to powered-down has no effect when the LOCK bit in the WWDT MOD register is set. In this case, the watchdog oscillator is always running.
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::poweredDown> poweredDown{};
        }
        }
    }
    namespace Nonepdawakecfg{    ///<Power-down states for wake-up from deep-sleep
        using Addr = Register::Address<0x40048234,0xffff7f10,0,unsigned>;
        ///IRC oscillator output wake-up configuration
        enum class IrcoutpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrcoutpdVal> ircoutPd{}; 
        namespace IrcoutpdValC{
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::poweredDown> poweredDown{};
        }
        }
        ///IRC oscillator power-down wake-up configuration
        enum class IrcpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrcpdVal> ircPd{}; 
        namespace IrcpdValC{
            constexpr Register::FieldValue<decltype(ircPd)::Type,IrcpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircPd)::Type,IrcpdVal::poweredDown> poweredDown{};
        }
        }
        ///Flash wake-up configuration
        enum class FlashpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FlashpdVal> flashPd{}; 
        namespace FlashpdValC{
            constexpr Register::FieldValue<decltype(flashPd)::Type,FlashpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(flashPd)::Type,FlashpdVal::poweredDown> poweredDown{};
        }
        }
        ///BOD wake-up configuration
        enum class BodpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::poweredDown> poweredDown{};
        }
        }
        ///Crystal oscillator wake-up configuration
        enum class SysoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SysoscpdVal> sysoscPd{}; 
        namespace SysoscpdValC{
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::poweredDown> poweredDown{};
        }
        }
        ///Watchdog oscillator wake-up configuration. Changing this bit to powered-down has no effect when the LOCK bit in the WWDT MOD register is set. In this case, the watchdog oscillator is always running.
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::poweredDown> poweredDown{};
        }
        }
        ///System PLL wake-up configuration
        enum class SyspllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SyspllpdVal> syspllPd{}; 
        namespace SyspllpdValC{
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::poweredDown> poweredDown{};
        }
        }
        ///Analog comparator wake-up configuration
        enum class AcmpVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AcmpVal> acmp{}; 
        namespace AcmpValC{
            constexpr Register::FieldValue<decltype(acmp)::Type,AcmpVal::powered> powered{};
            constexpr Register::FieldValue<decltype(acmp)::Type,AcmpVal::poweredDown> poweredDown{};
        }
        }
    }
    namespace Nonepdruncfg{    ///<Power configuration register
        using Addr = Register::Address<0x40048238,0xffff7f10,0,unsigned>;
        ///IRC oscillator output power
        enum class IrcoutpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrcoutpdVal> ircoutPd{}; 
        namespace IrcoutpdValC{
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::poweredDown> poweredDown{};
        }
        }
        ///IRC oscillator power down
        enum class IrcpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrcpdVal> ircPd{}; 
        namespace IrcpdValC{
            constexpr Register::FieldValue<decltype(ircPd)::Type,IrcpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircPd)::Type,IrcpdVal::poweredDown> poweredDown{};
        }
        }
        ///Flash power down
        enum class FlashpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FlashpdVal> flashPd{}; 
        namespace FlashpdValC{
            constexpr Register::FieldValue<decltype(flashPd)::Type,FlashpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(flashPd)::Type,FlashpdVal::poweredDown> poweredDown{};
        }
        }
        ///BOD power down
        enum class BodpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::poweredDown> poweredDown{};
        }
        }
        ///Crystal oscillator power down
        enum class SysoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SysoscpdVal> sysoscPd{}; 
        namespace SysoscpdValC{
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::poweredDown> poweredDown{};
        }
        }
        ///Watchdog oscillator power down. Changing this bit to powered-down has no effect when the LOCK bit in the WWDT MOD register is set. In this case, the watchdog oscillator is always running.
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::poweredDown> poweredDown{};
        }
        }
        ///System PLL power down
        enum class SyspllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SyspllpdVal> syspllPd{}; 
        namespace SyspllpdValC{
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::poweredDown> poweredDown{};
        }
        }
        ///Analog comparator power down
        enum class AcmpVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AcmpVal> acmp{}; 
        namespace AcmpValC{
            constexpr Register::FieldValue<decltype(acmp)::Type,AcmpVal::powered> powered{};
            constexpr Register::FieldValue<decltype(acmp)::Type,AcmpVal::poweredDown> poweredDown{};
        }
        }
    }
    namespace NonedeviceId{    ///<Device ID
        using Addr = Register::Address<0x400483f4,0x00000000,0,unsigned>;
        ///TBD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
}
