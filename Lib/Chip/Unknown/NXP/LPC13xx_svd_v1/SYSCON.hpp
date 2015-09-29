#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10375 Chapter title=LPC13xx System configuration Modification date=4/4/2011 Major revision=2 Minor revision=2 
    namespace Nonesysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40048000,0xfffffffc,0,unsigned>;
        ///System memory remap
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
        using Addr = Register::Address<0x40048004,0xfffffff8,0,unsigned>;
        ///SSP0 reset control
        enum class ssp0RstNVal {
            resetSsp0=0x00000000,     ///<Reset SSP0.
            deAssertSsp0Reset=0x00000001,     ///<De-assert SSP0 reset.
        };
        namespace ssp0RstNValC{
            constexpr MPL::Value<ssp0RstNVal,ssp0RstNVal::resetSsp0> resetSsp0{};
            constexpr MPL::Value<ssp0RstNVal,ssp0RstNVal::deAssertSsp0Reset> deAssertSsp0Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ssp0RstNVal> ssp0RstN{}; 
        ///I2C reset control
        enum class i2cRstNVal {
            resetI2c=0x00000000,     ///<Reset I2C.
            deAssetI2cReset=0x00000001,     ///<De-asset I2C reset.
        };
        namespace i2cRstNValC{
            constexpr MPL::Value<i2cRstNVal,i2cRstNVal::resetI2c> resetI2c{};
            constexpr MPL::Value<i2cRstNVal,i2cRstNVal::deAssetI2cReset> deAssetI2cReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,i2cRstNVal> i2cRstN{}; 
        ///SPISP1 reset control
        enum class ssp1RstNVal {
            resetTheSpisp1=0x00000000,     ///<Reset the SPISP1.
            deAssertSpisp1Res=0x00000001,     ///<De-assert SPISP1 reset.
        };
        namespace ssp1RstNValC{
            constexpr MPL::Value<ssp1RstNVal,ssp1RstNVal::resetTheSpisp1> resetTheSpisp1{};
            constexpr MPL::Value<ssp1RstNVal,ssp1RstNVal::deAssertSpisp1Res> deAssertSpisp1Res{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ssp1RstNVal> ssp1RstN{}; 
    }
    namespace Nonesyspllctrl{    ///<System PLL control
        using Addr = Register::Address<0x40048008,0xffffff80,0,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1. 00000: Division ratio M = 1 to 11111: Division ratio M = 32.
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
    namespace Noneusbpllctrl{    ///<USB PLL control
        using Addr = Register::Address<0x40048010,0xffffff80,0,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1. 00000: Division ratio M = 1 to 11111: Division ratio M = 32.
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
    namespace Noneusbpllstat{    ///<USB PLL status
        using Addr = Register::Address<0x40048014,0xfffffffe,0,unsigned>;
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
            bypassEnabledPll=0x00000001,     ///<Bypass enabled. PLL input (sys_osc_clk) is fed directly from the XTALIN and XTALOUT pins.
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
        ///Select divider for Fclkana.  wdt_osc_clk = Fclkana (2 x (1 + DIVSEL)).   00000: 2 x (1 + DIVSEL) = 2 00001: 2 x (1 + DIVSEL) = 4 to 11111: 2 x (1 + DIVSEL) = 64
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Select watchdog oscillator analog output frequency (Fclkana).
        enum class freqselVal {
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
        namespace freqselValC{
            constexpr MPL::Value<freqselVal,freqselVal::v05Mhz> v05Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v08Mhz> v08Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v11Mhz> v11Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v14Mhz> v14Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v16Mhz> v16Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v18Mhz> v18Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v20Mhz> v20Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v22Mhz> v22Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v24Mhz> v24Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v26Mhz> v26Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v27Mhz> v27Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v29Mhz> v29Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v31Mhz> v31Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v32Mhz> v32Mhz{};
            constexpr MPL::Value<freqselVal,freqselVal::v34Mhz> v34Mhz{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,5),Register::ReadWriteAccess,freqselVal> freqsel{}; 
    }
    namespace Noneircctrl{    ///<IRC control
        using Addr = Register::Address<0x40048028,0xffffff00,0,unsigned>;
        ///Trim value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> trim{}; 
    }
    namespace Nonesysresstat{    ///<System reset status register
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
        ///Status of the software system reset. The ARM software reset has the same effect as the hardware reset using the  RESET pin.
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
    namespace Noneusbpllclksel{    ///<USB PLL clock source select
        using Addr = Register::Address<0x40048048,0xfffffffc,0,unsigned>;
        ///USB PLL clock source
        enum class selVal {
            ircTheUsbPllClo=0x00000000,     ///<IRC. The USB PLL clock source must be switched to system oscillator for correct USB operation.
            systemOscillator=0x00000001,     ///<System oscillator
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::ircTheUsbPllClo> ircTheUsbPllClo{};
            constexpr MPL::Value<selVal,selVal::systemOscillator> systemOscillator{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Noneusbpllclkuen{    ///<USB PLL clock source update enable
        using Addr = Register::Address<0x4004804c,0xfffffffe,0,unsigned>;
        ///Enable USB PLL clock source update
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
        using Addr = Register::Address<0x40048080,0xfffa0000,0,unsigned>;
        ///Enables clock for AHB to APB bridge, to the AHB matrix, to the Cortex-M3 FCLK and HCLK, to the SysCon, and to the PMU. This bit is read only.
        enum class sysVal {
            reserved=0x00000000,     ///<Reserved
            enabled=0x00000001,     ///<Enabled
        };
        namespace sysValC{
            constexpr MPL::Value<sysVal,sysVal::reserved> reserved{};
            constexpr MPL::Value<sysVal,sysVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sysVal> sys{}; 
        ///Enables clock for ROM.
        enum class romVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace romValC{
            constexpr MPL::Value<romVal,romVal::disabled> disabled{};
            constexpr MPL::Value<romVal,romVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,romVal> rom{}; 
        ///Enables clock for RAM.
        enum class ramVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace ramValC{
            constexpr MPL::Value<ramVal,ramVal::disabled> disabled{};
            constexpr MPL::Value<ramVal,ramVal::enabled> enabled{};
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
        ///Enables clock for I2C.
        enum class i2cVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace i2cValC{
            constexpr MPL::Value<i2cVal,i2cVal::disabled> disabled{};
            constexpr MPL::Value<i2cVal,i2cVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,i2cVal> i2c{}; 
        ///Enables clock for GPIO.
        enum class gpioVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace gpioValC{
            constexpr MPL::Value<gpioVal,gpioVal::disabled> disabled{};
            constexpr MPL::Value<gpioVal,gpioVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,gpioVal> gpio{}; 
        ///Enables clock for 16-bit counter/timer 0.
        enum class ct16b0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace ct16b0ValC{
            constexpr MPL::Value<ct16b0Val,ct16b0Val::disabled> disabled{};
            constexpr MPL::Value<ct16b0Val,ct16b0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ct16b0Val> ct16b0{}; 
        ///Enables clock for 16-bit counter/timer 1.
        enum class ct16b1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace ct16b1ValC{
            constexpr MPL::Value<ct16b1Val,ct16b1Val::disabled> disabled{};
            constexpr MPL::Value<ct16b1Val,ct16b1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ct16b1Val> ct16b1{}; 
        ///Enables clock for 32-bit counter/timer 0.
        enum class ct32b0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace ct32b0ValC{
            constexpr MPL::Value<ct32b0Val,ct32b0Val::disabled> disabled{};
            constexpr MPL::Value<ct32b0Val,ct32b0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ct32b0Val> ct32b0{}; 
        ///Enables clock for 32-bit counter/timer 1.
        enum class ct32b1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace ct32b1ValC{
            constexpr MPL::Value<ct32b1Val,ct32b1Val::disabled> disabled{};
            constexpr MPL::Value<ct32b1Val,ct32b1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ct32b1Val> ct32b1{}; 
        ///Enables clock for SSP.
        enum class sspVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace sspValC{
            constexpr MPL::Value<sspVal,sspVal::disabled> disabled{};
            constexpr MPL::Value<sspVal,sspVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,sspVal> ssp{}; 
        ///Enables clock for UART. Note that the UART pins must be configured in the IOCON block before the UART clock can be enabled.
        enum class uartVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace uartValC{
            constexpr MPL::Value<uartVal,uartVal::disabled> disabled{};
            constexpr MPL::Value<uartVal,uartVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,uartVal> uart{}; 
        ///Enables clock for ADC.
        enum class adcVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace adcValC{
            constexpr MPL::Value<adcVal,adcVal::disabled> disabled{};
            constexpr MPL::Value<adcVal,adcVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,adcVal> adc{}; 
        ///Enables clock for USB_REG.
        enum class usbRegVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace usbRegValC{
            constexpr MPL::Value<usbRegVal,usbRegVal::disabled> disabled{};
            constexpr MPL::Value<usbRegVal,usbRegVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,usbRegVal> usbReg{}; 
        ///Enables clock for WDT.
        enum class wdtVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace wdtValC{
            constexpr MPL::Value<wdtVal,wdtVal::disabled> disabled{};
            constexpr MPL::Value<wdtVal,wdtVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,wdtVal> wdt{}; 
        ///Enables clock for IO configuration block.
        enum class ioconVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace ioconValC{
            constexpr MPL::Value<ioconVal,ioconVal::disabled> disabled{};
            constexpr MPL::Value<ioconVal,ioconVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ioconVal> iocon{}; 
        ///Enables clock for SPISP1.
        enum class ssp1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ssp1ValC{
            constexpr MPL::Value<ssp1Val,ssp1Val::disable> disable{};
            constexpr MPL::Value<ssp1Val,ssp1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ssp1Val> ssp1{}; 
    }
    namespace Nonessp0clkdiv{    ///<SSP clock divder
        using Addr = Register::Address<0x40048094,0xffffff00,0,unsigned>;
        ///SSP_PCLK clock divider values. 0: Disable SSP0_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneuartclkdiv{    ///<UART clock divder
        using Addr = Register::Address<0x40048098,0xffffff00,0,unsigned>;
        ///UART_PCLK clock divider values 0: Disable UART_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonessp1clkdiv{    ///<SPISP1 clock divder
        using Addr = Register::Address<0x4004809c,0xffffff00,0,unsigned>;
        ///SSP1_PCLK clock divider values 0: Disable SSP1_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonetraceclkdiv{    ///<ARM trace clock divider
        using Addr = Register::Address<0x400480ac,0xffffff00,0,unsigned>;
        ///ARM trace clock divider values. 0: Disable TRACE_CLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonesystickclkdiv{    ///<SYSTICK clock divder
        using Addr = Register::Address<0x400480b0,0xffffff00,0,unsigned>;
        ///SYSTICK clock divider values. 0: Disable SYSTICK timer clock.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneusbclksel{    ///<USB clock source select
        using Addr = Register::Address<0x400480c0,0xfffffffc,0,unsigned>;
        ///USB clock source
        enum class selVal {
            usbPllOut=0x00000000,     ///<USB PLL out
            mainClock=0x00000001,     ///<Main clock
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::usbPllOut> usbPllOut{};
            constexpr MPL::Value<selVal,selVal::mainClock> mainClock{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Noneusbclkuen{    ///<USB clock source update enable
        using Addr = Register::Address<0x400480c4,0xfffffffe,0,unsigned>;
        ///Enable USB clock source update
        enum class enaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update
clock source
        };
        namespace enaValC{
            constexpr MPL::Value<enaVal,enaVal::noChange> noChange{};
            constexpr MPL::Value<enaVal,enaVal::updateClockSource> updateClockSource{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enaVal> ena{}; 
    }
    namespace Noneusbclkdiv{    ///<USB clock source divider
        using Addr = Register::Address<0x400480c8,0xffffff00,0,unsigned>;
        ///USB clock divider values. 0: Disable USB clock.  1: Divide by 1. to 255: Divide by 255.
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
        ///WDT clock divider values. 0: Disable WDCLK.  1: Divide by 1. to 255: Divide by 255.
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
    namespace Noneclkoutdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x400480e8,0xffffff00,0,unsigned>;
        ///Clock divider values. 0: Disable CLKOUT.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonepioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x40048100,0x00000000,0,unsigned>;
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cappio00{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cappio01{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cappio02{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cappio03{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cappio04{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cappio05{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cappio06{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cappio07{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cappio08{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cappio09{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cappio010{}; 
        ///Raw reset status input PIO0_11 to PIO0_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cappio011{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cappio10{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cappio11{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cappio12{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cappio13{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cappio14{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cappio15{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cappio16{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cappio17{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cappio18{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cappio19{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cappio110{}; 
        ///Raw reset status input PIO1_11 to PIO1_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cappio111{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cappio20{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cappio21{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cappio22{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cappio23{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cappio24{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cappio25{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cappio26{}; 
        ///Raw reset status input PIO2_7 to PIO2_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cappio27{}; 
    }
    namespace Nonepioporcap1{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40048104,0xfffffc00,0,unsigned>;
        ///Raw reset status input PIO2_8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cappio28{}; 
        ///Raw reset status input PIO2_9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cappio29{}; 
        ///Raw reset status input PIO2_10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cappio210{}; 
        ///Raw reset status input PIO2_11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cappio211{}; 
        ///Raw reset status input PIO3_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cappio30{}; 
        ///Raw reset status input PIO3_1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cappio31{}; 
        ///Raw reset status input PIO3_2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cappio32{}; 
        ///Raw reset status input PIO3_3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cappio33{}; 
        ///Raw reset status input PIO3_4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cappio34{}; 
        ///Raw reset status input PIO3_5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cappio35{}; 
    }
    namespace Nonebodctrl{    ///<BOD control
        using Addr = Register::Address<0x40048150,0xffffffe0,0,unsigned>;
        ///BOD reset level. Trip values x/y refer to the LPC1300/LPC1300L series.
        enum class bodrstlevVal {
            theResetAssertion=0x00000000,     ///<The reset assertion threshold voltage is 1.49 V/1.46 V; the reset de-assertion threshold voltage is 1.64 V/1.63 V.
            theResetAssertion=0x00000001,     ///<The reset assertion threshold voltage is -/2.06 V; the reset de-assertion threshold voltage is -/2.15 V.
            theResetAssertion=0x00000002,     ///<The reset assertion threshold voltage is -/2.35 V; the reset de-assertion threshold voltage is -/2.43 V.
            theResetAssertion=0x00000003,     ///<The reset assertion threshold voltage is -/2.63 V; the reset de-assertion threshold voltage is -/2.71 V.
        };
        namespace bodrstlevValC{
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::theResetAssertion> theResetAssertion{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::theResetAssertion> theResetAssertion{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::theResetAssertion> theResetAssertion{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::theResetAssertion> theResetAssertion{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,bodrstlevVal> bodrstlev{}; 
        ///BOD interrupt level. Trip values x/y refer to the LPC1300/LPC1300L series.
        enum class bodintvalVal {
            theInterruptAssert=0x00000000,     ///<The interrupt assertion threshold voltage is 1.69 V/1.65 V; the interrupt de-assertion threshold voltage is 1.84 V/1.8 V.
            theInterruptAssert=0x00000001,     ///<The interrupt assertion threshold voltage is 2.29 V/2.22 V; the interrupt de-assertion threshold voltage is 2.44 V/2.35 V.
            theInterruptAssert=0x00000002,     ///<The interrupt assertion threshold voltage is 2.59 V/ 2.52 V; the interrupt de-assertion threshold voltage is 2.74 V/2.66 V.
            theInterruptAssert=0x00000003,     ///<The interrupt assertion threshold voltage is 2.87 V/2.80 V; the interrupt de-assertion threshold voltage is 2.98 V/2.90 V.
        };
        namespace bodintvalValC{
            constexpr MPL::Value<bodintvalVal,bodintvalVal::theInterruptAssert> theInterruptAssert{};
            constexpr MPL::Value<bodintvalVal,bodintvalVal::theInterruptAssert> theInterruptAssert{};
            constexpr MPL::Value<bodintvalVal,bodintvalVal::theInterruptAssert> theInterruptAssert{};
            constexpr MPL::Value<bodintvalVal,bodintvalVal::theInterruptAssert> theInterruptAssert{};
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
    namespace Nonestartaprp0{    ///<Start logic edge control register 0; bottom 32 interrupts
        using Addr = Register::Address<0x40048200,0x00000000,0,unsigned>;
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aprpio00{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> aprpio01{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aprpio02{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> aprpio03{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> aprpio04{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> aprpio05{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> aprpio06{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> aprpio07{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> aprpio08{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aprpio09{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> aprpio010{}; 
        ///Edge select for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> aprpio011{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> aprpio10{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> aprpio11{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> aprpio12{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> aprpio13{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aprpio14{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> aprpio15{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> aprpio16{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> aprpio17{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> aprpio18{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> aprpio19{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> aprpio110{}; 
        ///Edge select for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> aprpio111{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> aprpio20{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> aprpio21{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> aprpio22{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> aprpio23{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> aprpio24{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> aprpio25{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> aprpio26{}; 
        ///Edge select for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> aprpio27{}; 
    }
    namespace Nonestarterp0{    ///<Start logic signal enable register 0; bottom 32 interrupts
        using Addr = Register::Address<0x40048204,0x00000000,0,unsigned>;
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> erpio00{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erpio01{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> erpio02{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> erpio03{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> erpio04{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> erpio05{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> erpio06{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> erpio07{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> erpio08{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> erpio09{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> erpio010{}; 
        ///Enable start signal for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> erpio011{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> erpio10{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> erpio11{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> erpio12{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> erpio13{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> erpio14{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> erpio15{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> erpio16{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> erpio17{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> erpio18{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> erpio19{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> erpio110{}; 
        ///Enable start signal for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> erpio111{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> erpio20{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> erpio21{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> erpio22{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> erpio23{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> erpio24{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> erpio25{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> erpio26{}; 
        ///Enable start signal for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> erpio27{}; 
    }
    namespace Nonestartrsrp0clr{    ///<Start logic reset register 0; bottom 32 interrupts
        using Addr = Register::Address<0x40048208,0x00000000,0,unsigned>;
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rsrpio00{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rsrpio01{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsrpio02{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsrpio03{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rsrpio04{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsrpio05{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rsrpio06{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rsrpio07{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rsrpio08{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rsrpio09{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rsrpio010{}; 
        ///Start signal reset for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rsrpio011{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rsrpio10{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rsrpio11{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rsrpio12{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rsrpio13{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rsrpio14{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rsrpio15{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rsrpio16{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsrpio17{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rsrpio18{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rsrpio19{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> rsrpio110{}; 
        ///Start signal reset for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rsrpio111{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rsrpio20{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rsrpio21{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rsrpio22{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> rsrpio23{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rsrpio24{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rsrpio25{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rsrpio26{}; 
        ///Start signal reset for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = Do nothing. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> rsrpio27{}; 
    }
    namespace Nonestartsrp0{    ///<Start logic status register 0; bottom 32 interrupts
        using Addr = Register::Address<0x4004820c,0x00000000,0,unsigned>;
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> srpio00{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> srpio01{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srpio02{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> srpio03{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> srpio04{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> srpio05{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srpio06{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srpio07{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srpio08{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srpio09{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> srpio010{}; 
        ///Start signal status for start logic input PIO0_n (bit 0 = PIO0_1, ..., bit 11 = PIO0_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> srpio011{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> srpio10{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> srpio11{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> srpio12{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> srpio13{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srpio14{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> srpio15{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> srpio16{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> srpio17{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> srpio18{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> srpio19{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srpio110{}; 
        ///Start signal status for start logic input PIO1_n (bit 12 = PIO1_0, ..., bit 23 = PIO1_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> srpio111{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> srpio20{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> srpio21{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> srpio22{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> srpio23{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> srpio24{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> srpio25{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> srpio26{}; 
        ///Start signal status for start logic input PIO2_n (bit 24 = PIO2_0, ..., bit 31 = PIO2_7). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> srpio27{}; 
    }
    namespace Nonestartaprp1{    ///<Start logic edge control register 1; top 8 interrupts
        using Addr = Register::Address<0x40048210,0xffffff00,0,unsigned>;
        ///Edge select for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aprpio28{}; 
        ///Edge select for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> aprpio29{}; 
        ///Edge select for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aprpio210{}; 
        ///Edge select for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> aprpio211{}; 
        ///Edge select for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> aprpio30{}; 
        ///Edge select for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> aprpio31{}; 
        ///Edge select for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> aprpio32{}; 
        ///Edge select for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Falling edge. 1 = Rising edge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> aprpio33{}; 
    }
    namespace Nonestarterp1{    ///<Start logic signal enable register 1; top 8 interrupts
        using Addr = Register::Address<0x40048214,0xffffff00,0,unsigned>;
        ///Enable start signal for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> erpio28{}; 
        ///Enable start signal for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erpio29{}; 
        ///Enable start signal for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> erpio210{}; 
        ///Enable start signal for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> erpio211{}; 
        ///Enable start signal for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> erpio30{}; 
        ///Enable start signal for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> erpio31{}; 
        ///Enable start signal for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> erpio32{}; 
        ///Enable start signal for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Disabled. 1 = Enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> erpio33{}; 
    }
    namespace Nonestartrsrp1clr{    ///<Start logic reset register 1; top 8 interrupts
        using Addr = Register::Address<0x40048218,0xffffff00,0,unsigned>;
        ///Start signal reset for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rsrpio28{}; 
        ///Start signal reset for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rsrpio29{}; 
        ///Start signal reset for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsrpio210{}; 
        ///Start signal reset for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsrpio211{}; 
        ///Start signal reset for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rsrpio30{}; 
        ///Start signal reset for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsrpio31{}; 
        ///Start signal reset for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rsrpio32{}; 
        ///Start signal reset for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = Do nothing.. 1 = Write: reset start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rsrpio33{}; 
    }
    namespace Nonestartsrp1{    ///<Start logic status register 1; top 8 interrupts
        using Addr = Register::Address<0x4004821c,0xffffff00,0,unsigned>;
        ///Start signal status for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> srpio28{}; 
        ///Start signal status for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> srpio29{}; 
        ///Start signal status for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srpio210{}; 
        ///Start signal status for start logic input PIO2_n (bit 0 = PIO2_8, ..., bit 3 = PIO2_11). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> srpio211{}; 
        ///Start signal status for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> srpio30{}; 
        ///Start signal status for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> srpio31{}; 
        ///Start signal status for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srpio32{}; 
        ///Start signal status for start logic input PIO3_n (bit 4 = PIO3_0, ..., bit 7 = PIO3_3). 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srpio33{}; 
    }
    namespace Nonepdsleepcfg{    ///<Power-down states in Deep-sleep mode
        using Addr = Register::Address<0x40048230,0xfffff000,0,unsigned>;
        ///Reserved. Always write these bits as 111.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> fixedval0{}; 
        ///BOD power-down control in Deep-sleep mode, see Table 49.
        enum class bodPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace bodPdValC{
            constexpr MPL::Value<bodPdVal,bodPdVal::powered> powered{};
            constexpr MPL::Value<bodPdVal,bodPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bodPdVal> bodPd{}; 
        ///Reserved. Always write these bits as 11.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> fixedval1{}; 
        ///Watchdog oscillator power control in Deep-sleep mode, see Table 49.
        enum class wdtoscPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace wdtoscPdValC{
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::powered> powered{};
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wdtoscPdVal> wdtoscPd{}; 
        ///Reserved. Always write these bits as 11111.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,7),Register::ReadWriteAccess,unsigned> fixedval2{}; 
    }
    namespace Nonepdawakecfg{    ///<Power-down states after wake-up from Deep-sleep mode
        using Addr = Register::Address<0x40048234,0xffff0000,0,unsigned>;
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
        ///USB PLL wake-up configuration
        enum class usbpllPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace usbpllPdValC{
            constexpr MPL::Value<usbpllPdVal,usbpllPdVal::powered> powered{};
            constexpr MPL::Value<usbpllPdVal,usbpllPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,usbpllPdVal> usbpllPd{}; 
        ///Reserved. Always write this bit as 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fixedval0{}; 
        ///USB pad wake-up configuration
        enum class usbpadPdVal {
            usbPhyPowered=0x00000000,     ///<USB PHY powered
            usbPhyPoweredDown=0x00000001,     ///<USB PHY powered down
        };
        namespace usbpadPdValC{
            constexpr MPL::Value<usbpadPdVal,usbpadPdVal::usbPhyPowered> usbPhyPowered{};
            constexpr MPL::Value<usbpadPdVal,usbpadPdVal::usbPhyPoweredDown> usbPhyPoweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,usbpadPdVal> usbpadPd{}; 
        ///Reserved. Always write this bit as 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fixedval1{}; 
        ///Reserved. Always write this bit as 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fixedval2{}; 
        ///Reserved. Always write these bits as 111.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> fixedval3{}; 
    }
    namespace Nonepdruncfg{    ///<Power-down configuration register
        using Addr = Register::Address<0x40048238,0xfffff000,0,unsigned>;
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
        ///System oscillator power-down[1]
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
        ///USB PLL power-down
        enum class usbpllPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace usbpllPdValC{
            constexpr MPL::Value<usbpllPdVal,usbpllPdVal::powered> powered{};
            constexpr MPL::Value<usbpllPdVal,usbpllPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,usbpllPdVal> usbpllPd{}; 
        ///Reserved. Always write this bit as 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fixedval0{}; 
        ///USB pad power-down configuration
        enum class usbpadPdVal {
            usbPhyPowered=0x00000000,     ///<USB PHY powered
            usbPhyPoweredDown=0x00000001,     ///<USB PHY powered down (suspend mode)
        };
        namespace usbpadPdValC{
            constexpr MPL::Value<usbpadPdVal,usbpadPdVal::usbPhyPowered> usbPhyPowered{};
            constexpr MPL::Value<usbpadPdVal,usbpadPdVal::usbPhyPoweredDown> usbPhyPoweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,usbpadPdVal> usbpadPd{}; 
        ///Reserved. Always write this bit as 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fixedval1{}; 
    }
    namespace NonedeviceId{    ///<Device ID
        using Addr = Register::Address<0x400483f4,0x00000000,0,unsigned>;
        ///Device ID for LPC13xx parts: 0x2C42 502B = LPC1311FHN33 
								0x2C40 102B = LPC1313FHN33 
								0x2C40 102B = LPC1313FBD48 
								0x3D01 402B = LPC1342FHN33 
								0x3D00 002B = LPC1343FHN33 
								0x3D00 002B = LPC1343FBD48 
								0x1816 902B = LPC1311FHN33/01 
								0x1830 102B = LPC1313FHN33/01 
								0x1830 102B = LPC1313FBD48/01
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
}
