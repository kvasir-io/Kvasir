#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System control block 
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
        using Addr = Register::Address<0x40048004,0xfffffff8,0,unsigned>;
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
            resetsTheSsp0Peri=0x00000000,     ///<Resets the SSP0 peripheral.
            ssp1ResetDeAssert=0x00000001,     ///<SSP1 reset de-asserted.
        };
        namespace ssp1RstNValC{
            constexpr MPL::Value<ssp1RstNVal,ssp1RstNVal::resetsTheSsp0Peri> resetsTheSsp0Peri{};
            constexpr MPL::Value<ssp1RstNVal,ssp1RstNVal::ssp1ResetDeAssert> ssp1ResetDeAssert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ssp1RstNVal> ssp1RstN{}; 
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
    namespace Noneusbpllctrl{    ///<USB PLL control
        using Addr = Register::Address<0x40048010,0xffffff80,0,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1.  00000: Division ratio M = 1 to 11111: Division ratio M = 32
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
            crystalOscillator=0x00000001,     ///<Crystal Oscillator (SYSOSC)
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::irc> irc{};
            constexpr MPL::Value<selVal,selVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
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
    namespace Nonesysahbclkdiv{    ///<System clock divider
        using Addr = Register::Address<0x40048078,0xffffff00,0,unsigned>;
        ///System AHB clock divider values  0: System clock disabled.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonesysahbclkctrl{    ///<System clock control
        using Addr = Register::Address<0x40048080,0xf2720000,0,unsigned>;
        ///Enables the clock for the AHB, the APB bridge, the Cortex-M3 FCLK and HCLK, SysCon, and the PMU. This bit is read only and always reads as 1.
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
        ///Enables clock for SRAM0.
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
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace i2cValC{
            constexpr MPL::Value<i2cVal,i2cVal::disable> disable{};
            constexpr MPL::Value<i2cVal,i2cVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,i2cVal> i2c{}; 
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
        ///Enables clock for UART.
        enum class usartVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace usartValC{
            constexpr MPL::Value<usartVal,usartVal::disable> disable{};
            constexpr MPL::Value<usartVal,usartVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,usartVal> usart{}; 
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
        ///Enables clock to the USB register interface.
        enum class usbVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace usbValC{
            constexpr MPL::Value<usbVal,usbVal::disable> disable{};
            constexpr MPL::Value<usbVal,usbVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,usbVal> usb{}; 
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
        ///Enables clock to GPIO Pin interrupts register interface.
        enum class pintVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace pintValC{
            constexpr MPL::Value<pintVal,pintVal::disable> disable{};
            constexpr MPL::Value<pintVal,pintVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,pintVal> pint{}; 
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
        ///Enables USB SRAM block located at 0x2000 4000 to 0x2000 4800.
        enum class usbsramVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace usbsramValC{
            constexpr MPL::Value<usbsramVal,usbsramVal::disable> disable{};
            constexpr MPL::Value<usbsramVal,usbsramVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,usbsramVal> usbsram{}; 
    }
    namespace Nonessp0clkdiv{    ///<SSP0 clock divider
        using Addr = Register::Address<0x40048094,0xffffff00,0,unsigned>;
        ///SPI0_PCLK clock divider values.  0: System clock disabled.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneuartclkdiv{    ///<UART clock divider
        using Addr = Register::Address<0x40048098,0xffffff00,0,unsigned>;
        ///UART_PCLK clock divider values  0: Disable UART_PCLK.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonessp1clkdiv{    ///<SSP1 clock divider
        using Addr = Register::Address<0x4004809c,0xffffff00,0,unsigned>;
        ///SSP1_PCLK clock divider values  0: Disable SSP1_PCLK.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonetraceclkdiv{    ///<ARM trace clock divider
        using Addr = Register::Address<0x400480ac,0xffffff00,0,unsigned>;
        ///ARM trace clock divider values.  0: Disable TRACE_CLK.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonesystickclkdiv{    ///<SYSTICK clock divider
        using Addr = Register::Address<0x400480b0,0xffffff00,0,unsigned>;
        ///SYSTICK clock divider values.  0: Disable SYSTICK timer clock.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneusbclksel{    ///<USB clock source select
        using Addr = Register::Address<0x400480c0,0xfffffffc,0,unsigned>;
        ///USB clock source. Values 0x2 and 0x3 are reserved.
        enum class selVal {
            usbPllOut=0x00000000,     ///<USB PLL out
            mainClock=0x00000001,     ///<Main clock
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::usbPllOut> usbPllOut{};
            constexpr MPL::Value<selVal,selVal::mainClock> mainClock{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Noneusbclkdiv{    ///<USB clock source divider
        using Addr = Register::Address<0x400480c8,0xffffff00,0,unsigned>;
        ///USB clock divider values  0: Disable USB clock.  1: Divide by 1. to 255: Divide by 255.
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
    namespace Noneclkoutdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x400480e8,0xffffff00,0,unsigned>;
        ///CLKOUT clock divider values  0: Disable CLKOUT clock divider.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonepioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x40048100,0xff000000,0,unsigned>;
        ///State of P0_23 through P0_0 at power-on reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Nonepioporcap1{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40048104,0x00000000,0,unsigned>;
        ///State of P1_31 through P1_0 at power-on reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Nonebodctrl{    ///<Brown-Out Detect
        using Addr = Register::Address<0x40048150,0xffffffe0,0,unsigned>;
        ///BOD reset level
        enum class bodrstlevVal {
            level0TheResetA=0x00000000,     ///<Level 0: The reset assertion threshold voltage is 1.46 V; the reset de-assertion threshold voltage is 1.63 V.
            level1TheResetA=0x00000001,     ///<Level 1: The reset assertion threshold voltage is 2.06 V; the reset de-assertion threshold voltage is 2.15 V.
            level2TheResetA=0x00000002,     ///<Level 2: The reset assertion threshold voltage is 2.35 V; the reset de-assertion threshold voltage is 2.43 V.
            level3TheResetA=0x00000003,     ///<Level 3: The reset assertion threshold voltage is 2.63 V; the reset de-assertion threshold voltage is 2.71 V.
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
            reserved=0x00000000,     ///<Reserved.
            level1theInterrup=0x00000001,     ///<Level 1:The interrupt assertion threshold voltage is 2.22 V; the interrupt de-assertion threshold voltage is 2.35 V.
            level2TheInterru=0x00000002,     ///<Level 2: The interrupt assertion threshold voltage is 2.52 V; the interrupt de-assertion threshold voltage is 2.66 V.
            level3TheInterru=0x00000003,     ///<Level 3: The interrupt assertion threshold voltage is 2.80 V; the interrupt de-assertion threshold voltage is 2.90 V.
        };
        namespace bodintvalValC{
            constexpr MPL::Value<bodintvalVal,bodintvalVal::reserved> reserved{};
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
        ///The IRQ number of the interrupt that acts as the Non-Maskable Interrupt (NMI) if bit 31 is 1. See Table 53 for the list of interrupt sources and their IRQ numbers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> irqno{}; 
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt (NMI) source selected by bits 4:0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmien{}; 
    }
    namespace Nonepintsel0{    ///<GPIO Pin Interrupt Select register
        using Addr = Register::Address<0x40048178,0xffffffc0,0,unsigned>;
        ///Pin number within the port selected by the PORTSEL bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port for the pin number to be selected in the INTPIN bits of this register.
        enum class portselVal {
            port0=0x00000000,     ///<Port 0
            port1=0x00000001,     ///<Port 1
        };
        namespace portselValC{
            constexpr MPL::Value<portselVal,portselVal::port0> port0{};
            constexpr MPL::Value<portselVal,portselVal::port1> port1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,portselVal> portsel{}; 
    }
    namespace Nonepintsel1{    ///<GPIO Pin Interrupt Select register
        using Addr = Register::Address<0x4004817c,0xffffffc0,0,unsigned>;
        ///Pin number within the port selected by the PORTSEL bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port for the pin number to be selected in the INTPIN bits of this register.
        enum class portselVal {
            port0=0x00000000,     ///<Port 0
            port1=0x00000001,     ///<Port 1
        };
        namespace portselValC{
            constexpr MPL::Value<portselVal,portselVal::port0> port0{};
            constexpr MPL::Value<portselVal,portselVal::port1> port1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,portselVal> portsel{}; 
    }
    namespace Nonepintsel2{    ///<GPIO Pin Interrupt Select register
        using Addr = Register::Address<0x40048180,0xffffffc0,0,unsigned>;
        ///Pin number within the port selected by the PORTSEL bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port for the pin number to be selected in the INTPIN bits of this register.
        enum class portselVal {
            port0=0x00000000,     ///<Port 0
            port1=0x00000001,     ///<Port 1
        };
        namespace portselValC{
            constexpr MPL::Value<portselVal,portselVal::port0> port0{};
            constexpr MPL::Value<portselVal,portselVal::port1> port1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,portselVal> portsel{}; 
    }
    namespace Nonepintsel3{    ///<GPIO Pin Interrupt Select register
        using Addr = Register::Address<0x40048184,0xffffffc0,0,unsigned>;
        ///Pin number within the port selected by the PORTSEL bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port for the pin number to be selected in the INTPIN bits of this register.
        enum class portselVal {
            port0=0x00000000,     ///<Port 0
            port1=0x00000001,     ///<Port 1
        };
        namespace portselValC{
            constexpr MPL::Value<portselVal,portselVal::port0> port0{};
            constexpr MPL::Value<portselVal,portselVal::port1> port1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,portselVal> portsel{}; 
    }
    namespace Nonepintsel4{    ///<GPIO Pin Interrupt Select register
        using Addr = Register::Address<0x40048188,0xffffffc0,0,unsigned>;
        ///Pin number within the port selected by the PORTSEL bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port for the pin number to be selected in the INTPIN bits of this register.
        enum class portselVal {
            port0=0x00000000,     ///<Port 0
            port1=0x00000001,     ///<Port 1
        };
        namespace portselValC{
            constexpr MPL::Value<portselVal,portselVal::port0> port0{};
            constexpr MPL::Value<portselVal,portselVal::port1> port1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,portselVal> portsel{}; 
    }
    namespace Nonepintsel5{    ///<GPIO Pin Interrupt Select register
        using Addr = Register::Address<0x4004818c,0xffffffc0,0,unsigned>;
        ///Pin number within the port selected by the PORTSEL bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port for the pin number to be selected in the INTPIN bits of this register.
        enum class portselVal {
            port0=0x00000000,     ///<Port 0
            port1=0x00000001,     ///<Port 1
        };
        namespace portselValC{
            constexpr MPL::Value<portselVal,portselVal::port0> port0{};
            constexpr MPL::Value<portselVal,portselVal::port1> port1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,portselVal> portsel{}; 
    }
    namespace Nonepintsel6{    ///<GPIO Pin Interrupt Select register
        using Addr = Register::Address<0x40048190,0xffffffc0,0,unsigned>;
        ///Pin number within the port selected by the PORTSEL bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port for the pin number to be selected in the INTPIN bits of this register.
        enum class portselVal {
            port0=0x00000000,     ///<Port 0
            port1=0x00000001,     ///<Port 1
        };
        namespace portselValC{
            constexpr MPL::Value<portselVal,portselVal::port0> port0{};
            constexpr MPL::Value<portselVal,portselVal::port1> port1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,portselVal> portsel{}; 
    }
    namespace Nonepintsel7{    ///<GPIO Pin Interrupt Select register
        using Addr = Register::Address<0x40048194,0xffffffc0,0,unsigned>;
        ///Pin number within the port selected by the PORTSEL bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Select the port for the pin number to be selected in the INTPIN bits of this register.
        enum class portselVal {
            port0=0x00000000,     ///<Port 0
            port1=0x00000001,     ///<Port 1
        };
        namespace portselValC{
            constexpr MPL::Value<portselVal,portselVal::port0> port0{};
            constexpr MPL::Value<portselVal,portselVal::port1> port1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,portselVal> portsel{}; 
    }
    namespace Noneusbclkctrl{    ///<USB clock control
        using Addr = Register::Address<0x40048198,0xfffffffc,0,unsigned>;
        ///USB need_clock signal control
        enum class apClkVal {
            underHardwareContr=0x00000000,     ///<Under hardware control.
            forcedHigh=0x00000001,     ///<Forced HIGH.
        };
        namespace apClkValC{
            constexpr MPL::Value<apClkVal,apClkVal::underHardwareContr> underHardwareContr{};
            constexpr MPL::Value<apClkVal,apClkVal::forcedHigh> forcedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,apClkVal> apClk{}; 
        ///USB need_clock polarity for triggering the USB wake-up interrupt
        enum class polClkVal {
            fallingEdgeOfThe=0x00000000,     ///<Falling edge of the USB need_clock triggers the USB wake-up (default).
            risingEdgeOfTheU=0x00000001,     ///<Rising edge of the USB need_clock triggers the USB wake-up.
        };
        namespace polClkValC{
            constexpr MPL::Value<polClkVal,polClkVal::fallingEdgeOfThe> fallingEdgeOfThe{};
            constexpr MPL::Value<polClkVal,polClkVal::risingEdgeOfTheU> risingEdgeOfTheU{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,polClkVal> polClk{}; 
    }
    namespace Noneusbclkst{    ///<USB clock status
        using Addr = Register::Address<0x4004819c,0xfffffffe,0,unsigned>;
        ///USB need_clock signal status
        enum class needClkstVal {
            low=0x00000000,     ///<LOW
            high=0x00000001,     ///<HIGH
        };
        namespace needClkstValC{
            constexpr MPL::Value<needClkstVal,needClkstVal::low> low{};
            constexpr MPL::Value<needClkstVal,needClkstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,needClkstVal> needClkst{}; 
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
        using Addr = Register::Address<0x40048214,0xffc7cfff,0,unsigned>;
        ///WWDT interrupt wake-up
        enum class wwdtintVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace wwdtintValC{
            constexpr MPL::Value<wwdtintVal,wwdtintVal::disabled> disabled{};
            constexpr MPL::Value<wwdtintVal,wwdtintVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,wwdtintVal> wwdtint{}; 
        ///Brown Out Detect (BOD) interrupt wake-up
        enum class bodintVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace bodintValC{
            constexpr MPL::Value<bodintVal,bodintVal::disabled> disabled{};
            constexpr MPL::Value<bodintVal,bodintVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,bodintVal> bodint{}; 
        ///USB need_clock signal wake-up
        enum class usbWakeupVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace usbWakeupValC{
            constexpr MPL::Value<usbWakeupVal,usbWakeupVal::disabled> disabled{};
            constexpr MPL::Value<usbWakeupVal,usbWakeupVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,usbWakeupVal> usbWakeup{}; 
        ///GPIO GROUP0 interrupt wake-up
        enum class gpioint0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace gpioint0ValC{
            constexpr MPL::Value<gpioint0Val,gpioint0Val::disabled> disabled{};
            constexpr MPL::Value<gpioint0Val,gpioint0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,gpioint0Val> gpioint0{}; 
        ///GPIO GROUP1 interrupt wake-up
        enum class gpioint1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace gpioint1ValC{
            constexpr MPL::Value<gpioint1Val,gpioint1Val::disabled> disabled{};
            constexpr MPL::Value<gpioint1Val,gpioint1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,gpioint1Val> gpioint1{}; 
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
        using Addr = Register::Address<0x40048234,0xfffffa00,0,unsigned>;
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
        ///USB transceiver wake-up configuration
        enum class usbpadPdVal {
            usbTransceiverPowe=0x00000000,     ///<USB transceiver powered
            usbTransceiverPowe=0x00000001,     ///<USB transceiver powered down
        };
        namespace usbpadPdValC{
            constexpr MPL::Value<usbpadPdVal,usbpadPdVal::usbTransceiverPowe> usbTransceiverPowe{};
            constexpr MPL::Value<usbpadPdVal,usbpadPdVal::usbTransceiverPowe> usbTransceiverPowe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,usbpadPdVal> usbpadPd{}; 
    }
    namespace Nonepdruncfg{    ///<Power configuration register
        using Addr = Register::Address<0x40048238,0xfffffa00,0,unsigned>;
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
        ///BOD power-down
        enum class bodPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace bodPdValC{
            constexpr MPL::Value<bodPdVal,bodPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<bodPdVal,bodPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bodPdVal> bodPd{}; 
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
        enum class sysoscPdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        namespace sysoscPdValC{
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::poweredDown> poweredDown{};
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::powered> powered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sysoscPdVal> sysoscPd{}; 
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
        ///USB transceiver power-down configuration
        enum class usbpadPdVal {
            usbTransceiverPowe=0x00000000,     ///<USB transceiver powered
            usbTransceiverPowe=0x00000001,     ///<USB transceiver powered down (suspend mode)
        };
        namespace usbpadPdValC{
            constexpr MPL::Value<usbpadPdVal,usbpadPdVal::usbTransceiverPowe> usbTransceiverPowe{};
            constexpr MPL::Value<usbpadPdVal,usbpadPdVal::usbTransceiverPowe> usbTransceiverPowe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,usbpadPdVal> usbpadPd{}; 
    }
    namespace NonedeviceId{    ///<Device ID
        using Addr = Register::Address<0x400483f8,0x00000000,0,unsigned>;
        ///LPC1345FHN33 = 0x2801 0541 LPC1345FBD48 = 0x2801 0541 LPC1346FHN33 = 0x0801 8542 LPC1346FBD48 = 0x0801 8542 LPC1347FHN33 = 0x0802 0543 LPC1347FBD48 = 0x0802 0543 LPC1347FBD64 = 0x0802 0543 LPC1315FHN33 = 0x3A01 0523 LPC1315FBD48 = 0x3A01 0523 LPC1316FHN33 = 0x1A01 8524 LPC1316FBD48 = 0x1A01 8524 LPC1317FHN33 = 0x1A02 0525 LPC1317FBD48 = 0x1A02 0525 LPC1317FBD64 = 0x1A02 0525
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
}
