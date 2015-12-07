#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration 
    namespace Nonesysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40048000,0xfffffffc,0,unsigned>;
        ///System memory remap
        enum class MapVal {
            bootLoaderModeIn=0x00000000,     ///<Boot Loader Mode. Interrupt vectors are re-mapped to Boot ROM.
            userRamModeInter=0x00000001,     ///<User RAM Mode. Interrupt vectors are re-mapped to Static RAM.
            userFlashModeInt=0x00000002,     ///<User Flash Mode. Interrupt vectors are not re-mapped and reside in Flash.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MapVal> map{}; 
        namespace MapValC{
            constexpr Register::FieldValue<decltype(map),MapVal::bootLoaderModeIn> bootLoaderModeIn{};
            constexpr Register::FieldValue<decltype(map),MapVal::userRamModeInter> userRamModeInter{};
            constexpr Register::FieldValue<decltype(map),MapVal::userFlashModeInt> userFlashModeInt{};
        }
    }
    namespace Nonepresetctrl{    ///<Peripheral reset control
        using Addr = Register::Address<0x40048004,0xfffff008,0,unsigned>;
        ///SSP0 reset control
        enum class Ssp0rstnVal {
            resetsTheSsp0Peri=0x00000000,     ///<Resets the SSP0 peripheral.
            ssp0ResetDeAssert=0x00000001,     ///<SSP0 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ssp0rstnVal> ssp0RstN{}; 
        namespace Ssp0rstnValC{
            constexpr Register::FieldValue<decltype(ssp0RstN),Ssp0rstnVal::resetsTheSsp0Peri> resetsTheSsp0Peri{};
            constexpr Register::FieldValue<decltype(ssp0RstN),Ssp0rstnVal::ssp0ResetDeAssert> ssp0ResetDeAssert{};
        }
        ///I2C reset control
        enum class I2crstnVal {
            resetsTheI2cPerip=0x00000000,     ///<Resets the I2C peripheral.
            i2cResetDeAsserte=0x00000001,     ///<I2C reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,I2crstnVal> i2cRstN{}; 
        namespace I2crstnValC{
            constexpr Register::FieldValue<decltype(i2cRstN),I2crstnVal::resetsTheI2cPerip> resetsTheI2cPerip{};
            constexpr Register::FieldValue<decltype(i2cRstN),I2crstnVal::i2cResetDeAsserte> i2cResetDeAsserte{};
        }
        ///SSP1 reset control
        enum class Ssp1rstnVal {
            resetsTheSsp1Peri=0x00000000,     ///<Resets the SSP1 peripheral.
            ssp1ResetDeAssert=0x00000001,     ///<SSP1 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ssp1rstnVal> ssp1RstN{}; 
        namespace Ssp1rstnValC{
            constexpr Register::FieldValue<decltype(ssp1RstN),Ssp1rstnVal::resetsTheSsp1Peri> resetsTheSsp1Peri{};
            constexpr Register::FieldValue<decltype(ssp1RstN),Ssp1rstnVal::ssp1ResetDeAssert> ssp1ResetDeAssert{};
        }
        ///UART reset control
        enum class UartrstnVal {
            resetsTheUartPeri=0x00000000,     ///<Resets the UART peripheral.
            uartResetDeAssert=0x00000001,     ///<UART reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,UartrstnVal> uartRstN{}; 
        namespace UartrstnValC{
            constexpr Register::FieldValue<decltype(uartRstN),UartrstnVal::resetsTheUartPeri> resetsTheUartPeri{};
            constexpr Register::FieldValue<decltype(uartRstN),UartrstnVal::uartResetDeAssert> uartResetDeAssert{};
        }
        ///CT16B0 reset control
        enum class Ct16b0rstnVal {
            resetsTheCt16b0Pe=0x00000000,     ///<Resets the CT16B0 peripheral.
            ct16b0ResetDeAsse=0x00000001,     ///<CT16B0 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ct16b0rstnVal> ct16b0RstN{}; 
        namespace Ct16b0rstnValC{
            constexpr Register::FieldValue<decltype(ct16b0RstN),Ct16b0rstnVal::resetsTheCt16b0Pe> resetsTheCt16b0Pe{};
            constexpr Register::FieldValue<decltype(ct16b0RstN),Ct16b0rstnVal::ct16b0ResetDeAsse> ct16b0ResetDeAsse{};
        }
        ///CT16B1 reset control
        enum class Ct16b1rstnVal {
            resetsTheCt16b1Pe=0x00000000,     ///<Resets the CT16B1 peripheral.
            ct16b1ResetDeAsse=0x00000001,     ///<CT16B1 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ct16b1rstnVal> ct16b1RstN{}; 
        namespace Ct16b1rstnValC{
            constexpr Register::FieldValue<decltype(ct16b1RstN),Ct16b1rstnVal::resetsTheCt16b1Pe> resetsTheCt16b1Pe{};
            constexpr Register::FieldValue<decltype(ct16b1RstN),Ct16b1rstnVal::ct16b1ResetDeAsse> ct16b1ResetDeAsse{};
        }
        ///CT32B0 reset control
        enum class Ct32b0rstnVal {
            resetsTheCt32b0Pe=0x00000000,     ///<Resets the CT32B0 peripheral.
            ct32b0ResetDeAsse=0x00000001,     ///<CT32B0 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ct32b0rstnVal> ct32b0RstN{}; 
        namespace Ct32b0rstnValC{
            constexpr Register::FieldValue<decltype(ct32b0RstN),Ct32b0rstnVal::resetsTheCt32b0Pe> resetsTheCt32b0Pe{};
            constexpr Register::FieldValue<decltype(ct32b0RstN),Ct32b0rstnVal::ct32b0ResetDeAsse> ct32b0ResetDeAsse{};
        }
        ///CT32B1 reset control
        enum class Ct32b1rstnVal {
            resetsTheCt32b1Pe=0x00000000,     ///<Resets the CT32B1 peripheral.
            ct32b1ResetDeAsse=0x00000001,     ///<CT32B1 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ct32b1rstnVal> ct32b1RstN{}; 
        namespace Ct32b1rstnValC{
            constexpr Register::FieldValue<decltype(ct32b1RstN),Ct32b1rstnVal::resetsTheCt32b1Pe> resetsTheCt32b1Pe{};
            constexpr Register::FieldValue<decltype(ct32b1RstN),Ct32b1rstnVal::ct32b1ResetDeAsse> ct32b1ResetDeAsse{};
        }
        ///Analog comparator reset control
        enum class AcomprstnVal {
            resetsTheAnalogCo=0x00000000,     ///<Resets the Analog comparator peripheral.
            analogComparatorRe=0x00000001,     ///<Analog comparator reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AcomprstnVal> acompRstN{}; 
        namespace AcomprstnValC{
            constexpr Register::FieldValue<decltype(acompRstN),AcomprstnVal::resetsTheAnalogCo> resetsTheAnalogCo{};
            constexpr Register::FieldValue<decltype(acompRstN),AcomprstnVal::analogComparatorRe> analogComparatorRe{};
        }
        ///DAC reset control
        enum class DacrstnVal {
            resetsTheDacPerip=0x00000000,     ///<Resets the DAC peripheral.
            dacResetDeAsserte=0x00000001,     ///<DAC reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,DacrstnVal> dacRstN{}; 
        namespace DacrstnValC{
            constexpr Register::FieldValue<decltype(dacRstN),DacrstnVal::resetsTheDacPerip> resetsTheDacPerip{};
            constexpr Register::FieldValue<decltype(dacRstN),DacrstnVal::dacResetDeAsserte> dacResetDeAsserte{};
        }
        ///ADC reset control
        enum class AdcrstnVal {
            resetsTheAdcPerip=0x00000000,     ///<Resets the ADC peripheral.
            adcResetDeAsserte=0x00000001,     ///<ADC reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AdcrstnVal> adcRstN{}; 
        namespace AdcrstnValC{
            constexpr Register::FieldValue<decltype(adcRstN),AdcrstnVal::resetsTheAdcPerip> resetsTheAdcPerip{};
            constexpr Register::FieldValue<decltype(adcRstN),AdcrstnVal::adcResetDeAsserte> adcResetDeAsserte{};
        }
    }
    namespace Nonesyspllctrl{    ///<System PLL control
        using Addr = Register::Address<0x40048008,0xffffff80,0,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1. 00000: Division ratio M = 1 to 11111: Division ratio M = 32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> msel{}; 
        namespace MselValC{
        }
        ///Post divider ratio P. The division ratio is 2 x P.
        enum class PselVal {
            pEq1=0x00000000,     ///<P = 1
            pEq2=0x00000001,     ///<P = 2
            pEq4=0x00000002,     ///<P = 4
            pEq8=0x00000003,     ///<P = 8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel),PselVal::pEq1> pEq1{};
            constexpr Register::FieldValue<decltype(psel),PselVal::pEq2> pEq2{};
            constexpr Register::FieldValue<decltype(psel),PselVal::pEq4> pEq4{};
            constexpr Register::FieldValue<decltype(psel),PselVal::pEq8> pEq8{};
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
            constexpr Register::FieldValue<decltype(lock),LockVal::pllNotLocked> pllNotLocked{};
            constexpr Register::FieldValue<decltype(lock),LockVal::pllLocked> pllLocked{};
        }
    }
    namespace Nonesysoscctrl{    ///<System oscillator control
        using Addr = Register::Address<0x40048020,0xfffffffc,0,unsigned>;
        ///Bypass system oscillator
        enum class BypassVal {
            oscillatorIsNotBy=0x00000000,     ///<Oscillator is not bypassed.
            bypassEnabledPll=0x00000001,     ///<Bypass enabled. PLL input (sys_osc_clk) is fed directly from the XTALIN pins.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass),BypassVal::oscillatorIsNotBy> oscillatorIsNotBy{};
            constexpr Register::FieldValue<decltype(bypass),BypassVal::bypassEnabledPll> bypassEnabledPll{};
        }
        ///Determines frequency range for Low-power oscillator.
        enum class FreqrangeVal {
            v120MhzFrequency=0x00000000,     ///<1 - 20 MHz frequency range.
            v1525MhzFrequenc=0x00000001,     ///<15 - 25 MHz frequency range
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FreqrangeVal> freqrange{}; 
        namespace FreqrangeValC{
            constexpr Register::FieldValue<decltype(freqrange),FreqrangeVal::v120MhzFrequency> v120MhzFrequency{};
            constexpr Register::FieldValue<decltype(freqrange),FreqrangeVal::v1525MhzFrequenc> v1525MhzFrequenc{};
        }
    }
    namespace Nonewdtoscctrl{    ///<Watchdog oscillator control
        using Addr = Register::Address<0x40048024,0xfffffe00,0,unsigned>;
        ///Select divider for Fclkana.  wdt_osc_clk = Fclkana/ (2 x (1 + DIVSEL)) 00000: 2 x (1 + DIVSEL) = 2 00001: 2 x (1 + DIVSEL) = 4 to 11111: 2 x (1 + DIVSEL) = 64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> divsel{}; 
        namespace DivselValC{
        }
        ///Select watchdog oscillator analog output frequency (Fclkana).
        enum class FreqselVal {
            operationIsUndefin=0x00000000,     ///<Operation is undefined for this value. Startup code should program a non-zero value in this field as soon after reset as possible.
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
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::operationIsUndefin> operationIsUndefin{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v06Mhz> v06Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v105Mhz> v105Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v14Mhz> v14Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v175Mhz> v175Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v21Mhz> v21Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v24Mhz> v24Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v27Mhz> v27Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v30Mhz> v30Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v325Mhz> v325Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v35Mhz> v35Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v375Mhz> v375Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v40Mhz> v40Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v42Mhz> v42Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v44Mhz> v44Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v46Mhz> v46Mhz{};
        }
    }
    namespace Noneircctrl{    ///<IRC oscillator control
        using Addr = Register::Address<0x40048028,0xffffff00,0,unsigned>;
        ///Trim value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> trim{}; 
        namespace TrimValC{
        }
    }
    namespace Nonelfoscctrl{    ///<LF oscillator control
        using Addr = Register::Address<0x4004802c,0xfffffe00,0,unsigned>;
        ///Select divider for Fclkana.  wdt_osc_clk = Fclkana/ (2 x (1 + DIVSEL)) 00000: 2 x (1 + DIVSEL) = 2 00001: 2 x (1 + DIVSEL) = 4 to 11111: 2 x (1 + DIVSEL) = 64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> divsel{}; 
        namespace DivselValC{
        }
        ///Select watchdog oscillator analog output frequency (Fclkana).
        enum class FreqselVal {
            operationIsUndefin=0x00000000,     ///<Operation is undefined for this value. Startup code should program a non-zero value in this field as soon after reset as possible.
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
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::operationIsUndefin> operationIsUndefin{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v06Mhz> v06Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v105Mhz> v105Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v14Mhz> v14Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v175Mhz> v175Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v21Mhz> v21Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v24Mhz> v24Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v27Mhz> v27Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v30Mhz> v30Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v325Mhz> v325Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v35Mhz> v35Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v375Mhz> v375Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v40Mhz> v40Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v42Mhz> v42Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v44Mhz> v44Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v46Mhz> v46Mhz{};
        }
    }
    namespace Nonesysrststat{    ///<System reset status register
        using Addr = Register::Address<0x40048030,0xffffffe0,0,unsigned>;
        ///POR reset status
        enum class PorVal {
            noPorDetected=0x00000000,     ///<No POR detected
            porDetected=0x00000001,     ///<POR detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PorVal> por{}; 
        namespace PorValC{
            constexpr Register::FieldValue<decltype(por),PorVal::noPorDetected> noPorDetected{};
            constexpr Register::FieldValue<decltype(por),PorVal::porDetected> porDetected{};
        }
        ///External reset status
        enum class ExtrstVal {
            noResetEventDetec=0x00000000,     ///<No RESET event detected
            resetDetected=0x00000001,     ///<RESET detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ExtrstVal> extrst{}; 
        namespace ExtrstValC{
            constexpr Register::FieldValue<decltype(extrst),ExtrstVal::noResetEventDetec> noResetEventDetec{};
            constexpr Register::FieldValue<decltype(extrst),ExtrstVal::resetDetected> resetDetected{};
        }
        ///Status of the Watchdog reset
        enum class WdtVal {
            noWdtResetDetecte=0x00000000,     ///<No WDT reset detected
            wdtResetDetected=0x00000001,     ///<WDT reset detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WdtVal> wdt{}; 
        namespace WdtValC{
            constexpr Register::FieldValue<decltype(wdt),WdtVal::noWdtResetDetecte> noWdtResetDetecte{};
            constexpr Register::FieldValue<decltype(wdt),WdtVal::wdtResetDetected> wdtResetDetected{};
        }
        ///Status of the Brown-out detect reset
        enum class BodVal {
            noBodResetDetecte=0x00000000,     ///<No BOD reset detected
            bodResetDetected=0x00000001,     ///<BOD reset detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodVal> bod{}; 
        namespace BodValC{
            constexpr Register::FieldValue<decltype(bod),BodVal::noBodResetDetecte> noBodResetDetecte{};
            constexpr Register::FieldValue<decltype(bod),BodVal::bodResetDetected> bodResetDetected{};
        }
        ///Status of the software system reset
        enum class SysrstVal {
            noSystemResetDete=0x00000000,     ///<No System reset detected
            systemResetDetecte=0x00000001,     ///<System reset detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SysrstVal> sysrst{}; 
        namespace SysrstValC{
            constexpr Register::FieldValue<decltype(sysrst),SysrstVal::noSystemResetDete> noSystemResetDete{};
            constexpr Register::FieldValue<decltype(sysrst),SysrstVal::systemResetDetecte> systemResetDetecte{};
        }
    }
    namespace Nonesyspllclksel{    ///<System PLL clock source select
        using Addr = Register::Address<0x40048040,0xfffffffc,0,unsigned>;
        ///System PLL clock source
        enum class SelVal {
            irc=0x00000000,     ///<IRC
            crystalOscillator=0x00000001,     ///<Crystal Oscillator (XTAL)
            clkinPin=0x00000002,     ///<CLKIN pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::irc> irc{};
            constexpr Register::FieldValue<decltype(sel),SelVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::clkinPin> clkinPin{};
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
            constexpr Register::FieldValue<decltype(ena),EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena),EnaVal::updateClockSource> updateClockSource{};
        }
    }
    namespace Nonemainclksel{    ///<Main clock source select
        using Addr = Register::Address<0x40048070,0xfffffffc,0,unsigned>;
        ///Clock source for main clock
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            pllInput=0x00000001,     ///<PLL input
            lfOscillator=0x00000002,     ///<LF Oscillator
            pllOutput=0x00000003,     ///<PLL output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::pllInput> pllInput{};
            constexpr Register::FieldValue<decltype(sel),SelVal::lfOscillator> lfOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::pllOutput> pllOutput{};
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
            constexpr Register::FieldValue<decltype(ena),EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena),EnaVal::updateClockSource> updateClockSource{};
        }
    }
    namespace Nonesysahbclkdiv{    ///<System clock divider
        using Addr = Register::Address<0x40048078,0xffffff00,0,unsigned>;
        ///System AHB clock divider values 0: System clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Nonesysahbclkctrl{    ///<System clock control
        using Addr = Register::Address<0x40048080,0xfe424000,0,unsigned>;
        ///Enables the clock for the AHB, the APB bridge, the Cortex-M0 FCLK and HCLK, SysCon, and the PMU. This bit is read only and always reads as 1.
        enum class SysVal {
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SysVal> sys{}; 
        namespace SysValC{
            constexpr Register::FieldValue<decltype(sys),SysVal::enable> enable{};
        }
        ///Enables clock for ROM.
        enum class RomVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RomVal> rom{}; 
        namespace RomValC{
            constexpr Register::FieldValue<decltype(rom),RomVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rom),RomVal::enable> enable{};
        }
        ///Enables clock for RAM.
        enum class RamVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RamVal> ram{}; 
        namespace RamValC{
            constexpr Register::FieldValue<decltype(ram),RamVal::disable> disable{};
            constexpr Register::FieldValue<decltype(ram),RamVal::enable> enable{};
        }
        ///Enables clock for flash/EEPROM register interface.
        enum class FlashregVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FlashregVal> flashreg{}; 
        namespace FlashregValC{
            constexpr Register::FieldValue<decltype(flashreg),FlashregVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(flashreg),FlashregVal::enabled> enabled{};
        }
        ///Enables clock for flash/EEPROM array access.
        enum class FlasharrayVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FlasharrayVal> flasharray{}; 
        namespace FlasharrayValC{
            constexpr Register::FieldValue<decltype(flasharray),FlasharrayVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(flasharray),FlasharrayVal::enabled> enabled{};
        }
        ///Enables clock for I2C.
        enum class I2cVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,I2cVal> i2c{}; 
        namespace I2cValC{
            constexpr Register::FieldValue<decltype(i2c),I2cVal::disable> disable{};
            constexpr Register::FieldValue<decltype(i2c),I2cVal::enable> enable{};
        }
        ///Enables clock for GPIO.
        enum class GpioVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,GpioVal> gpio{}; 
        namespace GpioValC{
            constexpr Register::FieldValue<decltype(gpio),GpioVal::disable> disable{};
            constexpr Register::FieldValue<decltype(gpio),GpioVal::enable> enable{};
        }
        ///Enables clock for 16-bit counter/timer 0.
        enum class Ct16b0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ct16b0Val> ct16b0{}; 
        namespace Ct16b0ValC{
            constexpr Register::FieldValue<decltype(ct16b0),Ct16b0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct16b0),Ct16b0Val::enable> enable{};
        }
        ///Enables clock for 16-bit counter/timer 1.
        enum class Ct16b1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ct16b1Val> ct16b1{}; 
        namespace Ct16b1ValC{
            constexpr Register::FieldValue<decltype(ct16b1),Ct16b1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct16b1),Ct16b1Val::enable> enable{};
        }
        ///Enables clock for 32-bit counter/timer 0.
        enum class Ct32b0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ct32b0Val> ct32b0{}; 
        namespace Ct32b0ValC{
            constexpr Register::FieldValue<decltype(ct32b0),Ct32b0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct32b0),Ct32b0Val::enable> enable{};
        }
        ///Enables clock for 32-bit counter/timer 1.
        enum class Ct32b1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ct32b1Val> ct32b1{}; 
        namespace Ct32b1ValC{
            constexpr Register::FieldValue<decltype(ct32b1),Ct32b1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct32b1),Ct32b1Val::enable> enable{};
        }
        ///Enables clock for SSP0.
        enum class Ssp0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ssp0Val> ssp0{}; 
        namespace Ssp0ValC{
            constexpr Register::FieldValue<decltype(ssp0),Ssp0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ssp0),Ssp0Val::enable> enable{};
        }
        ///Enables clock for UART. Note that the UART pins must be configured in the IOCON block before the UART clock can be enabled.
        enum class UartVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,UartVal> uart{}; 
        namespace UartValC{
            constexpr Register::FieldValue<decltype(uart),UartVal::disable> disable{};
            constexpr Register::FieldValue<decltype(uart),UartVal::enable> enable{};
        }
        ///Enables clock for ADC.
        enum class AdcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,AdcVal> adc{}; 
        namespace AdcValC{
            constexpr Register::FieldValue<decltype(adc),AdcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(adc),AdcVal::enable> enable{};
        }
        ///Enables clock for WDT.
        enum class WdtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,WdtVal> wdt{}; 
        namespace WdtValC{
            constexpr Register::FieldValue<decltype(wdt),WdtVal::disable> disable{};
            constexpr Register::FieldValue<decltype(wdt),WdtVal::enable> enable{};
        }
        ///Enables clock for I/O configuration block.
        enum class IoconVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,IoconVal> iocon{}; 
        namespace IoconValC{
            constexpr Register::FieldValue<decltype(iocon),IoconVal::disable> disable{};
            constexpr Register::FieldValue<decltype(iocon),IoconVal::enable> enable{};
        }
        ///Enables clock for SSP1.
        enum class Ssp1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ssp1Val> ssp1{}; 
        namespace Ssp1ValC{
            constexpr Register::FieldValue<decltype(ssp1),Ssp1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ssp1),Ssp1Val::enable> enable{};
        }
        ///GPIO Pin interrupts
        enum class PintVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,PintVal> pint{}; 
        namespace PintValC{
            constexpr Register::FieldValue<decltype(pint),PintVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pint),PintVal::enable> enable{};
        }
        ///Enables clock for ACOMP.
        enum class AcompVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,AcompVal> acomp{}; 
        namespace AcompValC{
            constexpr Register::FieldValue<decltype(acomp),AcompVal::disable> disable{};
            constexpr Register::FieldValue<decltype(acomp),AcompVal::enable> enable{};
        }
        ///Enables clock for DAC.
        enum class DacVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,DacVal> dac{}; 
        namespace DacValC{
            constexpr Register::FieldValue<decltype(dac),DacVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dac),DacVal::enable> enable{};
        }
        ///GPIO Port 0 interrupt
        enum class P0intVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,P0intVal> p0int{}; 
        namespace P0intValC{
            constexpr Register::FieldValue<decltype(p0int),P0intVal::disable> disable{};
            constexpr Register::FieldValue<decltype(p0int),P0intVal::enable> enable{};
        }
        ///GPIO Port 1interrupt
        enum class P1intVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,P1intVal> p1int{}; 
        namespace P1intValC{
            constexpr Register::FieldValue<decltype(p1int),P1intVal::disable> disable{};
            constexpr Register::FieldValue<decltype(p1int),P1intVal::enable> enable{};
        }
    }
    namespace Nonessp0clkdiv{    ///<SSP0 clock divider
        using Addr = Register::Address<0x40048094,0xffffff00,0,unsigned>;
        ///SSP0_PCLK clock divider values 0: Disable SSP1_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Noneuartclkdiv{    ///<UART clock divider
        using Addr = Register::Address<0x40048098,0xffffff00,0,unsigned>;
        ///UART_PCLK clock divider values 0: Disable UART_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Nonessp1clkdiv{    ///<SSP1 clock divider
        using Addr = Register::Address<0x4004809c,0xffffff00,0,unsigned>;
        ///SSP1_PCLK clock divider values 0: Disable SSP1_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Noneclkoutsel{    ///<CLKOUT clock source select
        using Addr = Register::Address<0x400480e0,0xfffffffc,0,unsigned>;
        ///CLKOUT clock source
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            crystalOscillator=0x00000001,     ///<Crystal oscillator (XTAL)
            lfOscillator=0x00000002,     ///<LF oscillator
            mainClock=0x00000003,     ///<Main clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::lfOscillator> lfOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::mainClock> mainClock{};
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
            constexpr Register::FieldValue<decltype(ena),EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena),EnaVal::updateClockSource> updateClockSource{};
        }
    }
    namespace Noneclkoutdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x400480e8,0xffffff00,0,unsigned>;
        ///CLKOUT clock divider values 0: Disable CLKOUT clock divider.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Nonepioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x40048100,0x00000000,0,unsigned>;
        ///State of PIO0_31 through PIO0_0 at power-on reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> piostat{}; 
        namespace PiostatValC{
        }
    }
    namespace Nonepioporcap1{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40048104,0xfffffc00,0,unsigned>;
        ///State of PIO1_9 through PIO1_0 at power-on reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> piostat{}; 
        namespace PiostatValC{
        }
    }
    namespace Nonebodr{    ///<Brown-Out Detect
        using Addr = Register::Address<0x40048150,0xffffffb3,0,unsigned>;
        ///BOD interrupt threshold
        enum class BodintvalVal {
            level2TheInterru=0x00000002,     ///<Level 2: the interrupt assertion threshold voltage is 2.52 V; the interrupt de-assertion threshold voltage is 2.66 V.
            level3TheInterru=0x00000003,     ///<Level 3: the interrupt assertion threshold voltage is 2.80 V; the interrupt de-assertion threshold voltage is 2.90 V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,BodintvalVal> bodintval{}; 
        namespace BodintvalValC{
            constexpr Register::FieldValue<decltype(bodintval),BodintvalVal::level2TheInterru> level2TheInterru{};
            constexpr Register::FieldValue<decltype(bodintval),BodintvalVal::level3TheInterru> level3TheInterru{};
        }
        ///This bit is 1 if the BOD is requesting an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodint{}; 
        namespace BodintValC{
        }
    }
    namespace Nonesystckcal{    ///<System tick counter calibration
        using Addr = Register::Address<0x40048158,0xfc000000,0,unsigned>;
        ///System tick timer calibration value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> cal{}; 
        namespace CalValC{
        }
    }
    namespace Nonenmisrc{    ///<NMI Source Control
        using Addr = Register::Address<0x40048174,0x7fffffe0,0,unsigned>;
        ///The IRQ number of the interrupt that is to act as the Non-Maskable interrupt (NMI) if bit 31 is 1. See Section 4.3 for the list of interrupt sources and their IRQ numbers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> irqno{}; 
        namespace IrqnoValC{
        }
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt (NMI) source selected by bits 4:0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmien{}; 
        namespace NmienValC{
        }
    }
    namespace Nonepintsel0{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048178,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
        namespace IntportValC{
        }
    }
    namespace Nonepintsel1{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x4004817c,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
        namespace IntportValC{
        }
    }
    namespace Nonepintsel2{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048180,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
        namespace IntportValC{
        }
    }
    namespace Nonepintsel3{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048184,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
        namespace IntportValC{
        }
    }
    namespace Nonepintsel4{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048188,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
        namespace IntportValC{
        }
    }
    namespace Nonepintsel5{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x4004818c,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
        namespace IntportValC{
        }
    }
    namespace Nonepintsel6{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048190,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
        namespace IntportValC{
        }
    }
    namespace Nonepintsel7{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048194,0xffffffc0,0,unsigned>;
        ///The pin number within the port identified by the INTPORT field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
        ///Select the port: 0 = P0 pin. 1 = P1 pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intport{}; 
        namespace IntportValC{
        }
    }
    namespace Nonepdruncfg{    ///<Power configuration register
        using Addr = Register::Address<0x40048238,0xfffe1f08,0,unsigned>;
        ///IRC oscillator output power-down
        enum class IrcoutpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrcoutpdVal> ircoutPd{}; 
        namespace IrcoutpdValC{
            constexpr Register::FieldValue<decltype(ircoutPd),IrcoutpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(ircoutPd),IrcoutpdVal::powered> powered{};
        }
        ///IRC oscillator power-down
        enum class IrcpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrcpdVal> ircPd{}; 
        namespace IrcpdValC{
            constexpr Register::FieldValue<decltype(ircPd),IrcpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(ircPd),IrcpdVal::powered> powered{};
        }
        ///Flash power-down
        enum class FlashpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FlashpdVal> flashPd{}; 
        namespace FlashpdValC{
            constexpr Register::FieldValue<decltype(flashPd),FlashpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(flashPd),FlashpdVal::powered> powered{};
        }
        ///ADC power-down
        enum class AdcpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AdcpdVal> adcPd{}; 
        namespace AdcpdValC{
            constexpr Register::FieldValue<decltype(adcPd),AdcpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(adcPd),AdcpdVal::powered> powered{};
        }
        ///Crystal oscillator power-down
        enum class XtalpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,XtalpdVal> xtalPd{}; 
        namespace XtalpdValC{
            constexpr Register::FieldValue<decltype(xtalPd),XtalpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(xtalPd),XtalpdVal::powered> powered{};
        }
        ///Watchdog oscillator power-down
        enum class WdtoscpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd),WdtoscpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(wdtoscPd),WdtoscpdVal::powered> powered{};
        }
        ///System PLL power-down
        enum class SyspllpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SyspllpdVal> syspllPd{}; 
        namespace SyspllpdValC{
            constexpr Register::FieldValue<decltype(syspllPd),SyspllpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(syspllPd),SyspllpdVal::powered> powered{};
        }
        ///Low frequency oscillator power-down
        enum class LfoscpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,LfoscpdVal> lfoscPd{}; 
        namespace LfoscpdValC{
            constexpr Register::FieldValue<decltype(lfoscPd),LfoscpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(lfoscPd),LfoscpdVal::powered> powered{};
        }
        ///DAC power-down
        enum class DacpdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,DacpdVal> dacPd{}; 
        namespace DacpdValC{
            constexpr Register::FieldValue<decltype(dacPd),DacpdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(dacPd),DacpdVal::powered> powered{};
        }
        ///Temperature Sensor power-down
        enum class TspdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,TspdVal> tsPd{}; 
        namespace TspdValC{
            constexpr Register::FieldValue<decltype(tsPd),TspdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(tsPd),TspdVal::powered> powered{};
        }
        ///Analog Comparator power-down
        enum class AcomppdVal {
            poweredDown=0x00000001,     ///<Powered down
            powered=0x00000000,     ///<Powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,AcomppdVal> acompPd{}; 
        namespace AcomppdValC{
            constexpr Register::FieldValue<decltype(acompPd),AcomppdVal::poweredDown> poweredDown{};
            constexpr Register::FieldValue<decltype(acompPd),AcomppdVal::powered> powered{};
        }
    }
    namespace NonedeviceId{    ///<Device ID
        using Addr = Register::Address<0x400483f4,0x00000000,0,unsigned>;
        ///Part ID number for LPC11Axx  LPC11A11FBD48/001 = 0x455E C02B LPC11A11FHN33/001 = 0x455E C02B LPC11A12FBD48/101 = 0x4574 802B LPC11A12FHN33/101 = 0x4574 802B LPC11A13FBD48/201 = 0x4582 402B LPC11A13FHI33/201 = 0x4582 402B LPC11A14FBD48/301 = 0x35A0 002B; 0x45A0 002B LPC11A14FHN33/301 = 0x35A0 002B; 0x45A0 002B LPC11A02UK = 0x4D5C C02B LPC11A04UK = 0x4D80 002B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
        namespace DeviceidValC{
        }
    }
}
