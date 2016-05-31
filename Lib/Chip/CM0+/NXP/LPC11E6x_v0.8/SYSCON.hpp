#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System configuration (SYSCON)
    namespace SysconSysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40048000,0x00000000,0x00000000,unsigned>;
        ///System memory remap. Value 0x3 is reserved.
        enum class MapVal {
            bootLoaderMode=0x00000000,     ///<Boot Loader Mode. Interrupt vectors are re-mapped to Boot ROM.
            userRamMode=0x00000001,     ///<User RAM Mode. Interrupt vectors are re-mapped to Static RAM.
            userFlashMode=0x00000002,     ///<User Flash Mode. Interrupt vectors are not re-mapped and reside in Flash.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MapVal> map{}; 
        namespace MapValC{
            constexpr Register::FieldValue<decltype(map)::Type,MapVal::bootLoaderMode> bootLoaderMode{};
            constexpr Register::FieldValue<decltype(map)::Type,MapVal::userRamMode> userRamMode{};
            constexpr Register::FieldValue<decltype(map)::Type,MapVal::userFlashMode> userFlashMode{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPresetctrl{    ///<Peripheral reset control
        using Addr = Register::Address<0x40048004,0x00000000,0x00000000,unsigned>;
        ///SSP0 reset control
        enum class Ssp0rstnVal {
            reset=0x00000000,     ///<Reset. Resets the SSP0 peripheral.
            clearReset=0x00000001,     ///<Clear reset. SSP0 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ssp0rstnVal> ssp0RstN{}; 
        namespace Ssp0rstnValC{
            constexpr Register::FieldValue<decltype(ssp0RstN)::Type,Ssp0rstnVal::reset> reset{};
            constexpr Register::FieldValue<decltype(ssp0RstN)::Type,Ssp0rstnVal::clearReset> clearReset{};
        }
        ///I2C0 reset control
        enum class I2c0rstnVal {
            reset=0x00000000,     ///<Reset. Resets the I2C0 peripheral.
            clearReset=0x00000001,     ///<Clear reset. I2C0 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,I2c0rstnVal> i2c0RstN{}; 
        namespace I2c0rstnValC{
            constexpr Register::FieldValue<decltype(i2c0RstN)::Type,I2c0rstnVal::reset> reset{};
            constexpr Register::FieldValue<decltype(i2c0RstN)::Type,I2c0rstnVal::clearReset> clearReset{};
        }
        ///SSP1 reset control
        enum class Ssp1rstnVal {
            reset=0x00000000,     ///<Reset. Resets the SSP1 peripheral.
            clearReset=0x00000001,     ///<Clear reset. SSP1 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ssp1rstnVal> ssp1RstN{}; 
        namespace Ssp1rstnValC{
            constexpr Register::FieldValue<decltype(ssp1RstN)::Type,Ssp1rstnVal::reset> reset{};
            constexpr Register::FieldValue<decltype(ssp1RstN)::Type,Ssp1rstnVal::clearReset> clearReset{};
        }
        ///I2C1 reset control
        enum class I2c1rstnVal {
            reset=0x00000000,     ///<Reset. Resets the I2C1 peripheral.
            clearReset=0x00000001,     ///<Clear reset. I2C1 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,I2c1rstnVal> i2c1RstN{}; 
        namespace I2c1rstnValC{
            constexpr Register::FieldValue<decltype(i2c1RstN)::Type,I2c1rstnVal::reset> reset{};
            constexpr Register::FieldValue<decltype(i2c1RstN)::Type,I2c1rstnVal::clearReset> clearReset{};
        }
        ///FRG reset control
        enum class FrgrstnVal {
            reset=0x00000000,     ///<Reset. Resets the FRG peripheral.
            clearReset=0x00000001,     ///<Clear reset. FRG reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FrgrstnVal> frgRstN{}; 
        namespace FrgrstnValC{
            constexpr Register::FieldValue<decltype(frgRstN)::Type,FrgrstnVal::reset> reset{};
            constexpr Register::FieldValue<decltype(frgRstN)::Type,FrgrstnVal::clearReset> clearReset{};
        }
        ///USART1 reset control
        enum class Usart1rstnVal {
            reset=0x00000000,     ///<Reset. Resets the USART1 peripheral.
            clearReset=0x00000001,     ///<Clear reset. USART1 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Usart1rstnVal> usart1RstN{}; 
        namespace Usart1rstnValC{
            constexpr Register::FieldValue<decltype(usart1RstN)::Type,Usart1rstnVal::reset> reset{};
            constexpr Register::FieldValue<decltype(usart1RstN)::Type,Usart1rstnVal::clearReset> clearReset{};
        }
        ///USART2 reset control
        enum class Usart2rstnVal {
            reset=0x00000000,     ///<Reset. Resets the USART2 peripheral.
            clearReset=0x00000001,     ///<Clear reset. USART2 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Usart2rstnVal> usart2RstN{}; 
        namespace Usart2rstnValC{
            constexpr Register::FieldValue<decltype(usart2RstN)::Type,Usart2rstnVal::reset> reset{};
            constexpr Register::FieldValue<decltype(usart2RstN)::Type,Usart2rstnVal::clearReset> clearReset{};
        }
        ///USART3 reset control
        enum class Usart3rstnVal {
            reset=0x00000000,     ///<Reset. Resets the USART3 peripheral.
            clearReset=0x00000001,     ///<Clear reset. USART3 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Usart3rstnVal> usart3RstN{}; 
        namespace Usart3rstnValC{
            constexpr Register::FieldValue<decltype(usart3RstN)::Type,Usart3rstnVal::reset> reset{};
            constexpr Register::FieldValue<decltype(usart3RstN)::Type,Usart3rstnVal::clearReset> clearReset{};
        }
        ///USART4 reset control
        enum class Usart4rstnVal {
            reset=0x00000000,     ///<Reset. Resets the USART4 peripheral.
            clearReset=0x00000001,     ///<Clear reset. USART4 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Usart4rstnVal> usart4RstN{}; 
        namespace Usart4rstnValC{
            constexpr Register::FieldValue<decltype(usart4RstN)::Type,Usart4rstnVal::reset> reset{};
            constexpr Register::FieldValue<decltype(usart4RstN)::Type,Usart4rstnVal::clearReset> clearReset{};
        }
        ///SCT0 reset control
        enum class Sct0rstnVal {
            reset=0x00000000,     ///<Reset. Resets the SCT0 peripheral.
            clearReset=0x00000001,     ///<Clear reset. SCT0 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Sct0rstnVal> sct0RstN{}; 
        namespace Sct0rstnValC{
            constexpr Register::FieldValue<decltype(sct0RstN)::Type,Sct0rstnVal::reset> reset{};
            constexpr Register::FieldValue<decltype(sct0RstN)::Type,Sct0rstnVal::clearReset> clearReset{};
        }
        ///SCT1 reset control
        enum class Sct1rstnVal {
            reset=0x00000000,     ///<Reset. Resets the SCT1 peripheral.
            clearReset=0x00000001,     ///<Clear reset. SCT1 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sct1rstnVal> sct1RstN{}; 
        namespace Sct1rstnValC{
            constexpr Register::FieldValue<decltype(sct1RstN)::Type,Sct1rstnVal::reset> reset{};
            constexpr Register::FieldValue<decltype(sct1RstN)::Type,Sct1rstnVal::clearReset> clearReset{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSyspllctrl{    ///<System PLL control
        using Addr = Register::Address<0x40048008,0x00000000,0x00000000,unsigned>;
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
        ///Reserved. Do not write ones to reserved bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSyspllstat{    ///<System PLL status
        using Addr = Register::Address<0x4004800c,0x00000000,0x00000000,unsigned>;
        ///PLL lock status
        enum class LockVal {
            noLock=0x00000000,     ///<No lock. PLL not locked
            lock=0x00000001,     ///<Lock. PLL locked
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LockVal> lock{}; 
        namespace LockValC{
            constexpr Register::FieldValue<decltype(lock)::Type,LockVal::noLock> noLock{};
            constexpr Register::FieldValue<decltype(lock)::Type,LockVal::lock> lock{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconRtcoscctrl{    ///<RTC oscillator 32 kHz output control
        using Addr = Register::Address<0x4004801c,0x00000000,0x00000000,unsigned>;
        ///Enable the RTC 32 kHz output.
        enum class RtcoscenVal {
            disabled=0x00000000,     ///<Disabled. 32 kHz output disabled.
            enabled=0x00000001,     ///<Enabled. 32 kHz output enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RtcoscenVal> rtcoscen{}; 
        namespace RtcoscenValC{
            constexpr Register::FieldValue<decltype(rtcoscen)::Type,RtcoscenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtcoscen)::Type,RtcoscenVal::enabled> enabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSysoscctrl{    ///<System oscillator control
        using Addr = Register::Address<0x40048020,0x00000000,0x00000000,unsigned>;
        ///Bypass system oscillator
        enum class BypassVal {
            oscillatorIsNotBy=0x00000000,     ///<Oscillator is not bypassed.
            bypassEnabled=0x00000001,     ///<Bypass enabled. PLL input (sys_osc_clk) is fed directly from the XTALIN pin bypassing the oscillator. Use this mode when using an external clock source instead of the crystal oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::oscillatorIsNotBy> oscillatorIsNotBy{};
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::bypassEnabled> bypassEnabled{};
        }
        ///Determines frequency range for Low-power oscillator.
        enum class FreqrangeVal {
            low=0x00000000,     ///<Low. 1 - 20 MHz frequency range.
            high=0x00000001,     ///<High. 15 - 25 MHz frequency range.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FreqrangeVal> freqrange{}; 
        namespace FreqrangeValC{
            constexpr Register::FieldValue<decltype(freqrange)::Type,FreqrangeVal::low> low{};
            constexpr Register::FieldValue<decltype(freqrange)::Type,FreqrangeVal::high> high{};
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
            v0=0x00000001,     ///<0.6 MHz
            v1=0x00000002,     ///<1.05 MHz
            v1=0x00000003,     ///<1.4 MHz
            v1=0x00000004,     ///<1.75 MHz
            v2=0x00000005,     ///<2.1 MHz
            v2=0x00000006,     ///<2.4 MHz
            v2=0x00000007,     ///<2.7 MHz
            v3=0x00000008,     ///<3.0 MHz
            v3=0x00000009,     ///<3.25 MHz
            v3=0x0000000a,     ///<3.5 MHz
            v3=0x0000000b,     ///<3.75 MHz
            v4=0x0000000c,     ///<4.0 MHz
            v4=0x0000000d,     ///<4.2 MHz
            v4=0x0000000e,     ///<4.4 MHz
            v4=0x0000000f,     ///<4.6 MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,5),Register::ReadWriteAccess,FreqselVal> freqsel{}; 
        namespace FreqselValC{
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v1> v1{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v1> v1{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v1> v1{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v2> v2{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v2> v2{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v2> v2{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v3> v3{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v3> v3{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v3> v3{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v3> v3{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v4> v4{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v4> v4{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v4> v4{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v4> v4{};
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
    namespace SysconSysrststat{    ///<System reset status register
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
            noResetEventDetec=0x00000000,     ///<No reset event detected
            resetDetected=0x00000001,     ///<Reset detected
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
        ///Status of the software system reset
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
            irc=0x00000000,     ///<IRC
            systemOscillator=0x00000001,     ///<System oscillator. Crystal Oscillator (SYSOSC)
            v32KhzClock=0x00000003,     ///<32 kHz clock.Select this option when the 32 kHz clock is the clock source for the main clock and select the pll input in the MAINCLKSEL register. Do not use the 32 kHz clock with the PLL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::irc> irc{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::systemOscillator> systemOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::v32KhzClock> v32KhzClock{};
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
    namespace SysconSysahbclkdiv{    ///<System clock divider
        using Addr = Register::Address<0x40048078,0x00000000,0x00000000,unsigned>;
        ///System AHB clock divider values  0: System clock disabled.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSysahbclkctrl{    ///<System clock control
        using Addr = Register::Address<0x40048080,0x00000000,0x00000000,unsigned>;
        ///This bit is read-only and always reads as 1. It configures the  always-on clock for the AHB, the APB bridges, the Cortex-M0 core clocks, SYSCON, reset control, SRAM0, and the PMU. Writes to this bit are ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sys{}; 
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
        ///Enables clock for Main SRAM0.
        enum class Ram0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ram0Val> ram0{}; 
        namespace Ram0ValC{
            constexpr Register::FieldValue<decltype(ram0)::Type,Ram0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ram0)::Type,Ram0Val::enable> enable{};
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
        ///Enables clock for flash access.
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
        enum class I2c0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,I2c0Val> i2c0{}; 
        namespace I2c0ValC{
            constexpr Register::FieldValue<decltype(i2c0)::Type,I2c0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(i2c0)::Type,I2c0Val::enable> enable{};
        }
        ///Enables clock for GPIO port registers.
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
        ///Enables clock for SSP0.
        enum class Ssp0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ssp0Val> ssp0{}; 
        namespace Ssp0ValC{
            constexpr Register::FieldValue<decltype(ssp0)::Type,Ssp0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ssp0)::Type,Ssp0Val::enable> enable{};
        }
        ///Enables clock for USART0.
        enum class Usart0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Usart0Val> usart0{}; 
        namespace Usart0ValC{
            constexpr Register::FieldValue<decltype(usart0)::Type,Usart0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(usart0)::Type,Usart0Val::enable> enable{};
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
        ///Enables clock for WWDT.
        enum class WwdtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,WwdtVal> wwdt{}; 
        namespace WwdtValC{
            constexpr Register::FieldValue<decltype(wwdt)::Type,WwdtVal::disable> disable{};
            constexpr Register::FieldValue<decltype(wwdt)::Type,WwdtVal::enable> enable{};
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Enables clock for SSP1.
        enum class Ssp1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ssp1Val> ssp1{}; 
        namespace Ssp1ValC{
            constexpr Register::FieldValue<decltype(ssp1)::Type,Ssp1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ssp1)::Type,Ssp1Val::enable> enable{};
        }
        ///Enables clock to GPIO Pin interrupt register interface.
        enum class PintVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,PintVal> pint{}; 
        namespace PintValC{
            constexpr Register::FieldValue<decltype(pint)::Type,PintVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pint)::Type,PintVal::enable> enable{};
        }
        ///Enables clock to USART1 register interface.
        enum class Usart1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Usart1Val> usart1{}; 
        namespace Usart1ValC{
            constexpr Register::FieldValue<decltype(usart1)::Type,Usart1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(usart1)::Type,Usart1Val::enable> enable{};
        }
        ///Enables clock to USART2 register interface.
        enum class Usart2Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Usart2Val> usart2{}; 
        namespace Usart2ValC{
            constexpr Register::FieldValue<decltype(usart2)::Type,Usart2Val::disable> disable{};
            constexpr Register::FieldValue<decltype(usart2)::Type,Usart2Val::enable> enable{};
        }
        ///Enables clock to USART3 and USART4 register interfaces.
        enum class Usart34Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Usart34Val> usart34{}; 
        namespace Usart34ValC{
            constexpr Register::FieldValue<decltype(usart34)::Type,Usart34Val::disable> disable{};
            constexpr Register::FieldValue<decltype(usart34)::Type,Usart34Val::enable> enable{};
        }
        ///Enables clock to GPIO GROUP0 interrupt register interface.
        enum class Group0intVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Group0intVal> group0int{}; 
        namespace Group0intValC{
            constexpr Register::FieldValue<decltype(group0int)::Type,Group0intVal::disable> disable{};
            constexpr Register::FieldValue<decltype(group0int)::Type,Group0intVal::enable> enable{};
        }
        ///Enables clock to GPIO GROUP1 interrupt register interface.
        enum class Group1intVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Group1intVal> group1int{}; 
        namespace Group1intValC{
            constexpr Register::FieldValue<decltype(group1int)::Type,Group1intVal::disable> disable{};
            constexpr Register::FieldValue<decltype(group1int)::Type,Group1intVal::enable> enable{};
        }
        ///Enables clock for I2C1.
        enum class I2c1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,I2c1Val> i2c1{}; 
        namespace I2c1ValC{
            constexpr Register::FieldValue<decltype(i2c1)::Type,I2c1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(i2c1)::Type,I2c1Val::enable> enable{};
        }
        ///Enables clock for SRAM1 located at 0x2000 0000 to 0x2000 0800.
        enum class Ram1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ram1Val> ram1{}; 
        namespace Ram1ValC{
            constexpr Register::FieldValue<decltype(ram1)::Type,Ram1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ram1)::Type,Ram1Val::enable> enable{};
        }
        ///Enables USB SRAM/SRAM2 block located at 0x2000 4000 to 0x2000 4800.
        enum class UsbsramVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,UsbsramVal> usbsram{}; 
        namespace UsbsramValC{
            constexpr Register::FieldValue<decltype(usbsram)::Type,UsbsramVal::disable> disable{};
            constexpr Register::FieldValue<decltype(usbsram)::Type,UsbsramVal::enable> enable{};
        }
        ///Enables clock for CRC.
        enum class CrcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,CrcVal> crc{}; 
        namespace CrcValC{
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::enable> enable{};
        }
        ///Enables clock for DMA.
        enum class DmaVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::enable> enable{};
        }
        ///Enables clock for RTC register interface.
        enum class RtcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,RtcVal> rtc{}; 
        namespace RtcValC{
            constexpr Register::FieldValue<decltype(rtc)::Type,RtcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rtc)::Type,RtcVal::enable> enable{};
        }
        ///Enables clock for SCT0 and SCT1.
        enum class Sct01Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Sct01Val> sct01{}; 
        namespace Sct01ValC{
            constexpr Register::FieldValue<decltype(sct01)::Type,Sct01Val::disable> disable{};
            constexpr Register::FieldValue<decltype(sct01)::Type,Sct01Val::enable> enable{};
        }
    }
    namespace SysconSsp0clkdiv{    ///<SSP0 clock divider
        using Addr = Register::Address<0x40048094,0x00000000,0x00000000,unsigned>;
        ///SPI0_PCLK clock divider values.  0: System clock disabled.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUsart0clkdiv{    ///<USART0 clock divider
        using Addr = Register::Address<0x40048098,0x00000000,0x00000000,unsigned>;
        ///UART_PCLK clock divider values  0: Disable UART_PCLK.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSsp1clkdiv{    ///<SSP1 clock divider
        using Addr = Register::Address<0x4004809c,0x00000000,0x00000000,unsigned>;
        ///SSP1_PCLK clock divider values  0: Disable SSP1_PCLK.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconFrgclkdiv{    ///<Clock divider for the common fractional baud rate generator of USART1, USART2, USART3, USART4
        using Addr = Register::Address<0x400480a0,0x00000000,0x00000000,unsigned>;
        ///USART fractional baud rate generator clock divider values.  0: Clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconClkoutsel{    ///<CLKOUT clock source select
        using Addr = Register::Address<0x400480e0,0x00000000,0x00000000,unsigned>;
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
        ///CLKOUT clock divider values  0: Disable CLKOUT clock divider.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUartfrgdiv{    ///<USART fractional generator divider value
        using Addr = Register::Address<0x400480f0,0x00000000,0x00000000,unsigned>;
        ///Denominator of the fractional divider. DIV is equal to the programmed value +1. Always set to 0xFF to use with the fractional baud rate generator.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUartfrgmult{    ///<USART fractional generator multiplier value
        using Addr = Register::Address<0x400480f4,0x00000000,0x00000000,unsigned>;
        ///Numerator of the fractional divider. MULT is equal to the programmed value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mult{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconExttracecmd{    ///<External trace buffer command register
        using Addr = Register::Address<0x400480fc,0x00000000,0x00000000,unsigned>;
        ///Trace start command. Writing a one to this bit sets the TSTART signal to the MTB to HIGH and starts tracing if the TSTARTEN bit in the MTB master register is set to one as well.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        ///Trace stop command. Writing a one to this bit sets the TSTOP signal in the MTB to HIGH and stops tracing if the TSTOPEN bit in the MTB master register is set to one as well.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x40048100,0x00000000,0x00000000,unsigned>;
        ///State of PIO0_23 through PIO0_0 at power-on reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> piostat{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPioporcap1{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40048104,0x00000000,0x00000000,unsigned>;
        ///State of PIO1_31 through PIO1_0 at power-on reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace SysconPioporcap2{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40048108,0xff000000,0x00000000,unsigned>;
        ///State of PIO2_23 through PIO2_0 at power-on reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace SysconIoconclkdiv6{    ///<Peripheral clock  to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048134,0x00000000,0x00000000,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconIoconclkdiv5{    ///<Peripheral clock  to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048138,0x00000000,0x00000000,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconIoconclkdiv4{    ///<Peripheral clock  to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x4004813c,0x00000000,0x00000000,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconIoconclkdiv3{    ///<Peripheral clock  to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048140,0x00000000,0x00000000,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconIoconclkdiv2{    ///<Peripheral clock  to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048144,0x00000000,0x00000000,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconIoconclkdiv1{    ///<Peripheral clock  to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048148,0x00000000,0x00000000,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconIoconclkdiv0{    ///<Peripheral clock  to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x4004814c,0x00000000,0x00000000,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconBodctrl{    ///<Brown-Out Detect
        using Addr = Register::Address<0x40048150,0x00000000,0x00000000,unsigned>;
        ///BOD reset level
        enum class BodrstlevVal {
            level0=0x00000000,     ///<Level 0.
            level1=0x00000001,     ///<Level 1.
            level2=0x00000002,     ///<Level 2.
            level3=0x00000003,     ///<Level 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,BodrstlevVal> bodrstlev{}; 
        namespace BodrstlevValC{
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level0> level0{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level1> level1{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level2> level2{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level3> level3{};
        }
        ///BOD interrupt level
        enum class BodintvalVal {
            level2=0x00000002,     ///<Level 2.
            level3=0x00000003,     ///<Level 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,BodintvalVal> bodintval{}; 
        namespace BodintvalValC{
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level2> level2{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level3> level3{};
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
    namespace SysconIrqlatency{    ///<IRQ delay. Allows trade-off between interrupt latency and determinism.
        using Addr = Register::Address<0x40048170,0x00000000,0x00000000,unsigned>;
        ///8-bit latency value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> latency{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconNmisrc{    ///<NMI Source Control
        using Addr = Register::Address<0x40048174,0x00000000,0x00000000,unsigned>;
        ///The IRQ number of the interrupt that acts as the Non-Maskable Interrupt (NMI) if bit 31 is 1. See Table 6 for the list of interrupt sources and their IRQ numbers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> irqn{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt (NMI) source selected by bits 4:0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmien{}; 
    }
    namespace SysconStarterp0{    ///<Start logic 0 interrupt wake-up enable register 0
        using Addr = Register::Address<0x40048204,0x00000000,0x00000000,unsigned>;
        ///Pin interrupt 0 wake-up
        enum class Pint0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pint0Val> pint0{}; 
        namespace Pint0ValC{
            constexpr Register::FieldValue<decltype(pint0)::Type,Pint0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint0)::Type,Pint0Val::enabled> enabled{};
        }
        ///Pin interrupt 1 wake-up
        enum class Pint1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pint1Val> pint1{}; 
        namespace Pint1ValC{
            constexpr Register::FieldValue<decltype(pint1)::Type,Pint1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint1)::Type,Pint1Val::enabled> enabled{};
        }
        ///Pin interrupt 2 wake-up
        enum class Pint2Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pint2Val> pint2{}; 
        namespace Pint2ValC{
            constexpr Register::FieldValue<decltype(pint2)::Type,Pint2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint2)::Type,Pint2Val::enabled> enabled{};
        }
        ///Pin interrupt 3 wake-up
        enum class Pint3Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pint3Val> pint3{}; 
        namespace Pint3ValC{
            constexpr Register::FieldValue<decltype(pint3)::Type,Pint3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint3)::Type,Pint3Val::enabled> enabled{};
        }
        ///Pin interrupt 4 wake-up
        enum class Pint4Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pint4Val> pint4{}; 
        namespace Pint4ValC{
            constexpr Register::FieldValue<decltype(pint4)::Type,Pint4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint4)::Type,Pint4Val::enabled> enabled{};
        }
        ///Pin interrupt 5 wake-up
        enum class Pint5Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pint5Val> pint5{}; 
        namespace Pint5ValC{
            constexpr Register::FieldValue<decltype(pint5)::Type,Pint5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint5)::Type,Pint5Val::enabled> enabled{};
        }
        ///Pin interrupt 6 wake-up
        enum class Pint6Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pint6Val> pint6{}; 
        namespace Pint6ValC{
            constexpr Register::FieldValue<decltype(pint6)::Type,Pint6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint6)::Type,Pint6Val::enabled> enabled{};
        }
        ///Pin interrupt 7 wake-up
        enum class Pint7Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pint7Val> pint7{}; 
        namespace Pint7ValC{
            constexpr Register::FieldValue<decltype(pint7)::Type,Pint7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint7)::Type,Pint7Val::enabled> enabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconStarterp1{    ///<Start logic 1 interrupt wake-up enable register 1
        using Addr = Register::Address<0x40048214,0xfe000fff,0x00000000,unsigned>;
        ///RTC interrupt wake-up
        enum class RtcintVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,RtcintVal> rtcint{}; 
        namespace RtcintValC{
            constexpr Register::FieldValue<decltype(rtcint)::Type,RtcintVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtcint)::Type,RtcintVal::enabled> enabled{};
        }
        ///Combined WWDT interrupt or Brown Out Detect (BOD) interrupt wake-up
        enum class WwdtbodintVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,WwdtbodintVal> wwdtBodint{}; 
        namespace WwdtbodintValC{
            constexpr Register::FieldValue<decltype(wwdtBodint)::Type,WwdtbodintVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(wwdtBodint)::Type,WwdtbodintVal::enabled> enabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,14),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///GPIO GROUP0 interrupt wake-up
        enum class Group0intVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Group0intVal> group0int{}; 
        namespace Group0intValC{
            constexpr Register::FieldValue<decltype(group0int)::Type,Group0intVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(group0int)::Type,Group0intVal::enabled> enabled{};
        }
        ///GPIO GROUP1 interrupt wake-up
        enum class Group1intVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Group1intVal> group1int{}; 
        namespace Group1intValC{
            constexpr Register::FieldValue<decltype(group1int)::Type,Group1intVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(group1int)::Type,Group1intVal::enabled> enabled{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Combined USART1 and USART4 interrupt wake-up
        enum class Usart14Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Usart14Val> usart14{}; 
        namespace Usart14ValC{
            constexpr Register::FieldValue<decltype(usart14)::Type,Usart14Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart14)::Type,Usart14Val::enabled> enabled{};
        }
        ///Combined USART2 and USART3 interrupt wake-up
        enum class Usart23Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Usart23Val> usart23{}; 
        namespace Usart23ValC{
            constexpr Register::FieldValue<decltype(usart23)::Type,Usart23Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart23)::Type,Usart23Val::enabled> enabled{};
        }
    }
    namespace SysconPdsleepcfg{    ///<Power-down states in deep-sleep mode
        using Addr = Register::Address<0x40048230,0x00000007,0x00000000,unsigned>;
        ///BOD power-down control for Deep-sleep and Power-down mode
        enum class BodpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::powered> powered{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Watchdog oscillator power-down control for Deep-sleep and Power-down mode
        enum class WdtoscpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::powered> powered{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPdawakecfg{    ///<Power-down states for wake-up from deep-sleep
        using Addr = Register::Address<0x40048234,0x00000000,0x00000000,unsigned>;
        ///IRC oscillator output wake-up configuration
        enum class IrcoutpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrcoutpdVal> ircoutPd{}; 
        namespace IrcoutpdValC{
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::powered> powered{};
        }
        ///IRC oscillator power-down wake-up configuration
        enum class IrcpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrcpdVal> ircPd{}; 
        namespace IrcpdValC{
            constexpr Register::FieldValue<decltype(ircPd)::Type,IrcpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(ircPd)::Type,IrcpdVal::powered> powered{};
        }
        ///Flash wake-up configuration
        enum class FlashpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FlashpdVal> flashPd{}; 
        namespace FlashpdValC{
            constexpr Register::FieldValue<decltype(flashPd)::Type,FlashpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(flashPd)::Type,FlashpdVal::powered> powered{};
        }
        ///BOD wake-up configuration
        enum class BodpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::powered> powered{};
        }
        ///ADC wake-up configuration
        enum class AdcpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AdcpdVal> adcPd{}; 
        namespace AdcpdValC{
            constexpr Register::FieldValue<decltype(adcPd)::Type,AdcpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(adcPd)::Type,AdcpdVal::powered> powered{};
        }
        ///Crystal oscillator wake-up configuration
        enum class SysoscpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SysoscpdVal> sysoscPd{}; 
        namespace SysoscpdValC{
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::powered> powered{};
        }
        ///Watchdog oscillator wake-up configuration
        enum class WdtoscpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::powered> powered{};
        }
        ///System PLL wake-up configuration
        enum class SyspllpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SyspllpdVal> syspllPd{}; 
        namespace SyspllpdValC{
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::powered> powered{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write this bit as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. This bit must be set to one in Run mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Temperature sensor wake-up configuration
        enum class TempsensepdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,TempsensepdVal> tempsensePd{}; 
        namespace TempsensepdValC{
            constexpr Register::FieldValue<decltype(tempsensePd)::Type,TempsensepdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(tempsensePd)::Type,TempsensepdVal::poweredDown> poweredDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPdruncfg{    ///<Power configuration register
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
        ///Crystal oscillator power-down. After power-up, add a software delay of approximately 500 us before using.
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write this bit as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. This bit must be set to one in Run mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Temperature sensor wake-up configuration
        enum class TempsensepdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,TempsensepdVal> tempsensePd{}; 
        namespace TempsensepdValC{
            constexpr Register::FieldValue<decltype(tempsensePd)::Type,TempsensepdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(tempsensePd)::Type,TempsensepdVal::poweredDown> poweredDown{};
        }
        ///Reserved. Always write these bits as 0b11.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconDeviceId{    ///<Device ID
        using Addr = Register::Address<0x400483f4,0x00000000,0x00000000,unsigned>;
        ///PARTID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
    namespace SysconPintsel0{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048178,0x00000000,0x00000000,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPintsel1{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x4004817c,0x00000000,0x00000000,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPintsel2{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048180,0x00000000,0x00000000,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPintsel3{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048184,0x00000000,0x00000000,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPintsel4{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048188,0x00000000,0x00000000,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPintsel5{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x4004818c,0x00000000,0x00000000,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPintsel6{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048190,0x00000000,0x00000000,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPintsel7{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048194,0x00000000,0x00000000,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
