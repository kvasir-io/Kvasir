#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System configuration 
    namespace SysconSysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40048000,0x00000000,0x00000000,unsigned>;
        ///System memory remap
        enum class MapVal {
            bootLoaderModeIn=0x00000000,     ///<Boot Loader Mode. Interrupt vectors are re-mapped to Boot ROM.
            userRamModeInter=0x00000001,     ///<User RAM Mode. Interrupt vectors are re-mapped to Static RAM.
            userFlashModeInt=0x00000002,     ///<User Flash Mode. Interrupt vectors are not re-mapped and reside in Flash.
            userFlashModeInt=0x00000003,     ///<User Flash Mode. Interrupt vectors are not re-mapped and reside in Flash.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MapVal> map{}; 
        namespace MapValC{
            constexpr Register::FieldValue<decltype(map)::Type,MapVal::bootLoaderModeIn> bootLoaderModeIn{};
            constexpr Register::FieldValue<decltype(map)::Type,MapVal::userRamModeInter> userRamModeInter{};
            constexpr Register::FieldValue<decltype(map)::Type,MapVal::userFlashModeInt> userFlashModeInt{};
            constexpr Register::FieldValue<decltype(map)::Type,MapVal::userFlashModeInt> userFlashModeInt{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPresetctrl{    ///<Peripheral reset control
        using Addr = Register::Address<0x40048004,0x00000000,0x00000000,unsigned>;
        ///SPI0 reset control
        enum class Ssp0rstnVal {
            resetsTheSpi0Peri=0x00000000,     ///<Resets the SPI0 peripheral.
            spi0ResetDeAssert=0x00000001,     ///<SPI0 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ssp0rstnVal> ssp0RstN{}; 
        namespace Ssp0rstnValC{
            constexpr Register::FieldValue<decltype(ssp0RstN)::Type,Ssp0rstnVal::resetsTheSpi0Peri> resetsTheSpi0Peri{};
            constexpr Register::FieldValue<decltype(ssp0RstN)::Type,Ssp0rstnVal::spi0ResetDeAssert> spi0ResetDeAssert{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSyspllctrl{    ///<System PLL control
        using Addr = Register::Address<0x40048008,0x00000000,0x00000000,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1. 00000: Division ratio M = 1 to 11111: Division ration M = 32
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
        ///Reserved. Do not write ones to reserved bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSyspllstat{    ///<System PLL status
        using Addr = Register::Address<0x4004800c,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSysoscctrl{    ///<System oscillator control
        using Addr = Register::Address<0x40048020,0x00000000,0x00000000,unsigned>;
        ///Bypass system oscillator
        enum class BypassVal {
            oscillatorIsNotBy=0x00000000,     ///<Oscillator is not bypassed.
            bypassEnabledPll=0x00000001,     ///<Bypass enabled. PLL input (sys_osc_clk) is fed directly from the XTALIN pin bypassing the oscillator. Use this mode when using an external clock source instead of the crystal oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::oscillatorIsNotBy> oscillatorIsNotBy{};
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::bypassEnabledPll> bypassEnabledPll{};
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconWdtoscctrl{    ///<Watchdog oscillator control
        using Addr = Register::Address<0x40048024,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconIrcctrl{    ///<IRC control
        using Addr = Register::Address<0x40048028,0x00000100,0x00000000,unsigned>;
        ///Trim value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> trim{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSysrststat{    ///<System reset status register
        using Addr = Register::Address<0x40048030,0x00000000,0x00000000,unsigned>;
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
        ///Status of the external RESET pin
        enum class ExtrstVal {
            noResetPinEventD=0x00000000,     ///<No RESET pin event detected
            resetDetectedWrit=0x00000001,     ///<RESET detected. Writing a one clears this reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ExtrstVal> extrst{}; 
        namespace ExtrstValC{
            constexpr Register::FieldValue<decltype(extrst)::Type,ExtrstVal::noResetPinEventD> noResetPinEventD{};
            constexpr Register::FieldValue<decltype(extrst)::Type,ExtrstVal::resetDetectedWrit> resetDetectedWrit{};
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSyspllclksel{    ///<System PLL clock source select
        using Addr = Register::Address<0x40048040,0x00000000,0x00000000,unsigned>;
        ///System PLL clock source
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            systemOscillator=0x00000001,     ///<System oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::systemOscillator> systemOscillator{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSyspllclkuen{    ///<System PLL clock source update enable
        using Addr = Register::Address<0x40048044,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconMainclksel{    ///<Main clock source select
        using Addr = Register::Address<0x40048070,0x00000000,0x00000000,unsigned>;
        ///Clock source for main clock
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            inputClockToSyste=0x00000001,     ///<Input clock to system PLL
            wdtOscillator=0x00000002,     ///<WDT oscillator
            systemPllClockOut=0x00000003,     ///<System PLL clock out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::inputClockToSyste> inputClockToSyste{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::wdtOscillator> wdtOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::systemPllClockOut> systemPllClockOut{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconMainclkuen{    ///<Main clock source update enable
        using Addr = Register::Address<0x40048074,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSysahbclkdiv{    ///<System AHB clock divider
        using Addr = Register::Address<0x40048078,0x00000000,0x00000000,unsigned>;
        ///System AHB clock divider values 0: System clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSysahbclkctrl{    ///<System AHB clock control
        using Addr = Register::Address<0x40048080,0x00000000,0x00000000,unsigned>;
        ///Enables clock for AHB to APB bridge, to the AHB matrix, to the Cortex-M0 FCLK and HCLK, to the SysCon, and to the PMU. This bit is read only.
        enum class SysVal {
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SysVal> sys{}; 
        namespace SysValC{
            constexpr Register::FieldValue<decltype(sys)::Type,SysVal::enable> enable{};
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
        ///Enables clock for RAM.
        enum class RamVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RamVal> ram{}; 
        namespace RamValC{
            constexpr Register::FieldValue<decltype(ram)::Type,RamVal::disable> disable{};
            constexpr Register::FieldValue<decltype(ram)::Type,RamVal::enable> enable{};
        }
        ///Enables clock for flash register interface.
        enum class FlashregVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FlashregVal> flashreg{}; 
        namespace FlashregValC{
            constexpr Register::FieldValue<decltype(flashreg)::Type,FlashregVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(flashreg)::Type,FlashregVal::enabled> enabled{};
        }
        ///Enables clock for flash array access.
        enum class FlasharrayVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FlasharrayVal> flasharray{}; 
        namespace FlasharrayValC{
            constexpr Register::FieldValue<decltype(flasharray)::Type,FlasharrayVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(flasharray)::Type,FlasharrayVal::enabled> enabled{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Enables clock for GPIO.
        enum class GpioVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,GpioVal> gpio{}; 
        namespace GpioValC{
            constexpr Register::FieldValue<decltype(gpio)::Type,GpioVal::disable> disable{};
            constexpr Register::FieldValue<decltype(gpio)::Type,GpioVal::enable> enable{};
        }
        ///Enables clock for 16-bit counter/timer 0.
        enum class Ct16b0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ct16b0Val> ct16b0{}; 
        namespace Ct16b0ValC{
            constexpr Register::FieldValue<decltype(ct16b0)::Type,Ct16b0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct16b0)::Type,Ct16b0Val::enable> enable{};
        }
        ///Enables clock for 16-bit counter/timer 1.
        enum class Ct16b1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ct16b1Val> ct16b1{}; 
        namespace Ct16b1ValC{
            constexpr Register::FieldValue<decltype(ct16b1)::Type,Ct16b1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct16b1)::Type,Ct16b1Val::enable> enable{};
        }
        ///Enables clock for 32-bit counter/timer 0.
        enum class Ct32b0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ct32b0Val> ct32b0{}; 
        namespace Ct32b0ValC{
            constexpr Register::FieldValue<decltype(ct32b0)::Type,Ct32b0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct32b0)::Type,Ct32b0Val::enable> enable{};
        }
        ///Enables clock for 32-bit counter/timer 1.
        enum class Ct32b1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ct32b1Val> ct32b1{}; 
        namespace Ct32b1ValC{
            constexpr Register::FieldValue<decltype(ct32b1)::Type,Ct32b1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct32b1)::Type,Ct32b1Val::enable> enable{};
        }
        ///Enables clock for SPI0.
        enum class Ssp0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ssp0Val> ssp0{}; 
        namespace Ssp0ValC{
            constexpr Register::FieldValue<decltype(ssp0)::Type,Ssp0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ssp0)::Type,Ssp0Val::enable> enable{};
        }
        ///Enables clock for UART.
        enum class UartVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,UartVal> uart{}; 
        namespace UartValC{
            constexpr Register::FieldValue<decltype(uart)::Type,UartVal::disable> disable{};
            constexpr Register::FieldValue<decltype(uart)::Type,UartVal::enable> enable{};
        }
        ///Enables clock for ADC.
        enum class AdcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,AdcVal> adc{}; 
        namespace AdcValC{
            constexpr Register::FieldValue<decltype(adc)::Type,AdcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(adc)::Type,AdcVal::enable> enable{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Enables clock for WDT.
        enum class WdtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,WdtVal> wdt{}; 
        namespace WdtValC{
            constexpr Register::FieldValue<decltype(wdt)::Type,WdtVal::disable> disable{};
            constexpr Register::FieldValue<decltype(wdt)::Type,WdtVal::enable> enable{};
        }
        ///Enables clock for I/O configuration block.
        enum class IoconVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,IoconVal> iocon{}; 
        namespace IoconValC{
            constexpr Register::FieldValue<decltype(iocon)::Type,IoconVal::disable> disable{};
            constexpr Register::FieldValue<decltype(iocon)::Type,IoconVal::enable> enable{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,17),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSsp0clkdiv{    ///<SPI0 clock divder
        using Addr = Register::Address<0x40048094,0x00000000,0x00000000,unsigned>;
        ///SPI0_PCLK clock divider values 0: Disable SPI0_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUartclkdiv{    ///<UART clock divder
        using Addr = Register::Address<0x40048098,0x00000000,0x00000000,unsigned>;
        ///UART_PCLK clock divider values 0: Disable UART_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconWdtclksel{    ///<WDT clock source select
        using Addr = Register::Address<0x400480d0,0x00000000,0x00000000,unsigned>;
        ///WDT clock source
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            mainClock=0x00000001,     ///<Main clock
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::mainClock> mainClock{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::watchdogOscillator> watchdogOscillator{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconWdtclkuen{    ///<WDT clock source update enable
        using Addr = Register::Address<0x400480d4,0x00000000,0x00000000,unsigned>;
        ///Enable WDT clock source update
        enum class EnaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnaVal> ena{}; 
        namespace EnaValC{
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::updateClockSource> updateClockSource{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconWdtclkdiv{    ///<WDT clock divider
        using Addr = Register::Address<0x400480d8,0x00000000,0x00000000,unsigned>;
        ///WDT clock divider values 0: Disable WDCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconClkoutclksel{    ///<CLKOUT clock source select
        using Addr = Register::Address<0x400480e0,0x00000000,0x00000000,unsigned>;
        ///CLKOUT clock source
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            systemOscillator=0x00000001,     ///<System oscillator
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            mainClock=0x00000003,     ///<Main clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::systemOscillator> systemOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::watchdogOscillator> watchdogOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::mainClock> mainClock{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconClkoutuen{    ///<CLKOUT clock source update enable
        using Addr = Register::Address<0x400480e4,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconClkoutclkdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x400480e8,0x00000000,0x00000000,unsigned>;
        ///Clock output divider values 0: Disable CLKOUT.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x40048100,0x00000000,0x00000000,unsigned>;
        ///Raw reset status input PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cappio00{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Raw reset status input PIO0_8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cappio08{}; 
        ///Raw reset status input PIO0_9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cappio09{}; 
        ///Raw reset status input PIO0_10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cappio010{}; 
        ///Raw reset status input PIO0_11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cappio011{}; 
        ///Raw reset status input PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cappio10{}; 
        ///Raw reset status input PIO1_1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cappio11{}; 
        ///Raw reset status input PIO1_2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cappio12{}; 
        ///Raw reset status input PIO1_3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cappio13{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Raw reset status input PIO1_6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cappio16{}; 
        ///Raw reset status input PIO1_7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cappio17{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconBodctrl{    ///<BOD control
        using Addr = Register::Address<0x40048150,0x00000000,0x00000000,unsigned>;
        ///BOD reset level
        enum class BodrstlevVal {
            level0Reserved=0x00000000,     ///<Level 0: Reserved.
            level1TheResetA=0x00000001,     ///<Level 1: The reset assertion threshold voltage is 2.06 V; the reset de-assertion threshold voltage is 2.15 V.
            level2TheResetA=0x00000002,     ///<Level 2: The reset assertion threshold voltage is 2.35 V; the reset de-assertion threshold voltage is 2.43 V.
            level3TheResetA=0x00000003,     ///<Level 3: The reset assertion threshold voltage is 2.63 V; the reset de-assertion threshold voltage is 2.71 V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,BodrstlevVal> bodrstlev{}; 
        namespace BodrstlevValC{
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level0Reserved> level0Reserved{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level1TheResetA> level1TheResetA{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level2TheResetA> level2TheResetA{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level3TheResetA> level3TheResetA{};
        }
        ///BOD interrupt level
        enum class BodintvalVal {
            level0Reserved=0x00000000,     ///<Level 0: Reserved.
            level1theInterrup=0x00000001,     ///<Level 1:The interrupt assertion threshold voltage is 2.22 V; the interrupt de-assertion threshold voltage is 2.35 V.
            level2TheInterru=0x00000002,     ///<Level 2: The interrupt assertion threshold voltage is 2.52 V; the interrupt de-assertion threshold voltage is 2.66 V.
            level3TheInterru=0x00000003,     ///<Level 3: The interrupt assertion threshold voltage is 2.80 V; the interrupt de-assertion threshold voltage is 2.90 V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,BodintvalVal> bodintval{}; 
        namespace BodintvalValC{
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level0Reserved> level0Reserved{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level1theInterrup> level1theInterrup{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level2TheInterru> level2TheInterru{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level3TheInterru> level3TheInterru{};
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSystckcal{    ///<System tick counter calibration
        using Addr = Register::Address<0x40048154,0x00000000,0x00000000,unsigned>;
        ///System tick timer calibration value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> cal{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconStartaprp0{    ///<Start logic edge control register 0
        using Addr = Register::Address<0x40048200,0x00000000,0x00000000,unsigned>;
        ///Edge select for start logic input PIO0_0
        enum class Aprpio00Val {
            fallingEdge=0x00000000,     ///<Falling edge
            risingEdge=0x00000001,     ///<Rising edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Aprpio00Val> aprpio00{}; 
        namespace Aprpio00ValC{
            constexpr Register::FieldValue<decltype(aprpio00)::Type,Aprpio00Val::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(aprpio00)::Type,Aprpio00Val::risingEdge> risingEdge{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Edge select for start logic input PIO0_8
        enum class Aprpio08Val {
            fallingEdge=0x00000000,     ///<Falling edge
            risingEdge=0x00000001,     ///<Rising edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Aprpio08Val> aprpio08{}; 
        namespace Aprpio08ValC{
            constexpr Register::FieldValue<decltype(aprpio08)::Type,Aprpio08Val::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(aprpio08)::Type,Aprpio08Val::risingEdge> risingEdge{};
        }
        ///Edge select for start logic input PIO0_9
        enum class Aprpio09Val {
            fallingEdge=0x00000000,     ///<Falling edge
            risingEdge=0x00000001,     ///<Rising edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Aprpio09Val> aprpio09{}; 
        namespace Aprpio09ValC{
            constexpr Register::FieldValue<decltype(aprpio09)::Type,Aprpio09Val::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(aprpio09)::Type,Aprpio09Val::risingEdge> risingEdge{};
        }
        ///Edge select for start logic input PIO0_10
        enum class Aprpio010Val {
            fallingEdge=0x00000000,     ///<Falling edge
            risingEdge=0x00000001,     ///<Rising edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Aprpio010Val> aprpio010{}; 
        namespace Aprpio010ValC{
            constexpr Register::FieldValue<decltype(aprpio010)::Type,Aprpio010Val::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(aprpio010)::Type,Aprpio010Val::risingEdge> risingEdge{};
        }
        ///Edge select for start logic input PIO0_11
        enum class Aprpio011Val {
            fallingEdge=0x00000000,     ///<Falling edge
            risingEdge=0x00000001,     ///<Rising edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Aprpio011Val> aprpio011{}; 
        namespace Aprpio011ValC{
            constexpr Register::FieldValue<decltype(aprpio011)::Type,Aprpio011Val::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(aprpio011)::Type,Aprpio011Val::risingEdge> risingEdge{};
        }
        ///Edge select for start logic input PIO1_0.
        enum class Aprpio10Val {
            fallingEdge=0x00000000,     ///<Falling edge
            risingEdge=0x00000001,     ///<Rising edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Aprpio10Val> aprpio10{}; 
        namespace Aprpio10ValC{
            constexpr Register::FieldValue<decltype(aprpio10)::Type,Aprpio10Val::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(aprpio10)::Type,Aprpio10Val::risingEdge> risingEdge{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,13),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconStarterp0{    ///<Start logic signal enable register 0
        using Addr = Register::Address<0x40048204,0x00000000,0x00000000,unsigned>;
        ///Enable start signal for start logic input PIO0_0
        enum class Erpio00Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Erpio00Val> erpio00{}; 
        namespace Erpio00ValC{
            constexpr Register::FieldValue<decltype(erpio00)::Type,Erpio00Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(erpio00)::Type,Erpio00Val::enabled> enabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Enable start signal for start logic input PIO0_8
        enum class Erpio08Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Erpio08Val> erpio08{}; 
        namespace Erpio08ValC{
            constexpr Register::FieldValue<decltype(erpio08)::Type,Erpio08Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(erpio08)::Type,Erpio08Val::enabled> enabled{};
        }
        ///Enable start signal for start logic input PIO0_9
        enum class Erpio09Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Erpio09Val> erpio09{}; 
        namespace Erpio09ValC{
            constexpr Register::FieldValue<decltype(erpio09)::Type,Erpio09Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(erpio09)::Type,Erpio09Val::enabled> enabled{};
        }
        ///Enable start signal for start logic input PIO0_10
        enum class Erpio010Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Erpio010Val> erpio010{}; 
        namespace Erpio010ValC{
            constexpr Register::FieldValue<decltype(erpio010)::Type,Erpio010Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(erpio010)::Type,Erpio010Val::enabled> enabled{};
        }
        ///Enable start signal for start logic input PIO0_11
        enum class Erpio011Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Erpio011Val> erpio011{}; 
        namespace Erpio011ValC{
            constexpr Register::FieldValue<decltype(erpio011)::Type,Erpio011Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(erpio011)::Type,Erpio011Val::enabled> enabled{};
        }
        ///Enable start signal for start logic input PIO1_0
        enum class Erpio10Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Erpio10Val> erpio10{}; 
        namespace Erpio10ValC{
            constexpr Register::FieldValue<decltype(erpio10)::Type,Erpio10Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(erpio10)::Type,Erpio10Val::enabled> enabled{};
        }
        ///Reserved. Do not set reserved bits in this register to one.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,13),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconStartrsrp0clr{    ///<Start logic reset register 0
        using Addr = Register::Address<0x40048208,0x00000000,0x00000000,unsigned>;
        ///Start signal reset for start logic input PIO0_0
        enum class Rsrpio00Val {
            =0x00000000,     ///<RESERVED
            writeResetStartS=0x00000001,     ///<Write: reset start signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Rsrpio00Val> rsrpio00{}; 
        namespace Rsrpio00ValC{
            constexpr Register::FieldValue<decltype(rsrpio00)::Type,Rsrpio00Val::> {};
            constexpr Register::FieldValue<decltype(rsrpio00)::Type,Rsrpio00Val::writeResetStartS> writeResetStartS{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Start signal reset for start logic input PIO0_8
        enum class Rsrpio08Val {
            =0x00000000,     ///<RESERVED
            writeResetStartS=0x00000001,     ///<Write: reset start signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Rsrpio08Val> rsrpio08{}; 
        namespace Rsrpio08ValC{
            constexpr Register::FieldValue<decltype(rsrpio08)::Type,Rsrpio08Val::> {};
            constexpr Register::FieldValue<decltype(rsrpio08)::Type,Rsrpio08Val::writeResetStartS> writeResetStartS{};
        }
        ///Start signal reset for start logic input PIO0_9
        enum class Rsrpio09Val {
            =0x00000000,     ///<RESERVED
            writeResetStartS=0x00000001,     ///<Write: reset start signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Rsrpio09Val> rsrpio09{}; 
        namespace Rsrpio09ValC{
            constexpr Register::FieldValue<decltype(rsrpio09)::Type,Rsrpio09Val::> {};
            constexpr Register::FieldValue<decltype(rsrpio09)::Type,Rsrpio09Val::writeResetStartS> writeResetStartS{};
        }
        ///Start signal reset for start logic input PIO0_10
        enum class Rsrpio010Val {
            =0x00000000,     ///<RESERVED
            writeResetStartS=0x00000001,     ///<Write: reset start signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Rsrpio010Val> rsrpio010{}; 
        namespace Rsrpio010ValC{
            constexpr Register::FieldValue<decltype(rsrpio010)::Type,Rsrpio010Val::> {};
            constexpr Register::FieldValue<decltype(rsrpio010)::Type,Rsrpio010Val::writeResetStartS> writeResetStartS{};
        }
        ///Start signal reset for start logic input PIO0_11
        enum class Rsrpio011Val {
            =0x00000000,     ///<RESERVED
            writeResetStartS=0x00000001,     ///<Write: reset start signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Rsrpio011Val> rsrpio011{}; 
        namespace Rsrpio011ValC{
            constexpr Register::FieldValue<decltype(rsrpio011)::Type,Rsrpio011Val::> {};
            constexpr Register::FieldValue<decltype(rsrpio011)::Type,Rsrpio011Val::writeResetStartS> writeResetStartS{};
        }
        ///Start signal reset for start logic input PIO1_0
        enum class Rsrpio10Val {
            =0x00000000,     ///<RESERVED
            writeResetStartS=0x00000001,     ///<Write: reset start signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Rsrpio10Val> rsrpio10{}; 
        namespace Rsrpio10ValC{
            constexpr Register::FieldValue<decltype(rsrpio10)::Type,Rsrpio10Val::> {};
            constexpr Register::FieldValue<decltype(rsrpio10)::Type,Rsrpio10Val::writeResetStartS> writeResetStartS{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,13),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconStartsrp0{    ///<Start logic status register 0
        using Addr = Register::Address<0x4004820c,0x00000000,0x00000000,unsigned>;
        ///Start signal status for start logic input 0PIO0_0
        enum class Srpio00Val {
            noStartSignalRece=0x00000000,     ///<No start signal received
            startSignalPending=0x00000001,     ///<Start signal pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Srpio00Val> srpio00{}; 
        namespace Srpio00ValC{
            constexpr Register::FieldValue<decltype(srpio00)::Type,Srpio00Val::noStartSignalRece> noStartSignalRece{};
            constexpr Register::FieldValue<decltype(srpio00)::Type,Srpio00Val::startSignalPending> startSignalPending{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Start signal status for start logic input PIO0_8
        enum class Srpio08Val {
            noStartSignalRece=0x00000000,     ///<No start signal received
            startSignalPending=0x00000001,     ///<Start signal pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Srpio08Val> srpio08{}; 
        namespace Srpio08ValC{
            constexpr Register::FieldValue<decltype(srpio08)::Type,Srpio08Val::noStartSignalRece> noStartSignalRece{};
            constexpr Register::FieldValue<decltype(srpio08)::Type,Srpio08Val::startSignalPending> startSignalPending{};
        }
        ///Start signal status for start logic input PIO0_9
        enum class Srpio09Val {
            noStartSignalRece=0x00000000,     ///<No start signal received
            startSignalPending=0x00000001,     ///<Start signal pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srpio09Val> srpio09{}; 
        namespace Srpio09ValC{
            constexpr Register::FieldValue<decltype(srpio09)::Type,Srpio09Val::noStartSignalRece> noStartSignalRece{};
            constexpr Register::FieldValue<decltype(srpio09)::Type,Srpio09Val::startSignalPending> startSignalPending{};
        }
        ///Start signal status for start logic input PIO0_10
        enum class Srpio010Val {
            noStartSignalRece=0x00000000,     ///<No start signal received
            startSignalPending=0x00000001,     ///<Start signal pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Srpio010Val> srpio010{}; 
        namespace Srpio010ValC{
            constexpr Register::FieldValue<decltype(srpio010)::Type,Srpio010Val::noStartSignalRece> noStartSignalRece{};
            constexpr Register::FieldValue<decltype(srpio010)::Type,Srpio010Val::startSignalPending> startSignalPending{};
        }
        ///Start signal status for start logic input PIO0_11
        enum class Srpio011Val {
            noStartSignalRece=0x00000000,     ///<No start signal received
            startSignalPending=0x00000001,     ///<Start signal pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Srpio011Val> srpio011{}; 
        namespace Srpio011ValC{
            constexpr Register::FieldValue<decltype(srpio011)::Type,Srpio011Val::noStartSignalRece> noStartSignalRece{};
            constexpr Register::FieldValue<decltype(srpio011)::Type,Srpio011Val::startSignalPending> startSignalPending{};
        }
        ///Start signal status for start logic input PIO1_0
        enum class Srpio10Val {
            noStartSignalRece=0x00000000,     ///<No start signal received
            startSignalPending=0x00000001,     ///<Start signal pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Srpio10Val> srpio10{}; 
        namespace Srpio10ValC{
            constexpr Register::FieldValue<decltype(srpio10)::Type,Srpio10Val::noStartSignalRece> noStartSignalRece{};
            constexpr Register::FieldValue<decltype(srpio10)::Type,Srpio10Val::startSignalPending> startSignalPending{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,13),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPdsleepcfg{    ///<Power-down states in Deep-sleep mode
        using Addr = Register::Address<0x40048230,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always write these bits as 111.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///BOD power-down control in Deep-sleep mode, see Table 35.
        enum class BodpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::poweredDown> poweredDown{};
        }
        ///Reserved. Always write these bits as 11.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Watchdog oscillator power control in Deep-sleep mode, see Table 35.
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::poweredDown> poweredDown{};
        }
        ///Reserved. Always write this bit as 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write these bits as 000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write these bits as 11.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,13),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPdawakecfg{    ///<Power-down states after wake-up from Deep-sleep mode
        using Addr = Register::Address<0x40048234,0x00000000,0x00000000,unsigned>;
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
        ///ADC wake-up configuration
        enum class AdcpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AdcpdVal> adcPd{}; 
        namespace AdcpdValC{
            constexpr Register::FieldValue<decltype(adcPd)::Type,AdcpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(adcPd)::Type,AdcpdVal::poweredDown> poweredDown{};
        }
        ///System oscillator wake-up configuration
        enum class SysoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SysoscpdVal> sysoscPd{}; 
        namespace SysoscpdValC{
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::poweredDown> poweredDown{};
        }
        ///Watchdog oscillator wake-up configuration
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::poweredDown> poweredDown{};
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
        ///Reserved. Always write this bit as 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write this bit as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write this bit as 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write this bit as 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write this bit as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write these bits as 111.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPdruncfg{    ///<Power-down configuration register
        using Addr = Register::Address<0x40048238,0x00000000,0x00000000,unsigned>;
        ///IRC oscillator output power-down
        enum class IrcoutpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrcoutpdVal> ircoutPd{}; 
        namespace IrcoutpdValC{
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::poweredDown> poweredDown{};
        }
        ///IRC oscillator power-down
        enum class IrcpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrcpdVal> ircPd{}; 
        namespace IrcpdValC{
            constexpr Register::FieldValue<decltype(ircPd)::Type,IrcpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircPd)::Type,IrcpdVal::poweredDown> poweredDown{};
        }
        ///Flash power-down
        enum class FlashpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FlashpdVal> flashPd{}; 
        namespace FlashpdValC{
            constexpr Register::FieldValue<decltype(flashPd)::Type,FlashpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(flashPd)::Type,FlashpdVal::poweredDown> poweredDown{};
        }
        ///BOD power-down
        enum class BodpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::poweredDown> poweredDown{};
        }
        ///ADC power-down
        enum class AdcpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AdcpdVal> adcPd{}; 
        namespace AdcpdValC{
            constexpr Register::FieldValue<decltype(adcPd)::Type,AdcpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(adcPd)::Type,AdcpdVal::poweredDown> poweredDown{};
        }
        ///System oscillator power-down
        enum class SysoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SysoscpdVal> sysoscPd{}; 
        namespace SysoscpdValC{
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::poweredDown> poweredDown{};
        }
        ///Watchdog oscillator power-down
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::poweredDown> poweredDown{};
        }
        ///System PLL power-down
        enum class SyspllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SyspllpdVal> syspllPd{}; 
        namespace SyspllpdValC{
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::poweredDown> poweredDown{};
        }
        ///Reserved. Always write this bit as 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write this bit as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write this bit as 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write this bit as 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved.  Always write this bit as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write these bits as 111.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconDeviceId{    ///<Device ID
        using Addr = Register::Address<0x400483f4,0x00000000,0x00000000,unsigned>;
        ///Part ID numbers for LPC1102/04 parts LPC1102 = 0x2500 102B LPC1104 = 0x2548 102B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
}
