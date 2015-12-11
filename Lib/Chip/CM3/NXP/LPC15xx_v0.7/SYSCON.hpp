#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// System configuration (SYSCON)
    namespace Nonesysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40074000,0xfffffffc,0,unsigned>;
        ///tbd
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> map{}; 
    }
    namespace Nonesystckcal{    ///<System tick counter calibration
        using Addr = Register::Address<0x40074014,0xfc000000,0,unsigned>;
        ///System tick timer calibration value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> cal{}; 
    }
    namespace Nonenmisrc{    ///<NMI Source Control
        using Addr = Register::Address<0x4007401c,0x7fffffe0,0,unsigned>;
        ///The IRQ number of the interrupt that acts as the Non-Maskable Interrupt (NMI) if bit 31 is 1. See Table 3 for the list of interrupt sources and their IRQ numbers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> irqno{}; 
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt (NMI) source selected by bits 4:0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmien{}; 
    }
    namespace Nonesysrststat{    ///<System reset status register
        using Addr = Register::Address<0x40074040,0xffffffe0,0,unsigned>;
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
    }
    namespace Nonepresetctrl0{    ///<Peripheral reset control 0
        using Addr = Register::Address<0x40074044,0x87c2147f,0,unsigned>;
        ///Flash reset control
        enum class FlashrstVal {
            clearFlashReset=0x00000000,     ///<Clear flash reset.
            assertFlashReset=0x00000001,     ///<Assert flash reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FlashrstVal> flashRst{}; 
        namespace FlashrstValC{
            constexpr Register::FieldValue<decltype(flashRst)::Type,FlashrstVal::clearFlashReset> clearFlashReset{};
            constexpr Register::FieldValue<decltype(flashRst)::Type,FlashrstVal::assertFlashReset> assertFlashReset{};
        }
        ///FMC reset control FMC? Is this the flash controller?
        enum class FmcrstVal {
            clearFmcReset=0x00000000,     ///<Clear FMC reset.
            assertFmcReset=0x00000001,     ///<Assert FMC reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FmcrstVal> fmcRst{}; 
        namespace FmcrstValC{
            constexpr Register::FieldValue<decltype(fmcRst)::Type,FmcrstVal::clearFmcReset> clearFmcReset{};
            constexpr Register::FieldValue<decltype(fmcRst)::Type,FmcrstVal::assertFmcReset> assertFmcReset{};
        }
        ///EEPROM reset control
        enum class EepromrstVal {
            clearEepromReset=0x00000000,     ///<Clear EEPROM reset.
            assertEepromReset=0x00000001,     ///<Assert EEPROM reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,EepromrstVal> eepromRst{}; 
        namespace EepromrstValC{
            constexpr Register::FieldValue<decltype(eepromRst)::Type,EepromrstVal::clearEepromReset> clearEepromReset{};
            constexpr Register::FieldValue<decltype(eepromRst)::Type,EepromrstVal::assertEepromReset> assertEepromReset{};
        }
        ///Pin mux reset control
        enum class PmuxrstVal {
            clearPinMuxReset=0x00000000,     ///<Clear pin mux reset.
            assertPinMuxReset=0x00000001,     ///<Assert pin mux reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,PmuxrstVal> pmuxRst{}; 
        namespace PmuxrstValC{
            constexpr Register::FieldValue<decltype(pmuxRst)::Type,PmuxrstVal::clearPinMuxReset> clearPinMuxReset{};
            constexpr Register::FieldValue<decltype(pmuxRst)::Type,PmuxrstVal::assertPinMuxReset> assertPinMuxReset{};
        }
        ///IOCON reset control
        enum class IoconrstVal {
            clearIoconReset=0x00000000,     ///<Clear IOCON reset.
            assertIoconReset=0x00000001,     ///<Assert IOCON reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,IoconrstVal> ioconRst{}; 
        namespace IoconrstValC{
            constexpr Register::FieldValue<decltype(ioconRst)::Type,IoconrstVal::clearIoconReset> clearIoconReset{};
            constexpr Register::FieldValue<decltype(ioconRst)::Type,IoconrstVal::assertIoconReset> assertIoconReset{};
        }
        ///GPIO0 reset control
        enum class Gpio0rstVal {
            clearGpio0Reset=0x00000000,     ///<Clear GPIO0 reset.
            assertGpio0Reset=0x00000001,     ///<Assert GPIO0 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Gpio0rstVal> gpio0Rst{}; 
        namespace Gpio0rstValC{
            constexpr Register::FieldValue<decltype(gpio0Rst)::Type,Gpio0rstVal::clearGpio0Reset> clearGpio0Reset{};
            constexpr Register::FieldValue<decltype(gpio0Rst)::Type,Gpio0rstVal::assertGpio0Reset> assertGpio0Reset{};
        }
        ///GPIO1 reset control
        enum class Gpio1rstVal {
            clearGpio1Reset=0x00000000,     ///<Clear GPIO1 reset.
            assertGpio1Reset=0x00000001,     ///<Assert GPIO1 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Gpio1rstVal> gpio1Rst{}; 
        namespace Gpio1rstValC{
            constexpr Register::FieldValue<decltype(gpio1Rst)::Type,Gpio1rstVal::clearGpio1Reset> clearGpio1Reset{};
            constexpr Register::FieldValue<decltype(gpio1Rst)::Type,Gpio1rstVal::assertGpio1Reset> assertGpio1Reset{};
        }
        ///GPIO2 reset control
        enum class Gpio2rstVal {
            clearGpio2Reset=0x00000000,     ///<Clear GPIO2 reset.
            assertGpio2Reset=0x00000001,     ///<Assert GPIO2 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Gpio2rstVal> gpio2Rst{}; 
        namespace Gpio2rstValC{
            constexpr Register::FieldValue<decltype(gpio2Rst)::Type,Gpio2rstVal::clearGpio2Reset> clearGpio2Reset{};
            constexpr Register::FieldValue<decltype(gpio2Rst)::Type,Gpio2rstVal::assertGpio2Reset> assertGpio2Reset{};
        }
        ///Pin interrupt (PINT) reset control
        enum class PintrstVal {
            clearPintReset=0x00000000,     ///<Clear PINT reset.
            assertPintReset=0x00000001,     ///<Assert PINT reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,PintrstVal> pintRst{}; 
        namespace PintrstValC{
            constexpr Register::FieldValue<decltype(pintRst)::Type,PintrstVal::clearPintReset> clearPintReset{};
            constexpr Register::FieldValue<decltype(pintRst)::Type,PintrstVal::assertPintReset> assertPintReset{};
        }
        ///Grouped interrupt (GINT) reset control
        enum class GintrstVal {
            clearGintReset=0x00000000,     ///<Clear GINT reset.
            assertGintReset=0x00000001,     ///<Assert GINT reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,GintrstVal> gintRst{}; 
        namespace GintrstValC{
            constexpr Register::FieldValue<decltype(gintRst)::Type,GintrstVal::clearGintReset> clearGintReset{};
            constexpr Register::FieldValue<decltype(gintRst)::Type,GintrstVal::assertGintReset> assertGintReset{};
        }
        ///DMA reset control
        enum class DmarstVal {
            clearDmaReset=0x00000000,     ///<Clear DMA reset.
            assertDmaReset=0x00000001,     ///<Assert DMA reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DmarstVal> dmaRst{}; 
        namespace DmarstValC{
            constexpr Register::FieldValue<decltype(dmaRst)::Type,DmarstVal::clearDmaReset> clearDmaReset{};
            constexpr Register::FieldValue<decltype(dmaRst)::Type,DmarstVal::assertDmaReset> assertDmaReset{};
        }
        ///CRC generator reset control
        enum class CrcrstVal {
            clearCrcReset=0x00000000,     ///<Clear CRC reset.
            assertCrcReset=0x00000001,     ///<Assert CRC reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,CrcrstVal> crcRst{}; 
        namespace CrcrstValC{
            constexpr Register::FieldValue<decltype(crcRst)::Type,CrcrstVal::clearCrcReset> clearCrcReset{};
            constexpr Register::FieldValue<decltype(crcRst)::Type,CrcrstVal::assertCrcReset> assertCrcReset{};
        }
        ///ADC0 reset control
        enum class Adc0rstVal {
            clearAdc0Reset=0x00000000,     ///<Clear ADC0 reset.
            assertAdc0Reset=0x00000001,     ///<Assert ADC0 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Adc0rstVal> adc0Rst{}; 
        namespace Adc0rstValC{
            constexpr Register::FieldValue<decltype(adc0Rst)::Type,Adc0rstVal::clearAdc0Reset> clearAdc0Reset{};
            constexpr Register::FieldValue<decltype(adc0Rst)::Type,Adc0rstVal::assertAdc0Reset> assertAdc0Reset{};
        }
        ///ADC1 reset control
        enum class Adc1rstVal {
            clearAdc1Reset=0x00000000,     ///<Clear ADC1 reset.
            assertAdc1Reset=0x00000001,     ///<Assert ADC1 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Adc1rstVal> adc1Rst{}; 
        namespace Adc1rstValC{
            constexpr Register::FieldValue<decltype(adc1Rst)::Type,Adc1rstVal::clearAdc1Reset> clearAdc1Reset{};
            constexpr Register::FieldValue<decltype(adc1Rst)::Type,Adc1rstVal::assertAdc1Reset> assertAdc1Reset{};
        }
        ///DAC reset control
        enum class DacrstVal {
            clearDacReset=0x00000000,     ///<Clear DAC reset.
            assertDacReset=0x00000001,     ///<Assert DAC reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,DacrstVal> dacRst{}; 
        namespace DacrstValC{
            constexpr Register::FieldValue<decltype(dacRst)::Type,DacrstVal::clearDacReset> clearDacReset{};
            constexpr Register::FieldValue<decltype(dacRst)::Type,DacrstVal::assertDacReset> assertDacReset{};
        }
        ///Analog Comparator (ACMP) reset control for all four 4 comparators in the analog comparator block.
        enum class AcmprstVal {
            clearCmpReset=0x00000000,     ///<Clear CMP reset.
            assertCmpReset=0x00000001,     ///<Assert CMP reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,AcmprstVal> acmpRst{}; 
        namespace AcmprstValC{
            constexpr Register::FieldValue<decltype(acmpRst)::Type,AcmprstVal::clearCmpReset> clearCmpReset{};
            constexpr Register::FieldValue<decltype(acmpRst)::Type,AcmprstVal::assertCmpReset> assertCmpReset{};
        }
    }
    namespace Nonepresetctrl1{    ///<Peripheral reset control 1
        using Addr = Register::Address<0x40074048,0xff51d900,0,unsigned>;
        ///Multi-rate timer (MRT) reset control
        enum class MrtrstVal {
            clearMrtReset=0x00000000,     ///<Clear MRT reset.
            assertMrtReset=0x00000001,     ///<Assert MRT reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MrtrstVal> mrtRst{}; 
        namespace MrtrstValC{
            constexpr Register::FieldValue<decltype(mrtRst)::Type,MrtrstVal::clearMrtReset> clearMrtReset{};
            constexpr Register::FieldValue<decltype(mrtRst)::Type,MrtrstVal::assertMrtReset> assertMrtReset{};
        }
        ///Repetitive interrupt timer (RIT) reset control
        enum class RitrstVal {
            clearRitReset=0x00000000,     ///<Clear RIT reset.
            assertRitReset=0x00000001,     ///<Assert RIT reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RitrstVal> ritRst{}; 
        namespace RitrstValC{
            constexpr Register::FieldValue<decltype(ritRst)::Type,RitrstVal::clearRitReset> clearRitReset{};
            constexpr Register::FieldValue<decltype(ritRst)::Type,RitrstVal::assertRitReset> assertRitReset{};
        }
        ///State configurable timer 0 (SCT0) reset control
        enum class Sct0rstVal {
            clearSct0Reset=0x00000000,     ///<Clear SCT0 reset.
            assertSct0Reset=0x00000001,     ///<Assert SCT0 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sct0rstVal> sct0Rst{}; 
        namespace Sct0rstValC{
            constexpr Register::FieldValue<decltype(sct0Rst)::Type,Sct0rstVal::clearSct0Reset> clearSct0Reset{};
            constexpr Register::FieldValue<decltype(sct0Rst)::Type,Sct0rstVal::assertSct0Reset> assertSct0Reset{};
        }
        ///State configurable timer 1 (SCT1) reset control
        enum class Sct1rstVal {
            clearSct1Reset=0x00000000,     ///<Clear SCT1 reset.
            assertSct1Reset=0x00000001,     ///<Assert SCT1 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Sct1rstVal> sct1Rst{}; 
        namespace Sct1rstValC{
            constexpr Register::FieldValue<decltype(sct1Rst)::Type,Sct1rstVal::clearSct1Reset> clearSct1Reset{};
            constexpr Register::FieldValue<decltype(sct1Rst)::Type,Sct1rstVal::assertSct1Reset> assertSct1Reset{};
        }
        ///State configurable timer 2 (SCT2) reset control
        enum class Sct2rstVal {
            clearSct2Reset=0x00000000,     ///<Clear SCT2 reset.
            assertSct2Reset=0x00000001,     ///<Assert SCT2 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Sct2rstVal> sct2Rst{}; 
        namespace Sct2rstValC{
            constexpr Register::FieldValue<decltype(sct2Rst)::Type,Sct2rstVal::clearSct2Reset> clearSct2Reset{};
            constexpr Register::FieldValue<decltype(sct2Rst)::Type,Sct2rstVal::assertSct2Reset> assertSct2Reset{};
        }
        ///State configurable timer 3 (SCT3) reset control
        enum class Sct3rstVal {
            clearSct3Reset=0x00000000,     ///<Clear SCT3 reset.
            assertSct3Reset=0x00000001,     ///<Assert SCT3 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Sct3rstVal> sct3Rst{}; 
        namespace Sct3rstValC{
            constexpr Register::FieldValue<decltype(sct3Rst)::Type,Sct3rstVal::clearSct3Reset> clearSct3Reset{};
            constexpr Register::FieldValue<decltype(sct3Rst)::Type,Sct3rstVal::assertSct3Reset> assertSct3Reset{};
        }
        ///State configurable timer IPU (SCTIPU) reset control
        enum class SctipurstVal {
            clearSctipuReset=0x00000000,     ///<Clear SCTIPU reset.
            assertSctipuReset=0x00000001,     ///<Assert SCTIPU reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SctipurstVal> sctipuRst{}; 
        namespace SctipurstValC{
            constexpr Register::FieldValue<decltype(sctipuRst)::Type,SctipurstVal::clearSctipuReset> clearSctipuReset{};
            constexpr Register::FieldValue<decltype(sctipuRst)::Type,SctipurstVal::assertSctipuReset> assertSctipuReset{};
        }
        ///CCAN reset control
        enum class CcanrstVal {
            clearCcanReset=0x00000000,     ///<Clear CCAN reset.
            assertCcanReset=0x00000001,     ///<Assert CCAN reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CcanrstVal> ccanRst{}; 
        namespace CcanrstValC{
            constexpr Register::FieldValue<decltype(ccanRst)::Type,CcanrstVal::clearCcanReset> clearCcanReset{};
            constexpr Register::FieldValue<decltype(ccanRst)::Type,CcanrstVal::assertCcanReset> assertCcanReset{};
        }
        ///SPI0 reset control
        enum class Spi0rstVal {
            clearSpi0Reset=0x00000000,     ///<Clear SPI0 reset.
            assertSpi0Reset=0x00000001,     ///<Assert SPI0 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Spi0rstVal> spi0Rst{}; 
        namespace Spi0rstValC{
            constexpr Register::FieldValue<decltype(spi0Rst)::Type,Spi0rstVal::clearSpi0Reset> clearSpi0Reset{};
            constexpr Register::FieldValue<decltype(spi0Rst)::Type,Spi0rstVal::assertSpi0Reset> assertSpi0Reset{};
        }
        ///SPI1 reset control
        enum class Spi1rstVal {
            clearSpi1Reset=0x00000000,     ///<Clear SPI1 reset.
            assertSpi1Reset=0x00000001,     ///<Assert SPI1 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Spi1rstVal> spi1Rst{}; 
        namespace Spi1rstValC{
            constexpr Register::FieldValue<decltype(spi1Rst)::Type,Spi1rstVal::clearSpi1Reset> clearSpi1Reset{};
            constexpr Register::FieldValue<decltype(spi1Rst)::Type,Spi1rstVal::assertSpi1Reset> assertSpi1Reset{};
        }
        ///I2C0 reset control
        enum class I2c0rstVal {
            clearI2c0Reset=0x00000000,     ///<Clear I2C0 reset.
            assertI2c0Reset=0x00000001,     ///<Assert I2C0 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,I2c0rstVal> i2c0Rst{}; 
        namespace I2c0rstValC{
            constexpr Register::FieldValue<decltype(i2c0Rst)::Type,I2c0rstVal::clearI2c0Reset> clearI2c0Reset{};
            constexpr Register::FieldValue<decltype(i2c0Rst)::Type,I2c0rstVal::assertI2c0Reset> assertI2c0Reset{};
        }
        ///UART0 reset control
        enum class Uart0rstVal {
            clearUart0Reset=0x00000000,     ///<Clear UART0 reset.
            assertUart0Reset=0x00000001,     ///<Assert UART0 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Uart0rstVal> uart0Rst{}; 
        namespace Uart0rstValC{
            constexpr Register::FieldValue<decltype(uart0Rst)::Type,Uart0rstVal::clearUart0Reset> clearUart0Reset{};
            constexpr Register::FieldValue<decltype(uart0Rst)::Type,Uart0rstVal::assertUart0Reset> assertUart0Reset{};
        }
        ///UART1 reset control
        enum class Uart1rstVal {
            clearUart1Reset=0x00000000,     ///<Clear UART1 reset.
            assertUart1Reset=0x00000001,     ///<Assert UART1 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Uart1rstVal> uart1Rst{}; 
        namespace Uart1rstValC{
            constexpr Register::FieldValue<decltype(uart1Rst)::Type,Uart1rstVal::clearUart1Reset> clearUart1Reset{};
            constexpr Register::FieldValue<decltype(uart1Rst)::Type,Uart1rstVal::assertUart1Reset> assertUart1Reset{};
        }
        ///UART2 reset control
        enum class Uart2rstVal {
            clearUart2Reset=0x00000000,     ///<Clear UART2 reset.
            assertUart2Reset=0x00000001,     ///<Assert UART2 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Uart2rstVal> uart2Rst{}; 
        namespace Uart2rstValC{
            constexpr Register::FieldValue<decltype(uart2Rst)::Type,Uart2rstVal::clearUart2Reset> clearUart2Reset{};
            constexpr Register::FieldValue<decltype(uart2Rst)::Type,Uart2rstVal::assertUart2Reset> assertUart2Reset{};
        }
        ///QEI0 reset control
        enum class Qei0rstVal {
            clearQei0Reset=0x00000000,     ///<Clear QEI0 reset.
            assertQei0Reset=0x00000001,     ///<Assert QEI0 reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Qei0rstVal> qei0Rst{}; 
        namespace Qei0rstValC{
            constexpr Register::FieldValue<decltype(qei0Rst)::Type,Qei0rstVal::clearQei0Reset> clearQei0Reset{};
            constexpr Register::FieldValue<decltype(qei0Rst)::Type,Qei0rstVal::assertQei0Reset> assertQei0Reset{};
        }
        ///USB reset control
        enum class UsbrstVal {
            clearUsbReset=0x00000000,     ///<Clear USB reset.
            assertUsbReset=0x00000001,     ///<Assert USB reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,UsbrstVal> usbRst{}; 
        namespace UsbrstValC{
            constexpr Register::FieldValue<decltype(usbRst)::Type,UsbrstVal::clearUsbReset> clearUsbReset{};
            constexpr Register::FieldValue<decltype(usbRst)::Type,UsbrstVal::assertUsbReset> assertUsbReset{};
        }
    }
    namespace Nonepioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x4007404c,0x00000000,0,unsigned>;
        ///State of PIO0_31 through PIO0_0 at power-on reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Nonepioporcap1{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40074050,0x00000000,0,unsigned>;
        ///State of PIO1_31 through PIO1_0 at power-on reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Nonepioporcap2{    ///<POR captured PIO status 2
        using Addr = Register::Address<0x40074054,0xfffff000,0,unsigned>;
        ///State of PIO2_11 through PIO2_0 at power-on reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Nonemainclksela{    ///<Main clock source select A
        using Addr = Register::Address<0x40074080,0xfffffffc,0,unsigned>;
        ///Clock source for main clock source selector A
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            systemOscillator=0x00000001,     ///<System oscillator
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::systemOscillator> systemOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::watchdogOscillator> watchdogOscillator{};
        }
    }
    namespace Nonemainclkselb{    ///<Main clock source select B
        using Addr = Register::Address<0x40074084,0xfffffffc,0,unsigned>;
        ///Clock source for main clock source selector B. Selects the clock source for the main clock.
        enum class SelVal {
            mainclkselaClockS=0x00000000,     ///<MAINCLKSELA. Clock source selected in MAINCLKSELA register.
            systemPllInput=0x00000001,     ///<System PLL input.
            systemPllOutput=0x00000002,     ///<System PLL output.
            rtcOscillator32Kh=0x00000003,     ///<RTC oscillator 32 kHz output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::mainclkselaClockS> mainclkselaClockS{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::systemPllInput> systemPllInput{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::systemPllOutput> systemPllOutput{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::rtcOscillator32Kh> rtcOscillator32Kh{};
        }
    }
    namespace Noneusbclksel{    ///<USB clock source select
        using Addr = Register::Address<0x40074088,0xfffffffc,0,unsigned>;
        ///USB clock source.
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            systemOscillator=0x00000001,     ///<System oscillator
            usbPllOut=0x00000002,     ///<USB PLL out
            mainClock=0x00000003,     ///<Main clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::systemOscillator> systemOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::usbPllOut> usbPllOut{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::mainClock> mainClock{};
        }
    }
    namespace Noneadcasyncclksel{    ///<ADC asynchronous clock source select
        using Addr = Register::Address<0x4007408c,0xfffffffc,0,unsigned>;
        ///USB clock source.
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            systemPllOutput=0x00000001,     ///<System PLL output
            usbPllOutput=0x00000002,     ///<USB PLL output
            sctPllOutput=0x00000003,     ///<SCT PLL output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::systemPllOutput> systemPllOutput{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::usbPllOutput> usbPllOutput{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::sctPllOutput> sctPllOutput{};
        }
    }
    namespace Noneclkoutsela{    ///<CLKOUT clock source select A
        using Addr = Register::Address<0x40074094,0xfffffffc,0,unsigned>;
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
    namespace Noneclkoutselb{    ///<CLKOUT clock source select B
        using Addr = Register::Address<0x40074098,0xfffffffc,0,unsigned>;
        ///CLKOUT clock source
        enum class SelVal {
            clkoutselaClockSo=0x00000000,     ///<CLKOUTSELA. Clock source selected in the CLKOUTSELA register.
            usbPllOutput=0x00000001,     ///<USB PLL output .
            sctPllOutput=0x00000002,     ///<SCT PLL output .
            rtc32KhzOutput=0x00000003,     ///<RTC 32 kHz output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::clkoutselaClockSo> clkoutselaClockSo{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::usbPllOutput> usbPllOutput{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::sctPllOutput> sctPllOutput{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::rtc32KhzOutput> rtc32KhzOutput{};
        }
    }
    namespace Nonesyspllclksel{    ///<System PLL clock source select
        using Addr = Register::Address<0x400740a0,0xfffffffc,0,unsigned>;
        ///System PLL clock source
        enum class SelVal {
            irc=0x00000000,     ///<IRC
            crystalOscillator=0x00000001,     ///<Crystal Oscillator (SYSOSC)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::irc> irc{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::crystalOscillator> crystalOscillator{};
        }
    }
    namespace Noneusbpllclksel{    ///<USB PLL clock source select
        using Addr = Register::Address<0x400740a4,0xfffffffc,0,unsigned>;
        ///USB PLL clock source
        enum class SelVal {
            ircTheUsbPllClo=0x00000000,     ///<IRC. The USB PLL clock source must be switched to system oscillator for correct USB operation.In low-speed mode IRC is ok?
            systemOscillator=0x00000001,     ///<System oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircTheUsbPllClo> ircTheUsbPllClo{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::systemOscillator> systemOscillator{};
        }
    }
    namespace Nonesctpllclksel{    ///<SCT PLL clock source select
        using Addr = Register::Address<0x400740a8,0xfffffffc,0,unsigned>;
        ///SCT PLL clock source
        enum class SelVal {
            irc=0x00000000,     ///<IRC
            systemOscillator=0x00000001,     ///<System oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::irc> irc{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::systemOscillator> systemOscillator{};
        }
    }
    namespace Nonesysahbclkdiv{    ///<System clock divider
        using Addr = Register::Address<0x400740c0,0xffffff00,0,unsigned>;
        ///System AHB clock divider values 0: System clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonesysahbclkctrl0{    ///<System clock control 0
        using Addr = Register::Address<0x400740c4,0x87020464,0,unsigned>;
        ///Enables the clock for the AHB, the APB bridges, the Cortex-M3 core clocks, SYSCON, reset control,  SRAM0, and the PMU. This bit is read-only and always reads as 1.
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
        ///Enables clock for SRAM1.
        enum class Sram1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Sram1Val> sram1{}; 
        namespace Sram1ValC{
            constexpr Register::FieldValue<decltype(sram1)::Type,Sram1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(sram1)::Type,Sram1Val::enable> enable{};
        }
        ///Enables clock for SRAM2.
        enum class Sram2Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Sram2Val> sram2{}; 
        namespace Sram2ValC{
            constexpr Register::FieldValue<decltype(sram2)::Type,Sram2Val::disable> disable{};
            constexpr Register::FieldValue<decltype(sram2)::Type,Sram2Val::enable> enable{};
        }
        ///Enables clock for flash memory.
        enum class FlashVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FlashVal> flash{}; 
        namespace FlashValC{
            constexpr Register::FieldValue<decltype(flash)::Type,FlashVal::disable> disable{};
            constexpr Register::FieldValue<decltype(flash)::Type,FlashVal::enable> enable{};
        }
        ///Enables clock for flash controller.
        enum class FmcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FmcVal> fmc{}; 
        namespace FmcValC{
            constexpr Register::FieldValue<decltype(fmc)::Type,FmcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(fmc)::Type,FmcVal::enable> enable{};
        }
        ///Enables clock for EEPROM.
        enum class EepromVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,EepromVal> eeprom{}; 
        namespace EepromValC{
            constexpr Register::FieldValue<decltype(eeprom)::Type,EepromVal::disable> disable{};
            constexpr Register::FieldValue<decltype(eeprom)::Type,EepromVal::enable> enable{};
        }
        ///Enables clock for pin mux.
        enum class PmuxVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,PmuxVal> pmux{}; 
        namespace PmuxValC{
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::enable> enable{};
        }
        ///Enables clock for switch matrix.
        enum class SwmVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,SwmVal> swm{}; 
        namespace SwmValC{
            constexpr Register::FieldValue<decltype(swm)::Type,SwmVal::disable> disable{};
            constexpr Register::FieldValue<decltype(swm)::Type,SwmVal::enable> enable{};
        }
        ///Enables clock for IOCON block.
        enum class IoconVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,IoconVal> iocon{}; 
        namespace IoconValC{
            constexpr Register::FieldValue<decltype(iocon)::Type,IoconVal::disable> disable{};
            constexpr Register::FieldValue<decltype(iocon)::Type,IoconVal::enable> enable{};
        }
        ///Enables clock for GPIO0 port registers.
        enum class Gpio0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Gpio0Val> gpio0{}; 
        namespace Gpio0ValC{
            constexpr Register::FieldValue<decltype(gpio0)::Type,Gpio0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(gpio0)::Type,Gpio0Val::enable> enable{};
        }
        ///Enables clock for GPIO1 port registers.
        enum class Gpio1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Gpio1Val> gpio1{}; 
        namespace Gpio1ValC{
            constexpr Register::FieldValue<decltype(gpio1)::Type,Gpio1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(gpio1)::Type,Gpio1Val::enable> enable{};
        }
        ///Enables clock for GPIO2 port registers.
        enum class Gpio2Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Gpio2Val> gpio2{}; 
        namespace Gpio2ValC{
            constexpr Register::FieldValue<decltype(gpio2)::Type,Gpio2Val::disable> disable{};
            constexpr Register::FieldValue<decltype(gpio2)::Type,Gpio2Val::enable> enable{};
        }
        ///Enables clock for pin interrupt block.
        enum class PintVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,PintVal> pint{}; 
        namespace PintValC{
            constexpr Register::FieldValue<decltype(pint)::Type,PintVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pint)::Type,PintVal::enable> enable{};
        }
        ///Enables clock for grouped pin interrupt block.
        enum class GintVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,GintVal> gint{}; 
        namespace GintValC{
            constexpr Register::FieldValue<decltype(gint)::Type,GintVal::disable> disable{};
            constexpr Register::FieldValue<decltype(gint)::Type,GintVal::enable> enable{};
        }
        ///Enables clock for DMA.
        enum class DmaVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::enable> enable{};
        }
        ///Enables clock for CRC.
        enum class CrcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,CrcVal> crc{}; 
        namespace CrcValC{
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::enable> enable{};
        }
        ///Enables clock for WWDT.
        enum class WwdtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,WwdtVal> wwdt{}; 
        namespace WwdtValC{
            constexpr Register::FieldValue<decltype(wwdt)::Type,WwdtVal::disable> disable{};
            constexpr Register::FieldValue<decltype(wwdt)::Type,WwdtVal::enable> enable{};
        }
        ///Enables clock for RTC.
        enum class RtcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,RtcVal> rtc{}; 
        namespace RtcValC{
            constexpr Register::FieldValue<decltype(rtc)::Type,RtcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rtc)::Type,RtcVal::enable> enable{};
        }
        ///Enables clock for ADC0 register interface.
        enum class Adc0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Adc0Val> adc0{}; 
        namespace Adc0ValC{
            constexpr Register::FieldValue<decltype(adc0)::Type,Adc0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(adc0)::Type,Adc0Val::enable> enable{};
        }
        ///Enables clock for ADC1 register interface.
        enum class Adc1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Adc1Val> adc1{}; 
        namespace Adc1ValC{
            constexpr Register::FieldValue<decltype(adc1)::Type,Adc1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(adc1)::Type,Adc1Val::enable> enable{};
        }
        ///Enables clock for DAC.
        enum class DacVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,DacVal> dac{}; 
        namespace DacValC{
            constexpr Register::FieldValue<decltype(dac)::Type,DacVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dac)::Type,DacVal::enable> enable{};
        }
        ///Enables clock to analog comparator block. This is the clock to the register interface for all 4 comparators.
        enum class CmpVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,CmpVal> cmp{}; 
        namespace CmpValC{
            constexpr Register::FieldValue<decltype(cmp)::Type,CmpVal::disable> disable{};
            constexpr Register::FieldValue<decltype(cmp)::Type,CmpVal::enable> enable{};
        }
    }
    namespace Nonesysahbclkctrl1{    ///<System clock control 1
        using Addr = Register::Address<0x400740c8,0xff519900,0,unsigned>;
        ///Enables clock for multi-rate timer.
        enum class MrtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MrtVal> mrt{}; 
        namespace MrtValC{
            constexpr Register::FieldValue<decltype(mrt)::Type,MrtVal::disable> disable{};
            constexpr Register::FieldValue<decltype(mrt)::Type,MrtVal::enable> enable{};
        }
        ///Enables clock for repetitive interrupt timer.
        enum class RitVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RitVal> rit{}; 
        namespace RitValC{
            constexpr Register::FieldValue<decltype(rit)::Type,RitVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rit)::Type,RitVal::enable> enable{};
        }
        ///Enables clock for SCT0.
        enum class Sct0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Sct0Val> sct0{}; 
        namespace Sct0ValC{
            constexpr Register::FieldValue<decltype(sct0)::Type,Sct0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(sct0)::Type,Sct0Val::enable> enable{};
        }
        ///Enables clock for SCT1.
        enum class Sct1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Sct1Val> sct1{}; 
        namespace Sct1ValC{
            constexpr Register::FieldValue<decltype(sct1)::Type,Sct1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(sct1)::Type,Sct1Val::enable> enable{};
        }
        ///Enables clock for SCT2.
        enum class Sct2Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Sct2Val> sct2{}; 
        namespace Sct2ValC{
            constexpr Register::FieldValue<decltype(sct2)::Type,Sct2Val::disable> disable{};
            constexpr Register::FieldValue<decltype(sct2)::Type,Sct2Val::enable> enable{};
        }
        ///Enables clock for SCT3.
        enum class Sct3Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Sct3Val> sct3{}; 
        namespace Sct3ValC{
            constexpr Register::FieldValue<decltype(sct3)::Type,Sct3Val::disable> disable{};
            constexpr Register::FieldValue<decltype(sct3)::Type,Sct3Val::enable> enable{};
        }
        ///Enables clock for SCTIPU.
        enum class SctipuVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SctipuVal> sctipu{}; 
        namespace SctipuValC{
            constexpr Register::FieldValue<decltype(sctipu)::Type,SctipuVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sctipu)::Type,SctipuVal::enable> enable{};
        }
        ///Enables clock for CCAN.
        enum class CcanVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CcanVal> ccan{}; 
        namespace CcanValC{
            constexpr Register::FieldValue<decltype(ccan)::Type,CcanVal::disable> disable{};
            constexpr Register::FieldValue<decltype(ccan)::Type,CcanVal::enable> enable{};
        }
        ///Enables clock for SPI0.
        enum class Spi0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Spi0Val> spi0{}; 
        namespace Spi0ValC{
            constexpr Register::FieldValue<decltype(spi0)::Type,Spi0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(spi0)::Type,Spi0Val::enable> enable{};
        }
        ///Enables clock for SPI1.
        enum class Spi1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Spi1Val> spi1{}; 
        namespace Spi1ValC{
            constexpr Register::FieldValue<decltype(spi1)::Type,Spi1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(spi1)::Type,Spi1Val::enable> enable{};
        }
        ///Enables clock for I2C0.
        enum class I2c0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,I2c0Val> i2c0{}; 
        namespace I2c0ValC{
            constexpr Register::FieldValue<decltype(i2c0)::Type,I2c0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(i2c0)::Type,I2c0Val::enable> enable{};
        }
        ///Enables clock for I2C1.
        enum class I2c1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,I2c1Val> i2c1{}; 
        namespace I2c1ValC{
            constexpr Register::FieldValue<decltype(i2c1)::Type,I2c1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(i2c1)::Type,I2c1Val::enable> enable{};
        }
        ///Enables clock for USART0.
        enum class Uart0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Uart0Val> uart0{}; 
        namespace Uart0ValC{
            constexpr Register::FieldValue<decltype(uart0)::Type,Uart0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(uart0)::Type,Uart0Val::enable> enable{};
        }
        ///Enables clock for USART1.
        enum class Uart1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Uart1Val> uart1{}; 
        namespace Uart1ValC{
            constexpr Register::FieldValue<decltype(uart1)::Type,Uart1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(uart1)::Type,Uart1Val::enable> enable{};
        }
        ///Enables clock for USART2.
        enum class Uart2Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Uart2Val> uart2{}; 
        namespace Uart2ValC{
            constexpr Register::FieldValue<decltype(uart2)::Type,Uart2Val::disable> disable{};
            constexpr Register::FieldValue<decltype(uart2)::Type,Uart2Val::enable> enable{};
        }
        ///Enables clock for QEI.
        enum class QeiVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,QeiVal> qei{}; 
        namespace QeiValC{
            constexpr Register::FieldValue<decltype(qei)::Type,QeiVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qei)::Type,QeiVal::enable> enable{};
        }
        ///Enables clock for USB register interface.
        enum class UsbVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,UsbVal> usb{}; 
        namespace UsbValC{
            constexpr Register::FieldValue<decltype(usb)::Type,UsbVal::disable> disable{};
            constexpr Register::FieldValue<decltype(usb)::Type,UsbVal::enable> enable{};
        }
    }
    namespace Nonesystickclkdiv{    ///<SYSTICK clock divider
        using Addr = Register::Address<0x400740cc,0xffffff00,0,unsigned>;
        ///SYSTICK clock divider values.  0: Disable SYSTICK timer clock.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneuartclkdiv{    ///<USART clock divider. Clock divider for the USART fractional baud rate generator.
        using Addr = Register::Address<0x400740d0,0xffffff00,0,unsigned>;
        ///USART fractional baud rate generator clock divider values.  0: Clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv{    ///<Peripheral clock to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x400740d4,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonetraceclkdiv{    ///<ARM trace clock divider
        using Addr = Register::Address<0x400740d8,0xffffff00,0,unsigned>;
        ///ARM trace clock divider values.  0: Disable TRACE_CLK.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneusbclkdiv{    ///<USB clock divider
        using Addr = Register::Address<0x400740ec,0xffffff00,0,unsigned>;
        ///USB clock divider values  0: Disable USB clock.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneadcasyncclkdiv{    ///<Asynchronous ADC clock divider
        using Addr = Register::Address<0x400740f0,0xffffff00,0,unsigned>;
        ///USB clock divider values  0: Disable USB clock.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneclkoutdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x400740f8,0xffffff00,0,unsigned>;
        ///CLKOUT clock divider values 0: Disable CLKOUT clock divider.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonefrgctrl{    ///<USART fractional baud rate generator control
        using Addr = Register::Address<0x40074128,0xffff0000,0,unsigned>;
        ///Denominator of the fractional divider. DIV is equal to the programmed value +1. Always set to 0xFF to use with the fractional baud rate generator.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Numerator of the fractional divider. MULT is equal to the programmed value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> mult{}; 
    }
    namespace Noneusbclkctrl{    ///<USB clock control
        using Addr = Register::Address<0x4007412c,0xfffffffc,0,unsigned>;
        ///USB need_clock signal control
        enum class ApclkVal {
            underHardwareContr=0x00000000,     ///<Under hardware control.
            forcedHigh=0x00000001,     ///<Forced HIGH.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ApclkVal> apClk{}; 
        namespace ApclkValC{
            constexpr Register::FieldValue<decltype(apClk)::Type,ApclkVal::underHardwareContr> underHardwareContr{};
            constexpr Register::FieldValue<decltype(apClk)::Type,ApclkVal::forcedHigh> forcedHigh{};
        }
        ///USB need_clock polarity for triggering the USB wake-up interrupt
        enum class PolclkVal {
            fallingEdgeOfThe=0x00000000,     ///<Falling edge of the USB need_clock triggers the USB wake-up (default).
            risingEdgeOfTheU=0x00000001,     ///<Rising edge of the USB need_clock triggers the USB wake-up.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PolclkVal> polClk{}; 
        namespace PolclkValC{
            constexpr Register::FieldValue<decltype(polClk)::Type,PolclkVal::fallingEdgeOfThe> fallingEdgeOfThe{};
            constexpr Register::FieldValue<decltype(polClk)::Type,PolclkVal::risingEdgeOfTheU> risingEdgeOfTheU{};
        }
    }
    namespace Noneusbclkst{    ///<USB clock status
        using Addr = Register::Address<0x40074130,0xfffffffe,0,unsigned>;
        ///USB need_clock signal status
        enum class NeedclkstVal {
            low=0x00000000,     ///<LOW
            high=0x00000001,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,NeedclkstVal> needClkst{}; 
        namespace NeedclkstValC{
            constexpr Register::FieldValue<decltype(needClkst)::Type,NeedclkstVal::low> low{};
            constexpr Register::FieldValue<decltype(needClkst)::Type,NeedclkstVal::high> high{};
        }
    }
    namespace Nonebodctrl{    ///<Brown-Out Detect
        using Addr = Register::Address<0x40074180,0xffffffe0,0,unsigned>;
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
        ///BOD interrupt level
        enum class BodintvalVal {
            level0TheInterru=0x00000000,     ///<Level 0: The interrupt assertion threshold voltage is ; the interrupt de-assertion threshold voltage is
            level1TheInterru=0x00000001,     ///<Level 1: The interrupt assertion threshold voltage is  ; the interrupt de-assertion threshold voltage is .
            level2TheInterru=0x00000002,     ///<Level 2: The interrupt assertion threshold voltage is ; the interrupt de-assertion threshold voltage is .
            level3TheInterru=0x00000003,     ///<Level 3: The interrupt assertion threshold voltage is ; the interrupt de-assertion threshold voltage is .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,BodintvalVal> bodintval{}; 
        namespace BodintvalValC{
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level0TheInterru> level0TheInterru{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level1TheInterru> level1TheInterru{};
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
    }
    namespace Nonesysoscctrl{    ///<System oscillator control
        using Addr = Register::Address<0x40074188,0xfffffffc,0,unsigned>;
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
    namespace Nonertcoscctrl{    ///<RTC oscillator control
        using Addr = Register::Address<0x40074190,0xfffffffe,0,unsigned>;
        ///RTC 32 kHz clock enable.
        enum class EnVal {
            disabledRtcClock=0x00000000,     ///<Disabled. RTC clock off.
            enabledRtcClockO=0x00000001,     ///<Enabled. RTC clock on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnVal> en{}; 
        namespace EnValC{
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::disabledRtcClock> disabledRtcClock{};
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::enabledRtcClockO> enabledRtcClockO{};
        }
    }
    namespace Nonesyspllctrl{    ///<System PLL control
        using Addr = Register::Address<0x40074198,0xffffff00,0,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1. 00000: Division ratio M = 1 to 111111: Division ratio M = 64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> msel{}; 
        ///Post divider ratio P. The division ratio is 2 x P.
        enum class PselVal {
            pEq1=0x00000000,     ///<P = 1
            pEq2=0x00000001,     ///<P = 2
            pEq4=0x00000002,     ///<P = 4
            pEq8=0x00000003,     ///<P = 8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq1> pEq1{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq2> pEq2{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq4> pEq4{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq8> pEq8{};
        }
    }
    namespace Nonesyspllstat{    ///<System PLL status
        using Addr = Register::Address<0x4007419c,0xfffffffe,0,unsigned>;
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
    namespace Noneusbpllctrl{    ///<USB PLL control
        using Addr = Register::Address<0x400741a0,0xffffff00,0,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1.  00000: Division ratio M = 1 to 111111: Division ratio M = 64.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> msel{}; 
        ///Post divider ratio P. The division ratio is 2 x P.
        enum class PselVal {
            pEq1=0x00000000,     ///<P = 1
            pEq2=0x00000001,     ///<P = 2
            pEq4=0x00000002,     ///<P = 4
            pEq8=0x00000003,     ///<P = 8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq1> pEq1{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq2> pEq2{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq4> pEq4{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq8> pEq8{};
        }
    }
    namespace Noneusbpllstat{    ///<USB PLL status
        using Addr = Register::Address<0x400741a4,0xfffffffe,0,unsigned>;
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
    namespace Nonesctpllctrl{    ///<SCT PLL control
        using Addr = Register::Address<0x400741a8,0xffffff00,0,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1.  00000: Division ratio M = 1 to 111111: Division ratio M = 64.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> msel{}; 
        ///Post divider ratio P. The division ratio is 2 x P.
        enum class PselVal {
            pEq1=0x00000000,     ///<P = 1
            pEq2=0x00000001,     ///<P = 2
            pEq4=0x00000002,     ///<P = 4
            pEq8=0x00000003,     ///<P = 8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq1> pEq1{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq2> pEq2{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq4> pEq4{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq8> pEq8{};
        }
    }
    namespace Nonesctpllstat{    ///<SCT PLL status
        using Addr = Register::Address<0x400741ac,0xfffffffe,0,unsigned>;
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
    namespace Nonepdawakecfg{    ///<Power-down states for wake-up from deep-sleep
        using Addr = Register::Address<0x40074204,0xfe000087,0,unsigned>;
        ///IRC oscillator output wake-up configuration
        enum class IrcoutpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IrcoutpdVal> ircoutPd{}; 
        namespace IrcoutpdValC{
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::poweredDown> poweredDown{};
        }
        ///IRC oscillator wake-up configuration
        enum class IrcVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IrcVal> irc{}; 
        namespace IrcValC{
            constexpr Register::FieldValue<decltype(irc)::Type,IrcVal::powered> powered{};
            constexpr Register::FieldValue<decltype(irc)::Type,IrcVal::poweredDown> poweredDown{};
        }
        ///Flash memory wake-up configuration
        enum class FlashVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,FlashVal> flash{}; 
        namespace FlashValC{
            constexpr Register::FieldValue<decltype(flash)::Type,FlashVal::powered> powered{};
            constexpr Register::FieldValue<decltype(flash)::Type,FlashVal::poweredDown> poweredDown{};
        }
        ///EEPROM wake-up configuration
        enum class EepromVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EepromVal> eeprom{}; 
        namespace EepromValC{
            constexpr Register::FieldValue<decltype(eeprom)::Type,EepromVal::powered> powered{};
            constexpr Register::FieldValue<decltype(eeprom)::Type,EepromVal::poweredDown> poweredDown{};
        }
        ///BOD wake-up configuration
        enum class BodpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::poweredDown> poweredDown{};
        }
        ///USB PHY wake-up configuration
        enum class UsbphypdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,UsbphypdVal> usbphyPd{}; 
        namespace UsbphypdValC{
            constexpr Register::FieldValue<decltype(usbphyPd)::Type,UsbphypdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(usbphyPd)::Type,UsbphypdVal::poweredDown> poweredDown{};
        }
        ///ADC0 wake-up configuration
        enum class Adc0pdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Adc0pdVal> adc0Pd{}; 
        namespace Adc0pdValC{
            constexpr Register::FieldValue<decltype(adc0Pd)::Type,Adc0pdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(adc0Pd)::Type,Adc0pdVal::poweredDown> poweredDown{};
        }
        ///ADC1 wake-up configuration
        enum class Adc1pdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Adc1pdVal> adc1Pd{}; 
        namespace Adc1pdValC{
            constexpr Register::FieldValue<decltype(adc1Pd)::Type,Adc1pdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(adc1Pd)::Type,Adc1pdVal::poweredDown> poweredDown{};
        }
        ///DAC wake-up configuration
        enum class DacpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DacpdVal> dacPd{}; 
        namespace DacpdValC{
            constexpr Register::FieldValue<decltype(dacPd)::Type,DacpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(dacPd)::Type,DacpdVal::poweredDown> poweredDown{};
        }
        ///Analog comparator 0 wake-up configuration
        enum class Acmp0pdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Acmp0pdVal> acmp0Pd{}; 
        namespace Acmp0pdValC{
            constexpr Register::FieldValue<decltype(acmp0Pd)::Type,Acmp0pdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(acmp0Pd)::Type,Acmp0pdVal::poweredDown> poweredDown{};
        }
        ///Analog comparator 1 wake-up configuration
        enum class Acmp1pdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Acmp1pdVal> acmp1Pd{}; 
        namespace Acmp1pdValC{
            constexpr Register::FieldValue<decltype(acmp1Pd)::Type,Acmp1pdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(acmp1Pd)::Type,Acmp1pdVal::poweredDown> poweredDown{};
        }
        ///Analog comparator 2 wake-up configuration
        enum class Acmp2pdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Acmp2pdVal> acmp2Pd{}; 
        namespace Acmp2pdValC{
            constexpr Register::FieldValue<decltype(acmp2Pd)::Type,Acmp2pdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(acmp2Pd)::Type,Acmp2pdVal::poweredDown> poweredDown{};
        }
        ///Analog comparator 3 wake-up configuration
        enum class Acmp3pdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Acmp3pdVal> acmp3Pd{}; 
        namespace Acmp3pdValC{
            constexpr Register::FieldValue<decltype(acmp3Pd)::Type,Acmp3pdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(acmp3Pd)::Type,Acmp3pdVal::poweredDown> poweredDown{};
        }
        ///Internal voltage reference wake-up configuration
        enum class IrefpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,IrefpdVal> irefPd{}; 
        namespace IrefpdValC{
            constexpr Register::FieldValue<decltype(irefPd)::Type,IrefpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(irefPd)::Type,IrefpdVal::poweredDown> poweredDown{};
        }
        ///Temperature sensor wake-up configuration
        enum class TspdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TspdVal> tsPd{}; 
        namespace TspdValC{
            constexpr Register::FieldValue<decltype(tsPd)::Type,TspdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(tsPd)::Type,TspdVal::poweredDown> poweredDown{};
        }
        ///VDDA divider what is this for? wake-up configuration
        enum class VddadivpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,VddadivpdVal> vddadivPd{}; 
        namespace VddadivpdValC{
            constexpr Register::FieldValue<decltype(vddadivPd)::Type,VddadivpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(vddadivPd)::Type,VddadivpdVal::poweredDown> poweredDown{};
        }
        ///Watchdog oscillator wake-up configuration.
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::poweredDown> poweredDown{};
        }
        ///System oscillator wake-up configuration
        enum class SysoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,SysoscpdVal> sysoscPd{}; 
        namespace SysoscpdValC{
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::poweredDown> poweredDown{};
        }
        ///System PLL wake-up configuration
        enum class SyspllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,SyspllpdVal> syspllPd{}; 
        namespace SyspllpdValC{
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::poweredDown> poweredDown{};
        }
        ///USB PLL wake-up configuration
        enum class UsbpllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,UsbpllpdVal> usbpllPd{}; 
        namespace UsbpllpdValC{
            constexpr Register::FieldValue<decltype(usbpllPd)::Type,UsbpllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(usbpllPd)::Type,UsbpllpdVal::poweredDown> poweredDown{};
        }
        ///USB PLL wake-up configuration
        enum class SctpllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,SctpllpdVal> sctpllPd{}; 
        namespace SctpllpdValC{
            constexpr Register::FieldValue<decltype(sctpllPd)::Type,SctpllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(sctpllPd)::Type,SctpllpdVal::poweredDown> poweredDown{};
        }
    }
    namespace Nonepdruncfg{    ///<Power configuration register
        using Addr = Register::Address<0x40074208,0xfe000087,0,unsigned>;
        ///IRC oscillator output
        enum class IrcoutpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IrcoutpdVal> ircoutPd{}; 
        namespace IrcoutpdValC{
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::poweredDown> poweredDown{};
        }
        ///IRC oscillator
        enum class IrcVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IrcVal> irc{}; 
        namespace IrcValC{
            constexpr Register::FieldValue<decltype(irc)::Type,IrcVal::powered> powered{};
            constexpr Register::FieldValue<decltype(irc)::Type,IrcVal::poweredDown> poweredDown{};
        }
        ///Flash memory
        enum class FlashVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,FlashVal> flash{}; 
        namespace FlashValC{
            constexpr Register::FieldValue<decltype(flash)::Type,FlashVal::powered> powered{};
            constexpr Register::FieldValue<decltype(flash)::Type,FlashVal::poweredDown> poweredDown{};
        }
        ///EEPROM
        enum class EepromVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EepromVal> eeprom{}; 
        namespace EepromValC{
            constexpr Register::FieldValue<decltype(eeprom)::Type,EepromVal::powered> powered{};
            constexpr Register::FieldValue<decltype(eeprom)::Type,EepromVal::poweredDown> poweredDown{};
        }
        ///BOD power-down
        enum class BodpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::poweredDown> poweredDown{};
        }
        ///USB PHY power-down
        enum class UsbphypdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,UsbphypdVal> usbphyPd{}; 
        namespace UsbphypdValC{
            constexpr Register::FieldValue<decltype(usbphyPd)::Type,UsbphypdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(usbphyPd)::Type,UsbphypdVal::poweredDown> poweredDown{};
        }
        ///ADC0 power-down
        enum class Adc0pdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Adc0pdVal> adc0Pd{}; 
        namespace Adc0pdValC{
            constexpr Register::FieldValue<decltype(adc0Pd)::Type,Adc0pdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(adc0Pd)::Type,Adc0pdVal::poweredDown> poweredDown{};
        }
        ///ADC1 power-down
        enum class Adc1pdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Adc1pdVal> adc1Pd{}; 
        namespace Adc1pdValC{
            constexpr Register::FieldValue<decltype(adc1Pd)::Type,Adc1pdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(adc1Pd)::Type,Adc1pdVal::poweredDown> poweredDown{};
        }
        ///DAC power-down
        enum class DacpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DacpdVal> dacPd{}; 
        namespace DacpdValC{
            constexpr Register::FieldValue<decltype(dacPd)::Type,DacpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(dacPd)::Type,DacpdVal::poweredDown> poweredDown{};
        }
        ///Analog comparator 0 power-down
        enum class Acmp0pdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Acmp0pdVal> acmp0Pd{}; 
        namespace Acmp0pdValC{
            constexpr Register::FieldValue<decltype(acmp0Pd)::Type,Acmp0pdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(acmp0Pd)::Type,Acmp0pdVal::poweredDown> poweredDown{};
        }
        ///Analog comparator 1 power-down
        enum class Acmp1pdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Acmp1pdVal> acmp1Pd{}; 
        namespace Acmp1pdValC{
            constexpr Register::FieldValue<decltype(acmp1Pd)::Type,Acmp1pdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(acmp1Pd)::Type,Acmp1pdVal::poweredDown> poweredDown{};
        }
        ///Analog comparator 2 power-down
        enum class Acmp2pdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Acmp2pdVal> acmp2Pd{}; 
        namespace Acmp2pdValC{
            constexpr Register::FieldValue<decltype(acmp2Pd)::Type,Acmp2pdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(acmp2Pd)::Type,Acmp2pdVal::poweredDown> poweredDown{};
        }
        ///Analog comparator 3 power-down
        enum class Acmp3pdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Acmp3pdVal> acmp3Pd{}; 
        namespace Acmp3pdValC{
            constexpr Register::FieldValue<decltype(acmp3Pd)::Type,Acmp3pdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(acmp3Pd)::Type,Acmp3pdVal::poweredDown> poweredDown{};
        }
        ///Internal voltage reference power-down
        enum class IrefpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,IrefpdVal> irefPd{}; 
        namespace IrefpdValC{
            constexpr Register::FieldValue<decltype(irefPd)::Type,IrefpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(irefPd)::Type,IrefpdVal::poweredDown> poweredDown{};
        }
        ///Temperature sensor power-down
        enum class TspdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TspdVal> tsPd{}; 
        namespace TspdValC{
            constexpr Register::FieldValue<decltype(tsPd)::Type,TspdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(tsPd)::Type,TspdVal::poweredDown> poweredDown{};
        }
        ///VDDA divider what is this for?
        enum class VddadivpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,VddadivpdVal> vddadivPd{}; 
        namespace VddadivpdValC{
            constexpr Register::FieldValue<decltype(vddadivPd)::Type,VddadivpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(vddadivPd)::Type,VddadivpdVal::poweredDown> poweredDown{};
        }
        ///Watchdog oscillator power-down .
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::poweredDown> poweredDown{};
        }
        ///System oscillator power-down
        enum class SysoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,SysoscpdVal> sysoscPd{}; 
        namespace SysoscpdValC{
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::poweredDown> poweredDown{};
        }
        ///System PLL power-down
        enum class SyspllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,SyspllpdVal> syspllPd{}; 
        namespace SyspllpdValC{
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::poweredDown> poweredDown{};
        }
        ///USB PLL power-down
        enum class UsbpllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,UsbpllpdVal> usbpllPd{}; 
        namespace UsbpllpdValC{
            constexpr Register::FieldValue<decltype(usbpllPd)::Type,UsbpllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(usbpllPd)::Type,UsbpllpdVal::poweredDown> poweredDown{};
        }
        ///USB PLL power-down
        enum class SctpllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,SctpllpdVal> sctpllPd{}; 
        namespace SctpllpdValC{
            constexpr Register::FieldValue<decltype(sctpllPd)::Type,SctpllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(sctpllPd)::Type,SctpllpdVal::poweredDown> poweredDown{};
        }
    }
    namespace Nonestarterp0{    ///<Start logic 0 wake-up enable register
        using Addr = Register::Address<0x40074218,0xb81f801c,0,unsigned>;
        ///WWDT interrupt wake-up.
        enum class WwdtVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WwdtVal> wwdt{}; 
        namespace WwdtValC{
            constexpr Register::FieldValue<decltype(wwdt)::Type,WwdtVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(wwdt)::Type,WwdtVal::enabled> enabled{};
        }
        ///BOD interrupt wake-up.
        enum class BodVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BodVal> bod{}; 
        namespace BodValC{
            constexpr Register::FieldValue<decltype(bod)::Type,BodVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bod)::Type,BodVal::enabled> enabled{};
        }
        ///Group interrupt 0 wake-up.
        enum class Gint0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Gint0Val> gint0{}; 
        namespace Gint0ValC{
            constexpr Register::FieldValue<decltype(gint0)::Type,Gint0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(gint0)::Type,Gint0Val::enabled> enabled{};
        }
        ///Group interrupt 1 wake-up.
        enum class Gint1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Gint1Val> gint1{}; 
        namespace Gint1ValC{
            constexpr Register::FieldValue<decltype(gint1)::Type,Gint1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(gint1)::Type,Gint1Val::enabled> enabled{};
        }
        ///GPIO pin interrupt 0 wake-up
        enum class Pint0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pint0Val> pint0{}; 
        namespace Pint0ValC{
            constexpr Register::FieldValue<decltype(pint0)::Type,Pint0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint0)::Type,Pint0Val::enabled> enabled{};
        }
        ///GPIO pin interrupt 1 wake-up
        enum class Pint1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pint1Val> pint1{}; 
        namespace Pint1ValC{
            constexpr Register::FieldValue<decltype(pint1)::Type,Pint1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint1)::Type,Pint1Val::enabled> enabled{};
        }
        ///GPIO pin interrupt 2 wake-up
        enum class Pint2Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pint2Val> pint2{}; 
        namespace Pint2ValC{
            constexpr Register::FieldValue<decltype(pint2)::Type,Pint2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint2)::Type,Pint2Val::enabled> enabled{};
        }
        ///GPIO pin interrupt 3 wake-up
        enum class Pint3Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pint3Val> pint3{}; 
        namespace Pint3ValC{
            constexpr Register::FieldValue<decltype(pint3)::Type,Pint3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint3)::Type,Pint3Val::enabled> enabled{};
        }
        ///GPIO pin interrupt 4 wake-up
        enum class Pint4Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pint4Val> pint4{}; 
        namespace Pint4ValC{
            constexpr Register::FieldValue<decltype(pint4)::Type,Pint4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint4)::Type,Pint4Val::enabled> enabled{};
        }
        ///GPIO pin interrupt 5 wake-up
        enum class Pint5Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pint5Val> pint5{}; 
        namespace Pint5ValC{
            constexpr Register::FieldValue<decltype(pint5)::Type,Pint5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint5)::Type,Pint5Val::enabled> enabled{};
        }
        ///GPIO pin interrupt 6 wake-up
        enum class Pint6Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pint6Val> pint6{}; 
        namespace Pint6ValC{
            constexpr Register::FieldValue<decltype(pint6)::Type,Pint6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint6)::Type,Pint6Val::enabled> enabled{};
        }
        ///GPIO pin interrupt 7 wake-up
        enum class Pint7Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pint7Val> pint7{}; 
        namespace Pint7ValC{
            constexpr Register::FieldValue<decltype(pint7)::Type,Pint7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint7)::Type,Pint7Val::enabled> enabled{};
        }
        ///USART0 interrupt wake-up. Configure USART in synchronous slave mode or in 32 kHz mode..
        enum class Usart0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Usart0Val> usart0{}; 
        namespace Usart0ValC{
            constexpr Register::FieldValue<decltype(usart0)::Type,Usart0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart0)::Type,Usart0Val::enabled> enabled{};
        }
        ///USART1 interrupt wake-up. Configure USART in synchronous slave mode or in 32 kHz mode...
        enum class Usart1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Usart1Val> usart1{}; 
        namespace Usart1ValC{
            constexpr Register::FieldValue<decltype(usart1)::Type,Usart1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart1)::Type,Usart1Val::enabled> enabled{};
        }
        ///USART2 interrupt wake-up. Configure USART in synchronous slave mode or in 32 kHz mode...
        enum class Usart2Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Usart2Val> usart2{}; 
        namespace Usart2ValC{
            constexpr Register::FieldValue<decltype(usart2)::Type,Usart2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart2)::Type,Usart2Val::enabled> enabled{};
        }
        ///I2C interrupt wake-up.
        enum class I2cVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,I2cVal> i2c{}; 
        namespace I2cValC{
            constexpr Register::FieldValue<decltype(i2c)::Type,I2cVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(i2c)::Type,I2cVal::enabled> enabled{};
        }
        ///SPI0 interrupt wake-up
        enum class Spi0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Spi0Val> spi0{}; 
        namespace Spi0ValC{
            constexpr Register::FieldValue<decltype(spi0)::Type,Spi0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi0)::Type,Spi0Val::enabled> enabled{};
        }
        ///SPI1 interrupt wake-up
        enum class Spi1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Spi1Val> spi1{}; 
        namespace Spi1ValC{
            constexpr Register::FieldValue<decltype(spi1)::Type,Spi1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi1)::Type,Spi1Val::enabled> enabled{};
        }
        ///USB need_clock signal wake-up
        enum class UsbwakeupVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,UsbwakeupVal> usbWakeup{}; 
        namespace UsbwakeupValC{
            constexpr Register::FieldValue<decltype(usbWakeup)::Type,UsbwakeupVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usbWakeup)::Type,UsbwakeupVal::enabled> enabled{};
        }
    }
    namespace Nonestarterp1{    ///<Start logic 1 wake-up enable register
        using Addr = Register::Address<0x4007421c,0xffff90ff,0,unsigned>;
        ///Analog comparator 0 interrupt wake-up
        enum class Acmp0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Acmp0Val> acmp0{}; 
        namespace Acmp0ValC{
            constexpr Register::FieldValue<decltype(acmp0)::Type,Acmp0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(acmp0)::Type,Acmp0Val::enabled> enabled{};
        }
        ///Analog comparator 1 interrupt wake-up
        enum class Acmp1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Acmp1Val> acmp1{}; 
        namespace Acmp1ValC{
            constexpr Register::FieldValue<decltype(acmp1)::Type,Acmp1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(acmp1)::Type,Acmp1Val::enabled> enabled{};
        }
        ///Analog comparator 2 interrupt wake-up
        enum class Acmp2Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Acmp2Val> acmp2{}; 
        namespace Acmp2ValC{
            constexpr Register::FieldValue<decltype(acmp2)::Type,Acmp2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(acmp2)::Type,Acmp2Val::enabled> enabled{};
        }
        ///Analog comparator 3 interrupt wake-up
        enum class Acmp3Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Acmp3Val> acmp3{}; 
        namespace Acmp3ValC{
            constexpr Register::FieldValue<decltype(acmp3)::Type,Acmp3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(acmp3)::Type,Acmp3Val::enabled> enabled{};
        }
        ///RTC alarm interrupt wake-up
        enum class RtcalarmVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,RtcalarmVal> rtcalarm{}; 
        namespace RtcalarmValC{
            constexpr Register::FieldValue<decltype(rtcalarm)::Type,RtcalarmVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtcalarm)::Type,RtcalarmVal::enabled> enabled{};
        }
        ///RTC wake-up interrupt wake-up
        enum class RtcwakeVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,RtcwakeVal> rtcwake{}; 
        namespace RtcwakeValC{
            constexpr Register::FieldValue<decltype(rtcwake)::Type,RtcwakeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtcwake)::Type,RtcwakeVal::enabled> enabled{};
        }
    }
}
