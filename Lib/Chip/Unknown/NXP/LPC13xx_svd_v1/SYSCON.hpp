#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10375 Chapter title=LPC13xx System configuration Modification date=4/4/2011 Major revision=2 Minor revision=2 
    namespace SysconSysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40048000,0x00000000,0x00000000,unsigned>;
        ///System memory remap
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPresetctrl{    ///<Peripheral reset control
        using Addr = Register::Address<0x40048004,0x007ffff8,0x00000000,unsigned>;
        ///SSP0 reset control
        enum class Ssp0rstnVal {
            resetSsp0=0x00000000,     ///<Reset SSP0.
            deAssertSsp0Reset=0x00000001,     ///<De-assert SSP0 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ssp0rstnVal> ssp0RstN{}; 
        namespace Ssp0rstnValC{
            constexpr Register::FieldValue<decltype(ssp0RstN)::Type,Ssp0rstnVal::resetSsp0> resetSsp0{};
            constexpr Register::FieldValue<decltype(ssp0RstN)::Type,Ssp0rstnVal::deAssertSsp0Reset> deAssertSsp0Reset{};
        }
        ///I2C reset control
        enum class I2crstnVal {
            resetI2c=0x00000000,     ///<Reset I2C.
            deAssetI2cReset=0x00000001,     ///<De-asset I2C reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,I2crstnVal> i2cRstN{}; 
        namespace I2crstnValC{
            constexpr Register::FieldValue<decltype(i2cRstN)::Type,I2crstnVal::resetI2c> resetI2c{};
            constexpr Register::FieldValue<decltype(i2cRstN)::Type,I2crstnVal::deAssetI2cReset> deAssetI2cReset{};
        }
        ///SPISP1 reset control
        enum class Ssp1rstnVal {
            resetTheSpisp1=0x00000000,     ///<Reset the SPISP1.
            deAssertSpisp1Res=0x00000001,     ///<De-assert SPISP1 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ssp1rstnVal> ssp1RstN{}; 
        namespace Ssp1rstnValC{
            constexpr Register::FieldValue<decltype(ssp1RstN)::Type,Ssp1rstnVal::resetTheSpisp1> resetTheSpisp1{};
            constexpr Register::FieldValue<decltype(ssp1RstN)::Type,Ssp1rstnVal::deAssertSpisp1Res> deAssertSpisp1Res{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSyspllctrl{    ///<System PLL control
        using Addr = Register::Address<0x40048008,0x00000000,0x00000000,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1. 00000: Division ratio M = 1 to 11111: Division ratio M = 32.
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
    namespace SysconUsbpllctrl{    ///<USB PLL control
        using Addr = Register::Address<0x40048010,0x00000000,0x00000000,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1. 00000: Division ratio M = 1 to 11111: Division ratio M = 32.
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
    namespace SysconUsbpllstat{    ///<USB PLL status
        using Addr = Register::Address<0x40048014,0x00000000,0x00000000,unsigned>;
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
            bypassEnabledPll=0x00000001,     ///<Bypass enabled. PLL input (sys_osc_clk) is fed directly from the XTALIN and XTALOUT pins.
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
        ///Select divider for Fclkana.  wdt_osc_clk = Fclkana (2 x (1 + DIVSEL)).   00000: 2 x (1 + DIVSEL) = 2 00001: 2 x (1 + DIVSEL) = 4 to 11111: 2 x (1 + DIVSEL) = 64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Select watchdog oscillator analog output frequency (Fclkana).
        enum class FreqselVal {
            v05Mhz=0x00000001,     ///<0.5 MHz
            v08Mhz=0x00000002,     ///<0.8 MHz
            v11Mhz=0x00000003,     ///<1.1 MHz
            v14Mhz=0x00000004,     ///<1.4 MHz
            v16Mhz=0x00000005,     ///<1.6 MHz
            v18Mhz=0x00000006,     ///<1.8 MHz
            v20Mhz=0x00000007,     ///<2.0 MHz
            v22Mhz=0x00000008,     ///<2.2 MHz
            v24Mhz=0x00000009,     ///<2.4 MHz
            v26Mhz=0x0000000a,     ///<2.6 MHz
            v27Mhz=0x0000000b,     ///<2.7 MHz
            v29Mhz=0x0000000c,     ///<2.9 MHz
            v31Mhz=0x0000000d,     ///<3.1 MHz
            v32Mhz=0x0000000e,     ///<3.2 MHz
            v34Mhz=0x0000000f,     ///<3.4 MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,5),Register::ReadWriteAccess,FreqselVal> freqsel{}; 
        namespace FreqselValC{
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v05Mhz> v05Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v08Mhz> v08Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v11Mhz> v11Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v14Mhz> v14Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v16Mhz> v16Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v18Mhz> v18Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v20Mhz> v20Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v22Mhz> v22Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v24Mhz> v24Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v26Mhz> v26Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v27Mhz> v27Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v29Mhz> v29Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v31Mhz> v31Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v32Mhz> v32Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v34Mhz> v34Mhz{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconIrcctrl{    ///<IRC control
        using Addr = Register::Address<0x40048028,0x00000000,0x00000000,unsigned>;
        ///Trim value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> trim{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSysresstat{    ///<System reset status register
        using Addr = Register::Address<0x40048030,0x00000000,0x00000000,unsigned>;
        ///POR reset status
        enum class PorVal {
            noPorDetected=0x00000000,     ///<No POR detected
            porDetected=0x00000001,     ///<POR detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PorVal> por{}; 
        namespace PorValC{
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::noPorDetected> noPorDetected{};
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::porDetected> porDetected{};
        }
        ///Status of the external RESET pin
        enum class ExtrstVal {
            noResetEventDetec=0x00000000,     ///<No RESET event detected
            resetDetected=0x00000001,     ///<RESET detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ExtrstVal> extrst{}; 
        namespace ExtrstValC{
            constexpr Register::FieldValue<decltype(extrst)::Type,ExtrstVal::noResetEventDetec> noResetEventDetec{};
            constexpr Register::FieldValue<decltype(extrst)::Type,ExtrstVal::resetDetected> resetDetected{};
        }
        ///Status of the Watchdog reset
        enum class WdtVal {
            noWdtResetDetecte=0x00000000,     ///<No WDT reset detected
            wdtResetDetected=0x00000001,     ///<WDT reset detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WdtVal> wdt{}; 
        namespace WdtValC{
            constexpr Register::FieldValue<decltype(wdt)::Type,WdtVal::noWdtResetDetecte> noWdtResetDetecte{};
            constexpr Register::FieldValue<decltype(wdt)::Type,WdtVal::wdtResetDetected> wdtResetDetected{};
        }
        ///Status of the Brown-out detect reset
        enum class BodVal {
            noBodResetDetecte=0x00000000,     ///<No BOD reset detected
            bodResetDetected=0x00000001,     ///<BOD reset detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodVal> bod{}; 
        namespace BodValC{
            constexpr Register::FieldValue<decltype(bod)::Type,BodVal::noBodResetDetecte> noBodResetDetecte{};
            constexpr Register::FieldValue<decltype(bod)::Type,BodVal::bodResetDetected> bodResetDetected{};
        }
        ///Status of the software system reset. The ARM software reset has the same effect as the hardware reset using the  RESET pin.
        enum class SysrstVal {
            noSystemResetDete=0x00000000,     ///<No System reset detected
            systemResetDetecte=0x00000001,     ///<System reset detected
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
    namespace SysconUsbpllclksel{    ///<USB PLL clock source select
        using Addr = Register::Address<0x40048048,0x00000000,0x00000000,unsigned>;
        ///USB PLL clock source
        enum class SelVal {
            ircTheUsbPllClo=0x00000000,     ///<IRC. The USB PLL clock source must be switched to system oscillator for correct USB operation.
            systemOscillator=0x00000001,     ///<System oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircTheUsbPllClo> ircTheUsbPllClo{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::systemOscillator> systemOscillator{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUsbpllclkuen{    ///<USB PLL clock source update enable
        using Addr = Register::Address<0x4004804c,0x00000000,0x00000000,unsigned>;
        ///Enable USB PLL clock source update
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
        ///Enables clock for AHB to APB bridge, to the AHB matrix, to the Cortex-M3 FCLK and HCLK, to the SysCon, and to the PMU. This bit is read only.
        enum class SysVal {
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SysVal> sys{}; 
        namespace SysValC{
            constexpr Register::FieldValue<decltype(sys)::Type,SysVal::enabled> enabled{};
        }
        ///Enables clock for ROM.
        enum class RomVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RomVal> rom{}; 
        namespace RomValC{
            constexpr Register::FieldValue<decltype(rom)::Type,RomVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rom)::Type,RomVal::enabled> enabled{};
        }
        ///Enables clock for RAM.
        enum class RamVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RamVal> ram{}; 
        namespace RamValC{
            constexpr Register::FieldValue<decltype(ram)::Type,RamVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ram)::Type,RamVal::enabled> enabled{};
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
        ///Enables clock for I2C.
        enum class I2cVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,I2cVal> i2c{}; 
        namespace I2cValC{
            constexpr Register::FieldValue<decltype(i2c)::Type,I2cVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(i2c)::Type,I2cVal::enabled> enabled{};
        }
        ///Enables clock for GPIO.
        enum class GpioVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,GpioVal> gpio{}; 
        namespace GpioValC{
            constexpr Register::FieldValue<decltype(gpio)::Type,GpioVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(gpio)::Type,GpioVal::enabled> enabled{};
        }
        ///Enables clock for 16-bit counter/timer 0.
        enum class Ct16b0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ct16b0Val> ct16b0{}; 
        namespace Ct16b0ValC{
            constexpr Register::FieldValue<decltype(ct16b0)::Type,Ct16b0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ct16b0)::Type,Ct16b0Val::enabled> enabled{};
        }
        ///Enables clock for 16-bit counter/timer 1.
        enum class Ct16b1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ct16b1Val> ct16b1{}; 
        namespace Ct16b1ValC{
            constexpr Register::FieldValue<decltype(ct16b1)::Type,Ct16b1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ct16b1)::Type,Ct16b1Val::enabled> enabled{};
        }
        ///Enables clock for 32-bit counter/timer 0.
        enum class Ct32b0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ct32b0Val> ct32b0{}; 
        namespace Ct32b0ValC{
            constexpr Register::FieldValue<decltype(ct32b0)::Type,Ct32b0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ct32b0)::Type,Ct32b0Val::enabled> enabled{};
        }
        ///Enables clock for 32-bit counter/timer 1.
        enum class Ct32b1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ct32b1Val> ct32b1{}; 
        namespace Ct32b1ValC{
            constexpr Register::FieldValue<decltype(ct32b1)::Type,Ct32b1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ct32b1)::Type,Ct32b1Val::enabled> enabled{};
        }
        ///Enables clock for SSP.
        enum class SspVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SspVal> ssp{}; 
        namespace SspValC{
            constexpr Register::FieldValue<decltype(ssp)::Type,SspVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ssp)::Type,SspVal::enabled> enabled{};
        }
        ///Enables clock for UART. Note that the UART pins must be configured in the IOCON block before the UART clock can be enabled.
        enum class UartVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,UartVal> uart{}; 
        namespace UartValC{
            constexpr Register::FieldValue<decltype(uart)::Type,UartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(uart)::Type,UartVal::enabled> enabled{};
        }
        ///Enables clock for ADC.
        enum class AdcVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,AdcVal> adc{}; 
        namespace AdcValC{
            constexpr Register::FieldValue<decltype(adc)::Type,AdcVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adc)::Type,AdcVal::enabled> enabled{};
        }
        ///Enables clock for USB_REG.
        enum class UsbregVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,UsbregVal> usbReg{}; 
        namespace UsbregValC{
            constexpr Register::FieldValue<decltype(usbReg)::Type,UsbregVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usbReg)::Type,UsbregVal::enabled> enabled{};
        }
        ///Enables clock for WDT.
        enum class WdtVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,WdtVal> wdt{}; 
        namespace WdtValC{
            constexpr Register::FieldValue<decltype(wdt)::Type,WdtVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(wdt)::Type,WdtVal::enabled> enabled{};
        }
        ///Enables clock for IO configuration block.
        enum class IoconVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,IoconVal> iocon{}; 
        namespace IoconValC{
            constexpr Register::FieldValue<decltype(iocon)::Type,IoconVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(iocon)::Type,IoconVal::enabled> enabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Enables clock for SPISP1.
        enum class Ssp1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ssp1Val> ssp1{}; 
        namespace Ssp1ValC{
            constexpr Register::FieldValue<decltype(ssp1)::Type,Ssp1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ssp1)::Type,Ssp1Val::enable> enable{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSsp0clkdiv{    ///<SSP clock divder
        using Addr = Register::Address<0x40048094,0x00000000,0x00000000,unsigned>;
        ///SSP_PCLK clock divider values. 0: Disable SSP0_PCLK.  1: Divide by 1. to 255: Divide by 255.
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
    namespace SysconSsp1clkdiv{    ///<SPISP1 clock divder
        using Addr = Register::Address<0x4004809c,0x00000000,0x00000000,unsigned>;
        ///SSP1_PCLK clock divider values 0: Disable SSP1_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconTraceclkdiv{    ///<ARM trace clock divider
        using Addr = Register::Address<0x400480ac,0x00000000,0x00000000,unsigned>;
        ///ARM trace clock divider values. 0: Disable TRACE_CLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSystickclkdiv{    ///<SYSTICK clock divder
        using Addr = Register::Address<0x400480b0,0x00000000,0x00000000,unsigned>;
        ///SYSTICK clock divider values. 0: Disable SYSTICK timer clock.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUsbclksel{    ///<USB clock source select
        using Addr = Register::Address<0x400480c0,0x00000000,0x00000000,unsigned>;
        ///USB clock source
        enum class SelVal {
            usbPllOut=0x00000000,     ///<USB PLL out
            mainClock=0x00000001,     ///<Main clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::usbPllOut> usbPllOut{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::mainClock> mainClock{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUsbclkuen{    ///<USB clock source update enable
        using Addr = Register::Address<0x400480c4,0x00000000,0x00000000,unsigned>;
        ///Enable USB clock source update
        enum class EnaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Updateclock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnaVal> ena{}; 
        namespace EnaValC{
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::updateClockSource> updateClockSource{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUsbclkdiv{    ///<USB clock source divider
        using Addr = Register::Address<0x400480c8,0x00000000,0x00000000,unsigned>;
        ///USB clock divider values. 0: Disable USB clock.  1: Divide by 1. to 255: Divide by 255.
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
        ///WDT clock divider values. 0: Disable WDCLK.  1: Divide by 1. to 255: Divide by 255.
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
    namespace SysconClkoutdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x400480e8,0x00000000,0x00000000,unsigned>;
        ///Clock divider values. 0: Disable CLKOUT.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x40048100,0x00000000,0x00000000,unsigned>;
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cappio00{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cappio01{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cappio02{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cappio03{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cappio04{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cappio05{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cappio06{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cappio07{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cappio08{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cappio09{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cappio010{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cappio011{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cappio10{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cappio11{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cappio12{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cappio13{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cappio14{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cappio15{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cappio16{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cappio17{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cappio18{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cappio19{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cappio110{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cappio111{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cappio20{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cappio21{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cappio22{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cappio23{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cappio24{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cappio25{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cappio26{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cappio27{}; 
    }
    namespace SysconPioporcap1{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40048104,0x00000000,0x00000000,unsigned>;
        ///Raw reset status input PIO2_8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cappio28{}; 
        ///Raw reset status input PIO2_9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cappio29{}; 
        ///Raw reset status input PIO2_10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cappio210{}; 
        ///Raw reset status input PIO2_11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cappio211{}; 
        ///Raw reset status input PIO3_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cappio30{}; 
        ///Raw reset status input PIO3_1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cappio31{}; 
        ///Raw reset status input PIO3_2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cappio32{}; 
        ///Raw reset status input PIO3_3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cappio33{}; 
        ///Raw reset status input PIO3_4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cappio34{}; 
        ///Raw reset status input PIO3_5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cappio35{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconBodctrl{    ///<BOD control
        using Addr = Register::Address<0x40048150,0x00000000,0x00000000,unsigned>;
        ///BOD reset level. Trip values x/y refer to the LPC1300/LPC1300L series.
        enum class BodrstlevVal {
            theResetAssertion=0x00000000,     ///<The reset assertion threshold voltage is 1.49 V/1.46 V; the reset de-assertion threshold voltage is 1.64 V/1.63 V.
            theResetAssertion=0x00000001,     ///<The reset assertion threshold voltage is -/2.06 V; the reset de-assertion threshold voltage is -/2.15 V.
            theResetAssertion=0x00000002,     ///<The reset assertion threshold voltage is -/2.35 V; the reset de-assertion threshold voltage is -/2.43 V.
            theResetAssertion=0x00000003,     ///<The reset assertion threshold voltage is -/2.63 V; the reset de-assertion threshold voltage is -/2.71 V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,BodrstlevVal> bodrstlev{}; 
        namespace BodrstlevValC{
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::theResetAssertion> theResetAssertion{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::theResetAssertion> theResetAssertion{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::theResetAssertion> theResetAssertion{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::theResetAssertion> theResetAssertion{};
        }
        ///BOD interrupt level. Trip values x/y refer to the LPC1300/LPC1300L series.
        enum class BodintvalVal {
            theInterruptAssert=0x00000000,     ///<The interrupt assertion threshold voltage is 1.69 V/1.65 V; the interrupt de-assertion threshold voltage is 1.84 V/1.8 V.
            theInterruptAssert=0x00000001,     ///<The interrupt assertion threshold voltage is 2.29 V/2.22 V; the interrupt de-assertion threshold voltage is 2.44 V/2.35 V.
            theInterruptAssert=0x00000002,     ///<The interrupt assertion threshold voltage is 2.59 V/ 2.52 V; the interrupt de-assertion threshold voltage is 2.74 V/2.66 V.
            theInterruptAssert=0x00000003,     ///<The interrupt assertion threshold voltage is 2.87 V/2.80 V; the interrupt de-assertion threshold voltage is 2.98 V/2.90 V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,BodintvalVal> bodintval{}; 
        namespace BodintvalValC{
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::theInterruptAssert> theInterruptAssert{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::theInterruptAssert> theInterruptAssert{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::theInterruptAssert> theInterruptAssert{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::theInterruptAssert> theInterruptAssert{};
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
    namespace SysconStartaprp0{    ///<Start logic edge control register 0; bottom 32 interrupts
        using Addr = Register::Address<0x40048200,0x00000000,0x00000000,unsigned>;
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aprpio00{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> aprpio01{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aprpio02{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> aprpio03{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> aprpio04{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> aprpio05{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> aprpio06{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> aprpio07{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> aprpio08{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aprpio09{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> aprpio010{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> aprpio011{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> aprpio10{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> aprpio11{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> aprpio12{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> aprpio13{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aprpio14{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> aprpio15{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> aprpio16{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> aprpio17{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> aprpio18{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> aprpio19{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> aprpio110{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> aprpio111{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> aprpio20{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> aprpio21{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> aprpio22{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> aprpio23{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> aprpio24{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> aprpio25{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> aprpio26{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> aprpio27{}; 
    }
    namespace SysconStarterp0{    ///<Start logic signal enable register 0; bottom 32 interrupts
        using Addr = Register::Address<0x40048204,0x00000000,0x00000000,unsigned>;
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> erpio00{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erpio01{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> erpio02{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> erpio03{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> erpio04{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> erpio05{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> erpio06{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> erpio07{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> erpio08{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> erpio09{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> erpio010{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> erpio011{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> erpio10{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> erpio11{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> erpio12{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> erpio13{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> erpio14{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> erpio15{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> erpio16{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> erpio17{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> erpio18{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> erpio19{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> erpio110{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> erpio111{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> erpio20{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> erpio21{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> erpio22{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> erpio23{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> erpio24{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> erpio25{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> erpio26{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> erpio27{}; 
    }
    namespace SysconStartrsrp0clr{    ///<Start logic reset register 0; bottom 32 interrupts
        using Addr = Register::Address<0x40048208,0x00000000,0x00000000,unsigned>;
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rsrpio00{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rsrpio01{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsrpio02{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsrpio03{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rsrpio04{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsrpio05{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rsrpio06{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rsrpio07{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rsrpio08{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rsrpio09{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rsrpio010{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rsrpio011{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rsrpio10{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rsrpio11{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rsrpio12{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rsrpio13{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rsrpio14{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rsrpio15{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rsrpio16{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsrpio17{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rsrpio18{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rsrpio19{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> rsrpio110{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rsrpio111{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rsrpio20{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rsrpio21{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rsrpio22{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> rsrpio23{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rsrpio24{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rsrpio25{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rsrpio26{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> rsrpio27{}; 
    }
    namespace SysconStartsrp0{    ///<Start logic status register 0; bottom 32 interrupts
        using Addr = Register::Address<0x4004820c,0x00000000,0x00000000,unsigned>;
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> srpio00{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> srpio01{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srpio02{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> srpio03{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> srpio04{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> srpio05{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srpio06{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srpio07{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srpio08{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srpio09{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> srpio010{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> srpio011{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> srpio10{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> srpio11{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> srpio12{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> srpio13{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srpio14{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> srpio15{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> srpio16{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> srpio17{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> srpio18{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> srpio19{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srpio110{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> srpio111{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> srpio20{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> srpio21{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> srpio22{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> srpio23{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> srpio24{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> srpio25{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> srpio26{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> srpio27{}; 
    }
    namespace SysconStartaprp1{    ///<Start logic edge control register 1; top 8 interrupts
        using Addr = Register::Address<0x40048210,0x00000000,0x00000000,unsigned>;
        ///Edge select for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aprpio28{}; 
        ///Edge select for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> aprpio29{}; 
        ///Edge select for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aprpio210{}; 
        ///Edge select for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> aprpio211{}; 
        ///Edge select for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> aprpio30{}; 
        ///Edge select for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> aprpio31{}; 
        ///Edge select for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> aprpio32{}; 
        ///Edge select for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> aprpio33{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconStarterp1{    ///<Start logic signal enable register 1; top 8 interrupts
        using Addr = Register::Address<0x40048214,0x00000000,0x00000000,unsigned>;
        ///Enable start signal for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> erpio28{}; 
        ///Enable start signal for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erpio29{}; 
        ///Enable start signal for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> erpio210{}; 
        ///Enable start signal for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> erpio211{}; 
        ///Enable start signal for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> erpio30{}; 
        ///Enable start signal for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> erpio31{}; 
        ///Enable start signal for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> erpio32{}; 
        ///Enable start signal for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Disabled. 1 = Enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> erpio33{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconStartrsrp1clr{    ///<Start logic reset register 1; top 8 interrupts
        using Addr = Register::Address<0x40048218,0x00000000,0x00000000,unsigned>;
        ///Start signal reset for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rsrpio28{}; 
        ///Start signal reset for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rsrpio29{}; 
        ///Start signal reset for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsrpio210{}; 
        ///Start signal reset for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsrpio211{}; 
        ///Start signal reset for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rsrpio30{}; 
        ///Start signal reset for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsrpio31{}; 
        ///Start signal reset for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rsrpio32{}; 
        ///Start signal reset for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rsrpio33{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconStartsrp1{    ///<Start logic status register 1; top 8 interrupts
        using Addr = Register::Address<0x4004821c,0x00000000,0x00000000,unsigned>;
        ///Start signal status for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> srpio28{}; 
        ///Start signal status for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> srpio29{}; 
        ///Start signal status for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srpio210{}; 
        ///Start signal status for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> srpio211{}; 
        ///Start signal status for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> srpio30{}; 
        ///Start signal status for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> srpio31{}; 
        ///Start signal status for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srpio32{}; 
        ///Start signal status for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srpio33{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPdsleepcfg{    ///<Power-down states in Deep-sleep mode
        using Addr = Register::Address<0x40048230,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always write these bits as 111.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> fixedval0{}; 
        ///BOD power-down control in Deep-sleep mode, see Table 49.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> fixedval1{}; 
        ///Watchdog oscillator power control in Deep-sleep mode, see Table 49.
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::poweredDown> poweredDown{};
        }
        ///Reserved. Always write these bits as 11111.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,7),Register::ReadWriteAccess,unsigned> fixedval2{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///USB PLL wake-up configuration
        enum class UsbpllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,UsbpllpdVal> usbpllPd{}; 
        namespace UsbpllpdValC{
            constexpr Register::FieldValue<decltype(usbpllPd)::Type,UsbpllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(usbpllPd)::Type,UsbpllpdVal::poweredDown> poweredDown{};
        }
        ///Reserved. Always write this bit as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fixedval0{}; 
        ///USB pad wake-up configuration
        enum class UsbpadpdVal {
            usbPhyPowered=0x00000000,     ///<USB PHY powered
            usbPhyPoweredDown=0x00000001,     ///<USB PHY powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,UsbpadpdVal> usbpadPd{}; 
        namespace UsbpadpdValC{
            constexpr Register::FieldValue<decltype(usbpadPd)::Type,UsbpadpdVal::usbPhyPowered> usbPhyPowered{};
            constexpr Register::FieldValue<decltype(usbpadPd)::Type,UsbpadpdVal::usbPhyPoweredDown> usbPhyPoweredDown{};
        }
        ///Reserved. Always write this bit as 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fixedval1{}; 
        ///Reserved. Always write this bit as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fixedval2{}; 
        ///Reserved. Always write these bits as 111.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> fixedval3{}; 
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
        ///System oscillator power-down[1]
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
        ///USB PLL power-down
        enum class UsbpllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,UsbpllpdVal> usbpllPd{}; 
        namespace UsbpllpdValC{
            constexpr Register::FieldValue<decltype(usbpllPd)::Type,UsbpllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(usbpllPd)::Type,UsbpllpdVal::poweredDown> poweredDown{};
        }
        ///Reserved. Always write this bit as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fixedval0{}; 
        ///USB pad power-down configuration
        enum class UsbpadpdVal {
            usbPhyPowered=0x00000000,     ///<USB PHY powered
            usbPhyPoweredDown=0x00000001,     ///<USB PHY powered down (suspend mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,UsbpadpdVal> usbpadPd{}; 
        namespace UsbpadpdValC{
            constexpr Register::FieldValue<decltype(usbpadPd)::Type,UsbpadpdVal::usbPhyPowered> usbPhyPowered{};
            constexpr Register::FieldValue<decltype(usbpadPd)::Type,UsbpadpdVal::usbPhyPoweredDown> usbPhyPoweredDown{};
        }
        ///Reserved. Always write this bit as 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fixedval1{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconDeviceId{    ///<Device ID
        using Addr = Register::Address<0x400483f4,0x00000000,0x00000000,unsigned>;
        ///Device ID for LPC13xx parts: 0x2C42 502B = LPC1311FHN33 								0x2C40 102B = LPC1313FHN33 								0x2C40 102B = LPC1313FBD48 								0x3D01 402B = LPC1342FHN33 								0x3D00 002B = LPC1343FHN33 								0x3D00 002B = LPC1343FBD48 								0x1816 902B = LPC1311FHN33/01 								0x1830 102B = LPC1313FHN33/01 								0x1830 102B = LPC1313FBD48/01
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
}
