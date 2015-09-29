#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10398 Chapter title=LPC111x/LPC11Cxx
System configuration (SYSCON) Modification date=2/22/2012 Major revision=8 Minor revision=not available 
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
        using Addr = Register::Address<0x40048004,0xfffffff0,0,unsigned>;
        ///SPI0 reset control
        enum class ssp0RstNVal {
            spio0reset=0x00000000,     ///<Resets the SPI0 peripheral.
            spio0noreset=0x00000001,     ///<SPI0 reset de-asserted.
        };
        namespace ssp0RstNValC{
            constexpr MPL::Value<ssp0RstNVal,ssp0RstNVal::spio0reset> spio0reset{};
            constexpr MPL::Value<ssp0RstNVal,ssp0RstNVal::spio0noreset> spio0noreset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ssp0RstNVal> ssp0RstN{}; 
        ///I2C reset control
        enum class i2cRstNVal {
            i2creset=0x00000000,     ///<Resets the I2C peripheral.
            i2cnoreset=0x00000001,     ///<I2C reset de-asserted.
        };
        namespace i2cRstNValC{
            constexpr MPL::Value<i2cRstNVal,i2cRstNVal::i2creset> i2creset{};
            constexpr MPL::Value<i2cRstNVal,i2cRstNVal::i2cnoreset> i2cnoreset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,i2cRstNVal> i2cRstN{}; 
        ///SPI1 reset control
        enum class ssp1RstNVal {
            spi1reset=0x00000000,     ///<Resets the SPI1 peripheral.
            spi2noreset=0x00000001,     ///<SPI1 reset de-asserted.
        };
        namespace ssp1RstNValC{
            constexpr MPL::Value<ssp1RstNVal,ssp1RstNVal::spi1reset> spi1reset{};
            constexpr MPL::Value<ssp1RstNVal,ssp1RstNVal::spi2noreset> spi2noreset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ssp1RstNVal> ssp1RstN{}; 
        ///C_CAN reset control. See Section 3.1 for part specific details.
        enum class canRstNVal {
            canreset=0x00000000,     ///<Resets the C_CAN peripheral.
            cannoreset=0x00000001,     ///<C_CAN reset de-asserted.
        };
        namespace canRstNValC{
            constexpr MPL::Value<canRstNVal,canRstNVal::canreset> canreset{};
            constexpr MPL::Value<canRstNVal,canRstNVal::cannoreset> cannoreset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,canRstNVal> canRstN{}; 
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
    namespace Nonesysoscctrl{    ///<System oscillator control
        using Addr = Register::Address<0x40048020,0xfffffffc,0,unsigned>;
        ///Bypass system oscillator
        enum class bypassVal {
            nobypass=0x00000000,     ///<Oscillator is not bypassed.
            bypassEnabledPll=0x00000001,     ///<Bypass enabled. PLL input (sys_osc_clk) is fed directly from the XTALIN and XTALOUT pins.
        };
        namespace bypassValC{
            constexpr MPL::Value<bypassVal,bypassVal::nobypass> nobypass{};
            constexpr MPL::Value<bypassVal,bypassVal::bypassEnabledPll> bypassEnabledPll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bypassVal> bypass{}; 
        ///Determines frequency range for Low-power oscillator.
        enum class freqrangeVal {
            low=0x00000000,     ///<1 - 20 MHz frequency range.
            high=0x00000001,     ///<15 - 25 MHz frequency range
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
    namespace Nonesysrststat{    ///<System reset status register
        using Addr = Register::Address<0x40048030,0xffffffe0,0,unsigned>;
        ///POR reset status
        enum class porVal {
            noPorDetected=0x00000000,     ///<No POR detected.
            porDetectedWritin=0x00000001,     ///<POR detected. Writing a one clears this reset.
        };
        namespace porValC{
            constexpr MPL::Value<porVal,porVal::noPorDetected> noPorDetected{};
            constexpr MPL::Value<porVal,porVal::porDetectedWritin> porDetectedWritin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,porVal> por{}; 
        ///Status of the external RESET pin.
        enum class extrstVal {
            noResetEventDetec=0x00000000,     ///<No RESET event detected.
            resetDetectedWrit=0x00000001,     ///<RESET detected. Writing a one clears this reset.
        };
        namespace extrstValC{
            constexpr MPL::Value<extrstVal,extrstVal::noResetEventDetec> noResetEventDetec{};
            constexpr MPL::Value<extrstVal,extrstVal::resetDetectedWrit> resetDetectedWrit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,extrstVal> extrst{}; 
        ///Status of the Watchdog reset
        enum class wdtVal {
            noWdtResetDetecte=0x00000000,     ///<No WDT reset detected.
            wdtResetDetected=0x00000001,     ///<WDT reset detected. Writing a one clears this reset.
        };
        namespace wdtValC{
            constexpr MPL::Value<wdtVal,wdtVal::noWdtResetDetecte> noWdtResetDetecte{};
            constexpr MPL::Value<wdtVal,wdtVal::wdtResetDetected> wdtResetDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wdtVal> wdt{}; 
        ///Status of the Brown-out detect reset
        enum class bodVal {
            noBodResetDetecte=0x00000000,     ///<No BOD reset detected.
            bodResetDetected=0x00000001,     ///<BOD reset detected. Writing a one clears this reset.
        };
        namespace bodValC{
            constexpr MPL::Value<bodVal,bodVal::noBodResetDetecte> noBodResetDetecte{};
            constexpr MPL::Value<bodVal,bodVal::bodResetDetected> bodResetDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bodVal> bod{}; 
        ///Status of the software system reset
        enum class sysrstVal {
            noSystemResetDete=0x00000000,     ///<No System reset detected.
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
        using Addr = Register::Address<0x40048080,0xfff84000,0,unsigned>;
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
        ///Enables clock for UART. See Section 3.1 for part specific details.
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
        ///Enables clock for C_CAN. See Section 3.1 for part specific details.
        enum class canVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace canValC{
            constexpr MPL::Value<canVal,canVal::disable> disable{};
            constexpr MPL::Value<canVal,canVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,canVal> can{}; 
        ///Enables clock for SPI1.
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
    namespace Nonessp0clkdiv{    ///<SPI0 clock divider
        using Addr = Register::Address<0x40048094,0xffffff00,0,unsigned>;
        ///SPI0_PCLK clock divider values 0: Disable SPI0_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneuartclkdiv{    ///<UART clock divder
        using Addr = Register::Address<0x40048098,0xffffff00,0,unsigned>;
        ///UART_PCLK clock divider values 0: Disable UART_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonessp1clkdiv{    ///<SPI1 clock divder
        using Addr = Register::Address<0x4004809c,0xffffff00,0,unsigned>;
        ///SPI1_PCLK clock divider values 0: Disable SPI1_PCLK.  1: Divide by 1. to 255: Divide by 255.
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
        using Addr = Register::Address<0x40048100,0x00000000,0,unsigned>;
        ///Raw reset status input PIO0_n: PIO0_11 to PIO0_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> cappio0N{}; 
        ///Raw reset status input PIO1_n: PIO1_11 to PIO1_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> cappio1N{}; 
        ///Raw reset status input PIO2_n: PIO2_7 to PIO2_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> cappio2N{}; 
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
            level0TheInterru=0x00000000,     ///<Level 0: The interrupt assertion threshold voltage is 1.65 V; the interrupt de-assertion threshold voltage is 1.80 V.
            level1theInterrup=0x00000001,     ///<Level 1:The interrupt assertion threshold voltage is 2.22 V; the interrupt de-assertion threshold voltage is 2.35 V.
            level2TheInterru=0x00000002,     ///<Level 2: The interrupt assertion threshold voltage is 2.52 V; the interrupt de-assertion threshold voltage is 2.66 V.
            level3TheInterru=0x00000003,     ///<Level 3: The interrupt assertion threshold voltage is 2.80 V; the interrupt de-assertion threshold voltage is 2.90 V.
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
    namespace Nonenmisrc{    ///<NMI source selection
        using Addr = Register::Address<0x40048174,0x7fffffe0,0,unsigned>;
        ///The IRQ number of the interrupt that acts as the Non-Maskable Interrupt (NMI) if bit 31 in this register is 1. See Table 54 for the list of interrupt sources and their IRQ numbers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> irqno{}; 
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt (NMI) source selected by bits 4:0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmien{}; 
    }
    namespace Nonestartaprp0{    ///<Start logic edge control register 0
        using Addr = Register::Address<0x40048200,0xffffe000,0,unsigned>;
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aprpio00{}; 
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> aprpio01{}; 
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aprpio02{}; 
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> aprpio03{}; 
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> aprpio04{}; 
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> aprpio05{}; 
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> aprpio06{}; 
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> aprpio07{}; 
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> aprpio08{}; 
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aprpio09{}; 
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> aprpio010{}; 
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> aprpio011{}; 
        ///Edge select for start logic input PIO1_0 0 = Falling edge 1 = Rising edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> aprpio10{}; 
    }
    namespace Nonestarterp0{    ///<Start logic signal enable register 0
        using Addr = Register::Address<0x40048204,0xffffe000,0,unsigned>;
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> erpio00{}; 
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erpio01{}; 
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> erpio02{}; 
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> erpio03{}; 
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> erpio04{}; 
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> erpio05{}; 
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> erpio06{}; 
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> erpio07{}; 
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> erpio08{}; 
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> erpio09{}; 
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> erpio010{}; 
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> erpio011{}; 
        ///Enable start signal for start logic input PIO1_0 0 = Disabled 1 = Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> erpio10{}; 
    }
    namespace Nonestartrsrp0clr{    ///<Start logic reset register 0
        using Addr = Register::Address<0x40048208,0xffffe000,0,unsigned>;
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rsrpio00{}; 
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rsrpio01{}; 
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsrpio02{}; 
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsrpio03{}; 
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rsrpio04{}; 
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsrpio05{}; 
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rsrpio06{}; 
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rsrpio07{}; 
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rsrpio08{}; 
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rsrpio09{}; 
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rsrpio010{}; 
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rsrpio011{}; 
        ///Start signal reset for start logic input PIO1_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rsrpio10{}; 
    }
    namespace Nonestartsrp0{    ///<Start logic status register 0
        using Addr = Register::Address<0x4004820c,0xffffe000,0,unsigned>;
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> srpio00{}; 
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> srpio01{}; 
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srpio02{}; 
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> srpio03{}; 
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> srpio04{}; 
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> srpio05{}; 
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srpio06{}; 
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srpio07{}; 
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srpio08{}; 
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srpio09{}; 
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> srpio010{}; 
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> srpio011{}; 
        ///Start signal status for start logic input PIO1_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> srpio10{}; 
    }
    namespace Nonepdsleepcfg{    ///<Power-down states in Deep-sleep mode
        using Addr = Register::Address<0x40048230,0xffffe000,0,unsigned>;
        ///Reserved. Always write these bits as 111.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> notused0{}; 
        ///BOD power-down control in Deep-sleep mode, see Table 40.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> notused1{}; 
        ///Watchdog oscillator power control in Deep-sleep mode, see Table 40.
        enum class wdtoscPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace wdtoscPdValC{
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::powered> powered{};
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wdtoscPdVal> wdtoscPd{}; 
        ///Reserved. Always write this bit as 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notused2{}; 
        ///Reserved. Always write these bits as 000.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> notused3{}; 
        ///Reserved. Always write these bits as 11.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> notused4{}; 
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
        ///Reserved. Always write this bit as 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notused0{}; 
        ///Reserved. Always write this bit as 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notused1{}; 
        ///Reserved. Always write this bit as 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notused2{}; 
        ///Reserved. Always write this bit as 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notused3{}; 
        ///Reserved. Always write this bit as 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notused4{}; 
        ///Reserved. Always write these bits as 111.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> notused5{}; 
    }
    namespace Nonepdruncfg{    ///<Power-down configuration register
        using Addr = Register::Address<0x40048238,0xffff0000,0,unsigned>;
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
        ///Reserved. Always write this bit as 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notused0{}; 
        ///Reserved. Always write this bit as 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notused1{}; 
        ///Reserved. Always write this bit as 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notused2{}; 
        ///Reserved. Always write this bit as 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notused3{}; 
        ///Reserved.  Always write this bit as 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notused4{}; 
        ///Reserved. Always write these bits as 111.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> notused5{}; 
    }
    namespace NonedeviceId{    ///<Device ID register 0 for parts LPC1100, LPC1100C, LPC1100L.
        using Addr = Register::Address<0x400483f4,0x00000000,0,unsigned>;
        ///Part ID numbers for LPC111x/LPC11Cxx parts 0x041E 502B; 0x2516 D02B = LPC1111FHN33/101 0x2516 D02B = LPC1111FHN33/102 0x0416 502B; 0x2516 902B = LPC1111FHN33/201 0x2516 902B = LPC1111FHN33/202 0x042D 502B; 0x2524 D02B = LPC1112FHN33/101 0x2524 D02B = LPC1112FHN33/102 0x0425 502B; 0x2524 902B = LPC1112FHN33/201 0x2524 902B = LPC1112FHN33/202  0x2524 902B = LPC1112FHI33/202 0x0434 502B; 0x2532 902B = LPC1113FHN33/201 0x2532 902B = LPC1113FHN33/202 0x0434 102B; 0x2532 102B = LPC1113FHN33/301 0x2532 102B = LPC1113FHN33/302 0x0434 102B; 0x2532 102B = LPC1113FBD48/301 0x2532 102B = LPC1113FBD48/302 0x0444 502B; 0x2540 902B = LPC1114FHN33/201 0x2540 902B = LPC1114FHN33/202 0x0444 102B; 0x2540 102B = LPC1114FHN33/301 0x2540 102B = LPC1114FHN33/302  0x2540 102B = LPC1114FHI33/302 0x0444 102B; 0x2540 102B = LPC1114FBD48/301 0x2540 102B = LPC1114FBD48/302 0x2540 102B = LPC11D14FBD100/302 0x1421 102B = LPC11C12/FBD48/301 0x1440 102B = LPC11C14/FBD48/301 0x1431 102B = LPC11C22/FBD48/301 0X1430 102B = LPC11C24/FBD48/301
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
}
