#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// System configuration (SYSCON)
    namespace Nonesysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40074000,0xfffffffc,0,unsigned>;
        ///tbd
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> map{}; 
    }
    namespace Nonesystckcal{    ///<System tick counter calibration
        using Addr = Register::Address<0x40074014,0xfc000000,0,unsigned>;
        ///System tick timer calibration value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> cal{}; 
    }
    namespace Nonenmisrc{    ///<NMI Source Control
        using Addr = Register::Address<0x4007401c,0x7fffffe0,0,unsigned>;
        ///The IRQ number of the interrupt that acts as the Non-Maskable Interrupt (NMI) if bit 31 is 1. See Table 3 for the list of interrupt sources and their IRQ numbers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> irqno{}; 
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt (NMI) source selected by bits 4:0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmien{}; 
    }
    namespace Nonesysrststat{    ///<System reset status register
        using Addr = Register::Address<0x40074040,0xffffffe0,0,unsigned>;
        ///POR reset status
        enum class porVal {
            noPorDetected=0x00000000,     ///<No POR detected
            porDetectedWritin=0x00000001,     ///<POR detected. Writing a one clears this reset.
        };
        namespace porValC{
            constexpr MPL::Value<porVal,porVal::noPorDetected> noPorDetected{};
            constexpr MPL::Value<porVal,porVal::porDetectedWritin> porDetectedWritin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,porVal> por{}; 
        ///Status of the external RESET pin. External reset status.
        enum class extrstVal {
            noResetEventDetec=0x00000000,     ///<No reset event detected.
            resetDetectedWrit=0x00000001,     ///<Reset detected. Writing a one clears this reset.
        };
        namespace extrstValC{
            constexpr MPL::Value<extrstVal,extrstVal::noResetEventDetec> noResetEventDetec{};
            constexpr MPL::Value<extrstVal,extrstVal::resetDetectedWrit> resetDetectedWrit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,extrstVal> extrst{}; 
        ///Status of the Watchdog reset
        enum class wdtVal {
            noWdtResetDetecte=0x00000000,     ///<No WDT reset detected
            wdtResetDetected=0x00000001,     ///<WDT reset detected. Writing a one clears this reset.
        };
        namespace wdtValC{
            constexpr MPL::Value<wdtVal,wdtVal::noWdtResetDetecte> noWdtResetDetecte{};
            constexpr MPL::Value<wdtVal,wdtVal::wdtResetDetected> wdtResetDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wdtVal> wdt{}; 
        ///Status of the Brown-out detect reset
        enum class bodVal {
            noBodResetDetecte=0x00000000,     ///<No BOD reset detected
            bodResetDetected=0x00000001,     ///<BOD reset detected. Writing a one clears this reset.
        };
        namespace bodValC{
            constexpr MPL::Value<bodVal,bodVal::noBodResetDetecte> noBodResetDetecte{};
            constexpr MPL::Value<bodVal,bodVal::bodResetDetected> bodResetDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bodVal> bod{}; 
        ///Status of the software system reset
        enum class sysrstVal {
            noSystemResetDete=0x00000000,     ///<No System reset detected
            systemResetDetecte=0x00000001,     ///<System reset detected. Writing a one clears this reset.
        };
        namespace sysrstValC{
            constexpr MPL::Value<sysrstVal,sysrstVal::noSystemResetDete> noSystemResetDete{};
            constexpr MPL::Value<sysrstVal,sysrstVal::systemResetDetecte> systemResetDetecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,sysrstVal> sysrst{}; 
    }
    namespace Nonepresetctrl0{    ///<Peripheral reset control 0
        using Addr = Register::Address<0x40074044,0x87c2147f,0,unsigned>;
        ///Flash reset control
        enum class flashRstVal {
            clearFlashReset=0x00000000,     ///<Clear flash reset.
            assertFlashReset=0x00000001,     ///<Assert flash reset.
        };
        namespace flashRstValC{
            constexpr MPL::Value<flashRstVal,flashRstVal::clearFlashReset> clearFlashReset{};
            constexpr MPL::Value<flashRstVal,flashRstVal::assertFlashReset> assertFlashReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,flashRstVal> flashRst{}; 
        ///FMC reset control FMC? Is this the flash controller?
        enum class fmcRstVal {
            clearFmcReset=0x00000000,     ///<Clear FMC reset.
            assertFmcReset=0x00000001,     ///<Assert FMC reset.
        };
        namespace fmcRstValC{
            constexpr MPL::Value<fmcRstVal,fmcRstVal::clearFmcReset> clearFmcReset{};
            constexpr MPL::Value<fmcRstVal,fmcRstVal::assertFmcReset> assertFmcReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fmcRstVal> fmcRst{}; 
        ///EEPROM reset control
        enum class eepromRstVal {
            clearEepromReset=0x00000000,     ///<Clear EEPROM reset.
            assertEepromReset=0x00000001,     ///<Assert EEPROM reset.
        };
        namespace eepromRstValC{
            constexpr MPL::Value<eepromRstVal,eepromRstVal::clearEepromReset> clearEepromReset{};
            constexpr MPL::Value<eepromRstVal,eepromRstVal::assertEepromReset> assertEepromReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,eepromRstVal> eepromRst{}; 
        ///Pin mux reset control
        enum class pmuxRstVal {
            clearPinMuxReset=0x00000000,     ///<Clear pin mux reset.
            assertPinMuxReset=0x00000001,     ///<Assert pin mux reset.
        };
        namespace pmuxRstValC{
            constexpr MPL::Value<pmuxRstVal,pmuxRstVal::clearPinMuxReset> clearPinMuxReset{};
            constexpr MPL::Value<pmuxRstVal,pmuxRstVal::assertPinMuxReset> assertPinMuxReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pmuxRstVal> pmuxRst{}; 
        ///IOCON reset control
        enum class ioconRstVal {
            clearIoconReset=0x00000000,     ///<Clear IOCON reset.
            assertIoconReset=0x00000001,     ///<Assert IOCON reset.
        };
        namespace ioconRstValC{
            constexpr MPL::Value<ioconRstVal,ioconRstVal::clearIoconReset> clearIoconReset{};
            constexpr MPL::Value<ioconRstVal,ioconRstVal::assertIoconReset> assertIoconReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ioconRstVal> ioconRst{}; 
        ///GPIO0 reset control
        enum class gpio0RstVal {
            clearGpio0Reset=0x00000000,     ///<Clear GPIO0 reset.
            assertGpio0Reset=0x00000001,     ///<Assert GPIO0 reset.
        };
        namespace gpio0RstValC{
            constexpr MPL::Value<gpio0RstVal,gpio0RstVal::clearGpio0Reset> clearGpio0Reset{};
            constexpr MPL::Value<gpio0RstVal,gpio0RstVal::assertGpio0Reset> assertGpio0Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,gpio0RstVal> gpio0Rst{}; 
        ///GPIO1 reset control
        enum class gpio1RstVal {
            clearGpio1Reset=0x00000000,     ///<Clear GPIO1 reset.
            assertGpio1Reset=0x00000001,     ///<Assert GPIO1 reset.
        };
        namespace gpio1RstValC{
            constexpr MPL::Value<gpio1RstVal,gpio1RstVal::clearGpio1Reset> clearGpio1Reset{};
            constexpr MPL::Value<gpio1RstVal,gpio1RstVal::assertGpio1Reset> assertGpio1Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,gpio1RstVal> gpio1Rst{}; 
        ///GPIO2 reset control
        enum class gpio2RstVal {
            clearGpio2Reset=0x00000000,     ///<Clear GPIO2 reset.
            assertGpio2Reset=0x00000001,     ///<Assert GPIO2 reset.
        };
        namespace gpio2RstValC{
            constexpr MPL::Value<gpio2RstVal,gpio2RstVal::clearGpio2Reset> clearGpio2Reset{};
            constexpr MPL::Value<gpio2RstVal,gpio2RstVal::assertGpio2Reset> assertGpio2Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,gpio2RstVal> gpio2Rst{}; 
        ///Pin interrupt (PINT) reset control
        enum class pintRstVal {
            clearPintReset=0x00000000,     ///<Clear PINT reset.
            assertPintReset=0x00000001,     ///<Assert PINT reset.
        };
        namespace pintRstValC{
            constexpr MPL::Value<pintRstVal,pintRstVal::clearPintReset> clearPintReset{};
            constexpr MPL::Value<pintRstVal,pintRstVal::assertPintReset> assertPintReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,pintRstVal> pintRst{}; 
        ///Grouped interrupt (GINT) reset control
        enum class gintRstVal {
            clearGintReset=0x00000000,     ///<Clear GINT reset.
            assertGintReset=0x00000001,     ///<Assert GINT reset.
        };
        namespace gintRstValC{
            constexpr MPL::Value<gintRstVal,gintRstVal::clearGintReset> clearGintReset{};
            constexpr MPL::Value<gintRstVal,gintRstVal::assertGintReset> assertGintReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,gintRstVal> gintRst{}; 
        ///DMA reset control
        enum class dmaRstVal {
            clearDmaReset=0x00000000,     ///<Clear DMA reset.
            assertDmaReset=0x00000001,     ///<Assert DMA reset.
        };
        namespace dmaRstValC{
            constexpr MPL::Value<dmaRstVal,dmaRstVal::clearDmaReset> clearDmaReset{};
            constexpr MPL::Value<dmaRstVal,dmaRstVal::assertDmaReset> assertDmaReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dmaRstVal> dmaRst{}; 
        ///CRC generator reset control
        enum class crcRstVal {
            clearCrcReset=0x00000000,     ///<Clear CRC reset.
            assertCrcReset=0x00000001,     ///<Assert CRC reset.
        };
        namespace crcRstValC{
            constexpr MPL::Value<crcRstVal,crcRstVal::clearCrcReset> clearCrcReset{};
            constexpr MPL::Value<crcRstVal,crcRstVal::assertCrcReset> assertCrcReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,crcRstVal> crcRst{}; 
        ///ADC0 reset control
        enum class adc0RstVal {
            clearAdc0Reset=0x00000000,     ///<Clear ADC0 reset.
            assertAdc0Reset=0x00000001,     ///<Assert ADC0 reset.
        };
        namespace adc0RstValC{
            constexpr MPL::Value<adc0RstVal,adc0RstVal::clearAdc0Reset> clearAdc0Reset{};
            constexpr MPL::Value<adc0RstVal,adc0RstVal::assertAdc0Reset> assertAdc0Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,adc0RstVal> adc0Rst{}; 
        ///ADC1 reset control
        enum class adc1RstVal {
            clearAdc1Reset=0x00000000,     ///<Clear ADC1 reset.
            assertAdc1Reset=0x00000001,     ///<Assert ADC1 reset.
        };
        namespace adc1RstValC{
            constexpr MPL::Value<adc1RstVal,adc1RstVal::clearAdc1Reset> clearAdc1Reset{};
            constexpr MPL::Value<adc1RstVal,adc1RstVal::assertAdc1Reset> assertAdc1Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,adc1RstVal> adc1Rst{}; 
        ///DAC reset control
        enum class dacRstVal {
            clearDacReset=0x00000000,     ///<Clear DAC reset.
            assertDacReset=0x00000001,     ///<Assert DAC reset.
        };
        namespace dacRstValC{
            constexpr MPL::Value<dacRstVal,dacRstVal::clearDacReset> clearDacReset{};
            constexpr MPL::Value<dacRstVal,dacRstVal::assertDacReset> assertDacReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,dacRstVal> dacRst{}; 
        ///Analog Comparator (ACMP) reset control for all four 4 comparators in the analog comparator block.
        enum class acmpRstVal {
            clearCmpReset=0x00000000,     ///<Clear CMP reset.
            assertCmpReset=0x00000001,     ///<Assert CMP reset.
        };
        namespace acmpRstValC{
            constexpr MPL::Value<acmpRstVal,acmpRstVal::clearCmpReset> clearCmpReset{};
            constexpr MPL::Value<acmpRstVal,acmpRstVal::assertCmpReset> assertCmpReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,acmpRstVal> acmpRst{}; 
    }
    namespace Nonepresetctrl1{    ///<Peripheral reset control 1
        using Addr = Register::Address<0x40074048,0xff51d900,0,unsigned>;
        ///Multi-rate timer (MRT) reset control
        enum class mrtRstVal {
            clearMrtReset=0x00000000,     ///<Clear MRT reset.
            assertMrtReset=0x00000001,     ///<Assert MRT reset.
        };
        namespace mrtRstValC{
            constexpr MPL::Value<mrtRstVal,mrtRstVal::clearMrtReset> clearMrtReset{};
            constexpr MPL::Value<mrtRstVal,mrtRstVal::assertMrtReset> assertMrtReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,mrtRstVal> mrtRst{}; 
        ///Repetitive interrupt timer (RIT) reset control
        enum class ritRstVal {
            clearRitReset=0x00000000,     ///<Clear RIT reset.
            assertRitReset=0x00000001,     ///<Assert RIT reset.
        };
        namespace ritRstValC{
            constexpr MPL::Value<ritRstVal,ritRstVal::clearRitReset> clearRitReset{};
            constexpr MPL::Value<ritRstVal,ritRstVal::assertRitReset> assertRitReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ritRstVal> ritRst{}; 
        ///State configurable timer 0 (SCT0) reset control
        enum class sct0RstVal {
            clearSct0Reset=0x00000000,     ///<Clear SCT0 reset.
            assertSct0Reset=0x00000001,     ///<Assert SCT0 reset.
        };
        namespace sct0RstValC{
            constexpr MPL::Value<sct0RstVal,sct0RstVal::clearSct0Reset> clearSct0Reset{};
            constexpr MPL::Value<sct0RstVal,sct0RstVal::assertSct0Reset> assertSct0Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sct0RstVal> sct0Rst{}; 
        ///State configurable timer 1 (SCT1) reset control
        enum class sct1RstVal {
            clearSct1Reset=0x00000000,     ///<Clear SCT1 reset.
            assertSct1Reset=0x00000001,     ///<Assert SCT1 reset.
        };
        namespace sct1RstValC{
            constexpr MPL::Value<sct1RstVal,sct1RstVal::clearSct1Reset> clearSct1Reset{};
            constexpr MPL::Value<sct1RstVal,sct1RstVal::assertSct1Reset> assertSct1Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,sct1RstVal> sct1Rst{}; 
        ///State configurable timer 2 (SCT2) reset control
        enum class sct2RstVal {
            clearSct2Reset=0x00000000,     ///<Clear SCT2 reset.
            assertSct2Reset=0x00000001,     ///<Assert SCT2 reset.
        };
        namespace sct2RstValC{
            constexpr MPL::Value<sct2RstVal,sct2RstVal::clearSct2Reset> clearSct2Reset{};
            constexpr MPL::Value<sct2RstVal,sct2RstVal::assertSct2Reset> assertSct2Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,sct2RstVal> sct2Rst{}; 
        ///State configurable timer 3 (SCT3) reset control
        enum class sct3RstVal {
            clearSct3Reset=0x00000000,     ///<Clear SCT3 reset.
            assertSct3Reset=0x00000001,     ///<Assert SCT3 reset.
        };
        namespace sct3RstValC{
            constexpr MPL::Value<sct3RstVal,sct3RstVal::clearSct3Reset> clearSct3Reset{};
            constexpr MPL::Value<sct3RstVal,sct3RstVal::assertSct3Reset> assertSct3Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sct3RstVal> sct3Rst{}; 
        ///State configurable timer IPU (SCTIPU) reset control
        enum class sctipuRstVal {
            clearSctipuReset=0x00000000,     ///<Clear SCTIPU reset.
            assertSctipuReset=0x00000001,     ///<Assert SCTIPU reset.
        };
        namespace sctipuRstValC{
            constexpr MPL::Value<sctipuRstVal,sctipuRstVal::clearSctipuReset> clearSctipuReset{};
            constexpr MPL::Value<sctipuRstVal,sctipuRstVal::assertSctipuReset> assertSctipuReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sctipuRstVal> sctipuRst{}; 
        ///CCAN reset control
        enum class ccanRstVal {
            clearCcanReset=0x00000000,     ///<Clear CCAN reset.
            assertCcanReset=0x00000001,     ///<Assert CCAN reset.
        };
        namespace ccanRstValC{
            constexpr MPL::Value<ccanRstVal,ccanRstVal::clearCcanReset> clearCcanReset{};
            constexpr MPL::Value<ccanRstVal,ccanRstVal::assertCcanReset> assertCcanReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ccanRstVal> ccanRst{}; 
        ///SPI0 reset control
        enum class spi0RstVal {
            clearSpi0Reset=0x00000000,     ///<Clear SPI0 reset.
            assertSpi0Reset=0x00000001,     ///<Assert SPI0 reset.
        };
        namespace spi0RstValC{
            constexpr MPL::Value<spi0RstVal,spi0RstVal::clearSpi0Reset> clearSpi0Reset{};
            constexpr MPL::Value<spi0RstVal,spi0RstVal::assertSpi0Reset> assertSpi0Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,spi0RstVal> spi0Rst{}; 
        ///SPI1 reset control
        enum class spi1RstVal {
            clearSpi1Reset=0x00000000,     ///<Clear SPI1 reset.
            assertSpi1Reset=0x00000001,     ///<Assert SPI1 reset.
        };
        namespace spi1RstValC{
            constexpr MPL::Value<spi1RstVal,spi1RstVal::clearSpi1Reset> clearSpi1Reset{};
            constexpr MPL::Value<spi1RstVal,spi1RstVal::assertSpi1Reset> assertSpi1Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,spi1RstVal> spi1Rst{}; 
        ///I2C0 reset control
        enum class i2c0RstVal {
            clearI2c0Reset=0x00000000,     ///<Clear I2C0 reset.
            assertI2c0Reset=0x00000001,     ///<Assert I2C0 reset.
        };
        namespace i2c0RstValC{
            constexpr MPL::Value<i2c0RstVal,i2c0RstVal::clearI2c0Reset> clearI2c0Reset{};
            constexpr MPL::Value<i2c0RstVal,i2c0RstVal::assertI2c0Reset> assertI2c0Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,i2c0RstVal> i2c0Rst{}; 
        ///UART0 reset control
        enum class uart0RstVal {
            clearUart0Reset=0x00000000,     ///<Clear UART0 reset.
            assertUart0Reset=0x00000001,     ///<Assert UART0 reset.
        };
        namespace uart0RstValC{
            constexpr MPL::Value<uart0RstVal,uart0RstVal::clearUart0Reset> clearUart0Reset{};
            constexpr MPL::Value<uart0RstVal,uart0RstVal::assertUart0Reset> assertUart0Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,uart0RstVal> uart0Rst{}; 
        ///UART1 reset control
        enum class uart1RstVal {
            clearUart1Reset=0x00000000,     ///<Clear UART1 reset.
            assertUart1Reset=0x00000001,     ///<Assert UART1 reset.
        };
        namespace uart1RstValC{
            constexpr MPL::Value<uart1RstVal,uart1RstVal::clearUart1Reset> clearUart1Reset{};
            constexpr MPL::Value<uart1RstVal,uart1RstVal::assertUart1Reset> assertUart1Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,uart1RstVal> uart1Rst{}; 
        ///UART2 reset control
        enum class uart2RstVal {
            clearUart2Reset=0x00000000,     ///<Clear UART2 reset.
            assertUart2Reset=0x00000001,     ///<Assert UART2 reset.
        };
        namespace uart2RstValC{
            constexpr MPL::Value<uart2RstVal,uart2RstVal::clearUart2Reset> clearUart2Reset{};
            constexpr MPL::Value<uart2RstVal,uart2RstVal::assertUart2Reset> assertUart2Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,uart2RstVal> uart2Rst{}; 
        ///QEI0 reset control
        enum class qei0RstVal {
            clearQei0Reset=0x00000000,     ///<Clear QEI0 reset.
            assertQei0Reset=0x00000001,     ///<Assert QEI0 reset.
        };
        namespace qei0RstValC{
            constexpr MPL::Value<qei0RstVal,qei0RstVal::clearQei0Reset> clearQei0Reset{};
            constexpr MPL::Value<qei0RstVal,qei0RstVal::assertQei0Reset> assertQei0Reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,qei0RstVal> qei0Rst{}; 
        ///USB reset control
        enum class usbRstVal {
            clearUsbReset=0x00000000,     ///<Clear USB reset.
            assertUsbReset=0x00000001,     ///<Assert USB reset.
        };
        namespace usbRstValC{
            constexpr MPL::Value<usbRstVal,usbRstVal::clearUsbReset> clearUsbReset{};
            constexpr MPL::Value<usbRstVal,usbRstVal::assertUsbReset> assertUsbReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,usbRstVal> usbRst{}; 
    }
    namespace Nonepioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x4007404c,0x00000000,0,unsigned>;
        ///State of PIO0_31 through PIO0_0 at power-on reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Nonepioporcap1{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40074050,0x00000000,0,unsigned>;
        ///State of PIO1_31 through PIO1_0 at power-on reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Nonepioporcap2{    ///<POR captured PIO status 2
        using Addr = Register::Address<0x40074054,0xfffff000,0,unsigned>;
        ///State of PIO2_11 through PIO2_0 at power-on reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace Nonemainclksela{    ///<Main clock source select A
        using Addr = Register::Address<0x40074080,0xfffffffc,0,unsigned>;
        ///Clock source for main clock source selector A
        enum class selVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            systemOscillator=0x00000001,     ///<System oscillator
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            reserved=0x00000003,     ///<Reserved
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
            constexpr MPL::Value<selVal,selVal::systemOscillator> systemOscillator{};
            constexpr MPL::Value<selVal,selVal::watchdogOscillator> watchdogOscillator{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Nonemainclkselb{    ///<Main clock source select B
        using Addr = Register::Address<0x40074084,0xfffffffc,0,unsigned>;
        ///Clock source for main clock source selector B. Selects the clock source for the main clock.
        enum class selVal {
            mainclkselaClockS=0x00000000,     ///<MAINCLKSELA. Clock source selected in MAINCLKSELA register.
            systemPllInput=0x00000001,     ///<System PLL input.
            systemPllOutput=0x00000002,     ///<System PLL output.
            rtcOscillator32Kh=0x00000003,     ///<RTC oscillator 32 kHz output.
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::mainclkselaClockS> mainclkselaClockS{};
            constexpr MPL::Value<selVal,selVal::systemPllInput> systemPllInput{};
            constexpr MPL::Value<selVal,selVal::systemPllOutput> systemPllOutput{};
            constexpr MPL::Value<selVal,selVal::rtcOscillator32Kh> rtcOscillator32Kh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Noneusbclksel{    ///<USB clock source select
        using Addr = Register::Address<0x40074088,0xfffffffc,0,unsigned>;
        ///USB clock source.
        enum class selVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            systemOscillator=0x00000001,     ///<System oscillator
            usbPllOut=0x00000002,     ///<USB PLL out
            mainClock=0x00000003,     ///<Main clock
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
            constexpr MPL::Value<selVal,selVal::systemOscillator> systemOscillator{};
            constexpr MPL::Value<selVal,selVal::usbPllOut> usbPllOut{};
            constexpr MPL::Value<selVal,selVal::mainClock> mainClock{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Noneadcasyncclksel{    ///<ADC asynchronous clock source select
        using Addr = Register::Address<0x4007408c,0xfffffffc,0,unsigned>;
        ///USB clock source.
        enum class selVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            systemPllOutput=0x00000001,     ///<System PLL output
            usbPllOutput=0x00000002,     ///<USB PLL output
            sctPllOutput=0x00000003,     ///<SCT PLL output
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
            constexpr MPL::Value<selVal,selVal::systemPllOutput> systemPllOutput{};
            constexpr MPL::Value<selVal,selVal::usbPllOutput> usbPllOutput{};
            constexpr MPL::Value<selVal,selVal::sctPllOutput> sctPllOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Noneclkoutsela{    ///<CLKOUT clock source select A
        using Addr = Register::Address<0x40074094,0xfffffffc,0,unsigned>;
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
    namespace Noneclkoutselb{    ///<CLKOUT clock source select B
        using Addr = Register::Address<0x40074098,0xfffffffc,0,unsigned>;
        ///CLKOUT clock source
        enum class selVal {
            clkoutselaClockSo=0x00000000,     ///<CLKOUTSELA. Clock source selected in the CLKOUTSELA register.
            usbPllOutput=0x00000001,     ///<USB PLL output .
            sctPllOutput=0x00000002,     ///<SCT PLL output .
            rtc32KhzOutput=0x00000003,     ///<RTC 32 kHz output.
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::clkoutselaClockSo> clkoutselaClockSo{};
            constexpr MPL::Value<selVal,selVal::usbPllOutput> usbPllOutput{};
            constexpr MPL::Value<selVal,selVal::sctPllOutput> sctPllOutput{};
            constexpr MPL::Value<selVal,selVal::rtc32KhzOutput> rtc32KhzOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Nonesyspllclksel{    ///<System PLL clock source select
        using Addr = Register::Address<0x400740a0,0xfffffffc,0,unsigned>;
        ///System PLL clock source
        enum class selVal {
            irc=0x00000000,     ///<IRC
            crystalOscillator=0x00000001,     ///<Crystal Oscillator (SYSOSC)
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
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
        using Addr = Register::Address<0x400740a4,0xfffffffc,0,unsigned>;
        ///USB PLL clock source
        enum class selVal {
            ircTheUsbPllClo=0x00000000,     ///<IRC. The USB PLL clock source must be switched to system oscillator for correct USB operation.In low-speed mode IRC is ok?
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
    namespace Nonesctpllclksel{    ///<SCT PLL clock source select
        using Addr = Register::Address<0x400740a8,0xfffffffc,0,unsigned>;
        ///SCT PLL clock source
        enum class selVal {
            irc=0x00000000,     ///<IRC
            systemOscillator=0x00000001,     ///<System oscillator
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::irc> irc{};
            constexpr MPL::Value<selVal,selVal::systemOscillator> systemOscillator{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Nonesysahbclkdiv{    ///<System clock divider
        using Addr = Register::Address<0x400740c0,0xffffff00,0,unsigned>;
        ///System AHB clock divider values 0: System clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonesysahbclkctrl0{    ///<System clock control 0
        using Addr = Register::Address<0x400740c4,0x87020464,0,unsigned>;
        ///Enables the clock for the AHB, the APB bridges, the Cortex-M3 core clocks, SYSCON, reset control,  SRAM0, and the PMU. This bit is read-only and always reads as 1.
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
        ///Enables clock for SRAM1.
        enum class sram1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace sram1ValC{
            constexpr MPL::Value<sram1Val,sram1Val::disable> disable{};
            constexpr MPL::Value<sram1Val,sram1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,sram1Val> sram1{}; 
        ///Enables clock for SRAM2.
        enum class sram2Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace sram2ValC{
            constexpr MPL::Value<sram2Val,sram2Val::disable> disable{};
            constexpr MPL::Value<sram2Val,sram2Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,sram2Val> sram2{}; 
        ///Enables clock for flash memory.
        enum class flashVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace flashValC{
            constexpr MPL::Value<flashVal,flashVal::disable> disable{};
            constexpr MPL::Value<flashVal,flashVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,flashVal> flash{}; 
        ///Enables clock for flash controller.
        enum class fmcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace fmcValC{
            constexpr MPL::Value<fmcVal,fmcVal::disable> disable{};
            constexpr MPL::Value<fmcVal,fmcVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fmcVal> fmc{}; 
        ///Enables clock for EEPROM.
        enum class eepromVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace eepromValC{
            constexpr MPL::Value<eepromVal,eepromVal::disable> disable{};
            constexpr MPL::Value<eepromVal,eepromVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,eepromVal> eeprom{}; 
        ///Enables clock for pin mux.
        enum class pmuxVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace pmuxValC{
            constexpr MPL::Value<pmuxVal,pmuxVal::disable> disable{};
            constexpr MPL::Value<pmuxVal,pmuxVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pmuxVal> pmux{}; 
        ///Enables clock for switch matrix.
        enum class swmVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace swmValC{
            constexpr MPL::Value<swmVal,swmVal::disable> disable{};
            constexpr MPL::Value<swmVal,swmVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,swmVal> swm{}; 
        ///Enables clock for IOCON block.
        enum class ioconVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ioconValC{
            constexpr MPL::Value<ioconVal,ioconVal::disable> disable{};
            constexpr MPL::Value<ioconVal,ioconVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ioconVal> iocon{}; 
        ///Enables clock for GPIO0 port registers.
        enum class gpio0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace gpio0ValC{
            constexpr MPL::Value<gpio0Val,gpio0Val::disable> disable{};
            constexpr MPL::Value<gpio0Val,gpio0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,gpio0Val> gpio0{}; 
        ///Enables clock for GPIO1 port registers.
        enum class gpio1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace gpio1ValC{
            constexpr MPL::Value<gpio1Val,gpio1Val::disable> disable{};
            constexpr MPL::Value<gpio1Val,gpio1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,gpio1Val> gpio1{}; 
        ///Enables clock for GPIO2 port registers.
        enum class gpio2Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace gpio2ValC{
            constexpr MPL::Value<gpio2Val,gpio2Val::disable> disable{};
            constexpr MPL::Value<gpio2Val,gpio2Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,gpio2Val> gpio2{}; 
        ///Enables clock for pin interrupt block.
        enum class pintVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace pintValC{
            constexpr MPL::Value<pintVal,pintVal::disable> disable{};
            constexpr MPL::Value<pintVal,pintVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,pintVal> pint{}; 
        ///Enables clock for grouped pin interrupt block.
        enum class gintVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace gintValC{
            constexpr MPL::Value<gintVal,gintVal::disable> disable{};
            constexpr MPL::Value<gintVal,gintVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,gintVal> gint{}; 
        ///Enables clock for DMA.
        enum class dmaVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace dmaValC{
            constexpr MPL::Value<dmaVal,dmaVal::disable> disable{};
            constexpr MPL::Value<dmaVal,dmaVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dmaVal> dma{}; 
        ///Enables clock for CRC.
        enum class crcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace crcValC{
            constexpr MPL::Value<crcVal,crcVal::disable> disable{};
            constexpr MPL::Value<crcVal,crcVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,crcVal> crc{}; 
        ///Enables clock for WWDT.
        enum class wwdtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace wwdtValC{
            constexpr MPL::Value<wwdtVal,wwdtVal::disable> disable{};
            constexpr MPL::Value<wwdtVal,wwdtVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,wwdtVal> wwdt{}; 
        ///Enables clock for RTC.
        enum class rtcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace rtcValC{
            constexpr MPL::Value<rtcVal,rtcVal::disable> disable{};
            constexpr MPL::Value<rtcVal,rtcVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,rtcVal> rtc{}; 
        ///Enables clock for ADC0 register interface.
        enum class adc0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace adc0ValC{
            constexpr MPL::Value<adc0Val,adc0Val::disable> disable{};
            constexpr MPL::Value<adc0Val,adc0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,adc0Val> adc0{}; 
        ///Enables clock for ADC1 register interface.
        enum class adc1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace adc1ValC{
            constexpr MPL::Value<adc1Val,adc1Val::disable> disable{};
            constexpr MPL::Value<adc1Val,adc1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,adc1Val> adc1{}; 
        ///Enables clock for DAC.
        enum class dacVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace dacValC{
            constexpr MPL::Value<dacVal,dacVal::disable> disable{};
            constexpr MPL::Value<dacVal,dacVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,dacVal> dac{}; 
        ///Enables clock to analog comparator block. This is the clock to the register interface for all 4 comparators.
        enum class cmpVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace cmpValC{
            constexpr MPL::Value<cmpVal,cmpVal::disable> disable{};
            constexpr MPL::Value<cmpVal,cmpVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,cmpVal> cmp{}; 
    }
    namespace Nonesysahbclkctrl1{    ///<System clock control 1
        using Addr = Register::Address<0x400740c8,0xff519900,0,unsigned>;
        ///Enables clock for multi-rate timer.
        enum class mrtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace mrtValC{
            constexpr MPL::Value<mrtVal,mrtVal::disable> disable{};
            constexpr MPL::Value<mrtVal,mrtVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,mrtVal> mrt{}; 
        ///Enables clock for repetitive interrupt timer.
        enum class ritVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ritValC{
            constexpr MPL::Value<ritVal,ritVal::disable> disable{};
            constexpr MPL::Value<ritVal,ritVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ritVal> rit{}; 
        ///Enables clock for SCT0.
        enum class sct0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace sct0ValC{
            constexpr MPL::Value<sct0Val,sct0Val::disable> disable{};
            constexpr MPL::Value<sct0Val,sct0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sct0Val> sct0{}; 
        ///Enables clock for SCT1.
        enum class sct1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace sct1ValC{
            constexpr MPL::Value<sct1Val,sct1Val::disable> disable{};
            constexpr MPL::Value<sct1Val,sct1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,sct1Val> sct1{}; 
        ///Enables clock for SCT2.
        enum class sct2Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace sct2ValC{
            constexpr MPL::Value<sct2Val,sct2Val::disable> disable{};
            constexpr MPL::Value<sct2Val,sct2Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,sct2Val> sct2{}; 
        ///Enables clock for SCT3.
        enum class sct3Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace sct3ValC{
            constexpr MPL::Value<sct3Val,sct3Val::disable> disable{};
            constexpr MPL::Value<sct3Val,sct3Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sct3Val> sct3{}; 
        ///Enables clock for SCTIPU.
        enum class sctipuVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace sctipuValC{
            constexpr MPL::Value<sctipuVal,sctipuVal::disable> disable{};
            constexpr MPL::Value<sctipuVal,sctipuVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sctipuVal> sctipu{}; 
        ///Enables clock for CCAN.
        enum class ccanVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace ccanValC{
            constexpr MPL::Value<ccanVal,ccanVal::disable> disable{};
            constexpr MPL::Value<ccanVal,ccanVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ccanVal> ccan{}; 
        ///Enables clock for SPI0.
        enum class spi0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace spi0ValC{
            constexpr MPL::Value<spi0Val,spi0Val::disable> disable{};
            constexpr MPL::Value<spi0Val,spi0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,spi0Val> spi0{}; 
        ///Enables clock for SPI1.
        enum class spi1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace spi1ValC{
            constexpr MPL::Value<spi1Val,spi1Val::disable> disable{};
            constexpr MPL::Value<spi1Val,spi1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,spi1Val> spi1{}; 
        ///Enables clock for I2C0.
        enum class i2c0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace i2c0ValC{
            constexpr MPL::Value<i2c0Val,i2c0Val::disable> disable{};
            constexpr MPL::Value<i2c0Val,i2c0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,i2c0Val> i2c0{}; 
        ///Enables clock for I2C1.
        enum class i2c1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace i2c1ValC{
            constexpr MPL::Value<i2c1Val,i2c1Val::disable> disable{};
            constexpr MPL::Value<i2c1Val,i2c1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,i2c1Val> i2c1{}; 
        ///Enables clock for USART0.
        enum class uart0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace uart0ValC{
            constexpr MPL::Value<uart0Val,uart0Val::disable> disable{};
            constexpr MPL::Value<uart0Val,uart0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,uart0Val> uart0{}; 
        ///Enables clock for USART1.
        enum class uart1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace uart1ValC{
            constexpr MPL::Value<uart1Val,uart1Val::disable> disable{};
            constexpr MPL::Value<uart1Val,uart1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,uart1Val> uart1{}; 
        ///Enables clock for USART2.
        enum class uart2Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace uart2ValC{
            constexpr MPL::Value<uart2Val,uart2Val::disable> disable{};
            constexpr MPL::Value<uart2Val,uart2Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,uart2Val> uart2{}; 
        ///Enables clock for QEI.
        enum class qeiVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace qeiValC{
            constexpr MPL::Value<qeiVal,qeiVal::disable> disable{};
            constexpr MPL::Value<qeiVal,qeiVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,qeiVal> qei{}; 
        ///Enables clock for USB register interface.
        enum class usbVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace usbValC{
            constexpr MPL::Value<usbVal,usbVal::disable> disable{};
            constexpr MPL::Value<usbVal,usbVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,usbVal> usb{}; 
    }
    namespace Nonesystickclkdiv{    ///<SYSTICK clock divider
        using Addr = Register::Address<0x400740cc,0xffffff00,0,unsigned>;
        ///SYSTICK clock divider values.  0: Disable SYSTICK timer clock.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneuartclkdiv{    ///<USART clock divider. Clock divider for the USART fractional baud rate generator.
        using Addr = Register::Address<0x400740d0,0xffffff00,0,unsigned>;
        ///USART fractional baud rate generator clock divider values.  0: Clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneioconclkdiv{    ///<Peripheral clock to the IOCON block for programmable glitch filter
        using Addr = Register::Address<0x400740d4,0xffffff00,0,unsigned>;
        ///IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonetraceclkdiv{    ///<ARM trace clock divider
        using Addr = Register::Address<0x400740d8,0xffffff00,0,unsigned>;
        ///ARM trace clock divider values.  0: Disable TRACE_CLK.  1: Divide by 1.  to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneusbclkdiv{    ///<USB clock divider
        using Addr = Register::Address<0x400740ec,0xffffff00,0,unsigned>;
        ///USB clock divider values  0: Disable USB clock.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneadcasyncclkdiv{    ///<Asynchronous ADC clock divider
        using Addr = Register::Address<0x400740f0,0xffffff00,0,unsigned>;
        ///USB clock divider values  0: Disable USB clock.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneclkoutdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x400740f8,0xffffff00,0,unsigned>;
        ///CLKOUT clock divider values 0: Disable CLKOUT clock divider.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonefrgctrl{    ///<USART fractional baud rate generator control
        using Addr = Register::Address<0x40074128,0xffff0000,0,unsigned>;
        ///Denominator of the fractional divider. DIV is equal to the programmed value +1. Always set to 0xFF to use with the fractional baud rate generator.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Numerator of the fractional divider. MULT is equal to the programmed value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> mult{}; 
    }
    namespace Noneusbclkctrl{    ///<USB clock control
        using Addr = Register::Address<0x4007412c,0xfffffffc,0,unsigned>;
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
        using Addr = Register::Address<0x40074130,0xfffffffe,0,unsigned>;
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
    namespace Nonebodctrl{    ///<Brown-Out Detect
        using Addr = Register::Address<0x40074180,0xffffffe0,0,unsigned>;
        ///BOD reset level
        enum class bodrstlevVal {
            level0TheResetA=0x00000000,     ///<Level 0: The reset assertion threshold voltage is ; the reset de-assertion threshold voltage is .
            level1TheResetA=0x00000001,     ///<Level 1: The reset assertion threshold voltage is ; the reset de-assertion threshold voltage is .
            level2TheResetA=0x00000002,     ///<Level 2: The reset assertion threshold voltage is ; the reset de-assertion threshold voltage is .
            level3TheResetA=0x00000003,     ///<Level 3: The reset assertion threshold voltage is ; the reset de-assertion threshold voltage is.
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
            level0TheInterru=0x00000000,     ///<Level 0: The interrupt assertion threshold voltage is ; the interrupt de-assertion threshold voltage is
            level1TheInterru=0x00000001,     ///<Level 1: The interrupt assertion threshold voltage is  ; the interrupt de-assertion threshold voltage is .
            level2TheInterru=0x00000002,     ///<Level 2: The interrupt assertion threshold voltage is ; the interrupt de-assertion threshold voltage is .
            level3TheInterru=0x00000003,     ///<Level 3: The interrupt assertion threshold voltage is ; the interrupt de-assertion threshold voltage is .
        };
        namespace bodintvalValC{
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level0TheInterru> level0TheInterru{};
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level1TheInterru> level1TheInterru{};
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
    namespace Nonesysoscctrl{    ///<System oscillator control
        using Addr = Register::Address<0x40074188,0xfffffffc,0,unsigned>;
        ///Bypass system oscillator
        enum class bypassVal {
            disabledOscillator=0x00000000,     ///<Disabled. Oscillator is not bypassed.
            enabledPllInput=0x00000001,     ///<Enabled. PLL input (sys_osc_clk) is fed directly from the XTALIN pin bypassing the oscillator. Use this mode when using an external clock source instead of the crystal oscillator.
        };
        namespace bypassValC{
            constexpr MPL::Value<bypassVal,bypassVal::disabledOscillator> disabledOscillator{};
            constexpr MPL::Value<bypassVal,bypassVal::enabledPllInput> enabledPllInput{};
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
    namespace Nonertcoscctrl{    ///<RTC oscillator control
        using Addr = Register::Address<0x40074190,0xfffffffe,0,unsigned>;
        ///RTC 32 kHz clock enable.
        enum class enVal {
            disabledRtcClock=0x00000000,     ///<Disabled. RTC clock off.
            enabledRtcClockO=0x00000001,     ///<Enabled. RTC clock on.
        };
        namespace enValC{
            constexpr MPL::Value<enVal,enVal::disabledRtcClock> disabledRtcClock{};
            constexpr MPL::Value<enVal,enVal::enabledRtcClockO> enabledRtcClockO{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enVal> en{}; 
    }
    namespace Nonesyspllctrl{    ///<System PLL control
        using Addr = Register::Address<0x40074198,0xffffff00,0,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1. 00000: Division ratio M = 1 to 111111: Division ratio M = 64
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> msel{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pselVal> psel{}; 
    }
    namespace Nonesyspllstat{    ///<System PLL status
        using Addr = Register::Address<0x4007419c,0xfffffffe,0,unsigned>;
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
        using Addr = Register::Address<0x400741a0,0xffffff00,0,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1.  00000: Division ratio M = 1 to 111111: Division ratio M = 64.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> msel{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pselVal> psel{}; 
    }
    namespace Noneusbpllstat{    ///<USB PLL status
        using Addr = Register::Address<0x400741a4,0xfffffffe,0,unsigned>;
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
    namespace Nonesctpllctrl{    ///<SCT PLL control
        using Addr = Register::Address<0x400741a8,0xffffff00,0,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1.  00000: Division ratio M = 1 to 111111: Division ratio M = 64.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> msel{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pselVal> psel{}; 
    }
    namespace Nonesctpllstat{    ///<SCT PLL status
        using Addr = Register::Address<0x400741ac,0xfffffffe,0,unsigned>;
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
    namespace Nonepdawakecfg{    ///<Power-down states for wake-up from deep-sleep
        using Addr = Register::Address<0x40074204,0xfe000087,0,unsigned>;
        ///IRC oscillator output wake-up configuration
        enum class ircoutPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace ircoutPdValC{
            constexpr MPL::Value<ircoutPdVal,ircoutPdVal::powered> powered{};
            constexpr MPL::Value<ircoutPdVal,ircoutPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ircoutPdVal> ircoutPd{}; 
        ///IRC oscillator wake-up configuration
        enum class ircVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace ircValC{
            constexpr MPL::Value<ircVal,ircVal::powered> powered{};
            constexpr MPL::Value<ircVal,ircVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ircVal> irc{}; 
        ///Flash memory wake-up configuration
        enum class flashVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace flashValC{
            constexpr MPL::Value<flashVal,flashVal::powered> powered{};
            constexpr MPL::Value<flashVal,flashVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,flashVal> flash{}; 
        ///EEPROM wake-up configuration
        enum class eepromVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace eepromValC{
            constexpr MPL::Value<eepromVal,eepromVal::powered> powered{};
            constexpr MPL::Value<eepromVal,eepromVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eepromVal> eeprom{}; 
        ///BOD wake-up configuration
        enum class bodPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace bodPdValC{
            constexpr MPL::Value<bodPdVal,bodPdVal::powered> powered{};
            constexpr MPL::Value<bodPdVal,bodPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,bodPdVal> bodPd{}; 
        ///USB PHY wake-up configuration
        enum class usbphyPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace usbphyPdValC{
            constexpr MPL::Value<usbphyPdVal,usbphyPdVal::powered> powered{};
            constexpr MPL::Value<usbphyPdVal,usbphyPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,usbphyPdVal> usbphyPd{}; 
        ///ADC0 wake-up configuration
        enum class adc0PdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace adc0PdValC{
            constexpr MPL::Value<adc0PdVal,adc0PdVal::powered> powered{};
            constexpr MPL::Value<adc0PdVal,adc0PdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,adc0PdVal> adc0Pd{}; 
        ///ADC1 wake-up configuration
        enum class adc1PdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace adc1PdValC{
            constexpr MPL::Value<adc1PdVal,adc1PdVal::powered> powered{};
            constexpr MPL::Value<adc1PdVal,adc1PdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,adc1PdVal> adc1Pd{}; 
        ///DAC wake-up configuration
        enum class dacPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace dacPdValC{
            constexpr MPL::Value<dacPdVal,dacPdVal::powered> powered{};
            constexpr MPL::Value<dacPdVal,dacPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dacPdVal> dacPd{}; 
        ///Analog comparator 0 wake-up configuration
        enum class acmp0PdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace acmp0PdValC{
            constexpr MPL::Value<acmp0PdVal,acmp0PdVal::powered> powered{};
            constexpr MPL::Value<acmp0PdVal,acmp0PdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,acmp0PdVal> acmp0Pd{}; 
        ///Analog comparator 1 wake-up configuration
        enum class acmp1PdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace acmp1PdValC{
            constexpr MPL::Value<acmp1PdVal,acmp1PdVal::powered> powered{};
            constexpr MPL::Value<acmp1PdVal,acmp1PdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,acmp1PdVal> acmp1Pd{}; 
        ///Analog comparator 2 wake-up configuration
        enum class acmp2PdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace acmp2PdValC{
            constexpr MPL::Value<acmp2PdVal,acmp2PdVal::powered> powered{};
            constexpr MPL::Value<acmp2PdVal,acmp2PdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,acmp2PdVal> acmp2Pd{}; 
        ///Analog comparator 3 wake-up configuration
        enum class acmp3PdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace acmp3PdValC{
            constexpr MPL::Value<acmp3PdVal,acmp3PdVal::powered> powered{};
            constexpr MPL::Value<acmp3PdVal,acmp3PdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,acmp3PdVal> acmp3Pd{}; 
        ///Internal voltage reference wake-up configuration
        enum class irefPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace irefPdValC{
            constexpr MPL::Value<irefPdVal,irefPdVal::powered> powered{};
            constexpr MPL::Value<irefPdVal,irefPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,irefPdVal> irefPd{}; 
        ///Temperature sensor wake-up configuration
        enum class tsPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace tsPdValC{
            constexpr MPL::Value<tsPdVal,tsPdVal::powered> powered{};
            constexpr MPL::Value<tsPdVal,tsPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,tsPdVal> tsPd{}; 
        ///VDDA divider what is this for? wake-up configuration
        enum class vddadivPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace vddadivPdValC{
            constexpr MPL::Value<vddadivPdVal,vddadivPdVal::powered> powered{};
            constexpr MPL::Value<vddadivPdVal,vddadivPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,vddadivPdVal> vddadivPd{}; 
        ///Watchdog oscillator wake-up configuration.
        enum class wdtoscPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace wdtoscPdValC{
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::powered> powered{};
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,wdtoscPdVal> wdtoscPd{}; 
        ///System oscillator wake-up configuration
        enum class sysoscPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace sysoscPdValC{
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::powered> powered{};
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,sysoscPdVal> sysoscPd{}; 
        ///System PLL wake-up configuration
        enum class syspllPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace syspllPdValC{
            constexpr MPL::Value<syspllPdVal,syspllPdVal::powered> powered{};
            constexpr MPL::Value<syspllPdVal,syspllPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,syspllPdVal> syspllPd{}; 
        ///USB PLL wake-up configuration
        enum class usbpllPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace usbpllPdValC{
            constexpr MPL::Value<usbpllPdVal,usbpllPdVal::powered> powered{};
            constexpr MPL::Value<usbpllPdVal,usbpllPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,usbpllPdVal> usbpllPd{}; 
        ///USB PLL wake-up configuration
        enum class sctpllPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace sctpllPdValC{
            constexpr MPL::Value<sctpllPdVal,sctpllPdVal::powered> powered{};
            constexpr MPL::Value<sctpllPdVal,sctpllPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,sctpllPdVal> sctpllPd{}; 
    }
    namespace Nonepdruncfg{    ///<Power configuration register
        using Addr = Register::Address<0x40074208,0xfe000087,0,unsigned>;
        ///IRC oscillator output
        enum class ircoutPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace ircoutPdValC{
            constexpr MPL::Value<ircoutPdVal,ircoutPdVal::powered> powered{};
            constexpr MPL::Value<ircoutPdVal,ircoutPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ircoutPdVal> ircoutPd{}; 
        ///IRC oscillator
        enum class ircVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace ircValC{
            constexpr MPL::Value<ircVal,ircVal::powered> powered{};
            constexpr MPL::Value<ircVal,ircVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ircVal> irc{}; 
        ///Flash memory
        enum class flashVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace flashValC{
            constexpr MPL::Value<flashVal,flashVal::powered> powered{};
            constexpr MPL::Value<flashVal,flashVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,flashVal> flash{}; 
        ///EEPROM
        enum class eepromVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace eepromValC{
            constexpr MPL::Value<eepromVal,eepromVal::powered> powered{};
            constexpr MPL::Value<eepromVal,eepromVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eepromVal> eeprom{}; 
        ///BOD power-down
        enum class bodPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace bodPdValC{
            constexpr MPL::Value<bodPdVal,bodPdVal::powered> powered{};
            constexpr MPL::Value<bodPdVal,bodPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,bodPdVal> bodPd{}; 
        ///USB PHY power-down
        enum class usbphyPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace usbphyPdValC{
            constexpr MPL::Value<usbphyPdVal,usbphyPdVal::powered> powered{};
            constexpr MPL::Value<usbphyPdVal,usbphyPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,usbphyPdVal> usbphyPd{}; 
        ///ADC0 power-down
        enum class adc0PdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace adc0PdValC{
            constexpr MPL::Value<adc0PdVal,adc0PdVal::powered> powered{};
            constexpr MPL::Value<adc0PdVal,adc0PdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,adc0PdVal> adc0Pd{}; 
        ///ADC1 power-down
        enum class adc1PdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace adc1PdValC{
            constexpr MPL::Value<adc1PdVal,adc1PdVal::powered> powered{};
            constexpr MPL::Value<adc1PdVal,adc1PdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,adc1PdVal> adc1Pd{}; 
        ///DAC power-down
        enum class dacPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace dacPdValC{
            constexpr MPL::Value<dacPdVal,dacPdVal::powered> powered{};
            constexpr MPL::Value<dacPdVal,dacPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dacPdVal> dacPd{}; 
        ///Analog comparator 0 power-down
        enum class acmp0PdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace acmp0PdValC{
            constexpr MPL::Value<acmp0PdVal,acmp0PdVal::powered> powered{};
            constexpr MPL::Value<acmp0PdVal,acmp0PdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,acmp0PdVal> acmp0Pd{}; 
        ///Analog comparator 1 power-down
        enum class acmp1PdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace acmp1PdValC{
            constexpr MPL::Value<acmp1PdVal,acmp1PdVal::powered> powered{};
            constexpr MPL::Value<acmp1PdVal,acmp1PdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,acmp1PdVal> acmp1Pd{}; 
        ///Analog comparator 2 power-down
        enum class acmp2PdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace acmp2PdValC{
            constexpr MPL::Value<acmp2PdVal,acmp2PdVal::powered> powered{};
            constexpr MPL::Value<acmp2PdVal,acmp2PdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,acmp2PdVal> acmp2Pd{}; 
        ///Analog comparator 3 power-down
        enum class acmp3PdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace acmp3PdValC{
            constexpr MPL::Value<acmp3PdVal,acmp3PdVal::powered> powered{};
            constexpr MPL::Value<acmp3PdVal,acmp3PdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,acmp3PdVal> acmp3Pd{}; 
        ///Internal voltage reference power-down
        enum class irefPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace irefPdValC{
            constexpr MPL::Value<irefPdVal,irefPdVal::powered> powered{};
            constexpr MPL::Value<irefPdVal,irefPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,irefPdVal> irefPd{}; 
        ///Temperature sensor power-down
        enum class tsPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace tsPdValC{
            constexpr MPL::Value<tsPdVal,tsPdVal::powered> powered{};
            constexpr MPL::Value<tsPdVal,tsPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,tsPdVal> tsPd{}; 
        ///VDDA divider what is this for?
        enum class vddadivPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace vddadivPdValC{
            constexpr MPL::Value<vddadivPdVal,vddadivPdVal::powered> powered{};
            constexpr MPL::Value<vddadivPdVal,vddadivPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,vddadivPdVal> vddadivPd{}; 
        ///Watchdog oscillator power-down .
        enum class wdtoscPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace wdtoscPdValC{
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::powered> powered{};
            constexpr MPL::Value<wdtoscPdVal,wdtoscPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,wdtoscPdVal> wdtoscPd{}; 
        ///System oscillator power-down
        enum class sysoscPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace sysoscPdValC{
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::powered> powered{};
            constexpr MPL::Value<sysoscPdVal,sysoscPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,sysoscPdVal> sysoscPd{}; 
        ///System PLL power-down
        enum class syspllPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace syspllPdValC{
            constexpr MPL::Value<syspllPdVal,syspllPdVal::powered> powered{};
            constexpr MPL::Value<syspllPdVal,syspllPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,syspllPdVal> syspllPd{}; 
        ///USB PLL power-down
        enum class usbpllPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace usbpllPdValC{
            constexpr MPL::Value<usbpllPdVal,usbpllPdVal::powered> powered{};
            constexpr MPL::Value<usbpllPdVal,usbpllPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,usbpllPdVal> usbpllPd{}; 
        ///USB PLL power-down
        enum class sctpllPdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        namespace sctpllPdValC{
            constexpr MPL::Value<sctpllPdVal,sctpllPdVal::powered> powered{};
            constexpr MPL::Value<sctpllPdVal,sctpllPdVal::poweredDown> poweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,sctpllPdVal> sctpllPd{}; 
    }
    namespace Nonestarterp0{    ///<Start logic 0 wake-up enable register
        using Addr = Register::Address<0x40074218,0xb81f801c,0,unsigned>;
        ///WWDT interrupt wake-up.
        enum class wwdtVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace wwdtValC{
            constexpr MPL::Value<wwdtVal,wwdtVal::disabled> disabled{};
            constexpr MPL::Value<wwdtVal,wwdtVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wwdtVal> wwdt{}; 
        ///BOD interrupt wake-up.
        enum class bodVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace bodValC{
            constexpr MPL::Value<bodVal,bodVal::disabled> disabled{};
            constexpr MPL::Value<bodVal,bodVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bodVal> bod{}; 
        ///Group interrupt 0 wake-up.
        enum class gint0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace gint0ValC{
            constexpr MPL::Value<gint0Val,gint0Val::disabled> disabled{};
            constexpr MPL::Value<gint0Val,gint0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,gint0Val> gint0{}; 
        ///Group interrupt 1 wake-up.
        enum class gint1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace gint1ValC{
            constexpr MPL::Value<gint1Val,gint1Val::disabled> disabled{};
            constexpr MPL::Value<gint1Val,gint1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,gint1Val> gint1{}; 
        ///GPIO pin interrupt 0 wake-up
        enum class pint0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint0ValC{
            constexpr MPL::Value<pint0Val,pint0Val::disabled> disabled{};
            constexpr MPL::Value<pint0Val,pint0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pint0Val> pint0{}; 
        ///GPIO pin interrupt 1 wake-up
        enum class pint1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint1ValC{
            constexpr MPL::Value<pint1Val,pint1Val::disabled> disabled{};
            constexpr MPL::Value<pint1Val,pint1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pint1Val> pint1{}; 
        ///GPIO pin interrupt 2 wake-up
        enum class pint2Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint2ValC{
            constexpr MPL::Value<pint2Val,pint2Val::disabled> disabled{};
            constexpr MPL::Value<pint2Val,pint2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pint2Val> pint2{}; 
        ///GPIO pin interrupt 3 wake-up
        enum class pint3Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint3ValC{
            constexpr MPL::Value<pint3Val,pint3Val::disabled> disabled{};
            constexpr MPL::Value<pint3Val,pint3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pint3Val> pint3{}; 
        ///GPIO pin interrupt 4 wake-up
        enum class pint4Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint4ValC{
            constexpr MPL::Value<pint4Val,pint4Val::disabled> disabled{};
            constexpr MPL::Value<pint4Val,pint4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pint4Val> pint4{}; 
        ///GPIO pin interrupt 5 wake-up
        enum class pint5Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint5ValC{
            constexpr MPL::Value<pint5Val,pint5Val::disabled> disabled{};
            constexpr MPL::Value<pint5Val,pint5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pint5Val> pint5{}; 
        ///GPIO pin interrupt 6 wake-up
        enum class pint6Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint6ValC{
            constexpr MPL::Value<pint6Val,pint6Val::disabled> disabled{};
            constexpr MPL::Value<pint6Val,pint6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pint6Val> pint6{}; 
        ///GPIO pin interrupt 7 wake-up
        enum class pint7Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace pint7ValC{
            constexpr MPL::Value<pint7Val,pint7Val::disabled> disabled{};
            constexpr MPL::Value<pint7Val,pint7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pint7Val> pint7{}; 
        ///USART0 interrupt wake-up. Configure USART in synchronous slave mode or in 32 kHz mode..
        enum class usart0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace usart0ValC{
            constexpr MPL::Value<usart0Val,usart0Val::disabled> disabled{};
            constexpr MPL::Value<usart0Val,usart0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,usart0Val> usart0{}; 
        ///USART1 interrupt wake-up. Configure USART in synchronous slave mode or in 32 kHz mode...
        enum class usart1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace usart1ValC{
            constexpr MPL::Value<usart1Val,usart1Val::disabled> disabled{};
            constexpr MPL::Value<usart1Val,usart1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,usart1Val> usart1{}; 
        ///USART2 interrupt wake-up. Configure USART in synchronous slave mode or in 32 kHz mode...
        enum class usart2Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace usart2ValC{
            constexpr MPL::Value<usart2Val,usart2Val::disabled> disabled{};
            constexpr MPL::Value<usart2Val,usart2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,usart2Val> usart2{}; 
        ///I2C interrupt wake-up.
        enum class i2cVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace i2cValC{
            constexpr MPL::Value<i2cVal,i2cVal::disabled> disabled{};
            constexpr MPL::Value<i2cVal,i2cVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,i2cVal> i2c{}; 
        ///SPI0 interrupt wake-up
        enum class spi0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace spi0ValC{
            constexpr MPL::Value<spi0Val,spi0Val::disabled> disabled{};
            constexpr MPL::Value<spi0Val,spi0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,spi0Val> spi0{}; 
        ///SPI1 interrupt wake-up
        enum class spi1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace spi1ValC{
            constexpr MPL::Value<spi1Val,spi1Val::disabled> disabled{};
            constexpr MPL::Value<spi1Val,spi1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,spi1Val> spi1{}; 
        ///USB need_clock signal wake-up
        enum class usbWakeupVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace usbWakeupValC{
            constexpr MPL::Value<usbWakeupVal,usbWakeupVal::disabled> disabled{};
            constexpr MPL::Value<usbWakeupVal,usbWakeupVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,usbWakeupVal> usbWakeup{}; 
    }
    namespace Nonestarterp1{    ///<Start logic 1 wake-up enable register
        using Addr = Register::Address<0x4007421c,0xffff90ff,0,unsigned>;
        ///Analog comparator 0 interrupt wake-up
        enum class acmp0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace acmp0ValC{
            constexpr MPL::Value<acmp0Val,acmp0Val::disabled> disabled{};
            constexpr MPL::Value<acmp0Val,acmp0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,acmp0Val> acmp0{}; 
        ///Analog comparator 1 interrupt wake-up
        enum class acmp1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace acmp1ValC{
            constexpr MPL::Value<acmp1Val,acmp1Val::disabled> disabled{};
            constexpr MPL::Value<acmp1Val,acmp1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,acmp1Val> acmp1{}; 
        ///Analog comparator 2 interrupt wake-up
        enum class acmp2Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace acmp2ValC{
            constexpr MPL::Value<acmp2Val,acmp2Val::disabled> disabled{};
            constexpr MPL::Value<acmp2Val,acmp2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,acmp2Val> acmp2{}; 
        ///Analog comparator 3 interrupt wake-up
        enum class acmp3Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace acmp3ValC{
            constexpr MPL::Value<acmp3Val,acmp3Val::disabled> disabled{};
            constexpr MPL::Value<acmp3Val,acmp3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,acmp3Val> acmp3{}; 
        ///RTC alarm interrupt wake-up
        enum class rtcalarmVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace rtcalarmValC{
            constexpr MPL::Value<rtcalarmVal,rtcalarmVal::disabled> disabled{};
            constexpr MPL::Value<rtcalarmVal,rtcalarmVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,rtcalarmVal> rtcalarm{}; 
        ///RTC wake-up interrupt wake-up
        enum class rtcwakeVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace rtcwakeValC{
            constexpr MPL::Value<rtcwakeVal,rtcwakeVal::disabled> disabled{};
            constexpr MPL::Value<rtcwakeVal,rtcwakeVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,rtcwakeVal> rtcwake{}; 
    }
}
