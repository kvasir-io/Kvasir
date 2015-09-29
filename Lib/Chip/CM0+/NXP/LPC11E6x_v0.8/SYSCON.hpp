#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration (SYSCON)
    namespace Nonesysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40048000,0xfffffffc,0,unsigned>;
        ///System memory remap. Value 0x3 is reserved.
        enum class mapVal {
            bootLoaderMode=0x00000000,     ///<Boot Loader Mode. Interrupt vectors are re-mapped to Boot ROM.
            userRamMode=0x00000001,     ///<User RAM Mode. Interrupt vectors are re-mapped to Static RAM.
            userFlashMode=0x00000002,     ///<User Flash Mode. Interrupt vectors are not re-mapped and reside in Flash.
        };
        namespace mapValC{
            constexpr MPL::Value<mapVal,mapVal::bootLoaderMode> bootLoaderMode{};
            constexpr MPL::Value<mapVal,mapVal::userRamMode> userRamMode{};
            constexpr MPL::Value<mapVal,mapVal::userFlashMode> userFlashMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,mapVal> map{}; 
    }
    namespace Nonepresetctrl{    ///<Peripheral reset control
        using Addr = Register::Address<0x40048004,0xfffff800,0,unsigned>;
        ///SSP0 reset control
        enum class ssp0RstNVal {
            reset=0x00000000,     ///<Reset. Resets the SSP0 peripheral.
            clearReset=0x00000001,     ///<Clear reset. SSP0 reset de-asserted.
        };
        namespace ssp0RstNValC{
            constexpr MPL::Value<ssp0RstNVal,ssp0RstNVal::reset> reset{};
            constexpr MPL::Value<ssp0RstNVal,ssp0RstNVal::clearReset> clearReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ssp0RstNVal> ssp0RstN{}; 
        ///I2C0 reset control
        enum class i2c0RstNVal {
            reset=0x00000000,     ///<Reset. Resets the I2C0 peripheral.
            clearReset=0x00000001,     ///<Clear reset. I2C0 reset de-asserted.
        };
        namespace i2c0RstNValC{
            constexpr MPL::Value<i2c0RstNVal,i2c0RstNVal::reset> reset{};
            constexpr MPL::Value<i2c0RstNVal,i2c0RstNVal::clearReset> clearReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,i2c0RstNVal> i2c0RstN{}; 
        ///SSP1 reset control
        enum class ssp1RstNVal {
            reset=0x00000000,     ///<Reset. Resets the SSP1 peripheral.
            clearReset=0x00000001,     ///<Clear reset. SSP1 reset de-asserted.
        };
        namespace ssp1RstNValC{
            constexpr MPL::Value<ssp1RstNVal,ssp1RstNVal::reset> reset{};
            constexpr MPL::Value<ssp1RstNVal,ssp1RstNVal::clearReset> clearReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ssp1RstNVal> ssp1RstN{}; 
        ///I2C1 reset control
        enum class i2c1RstNVal {
            reset=0x00000000,     ///<Reset. Resets the I2C1 peripheral.
            clearReset=0x00000001,     ///<Clear reset. I2C1 reset de-asserted.
        };
        namespace i2c1RstNValC{
            constexpr MPL::Value<i2c1RstNVal,i2c1RstNVal::reset> reset{};
            constexpr MPL::Value<i2c1RstNVal,i2c1RstNVal::clearReset> clearReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,i2c1RstNVal> i2c1RstN{}; 
        ///FRG reset control
        enum class frgRstNVal {
            reset=0x00000000,     ///<Reset. Resets the FRG peripheral.
            clearReset=0x00000001,     ///<Clear reset. FRG reset de-asserted.
        };
        namespace frgRstNValC{
            constexpr MPL::Value<frgRstNVal,frgRstNVal::reset> reset{};
            constexpr MPL::Value<frgRstNVal,frgRstNVal::clearReset> clearReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,frgRstNVal> frgRstN{}; 
        ///USART1 reset control
        enum class usart1RstNVal {
            reset=0x00000000,     ///<Reset. Resets the USART1 peripheral.
            clearReset=0x00000001,     ///<Clear reset. USART1 reset de-asserted.
        };
        namespace usart1RstNValC{
            constexpr MPL::Value<usart1RstNVal,usart1RstNVal::reset> reset{};
            constexpr MPL::Value<usart1RstNVal,usart1RstNVal::clearReset> clearReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,usart1RstNVal> usart1RstN{}; 
        ///USART2 reset control
        enum class usart2RstNVal {
            reset=0x00000000,     ///<Reset. Resets the USART2 peripheral.
            clearReset=0x00000001,     ///<Clear reset. USART2 reset de-asserted.
        };
        namespace usart2RstNValC{
            constexpr MPL::Value<usart2RstNVal,usart2RstNVal::reset> reset{};
            constexpr MPL::Value<usart2RstNVal,usart2RstNVal::clearReset> clearReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,usart2RstNVal> usart2RstN{}; 
        ///USART3 reset control
        enum class usart3RstNVal {
            reset=0x00000000,     ///<Reset. Resets the USART3 peripheral.
            clearReset=0x00000001,     ///<Clear reset. USART3 reset de-asserted.
        };
        namespace usart3RstNValC{
            constexpr MPL::Value<usart3RstNVal,usart3RstNVal::reset> reset{};
            constexpr MPL::Value<usart3RstNVal,usart3RstNVal::clearReset> clearReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,usart3RstNVal> usart3RstN{}; 
        ///USART4 reset control
        enum class usart4RstNVal {
            reset=0x00000000,     ///<Reset. Resets the USART4 peripheral.
            clearReset=0x00000001,     ///<Clear reset. USART4 reset de-asserted.
        };
        namespace usart4RstNValC{
            constexpr MPL::Value<usart4RstNVal,usart4RstNVal::reset> reset{};
            constexpr MPL::Value<usart4RstNVal,usart4RstNVal::clearReset> clearReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,usart4RstNVal> usart4RstN{}; 
        ///SCT0 reset control
        enum class sct0RstNVal {
            reset=0x00000000,     ///<Reset. Resets the SCT0 peripheral.
            clearReset=0x00000001,     ///<Clear reset. SCT0 reset de-asserted.
        };
        namespace sct0RstNValC{
            constexpr MPL::Value<sct0RstNVal,sct0RstNVal::reset> reset{};
            constexpr MPL::Value<sct0RstNVal,sct0RstNVal::clearReset> clearReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,sct0RstNVal> sct0RstN{}; 
        ///SCT1 reset control
        enum class sct1RstNVal {
            reset=0x00000000,     ///<Reset. Resets the SCT1 peripheral.
            clearReset=0x00000001,     ///<Clear reset. SCT1 reset de-asserted.
        };
        namespace sct1RstNValC{
            constexpr MPL::Value<sct1RstNVal,sct1RstNVal::reset> reset{};
            constexpr MPL::Value<sct1RstNVal,sct1RstNVal::clearReset> clearReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sct1RstNVal> sct1RstN{}; 
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
            noLock=0x00000000,     ///<No lock. PLL not locked
            lock=0x00000001,     ///<Lock. PLL locked
        };
        namespace lockValC{
            constexpr MPL::Value<lockVal,lockVal::noLock> noLock{};
            constexpr MPL::Value<lockVal,lockVal::lock> lock{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lockVal> lock{}; 
    }
    namespace Nonertcoscctrl{    ///<RTC oscillator 32 kHz output control
        using Addr = Register::Address<0x4004801c,0xfffffffe,0,unsigned>;
        ///Enable the RTC 32 kHz output.
        enum class rtcoscenVal {
            disabled=0x00000000,     ///<Disabled. 32 kHz output disabled.
            enabled=0x00000001,     ///<Enabled. 32 kHz output enabled.
        };
        namespace rtcoscenValC{
            constexpr MPL::Value<rtcoscenVal,rtcoscenVal::disabled> disabled{};
            constexpr MPL::Value<rtcoscenVal,rtcoscenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rtcoscenVal> rtcoscen{}; 
    }
    namespace Nonesysoscctrl{    ///<System oscillator control
        using Addr = Register::Address<0x40048020,0xfffffffc,0,unsigned>;
        ///Bypass system oscillator
        enum class bypassVal {
            oscillatorIsNotBy=0x00000000,     ///<Oscillator is not bypassed.
            bypassEnabled=0x00000001,     ///<Bypass enabled. PLL input (sys_osc_clk) is fed directly from the XTALIN pin bypassing the oscillator. Use this mode when using an external clock source instead of the crystal oscillator.
        };
        namespace bypassValC{
            constexpr MPL::Value<bypassVal,bypassVal::oscillatorIsNotBy> oscillatorIsNotBy{};
            constexpr MPL::Value<bypassVal,bypassVal::bypassEnabled> bypassEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bypassVal> bypass{}; 
        ///Determines frequency range for Low-power oscillator.
        enum class freqrangeVal {
            low=0x00000000,     ///<Low. 1 - 20 MHz frequency range.
            high=0x00000001,     ///<High. 15 - 25 MHz frequency range.
        };
        namespace freqrangeValC{
            constexpr MPL::Value<freqrangeVal,freqrangeVal::low> low{};
            constexpr MPL::Value<freqrangeVal,freqrangeVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,freqrangeVal> freqrange{}; 
    }
    namespace Nonewdtoscctrl{    ///<Watchdog oscillator control
        using Addr = Register::Address<0x40048024,0xfffffe00,0,unsigned>;
        ///Select divider for Fclkana.  wdt_osc_clk = Fclkana/ (2 x (1 + DIVSEL)) 00000: 2 x (1 + DIVSEL) = 2 00001: 2 x (1 + DIVSEL) = 4 to 11111: 2 x (1 + DIVSEL) = 64
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Select watchdog oscillator analog output frequency (Fclkana).
        enum class freqselVal {
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
        namespace freqselValC{
            constexpr MPL::Value<freqselVal,freqselVal::v0> v0{};
            constexpr MPL::Value<freqselVal,freqselVal::v1> v1{};
            constexpr MPL::Value<freqselVal,freqselVal::v1> v1{};
            constexpr MPL::Value<freqselVal,freqselVal::v1> v1{};
            constexpr MPL::Value<freqselVal,freqselVal::v2> v2{};
            constexpr MPL::Value<freqselVal,freqselVal::v2> v2{};
            constexpr MPL::Value<freqselVal,freqselVal::v2> v2{};
            constexpr MPL::Value<freqselVal,freqselVal::v3> v3{};
            constexpr MPL::Value<freqselVal,freqselVal::v3> v3{};
            constexpr MPL::Value<freqselVal,freqselVal::v3> v3{};
            constexpr MPL::Value<freqselVal,freqselVal::v3> v3{};
            constexpr MPL::Value<freqselVal,freqselVal::v4> v4{};
            constexpr MPL::Value<freqselVal,freqselVal::v4> v4{};
            constexpr MPL::Value<freqselVal,freqselVal::v4> v4{};
            constexpr MPL::Value<freqselVal,freqselVal::v4> v4{};
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
            porDetected=0x00000001,     ///<POR detected
        };
        namespace porValC{
            constexpr MPL::Value<porVal,porVal::noPorDetected> noPorDetected{};
            constexpr MPL::Value<porVal,porVal::porDetected> porDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,porVal> por{}; 
        ///Status of the external RESET pin
        enum class extrstVal {
            noResetEventDetec=0x00000000,     ///<No reset event detected
            resetDetected=0x00000001,     ///<Reset detected
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
            systemOscillator=0x00000001,     ///<System oscillator. Crystal Oscillator (SYSOSC)
            reserved=0x00000002,     ///<Reserved
            v32KhzClock=0x00000003,     ///<32 kHz clock.Select this option when the 32 kHz clock is the clock source for the main clock and select the pll input in the MAINCLKSEL register. Do not use the 32 kHz clock with the PLL.
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::irc> irc{};
            constexpr MPL::Value<selVal,selVal::systemOscillator> systemOscillator{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
            constexpr MPL::Value<selVal,selVal::v32KhzClock> v32KhzClock{};
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
        ///System AHB clock divider values  0: System clock disabled.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonesysahbclkctrl{    ///<System clock control
        using Addr = Register::Address<0x40048080,0x00024000,0,unsigned>;
        ///This bit is read-only and always reads as 1. It configures the  always-on clock for the AHB, the APB bridges, the Cortex-M0 core clocks, SYSCON, reset control, SRAM0, and the PMU. Writes to this bit are ignored.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sys{}; 
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
        ///Enables clock for Main SRAM0.
        enum class ram0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ram0ValC{
            constexpr MPL::Value<ram0Val,ram0Val::disable> disable{};
            constexpr MPL::Value<ram0Val,ram0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ram0Val> ram0{}; 
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
        ///Enables clock for flash access.
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
        enum class i2c0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace i2c0ValC{
            constexpr MPL::Value<i2c0Val,i2c0Val::disable> disable{};
            constexpr MPL::Value<i2c0Val,i2c0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,i2c0Val> i2c0{}; 
        ///Enables clock for GPIO port registers.
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
        ///Enables clock for USART0.
        enum class usart0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace usart0ValC{
            constexpr MPL::Value<usart0Val,usart0Val::disable> disable{};
            constexpr MPL::Value<usart0Val,usart0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,usart0Val> usart0{}; 
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
        ///Enables clock for WWDT.
        enum class wwdtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace wwdtValC{
            constexpr MPL::Value<wwdtVal,wwdtVal::disable> disable{};
            constexpr MPL::Value<wwdtVal,wwdtVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,wwdtVal> wwdt{}; 
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
        ///Enables clock to GPIO Pin interrupt register interface.
        enum class pintVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace pintValC{
            constexpr MPL::Value<pintVal,pintVal::disable> disable{};
            constexpr MPL::Value<pintVal,pintVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,pintVal> pint{}; 
        ///Enables clock to USART1 register interface.
        enum class usart1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace usart1ValC{
            constexpr MPL::Value<usart1Val,usart1Val::disable> disable{};
            constexpr MPL::Value<usart1Val,usart1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,usart1Val> usart1{}; 
        ///Enables clock to USART2 register interface.
        enum class usart2Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace usart2ValC{
            constexpr MPL::Value<usart2Val,usart2Val::disable> disable{};
            constexpr MPL::Value<usart2Val,usart2Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,usart2Val> usart2{}; 
        ///Enables clock to USART3 and USART4 register interfaces.
        enum class usart34Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace usart34ValC{
            constexpr MPL::Value<usart34Val,usart34Val::disable> disable{};
            constexpr MPL::Value<usart34Val,usart34Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,usart34Val> usart34{}; 
        ///Enables clock to GPIO GROUP0 interrupt register interface.
        enum class group0intVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace group0intValC{
            constexpr MPL::Value<group0intVal,group0intVal::disable> disable{};
            constexpr MPL::Value<group0intVal,group0intVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,group0intVal> group0int{}; 
        ///Enables clock to GPIO GROUP1 interrupt register interface.
        enum class group1intVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace group1intValC{
            constexpr MPL::Value<group1intVal,group1intVal::disable> disable{};
            constexpr MPL::Value<group1intVal,group1intVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,group1intVal> group1int{}; 
        ///Enables clock for I2C1.
        enum class i2c1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace i2c1ValC{
            constexpr MPL::Value<i2c1Val,i2c1Val::disable> disable{};
            constexpr MPL::Value<i2c1Val,i2c1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,i2c1Val> i2c1{}; 
        ///Enables clock for SRAM1 located at 0x2000 0000 to 0x2000 0800.
        enum class ram1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ram1ValC{
            constexpr MPL::Value<ram1Val,ram1Val::disable> disable{};
            constexpr MPL::Value<ram1Val,ram1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ram1Val> ram1{}; 
        ///Enables USB SRAM/SRAM2 block located at 0x2000 4000 to 0x2000 4800.
        enum class usbsramVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace usbsramValC{
            constexpr MPL::Value<usbsramVal,usbsramVal::disable> disable{};
            constexpr MPL::Value<usbsramVal,usbsramVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,usbsramVal> usbsram{}; 
        ///Enables clock for CRC.
        enum class crcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace crcValC{
            constexpr MPL::Value<crcVal,crcVal::disable> disable{};
            constexpr MPL::Value<crcVal,crcVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,crcVal> crc{}; 
        ///Enables clock for DMA.
        enum class dmaVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace dmaValC{
            constexpr MPL::Value<dmaVal,dmaVal::disable> disable{};
            constexpr MPL::Value<dmaVal,dmaVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,dmaVal> dma{}; 
        ///Enables clock for RTC register interface.
        enum class rtcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace rtcValC{
            constexpr MPL::Value<rtcVal,rtcVal::disable> disable{};
            constexpr MPL::Value<rtcVal,rtcVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,rtcVal> rtc{}; 
        ///Enables clock for SCT0 and SCT1.
        enum class sct01Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace sct01ValC{
            constexpr MPL::Value<sct01Val,sct01Val::disable> disable{};
            constexpr MPL::Value<sct01Val,sct01Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,sct01Val> sct01{}; 
    }
    namespace Nonessp0clkdiv{    ///<SSP0 clock divider
        using Addr = Register::Address<0x40048094,0xffffff00,0,unsigned>;
        ///SPI0_PCLK clock divider values.  0: System clock disabled.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneusart0clkdiv{    ///<USART0 clock divider
        using Addr = Register::Address<0x40048098,0xffffff00,0,unsigned>;
        ///UART_PCLK clock divider values  0: Disable UART_PCLK.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonessp1clkdiv{    ///<SSP1 clock divider
        using Addr = Register::Address<0x4004809c,0xffffff00,0,unsigned>;
        ///SSP1_PCLK clock divider values  0: Disable SSP1_PCLK.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonefrgclkdiv{    ///<Clock divider for the common fractional baud rate generator of USART1, USART2, USART3, USART4
        using Addr = Register::Address<0x400480a0,0xffffff00,0,unsigned>;
        ///USART fractional baud rate generator clock divider values.  0: Clock disabled.  1: Divide by 1. to 255: Divide by 255.
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
        ///CLKOUT clock divider values  0: Disable CLKOUT clock divider.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneuartfrgdiv{    ///<USART fractional generator divider value
        using Addr = Register::Address<0x400480f0,0xffffff00,0,unsigned>;
        ///Denominator of the fractional divider. DIV is equal to the programmed value +1. Always set to 0xFF to use with the fractional baud rate generator.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneuartfrgmult{    ///<USART fractional generator multiplier value
        using Addr = Register::Address<0x400480f4,0xffffff00,0,unsigned>;
        ///Numerator of the fractional divider. MULT is equal to the programmed value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mult{}; 
    }
    namespace Noneexttracecmd{    ///<External trace buffer command register
        using Addr = Register::Address<0x400480fc,0xfffffffc,0,unsigned>;
        ///Trace start command. Writing a one to this bit sets the TSTART signal to the MTB to HIGH and starts tracing if the TSTARTEN bit in the MTB master register is set to one as well.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        ///Trace stop command. Writing a one to this bit sets the TSTOP signal in the MTB to HIGH and stops tracing if the TSTOPEN bit in the MTB master register is set to one as well.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop{}; 
    }
    namespace Nonepioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x40048100,0xff000000,0,unsigned>;
        ///State of PIO0_23 through PIO0_0 at power-on reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Nonepioporcap1{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40048104,0x00000000,0,unsigned>;
        ///State of PIO1_31 through PIO1_0 at power-on reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Nonepioporcap2{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40048108,0xff000000,0,unsigned>;
        ///State of PIO2_23 through PIO2_0 at power-on reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Noneioconclkdiv6{    ///<Peripheral clock  to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048134,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv5{    ///<Peripheral clock  to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048138,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv4{    ///<Peripheral clock  to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x4004813c,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv3{    ///<Peripheral clock  to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048140,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv2{    ///<Peripheral clock  to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048144,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv1{    ///<Peripheral clock  to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x40048148,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv0{    ///<Peripheral clock  to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x4004814c,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonebodctrl{    ///<Brown-Out Detect
        using Addr = Register::Address<0x40048150,0xffffffe0,0,unsigned>;
        ///BOD reset level
        enum class bodrstlevVal {
            level0=0x00000000,     ///<Level 0.
            level1=0x00000001,     ///<Level 1.
            level2=0x00000002,     ///<Level 2.
            level3=0x00000003,     ///<Level 3.
        };
        namespace bodrstlevValC{
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level0> level0{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level1> level1{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level2> level2{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level3> level3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,bodrstlevVal> bodrstlev{}; 
        ///BOD interrupt level
        enum class bodintvalVal {
            reserved=0x00000000,     ///<Reserved.
            reserved=0x00000001,     ///<Reserved
            level2=0x00000002,     ///<Level 2.
            level3=0x00000003,     ///<Level 3.
        };
        namespace bodintvalValC{
            constexpr MPL::Value<bodintvalVal,bodintvalVal::reserved> reserved{};
            constexpr MPL::Value<bodintvalVal,bodintvalVal::reserved> reserved{};
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level2> level2{};
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level3> level3{};
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
    namespace Noneirqlatency{    ///<IRQ delay. Allows trade-off between interrupt latency and determinism.
        using Addr = Register::Address<0x40048170,0xffffff00,0,unsigned>;
        ///8-bit latency value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> latency{}; 
    }
    namespace Nonenmisrc{    ///<NMI Source Control
        using Addr = Register::Address<0x40048174,0x7fffffe0,0,unsigned>;
        ///The IRQ number of the interrupt that acts as the Non-Maskable Interrupt (NMI) if bit 31 is 1. See Table 6 for the list of interrupt sources and their IRQ numbers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> irqn{}; 
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt (NMI) source selected by bits 4:0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmien{}; 
    }
    namespace Nonepintsel0{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048178,0xffffffc0,0,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel1{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x4004817c,0xffffffc0,0,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel2{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048180,0xffffffc0,0,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel3{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048184,0xffffffc0,0,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel4{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048188,0xffffffc0,0,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel5{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x4004818c,0xffffffc0,0,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel6{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048190,0xffffffc0,0,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel7{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048194,0xffffffc0,0,unsigned>;
        ///Pin number. PIO0_0 = 0, ..., PIO0_23 = 23, PIO1_0 = 24, ..., PIO1_31 = 55, PIO2_0 = 56, ..., PIO2_7 = 63.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonestarterp0{    ///<Start logic 0 interrupt wake-up enable register 0
        using Addr = Register::Address<0x40048204,0xffffff00,0,unsigned>;
        ///Pin interrupt 0 wake-up
        enum class pint0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint0ValC{
            constexpr MPL::Value<pint0Val,pint0Val::disabled> disabled{};
            constexpr MPL::Value<pint0Val,pint0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pint0Val> pint0{}; 
        ///Pin interrupt 1 wake-up
        enum class pint1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint1ValC{
            constexpr MPL::Value<pint1Val,pint1Val::disabled> disabled{};
            constexpr MPL::Value<pint1Val,pint1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pint1Val> pint1{}; 
        ///Pin interrupt 2 wake-up
        enum class pint2Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint2ValC{
            constexpr MPL::Value<pint2Val,pint2Val::disabled> disabled{};
            constexpr MPL::Value<pint2Val,pint2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pint2Val> pint2{}; 
        ///Pin interrupt 3 wake-up
        enum class pint3Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint3ValC{
            constexpr MPL::Value<pint3Val,pint3Val::disabled> disabled{};
            constexpr MPL::Value<pint3Val,pint3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pint3Val> pint3{}; 
        ///Pin interrupt 4 wake-up
        enum class pint4Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint4ValC{
            constexpr MPL::Value<pint4Val,pint4Val::disabled> disabled{};
            constexpr MPL::Value<pint4Val,pint4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pint4Val> pint4{}; 
        ///Pin interrupt 5 wake-up
        enum class pint5Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint5ValC{
            constexpr MPL::Value<pint5Val,pint5Val::disabled> disabled{};
            constexpr MPL::Value<pint5Val,pint5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pint5Val> pint5{}; 
        ///Pin interrupt 6 wake-up
        enum class pint6Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint6ValC{
            constexpr MPL::Value<pint6Val,pint6Val::disabled> disabled{};
            constexpr MPL::Value<pint6Val,pint6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pint6Val> pint6{}; 
        ///Pin interrupt 7 wake-up
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
    namespace Nonestarterp1{    ///<Start logic 1 interrupt wake-up enable register 1
        using Addr = Register::Address<0x40048214,0xfe4fcfff,0,unsigned>;
        ///RTC interrupt wake-up
        enum class rtcintVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace rtcintValC{
            constexpr MPL::Value<rtcintVal,rtcintVal::disabled> disabled{};
            constexpr MPL::Value<rtcintVal,rtcintVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,rtcintVal> rtcint{}; 
        ///Combined WWDT interrupt or Brown Out Detect (BOD) interrupt wake-up
        enum class wwdtBodintVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace wwdtBodintValC{
            constexpr MPL::Value<wwdtBodintVal,wwdtBodintVal::disabled> disabled{};
            constexpr MPL::Value<wwdtBodintVal,wwdtBodintVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,wwdtBodintVal> wwdtBodint{}; 
        ///GPIO GROUP0 interrupt wake-up
        enum class group0intVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace group0intValC{
            constexpr MPL::Value<group0intVal,group0intVal::disabled> disabled{};
            constexpr MPL::Value<group0intVal,group0intVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,group0intVal> group0int{}; 
        ///GPIO GROUP1 interrupt wake-up
        enum class group1intVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace group1intValC{
            constexpr MPL::Value<group1intVal,group1intVal::disabled> disabled{};
            constexpr MPL::Value<group1intVal,group1intVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,group1intVal> group1int{}; 
        ///Combined USART1 and USART4 interrupt wake-up
        enum class usart14Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace usart14ValC{
            constexpr MPL::Value<usart14Val,usart14Val::disabled> disabled{};
            constexpr MPL::Value<usart14Val,usart14Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,usart14Val> usart14{}; 
        ///Combined USART2 and USART3 interrupt wake-up
        enum class usart23Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace usart23ValC{
            constexpr MPL::Value<usart23Val,usart23Val::disabled> disabled{};
            constexpr MPL::Value<usart23Val,usart23Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,usart23Val> usart23{}; 
    }
    namespace Nonepdsleepcfg{    ///<Power-down states in deep-sleep mode
        using Addr = Register::Address<0x40048230,0xffffffb7,0,unsigned>;
        ///BOD power-down control for Deep-sleep and Power-down mode
        enum class bodPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace bodPdValC{
            constexpr MPL::Value<bodPdVal,bodPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<bodPdVal,bodPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bodPdVal> bodPd{}; 
        ///Watchdog oscillator power-down control for Deep-sleep and Power-down mode
        enum class wdtoscPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace wdtoscPdValC{
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wdtoscPdVal> wdtoscPd{}; 
    }
    namespace Nonepdawakecfg{    ///<Power-down states for wake-up from deep-sleep
        using Addr = Register::Address<0x40048234,0xffffdf00,0,unsigned>;
        ///IRC oscillator output wake-up configuration
        enum class ircoutPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace ircoutPdValC{
            constexpr MPL::Value<ircoutPdVal,ircoutPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<ircoutPdVal,ircoutPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ircoutPdVal> ircoutPd{}; 
        ///IRC oscillator power-down wake-up configuration
        enum class ircPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace ircPdValC{
            constexpr MPL::Value<ircPdVal,ircPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<ircPdVal,ircPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ircPdVal> ircPd{}; 
        ///Flash wake-up configuration
        enum class flashPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace flashPdValC{
            constexpr MPL::Value<flashPdVal,flashPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<flashPdVal,flashPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,flashPdVal> flashPd{}; 
        ///BOD wake-up configuration
        enum class bodPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace bodPdValC{
            constexpr MPL::Value<bodPdVal,bodPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<bodPdVal,bodPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bodPdVal> bodPd{}; 
        ///ADC wake-up configuration
        enum class adcPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace adcPdValC{
            constexpr MPL::Value<adcPdVal,adcPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<adcPdVal,adcPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,adcPdVal> adcPd{}; 
        ///Crystal oscillator wake-up configuration
        enum class sysoscPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace sysoscPdValC{
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sysoscPdVal> sysoscPd{}; 
        ///Watchdog oscillator wake-up configuration
        enum class wdtoscPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace wdtoscPdValC{
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wdtoscPdVal> wdtoscPd{}; 
        ///System PLL wake-up configuration
        enum class syspllPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace syspllPdValC{
            constexpr MPL::Value<syspllPdVal,syspllPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<syspllPdVal,syspllPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,syspllPdVal> syspllPd{}; 
        ///Temperature sensor wake-up configuration
        enum class tempsensePdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace tempsensePdValC{
            constexpr MPL::Value<tempsensePdVal,tempsensePdVal::powered> powered{};
            constexpr MPL::Value<tempsensePdVal,tempsensePdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,tempsensePdVal> tempsensePd{}; 
    }
    namespace Nonepdruncfg{    ///<Power configuration register
        using Addr = Register::Address<0x40048238,0xffffdf00,0,unsigned>;
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
        ///Crystal oscillator power-down. After power-up, add a software delay of approximately 500 us before using.
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
        ///Temperature sensor wake-up configuration
        enum class tempsensePdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace tempsensePdValC{
            constexpr MPL::Value<tempsensePdVal,tempsensePdVal::powered> powered{};
            constexpr MPL::Value<tempsensePdVal,tempsensePdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,tempsensePdVal> tempsensePd{}; 
    }
    namespace NonedeviceId{    ///<Device ID
        using Addr = Register::Address<0x400483f4,0x00000000,0,unsigned>;
        ///PARTID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
}
