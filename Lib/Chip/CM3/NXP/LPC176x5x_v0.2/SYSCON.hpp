#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System and clock control
    namespace Noneflashcfg{    ///<Flash Accelerator Configuration Register. Controls flash access timing.
        using Addr = Register::Address<0x400fc000,0xffff0fff,0,unsigned>;
        ///Flash access time. The value of this field plus 1 gives the number of CPU clocks used for a flash access. Warning: improper setting of this value may result in incorrect operation of the device. Other values are reserved.
        enum class FlashtimVal {
            v1clk=0x00000000,     ///<Flash accesses use 1 CPU clock. Use for up to 20 MHz CPU clock.
            v2clk=0x00000001,     ///<Flash accesses use 2 CPU clocks. Use for up to 40 MHz CPU clock.
            v3clk=0x00000002,     ///<Flash accesses use 3 CPU clocks. Use for up to 60 MHz CPU clock.
            v4clk=0x00000003,     ///<Flash accesses use 4 CPU clocks. Use for up to 80 MHz CPU clock.
            v5clk=0x00000004,     ///<Flash accesses use 5 CPU clocks. Use for up to 100 MHz CPU clock. Use for up to 120 Mhz for LPC1759 and LPC1769 only.
            v6clk=0x00000005,     ///<Flash accesses use 6 CPU clocks. This safe setting will work under any conditions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,FlashtimVal> flashtim{}; 
        namespace FlashtimValC{
            constexpr Register::FieldValue<decltype(flashtim)::Type,FlashtimVal::v1clk> v1clk{};
            constexpr Register::FieldValue<decltype(flashtim)::Type,FlashtimVal::v2clk> v2clk{};
            constexpr Register::FieldValue<decltype(flashtim)::Type,FlashtimVal::v3clk> v3clk{};
            constexpr Register::FieldValue<decltype(flashtim)::Type,FlashtimVal::v4clk> v4clk{};
            constexpr Register::FieldValue<decltype(flashtim)::Type,FlashtimVal::v5clk> v5clk{};
            constexpr Register::FieldValue<decltype(flashtim)::Type,FlashtimVal::v6clk> v6clk{};
        }
    }
    namespace Nonepll0con{    ///<PLL0 Control Register
        using Addr = Register::Address<0x400fc080,0xfffffffc,0,unsigned>;
        ///PLL0 Enable. When one, and after a valid PLL0 feed, this bit will activate PLL0 and allow it to lock to the requested frequency. See PLL0STAT register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> plle0{}; 
        ///PLL0 Connect. Setting PLLC0 to one after PLL0 has been enabled and locked, then followed by a valid PLL0 feed sequence causes PLL0 to become the clock source for the CPU, AHB peripherals, and used to derive the clocks for APB peripherals. The PLL0 output may potentially be used to clock the USB subsystem if the frequency is 48 MHz. See PLL0STAT register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pllc0{}; 
    }
    namespace Nonepll0cfg{    ///<PLL0 Configuration Register
        using Addr = Register::Address<0x400fc084,0xff008000,0,unsigned>;
        ///PLL0 Multiplier value. Supplies the value M in PLL0 frequency calculations. The value stored here is M - 1.  Note: Not all values of M are needed, and therefore some are not supported by hardware.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> msel0{}; 
        ///PLL0 Pre-Divider value. Supplies the value N in PLL0 frequency calculations. The value stored here is N - 1. Supported values for N are 1 through 32.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nsel0{}; 
    }
    namespace Nonepll0stat{    ///<PLL0 Status Register
        using Addr = Register::Address<0x400fc088,0xf8008000,0,unsigned>;
        ///Read-back for the PLL0 Multiplier value. This is the value currently used by PLL0, and is one less than the actual multiplier.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> msel0{}; 
        ///Read-back for the PLL0 Pre-Divider value. This is the value currently used by PLL0, and is one less than the actual divider.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nsel0{}; 
        ///Read-back for the PLL0 Enable bit. This bit reflects the state of the PLEC0 bit in PLL0CON after a valid PLL0 feed. When one, PLL0 is currently enabled. When zero, PLL0 is turned off. This bit is automatically cleared when Power-down mode is entered.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> plle0Stat{}; 
        ///Read-back for the PLL0 Connect bit. This bit reflects the state of the PLLC0 bit in PLL0CON after a valid PLL0 feed. When PLLC0 and PLLE0 are both one, PLL0 is connected as the clock source for the CPU. When either PLLC0 or PLLE0 is zero, PLL0 is bypassed. This bit is automatically cleared when Power-down mode is entered.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pllc0Stat{}; 
        ///Reflects the PLL0 Lock status. When zero, PLL0 is not locked. When one, PLL0 is locked onto the requested frequency. See text for details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> plock0{}; 
    }
    namespace Nonepll0feed{    ///<PLL0 Feed Register
        using Addr = Register::Address<0x400fc08c,0xffffff00,0,unsigned>;
        ///The PLL0 feed sequence must be written to this register in order for PLL0 configuration and control register changes to take effect.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pll0feed{}; 
    }
    namespace Nonepll1con{    ///<PLL1 Control Register
        using Addr = Register::Address<0x400fc0a0,0xfffffffc,0,unsigned>;
        ///PLL1 Enable. When one, and after a valid PLL1 feed, this bit will activate PLL1 and allow it to lock to the requested frequency.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> plle1{}; 
        ///PLL1 Connect. Setting PLLC to one after PLL1 has been enabled and locked, then followed by a valid PLL1 feed sequence causes PLL1 to become the clock source for the USB subsystem via the USB clock divider. See PLL1STAT register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pllc1{}; 
    }
    namespace Nonepll1cfg{    ///<PLL1 Configuration Register
        using Addr = Register::Address<0x400fc0a4,0xffffff80,0,unsigned>;
        ///PLL1 Multiplier value. Supplies the value M in the PLL1 frequency calculations.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> msel1{}; 
        ///PLL1 Divider value. Supplies the value P in the PLL1 frequency calculations.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> psel1{}; 
    }
    namespace Nonepll1stat{    ///<PLL1 Status Register
        using Addr = Register::Address<0x400fc0a8,0xfffff880,0,unsigned>;
        ///Read-back for the PLL1 Multiplier value. This is the value currently used by PLL1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> msel1{}; 
        ///Read-back for the PLL1 Divider value. This is the value currently used by PLL1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> psel1{}; 
        ///Read-back for the PLL1 Enable bit. When one, PLL1 is currently activated. When zero, PLL1 is turned off. This bit is automatically cleared when Power-down mode is activated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> plle1Stat{}; 
        ///Read-back for the PLL1 Connect bit. When PLLC and PLLE are both one, PLL1 is connected as the clock source for the microcontroller. When either PLLC or PLLE is zero, PLL1 is bypassed and the oscillator clock is used directly by the microcontroller. This bit is automatically cleared when Power-down mode is activated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pllc1Stat{}; 
        ///Reflects the PLL1 Lock status. When zero, PLL1 is not locked. When one, PLL1 is locked onto the requested frequency.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> plock1{}; 
    }
    namespace Nonepll1feed{    ///<PLL1 Feed Register
        using Addr = Register::Address<0x400fc0ac,0xffffff00,0,unsigned>;
        ///The PLL1 feed sequence must be written to this register in order for PLL1 configuration and control register changes to take effect.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pll1feed{}; 
    }
    namespace Nonepcon{    ///<Power Control Register
        using Addr = Register::Address<0x400fc0c0,0xfffff0e0,0,unsigned>;
        ///Power mode control bit 0. This bit controls entry to the Power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0{}; 
        ///Power mode control bit 1. This bit controls entry to the Deep Power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1{}; 
        ///Brown-Out Reduced Power Mode. When BODRPM is 1, the Brown-Out Detect circuitry will be turned off when chip Power-down mode or Deep Sleep mode is entered, resulting in a further reduction in power usage. However, the possibility of using Brown-Out Detect as a wake-up source from the reduced power mode will be lost. When 0, the Brown-Out Detect function remains active during Power-down and Deep Sleep modes. See the System Control Block chapter for details of Brown-Out detection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bodrpm{}; 
        ///Brown-Out Global Disable. When BOGD is 1, the Brown-Out Detect circuitry is fully disabled at all times, and does not consume power. When 0, the Brown-Out Detect circuitry is enabled. See the System Control Block chapter for details of Brown-Out detection. Note: the Brown-Out Reset Disable (BORD, in this register) and the Brown-Out Interrupt (xx) must be disabled when software changes the value of this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bogd{}; 
        ///Brown-Out Reset Disable. When BORD is 1, the BOD will not reset the device when the VDD(REG)(3V3) voltage dips goes below the BOD reset trip level. The Brown-Out interrupt is not affected. When BORD is 0, the BOD reset is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bord{}; 
        ///Sleep Mode entry flag. Set when the Sleep mode is successfully entered. Cleared by software writing a one to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> smflag{}; 
        ///Deep Sleep entry flag. Set when the Deep Sleep mode is successfully entered. Cleared by software writing a one to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dsflag{}; 
        ///Power-down entry flag. Set when the Power-down mode is successfully entered. Cleared by software writing a one to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdflag{}; 
        ///Deep Power-down entry flag. Set when the Deep Power-down mode is successfully entered. Cleared by software writing a one to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dpdflag{}; 
    }
    namespace Nonepconp{    ///<Power Control for Peripherals Register
        using Addr = Register::Address<0x400fc0c4,0x10100821,0,unsigned>;
        ///Timer/Counter 0 power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pctim0{}; 
        ///Timer/Counter 1 power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pctim1{}; 
        ///UART0 power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pcuart0{}; 
        ///UART1 power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pcuart1{}; 
        ///PWM1 power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pcpwm1{}; 
        ///The I2C0 interface power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pci2c0{}; 
        ///The SPI interface power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pcspi{}; 
        ///The RTC power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pcrtc{}; 
        ///The SSP 1 interface power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pcssp1{}; 
        ///A/D converter (ADC) power/clock control bit. Note: Clear the PDN bit in the AD0CR before clearing this bit, and set this bit before setting PDN.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pcadc{}; 
        ///CAN Controller 1 power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pccan1{}; 
        ///CAN Controller 2 power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pccan2{}; 
        ///Power/clock control bit for IOCON, GPIO, and GPIO interrupts.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pcgpio{}; 
        ///Repetitive Interrupt Timer power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pcrit{}; 
        ///Motor Control PWM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pcmcpwm{}; 
        ///Quadrature Encoder Interface power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pcqei{}; 
        ///The I2C1 interface power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pci2c1{}; 
        ///The SSP0 interface power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pcssp0{}; 
        ///Timer 2 power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pctim2{}; 
        ///Timer 3 power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pctim3{}; 
        ///UART 2 power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pcuart2{}; 
        ///UART 3 power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pcuart3{}; 
        ///I2C interface 2 power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pci2c2{}; 
        ///I2S interface power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pci2s{}; 
        ///GPDMA function power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pcgpdma{}; 
        ///Ethernet block power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pcenet{}; 
        ///USB interface power/clock control bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pcusb{}; 
    }
    namespace Nonecclkcfg{    ///<CPU Clock Configuration Register
        using Addr = Register::Address<0x400fc104,0xffffff00,0,unsigned>;
        ///Selects the divide value for creating the CPU clock (CCLK) from the PLL0 output. 0 = pllclk is divided by 1 to produce the CPU clock. This setting is not allowed when the PLL0 is connected, because the rate would always be greater than the maximum allowed CPU clock. 1 = pllclk is divided by 2 to produce the CPU clock. This setting is not allowed when the PLL0 is connected, because the rate would always be greater than the maximum allowed CPU clock. 2 = pllclk is divided by 3 to produce the CPU clock. 3 = pllclk is divided by 4 to produce the CPU clock. ... 255 = pllclk is divided by 256 to produce the CPU clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cclksel{}; 
    }
    namespace Noneusbclkcfg{    ///<USB Clock Configuration Register
        using Addr = Register::Address<0x400fc108,0xfffffff0,0,unsigned>;
        ///Selects the divide value for creating the USB clock from the PLL0 output. Only the values shown below can produce even number multiples of 48 MHz from the PLL0 output.  Warning: Improper setting of this value will result in incorrect operation of the USB interface. 5 = PLL0 output is divided by 6. PLL0 output must be 288 MHz. 7 = PLL0 output is divided by 8. PLL0 output must be 384 MHz. 9 = PLL0 output is divided by 10. PLL0 output must be 480 MHz.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> usbsel{}; 
    }
    namespace Noneclksrcsel{    ///<Clock Source Select Register
        using Addr = Register::Address<0x400fc10c,0xfffffffc,0,unsigned>;
        ///Selects the clock source for PLL0 as follows. Warning: Improper setting of this value, or an incorrect sequence of changing this value may result in incorrect operation of the device.
        enum class ClksrcVal {
            selectsTheInternal=0x00000000,     ///<Selects the Internal RC oscillator as the PLL0 clock source (default).
            selectsTheMainOsc=0x00000001,     ///<Selects the main oscillator as the PLL0 clock source.  Select the main oscillator as PLL0 clock source if the PLL0 clock output is used for USB or for CAN with baudrates > 100 kBit/s.
            selectsTheRtcOsci=0x00000002,     ///<Selects the RTC oscillator as the PLL0 clock source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ClksrcVal> clksrc{}; 
        namespace ClksrcValC{
            constexpr Register::FieldValue<decltype(clksrc)::Type,ClksrcVal::selectsTheInternal> selectsTheInternal{};
            constexpr Register::FieldValue<decltype(clksrc)::Type,ClksrcVal::selectsTheMainOsc> selectsTheMainOsc{};
            constexpr Register::FieldValue<decltype(clksrc)::Type,ClksrcVal::selectsTheRtcOsci> selectsTheRtcOsci{};
        }
    }
    namespace Nonecansleepclr{    ///<Allows clearing the current CAN channel sleep state as well as reading that state.
        using Addr = Register::Address<0x400fc110,0xfffffff9,0,unsigned>;
        ///Sleep status and control for CAN channel 1. Read: when 1, indicates that CAN channel 1 is in the sleep mode. Write: writing a 1 causes clocks to be restored to CAN channel 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> can1sleep{}; 
        ///Sleep status and control for CAN channel 2. Read: when 1, indicates that CAN channel 2 is in the sleep mode. Write: writing a 1 causes clocks to be restored to CAN channel 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> can2sleep{}; 
    }
    namespace Nonecanwakeflags{    ///<Allows reading the wake-up state of the CAN channels.
        using Addr = Register::Address<0x400fc114,0xfffffff9,0,unsigned>;
        ///Wake-up status for CAN channel 1. Read: when 1, indicates that a falling edge has occurred on the receive data line of CAN channel 1. Write: writing a 1 clears this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> can1wake{}; 
        ///Wake-up status for CAN channel 2. Read: when 1, indicates that a falling edge has occurred on the receive data line of CAN channel 2. Write: writing a 1 clears this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> can2wake{}; 
    }
    namespace Noneextint{    ///<External Interrupt Flag Register
        using Addr = Register::Address<0x400fc140,0xfffffff0,0,unsigned>;
        ///In level-sensitive mode, this bit is set if the EINT0 function is selected for its pin, and the pin is in its active state. In edge-sensitive mode, this bit is set if the EINT0 function is selected for its pin, and the selected edge occurs on the pin. This bit is cleared by writing a one to it, except in level sensitive mode when the pin is in its active state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eint0{}; 
        ///In level-sensitive mode, this bit is set if the EINT1 function is selected for its pin, and the pin is in its active state. In edge-sensitive mode, this bit is set if the EINT1 function is selected for its pin, and the selected edge occurs on the pin. This bit is cleared by writing a one to it, except in level sensitive mode when the pin is in its active state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eint1{}; 
        ///In level-sensitive mode, this bit is set if the EINT2 function is selected for its pin, and the pin is in its active state. In edge-sensitive mode, this bit is set if the EINT2 function is selected for its pin, and the selected edge occurs on the pin. This bit is cleared by writing a one to it, except in level sensitive mode when the pin is in its active state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eint2{}; 
        ///In level-sensitive mode, this bit is set if the EINT3 function is selected for its pin, and the pin is in its active state. In edge-sensitive mode, this bit is set if the EINT3 function is selected for its pin, and the selected edge occurs on the pin. This bit is cleared by writing a one to it, except in level sensitive mode when the pin is in its active state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eint3{}; 
    }
    namespace Noneextmode{    ///<External Interrupt Mode register
        using Addr = Register::Address<0x400fc148,0xfffffff0,0,unsigned>;
        ///External interrupt 0 EINT0 mode.
        enum class Extmode0Val {
            levelSensitive=0x00000000,     ///<Level-sensitive. Level-sensitivity is selected for EINT0.
            edgeSensitive=0x00000001,     ///<Edge-sensitive. EINT0 is edge sensitive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Extmode0Val> extmode0{}; 
        namespace Extmode0ValC{
            constexpr Register::FieldValue<decltype(extmode0)::Type,Extmode0Val::levelSensitive> levelSensitive{};
            constexpr Register::FieldValue<decltype(extmode0)::Type,Extmode0Val::edgeSensitive> edgeSensitive{};
        }
        ///External interrupt 1 EINT1 mode.
        enum class Extmode1Val {
            levelSensitive=0x00000000,     ///<Level-sensitive. Level-sensitivity is selected for EINT1.
            edgeSensitive=0x00000001,     ///<Edge-sensitive. EINT1 is edge sensitive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Extmode1Val> extmode1{}; 
        namespace Extmode1ValC{
            constexpr Register::FieldValue<decltype(extmode1)::Type,Extmode1Val::levelSensitive> levelSensitive{};
            constexpr Register::FieldValue<decltype(extmode1)::Type,Extmode1Val::edgeSensitive> edgeSensitive{};
        }
        ///External interrupt 2 EINT2 mode.
        enum class Extmode2Val {
            levelSensitive=0x00000000,     ///<Level-sensitive. Level-sensitivity is selected for EINT2.
            edgeSensitive=0x00000001,     ///<Edge-sensitive. EINT2 is edge sensitive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Extmode2Val> extmode2{}; 
        namespace Extmode2ValC{
            constexpr Register::FieldValue<decltype(extmode2)::Type,Extmode2Val::levelSensitive> levelSensitive{};
            constexpr Register::FieldValue<decltype(extmode2)::Type,Extmode2Val::edgeSensitive> edgeSensitive{};
        }
        ///External interrupt 3 EINT3 mode.
        enum class Extmode3Val {
            levelSensitive=0x00000000,     ///<Level-sensitive. Level-sensitivity is selected for EINT3.
            edgeSensitive=0x00000001,     ///<Edge-sensitive. EINT3 is edge sensitive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Extmode3Val> extmode3{}; 
        namespace Extmode3ValC{
            constexpr Register::FieldValue<decltype(extmode3)::Type,Extmode3Val::levelSensitive> levelSensitive{};
            constexpr Register::FieldValue<decltype(extmode3)::Type,Extmode3Val::edgeSensitive> edgeSensitive{};
        }
    }
    namespace Noneextpolar{    ///<External Interrupt Polarity Register
        using Addr = Register::Address<0x400fc14c,0xfffffff0,0,unsigned>;
        ///External interrupt 0 EINT0 polarity.
        enum class Extpolar0Val {
            fallingEdge=0x00000000,     ///<Falling edge. EINT0 is low-active or falling-edge sensitive (depending on EXTMODE0).
            risingEdge=0x00000001,     ///<Rising edge. EINT0 is high-active or rising-edge sensitive (depending on EXTMODE0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Extpolar0Val> extpolar0{}; 
        namespace Extpolar0ValC{
            constexpr Register::FieldValue<decltype(extpolar0)::Type,Extpolar0Val::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(extpolar0)::Type,Extpolar0Val::risingEdge> risingEdge{};
        }
        ///External interrupt 1 EINT1 polarity.
        enum class Extpolar1Val {
            fallingEdge=0x00000000,     ///<Falling edge. EINT1 is low-active or falling-edge sensitive (depending on EXTMODE1).
            risingEdge=0x00000001,     ///<Rising edge. EINT1 is high-active or rising-edge sensitive (depending on EXTMODE1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Extpolar1Val> extpolar1{}; 
        namespace Extpolar1ValC{
            constexpr Register::FieldValue<decltype(extpolar1)::Type,Extpolar1Val::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(extpolar1)::Type,Extpolar1Val::risingEdge> risingEdge{};
        }
        ///External interrupt 2 EINT2 polarity.
        enum class Extpolar2Val {
            fallingEdge=0x00000000,     ///<Falling edge. EINT2 is low-active or falling-edge sensitive (depending on EXTMODE2).
            risingEdge=0x00000001,     ///<Rising edge. EINT2 is high-active or rising-edge sensitive (depending on EXTMODE2).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Extpolar2Val> extpolar2{}; 
        namespace Extpolar2ValC{
            constexpr Register::FieldValue<decltype(extpolar2)::Type,Extpolar2Val::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(extpolar2)::Type,Extpolar2Val::risingEdge> risingEdge{};
        }
        ///External interrupt 3 EINT3 polarity.
        enum class Extpolar3Val {
            fallingEdge=0x00000000,     ///<Falling edge. EINT3 is low-active or falling-edge sensitive (depending on EXTMODE3).
            risingEdge=0x00000001,     ///<Rising edge. EINT3 is high-active or rising-edge sensitive (depending on EXTMODE3).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Extpolar3Val> extpolar3{}; 
        namespace Extpolar3ValC{
            constexpr Register::FieldValue<decltype(extpolar3)::Type,Extpolar3Val::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(extpolar3)::Type,Extpolar3Val::risingEdge> risingEdge{};
        }
    }
    namespace Nonersid{    ///<Reset Source Identification Register
        using Addr = Register::Address<0x400fc180,0xfffffff0,0,unsigned>;
        ///Assertion of the POR signal sets this bit, and clears all of the other bits in this register. But if another Reset signal (e.g., External Reset) remains asserted after the POR signal is negated, then its bit is set. This bit is not affected by any of the other sources of Reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> por{}; 
        ///Assertion of the RESET signal sets this bit. This bit is cleared only by software or POR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extr{}; 
        ///This bit is set when the Watchdog Timer times out and the WDTRESET bit in the Watchdog Mode Register is 1. This bit is cleared only by software or POR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdtr{}; 
        ///This bit is set when the VDD(REG)(3V3) voltage reaches a level below the BOD reset trip level (typically 1.85 V under nominal room temperature conditions). If the VDD(REG)(3V3) voltage dips from the normal operating range to below the BOD reset trip level and recovers, the BODR bit will be set to 1. If the VDD(REG)(3V3) voltage dips from the normal operating range to below the BOD reset trip level and continues to decline to the level at which POR is asserted (nominally 1 V), the BODR bit is cleared. If the VDD(REG)(3V3) voltage rises continuously from below 1 V to a level above the BOD reset trip level, the BODR will be set to 1. This bit is cleared only by software or POR. Note: Only in the case where a reset occurs and the POR = 0, the BODR bit indicates if the VDD(REG)(3V3) voltage was below the BOD reset trip level or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bodr{}; 
    }
    namespace Nonescs{    ///<System control and status
        using Addr = Register::Address<0x400fc1a0,0xffffff8f,0,unsigned>;
        ///Main oscillator range select.
        enum class OscrangeVal {
            low=0x00000000,     ///<Low. The frequency range of the main oscillator is 1 MHz to 20 MHz.
            high=0x00000001,     ///<High. The frequency range of the main oscillator is 15 MHz to 25 MHz.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OscrangeVal> oscrange{}; 
        namespace OscrangeValC{
            constexpr Register::FieldValue<decltype(oscrange)::Type,OscrangeVal::low> low{};
            constexpr Register::FieldValue<decltype(oscrange)::Type,OscrangeVal::high> high{};
        }
        ///Main oscillator enable.
        enum class OscenVal {
            disabled=0x00000000,     ///<Disabled. The main oscillator is disabled.
            enabled=0x00000001,     ///<Enabled.The main oscillator is enabled, and will start up if the correct external circuitry is connected to the XTAL1 and XTAL2 pins.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OscenVal> oscen{}; 
        namespace OscenValC{
            constexpr Register::FieldValue<decltype(oscen)::Type,OscenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(oscen)::Type,OscenVal::enabled> enabled{};
        }
        ///Main oscillator status.
        enum class OscstatVal {
            notReady=0x00000000,     ///<Not ready. The main oscillator is not ready to be used as a clock source.
            ready=0x00000001,     ///<Ready. The main oscillator is ready to be used as a clock source. The main oscillator must be enabled via the OSCEN bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,OscstatVal> oscstat{}; 
        namespace OscstatValC{
            constexpr Register::FieldValue<decltype(oscstat)::Type,OscstatVal::notReady> notReady{};
            constexpr Register::FieldValue<decltype(oscstat)::Type,OscstatVal::ready> ready{};
        }
    }
    namespace Nonepclksel0{    ///<Peripheral Clock Selection register 0.
        using Addr = Register::Address<0x400fc1a8,0x000c0c00,0,unsigned>;
        ///Peripheral clock selection for WDT.
        enum class PclkwdtVal {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PclkwdtVal> pclkWdt{}; 
        namespace PclkwdtValC{
            constexpr Register::FieldValue<decltype(pclkWdt)::Type,PclkwdtVal::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkWdt)::Type,PclkwdtVal::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkWdt)::Type,PclkwdtVal::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkWdt)::Type,PclkwdtVal::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for TIMER0.
        enum class Pclktimer0Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pclktimer0Val> pclkTimer0{}; 
        namespace Pclktimer0ValC{
            constexpr Register::FieldValue<decltype(pclkTimer0)::Type,Pclktimer0Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkTimer0)::Type,Pclktimer0Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkTimer0)::Type,Pclktimer0Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkTimer0)::Type,Pclktimer0Val::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for TIMER1.
        enum class Pclktimer1Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pclktimer1Val> pclkTimer1{}; 
        namespace Pclktimer1ValC{
            constexpr Register::FieldValue<decltype(pclkTimer1)::Type,Pclktimer1Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkTimer1)::Type,Pclktimer1Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkTimer1)::Type,Pclktimer1Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkTimer1)::Type,Pclktimer1Val::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for UART0.
        enum class Pclkuart0Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pclkuart0Val> pclkUart0{}; 
        namespace Pclkuart0ValC{
            constexpr Register::FieldValue<decltype(pclkUart0)::Type,Pclkuart0Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkUart0)::Type,Pclkuart0Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkUart0)::Type,Pclkuart0Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkUart0)::Type,Pclkuart0Val::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for UART1.
        enum class Pclkuart1Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pclkuart1Val> pclkUart1{}; 
        namespace Pclkuart1ValC{
            constexpr Register::FieldValue<decltype(pclkUart1)::Type,Pclkuart1Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkUart1)::Type,Pclkuart1Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkUart1)::Type,Pclkuart1Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkUart1)::Type,Pclkuart1Val::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for PWM1.
        enum class Pclkpwm1Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Pclkpwm1Val> pclkPwm1{}; 
        namespace Pclkpwm1ValC{
            constexpr Register::FieldValue<decltype(pclkPwm1)::Type,Pclkpwm1Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkPwm1)::Type,Pclkpwm1Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkPwm1)::Type,Pclkpwm1Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkPwm1)::Type,Pclkpwm1Val::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for I2C0.
        enum class Pclki2c0Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pclki2c0Val> pclkI2c0{}; 
        namespace Pclki2c0ValC{
            constexpr Register::FieldValue<decltype(pclkI2c0)::Type,Pclki2c0Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkI2c0)::Type,Pclki2c0Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkI2c0)::Type,Pclki2c0Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkI2c0)::Type,Pclki2c0Val::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for SPI.
        enum class PclkspiVal {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PclkspiVal> pclkSpi{}; 
        namespace PclkspiValC{
            constexpr Register::FieldValue<decltype(pclkSpi)::Type,PclkspiVal::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkSpi)::Type,PclkspiVal::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkSpi)::Type,PclkspiVal::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkSpi)::Type,PclkspiVal::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for SSP1.
        enum class Pclkssp1Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Pclkssp1Val> pclkSsp1{}; 
        namespace Pclkssp1ValC{
            constexpr Register::FieldValue<decltype(pclkSsp1)::Type,Pclkssp1Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkSsp1)::Type,Pclkssp1Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkSsp1)::Type,Pclkssp1Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkSsp1)::Type,Pclkssp1Val::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for DAC.
        enum class PclkdacVal {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,PclkdacVal> pclkDac{}; 
        namespace PclkdacValC{
            constexpr Register::FieldValue<decltype(pclkDac)::Type,PclkdacVal::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkDac)::Type,PclkdacVal::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkDac)::Type,PclkdacVal::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkDac)::Type,PclkdacVal::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for ADC.
        enum class PclkadcVal {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,PclkadcVal> pclkAdc{}; 
        namespace PclkadcValC{
            constexpr Register::FieldValue<decltype(pclkAdc)::Type,PclkadcVal::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkAdc)::Type,PclkadcVal::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkAdc)::Type,PclkadcVal::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkAdc)::Type,PclkadcVal::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for CAN1.PCLK_CAN1 and PCLK_CAN2 must have the same PCLK divide value when the CAN function is used.
        enum class Pclkcan1Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv6=0x00000003,     ///<CCLK div 6. PCLK_peripheral = CCLK/6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,Pclkcan1Val> pclkCan1{}; 
        namespace Pclkcan1ValC{
            constexpr Register::FieldValue<decltype(pclkCan1)::Type,Pclkcan1Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkCan1)::Type,Pclkcan1Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkCan1)::Type,Pclkcan1Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkCan1)::Type,Pclkcan1Val::cclkDiv6> cclkDiv6{};
        }
        ///Peripheral clock selection for CAN2.PCLK_CAN1 and PCLK_CAN2 must have the same PCLK divide value when the CAN function is used.
        enum class Pclkcan2Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv6=0x00000003,     ///<CCLK div 6. PCLK_peripheral = CCLK/6,
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,Pclkcan2Val> pclkCan2{}; 
        namespace Pclkcan2ValC{
            constexpr Register::FieldValue<decltype(pclkCan2)::Type,Pclkcan2Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkCan2)::Type,Pclkcan2Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkCan2)::Type,Pclkcan2Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkCan2)::Type,Pclkcan2Val::cclkDiv6> cclkDiv6{};
        }
        ///Peripheral clock selection for CAN acceptance filtering.PCLK_CAN1 and PCLK_CAN2 must have the same PCLK divide value when the CAN function is used.
        enum class PclkacfVal {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv6=0x00000003,     ///<CCLK div 6. PCLK_peripheral = CCLK/6
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,PclkacfVal> pclkAcf{}; 
        namespace PclkacfValC{
            constexpr Register::FieldValue<decltype(pclkAcf)::Type,PclkacfVal::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkAcf)::Type,PclkacfVal::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkAcf)::Type,PclkacfVal::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkAcf)::Type,PclkacfVal::cclkDiv6> cclkDiv6{};
        }
    }
    namespace Nonepclksel1{    ///<Peripheral Clock Selection register 1.
        using Addr = Register::Address<0x400fc1ac,0x03000300,0,unsigned>;
        ///Peripheral clock selection for the Quadrature Encoder Interface.
        enum class PclkqeiVal {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PclkqeiVal> pclkQei{}; 
        namespace PclkqeiValC{
            constexpr Register::FieldValue<decltype(pclkQei)::Type,PclkqeiVal::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkQei)::Type,PclkqeiVal::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkQei)::Type,PclkqeiVal::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkQei)::Type,PclkqeiVal::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for GPIO interrupts.
        enum class PclkgpiointVal {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PclkgpiointVal> pclkGpioint{}; 
        namespace PclkgpiointValC{
            constexpr Register::FieldValue<decltype(pclkGpioint)::Type,PclkgpiointVal::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkGpioint)::Type,PclkgpiointVal::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkGpioint)::Type,PclkgpiointVal::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkGpioint)::Type,PclkgpiointVal::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for the Pin Connect block.
        enum class PclkpcbVal {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PclkpcbVal> pclkPcb{}; 
        namespace PclkpcbValC{
            constexpr Register::FieldValue<decltype(pclkPcb)::Type,PclkpcbVal::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkPcb)::Type,PclkpcbVal::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkPcb)::Type,PclkpcbVal::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkPcb)::Type,PclkpcbVal::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for I2C1.
        enum class Pclki2c1Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pclki2c1Val> pclkI2c1{}; 
        namespace Pclki2c1ValC{
            constexpr Register::FieldValue<decltype(pclkI2c1)::Type,Pclki2c1Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkI2c1)::Type,Pclki2c1Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkI2c1)::Type,Pclki2c1Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkI2c1)::Type,Pclki2c1Val::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for SSP0.
        enum class Pclkssp0Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pclkssp0Val> pclkSsp0{}; 
        namespace Pclkssp0ValC{
            constexpr Register::FieldValue<decltype(pclkSsp0)::Type,Pclkssp0Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkSsp0)::Type,Pclkssp0Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkSsp0)::Type,Pclkssp0Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkSsp0)::Type,Pclkssp0Val::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for TIMER2.
        enum class Pclktimer2Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Pclktimer2Val> pclkTimer2{}; 
        namespace Pclktimer2ValC{
            constexpr Register::FieldValue<decltype(pclkTimer2)::Type,Pclktimer2Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkTimer2)::Type,Pclktimer2Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkTimer2)::Type,Pclktimer2Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkTimer2)::Type,Pclktimer2Val::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for TIMER3.
        enum class Pclktimer3Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pclktimer3Val> pclkTimer3{}; 
        namespace Pclktimer3ValC{
            constexpr Register::FieldValue<decltype(pclkTimer3)::Type,Pclktimer3Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkTimer3)::Type,Pclktimer3Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkTimer3)::Type,Pclktimer3Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkTimer3)::Type,Pclktimer3Val::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for UART2.
        enum class Pclkuart2Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Pclkuart2Val> pclkUart2{}; 
        namespace Pclkuart2ValC{
            constexpr Register::FieldValue<decltype(pclkUart2)::Type,Pclkuart2Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkUart2)::Type,Pclkuart2Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkUart2)::Type,Pclkuart2Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkUart2)::Type,Pclkuart2Val::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for UART3.
        enum class Pclkuart3Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Pclkuart3Val> pclkUart3{}; 
        namespace Pclkuart3ValC{
            constexpr Register::FieldValue<decltype(pclkUart3)::Type,Pclkuart3Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkUart3)::Type,Pclkuart3Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkUart3)::Type,Pclkuart3Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkUart3)::Type,Pclkuart3Val::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for I2C2.
        enum class Pclki2c2Val {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Pclki2c2Val> pclkI2c2{}; 
        namespace Pclki2c2ValC{
            constexpr Register::FieldValue<decltype(pclkI2c2)::Type,Pclki2c2Val::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkI2c2)::Type,Pclki2c2Val::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkI2c2)::Type,Pclki2c2Val::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkI2c2)::Type,Pclki2c2Val::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for I2S.
        enum class Pclki2sVal {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,Pclki2sVal> pclkI2s{}; 
        namespace Pclki2sValC{
            constexpr Register::FieldValue<decltype(pclkI2s)::Type,Pclki2sVal::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkI2s)::Type,Pclki2sVal::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkI2s)::Type,Pclki2sVal::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkI2s)::Type,Pclki2sVal::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for Repetitive Interrupt Timer.
        enum class PclkritVal {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,PclkritVal> pclkRit{}; 
        namespace PclkritValC{
            constexpr Register::FieldValue<decltype(pclkRit)::Type,PclkritVal::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkRit)::Type,PclkritVal::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkRit)::Type,PclkritVal::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkRit)::Type,PclkritVal::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for the System Control block.
        enum class PclksysconVal {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,PclksysconVal> pclkSyscon{}; 
        namespace PclksysconValC{
            constexpr Register::FieldValue<decltype(pclkSyscon)::Type,PclksysconVal::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkSyscon)::Type,PclksysconVal::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkSyscon)::Type,PclksysconVal::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkSyscon)::Type,PclksysconVal::cclkDiv8> cclkDiv8{};
        }
        ///Peripheral clock selection for the Motor Control PWM.
        enum class PclkmcVal {
            cclkDiv4=0x00000000,     ///<CCLK div 4. PCLK_peripheral = CCLK/4
            cclk=0x00000001,     ///<CCLK. PCLK_peripheral = CCLK
            cclkDiv2=0x00000002,     ///<CCLK div 2. PCLK_peripheral = CCLK/2
            cclkDiv8=0x00000003,     ///<CCLK div 8. PCLK_peripheral = CCLK/8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,PclkmcVal> pclkMc{}; 
        namespace PclkmcValC{
            constexpr Register::FieldValue<decltype(pclkMc)::Type,PclkmcVal::cclkDiv4> cclkDiv4{};
            constexpr Register::FieldValue<decltype(pclkMc)::Type,PclkmcVal::cclk> cclk{};
            constexpr Register::FieldValue<decltype(pclkMc)::Type,PclkmcVal::cclkDiv2> cclkDiv2{};
            constexpr Register::FieldValue<decltype(pclkMc)::Type,PclkmcVal::cclkDiv8> cclkDiv8{};
        }
    }
    namespace Noneusbintst{    ///<USB Interrupt Status
        using Addr = Register::Address<0x400fc1c0,0x7ffffe80,0,unsigned>;
        ///Low priority interrupt line status. This bit is read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbIntReqLp{}; 
        ///High priority interrupt line status. This bit is read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbIntReqHp{}; 
        ///DMA interrupt line status. This bit is read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbIntReqDma{}; 
        ///USB host interrupt line status. This bit is read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbHostInt{}; 
        ///External ATX interrupt line status. This bit is read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbAtxInt{}; 
        ///OTG interrupt line status. This bit is read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usbOtgInt{}; 
        ///I2C module interrupt line status. This bit is read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> usbI2cInt{}; 
        ///USB need clock indicator. This bit is read-only. This bit is set to 1 when USB activity or a change of state on the USB data pins is detected, and it indicates that a PLL supplied clock of 48 MHz is needed. Once USB_NEED_CLK becomes one, it resets to zero 5 ms after the last packet has been received/sent, or 2 ms after the Suspend Change (SUS_CH) interrupt has occurred. A change of this bit from 0 to 1 can wake up the microcontroller if activity on the USB bus is selected to wake up the part from the Power-down mode (see Section 4.7.9 Wake-up from Reduced Power Modes for details). Also see Section 4.5.8 PLLs and Power-down mode and Section 4.7.10 Power Control for Peripherals register (PCONP - 0x400F C0C4) for considerations about the PLL and invoking the Power-down mode. This bit is read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> usbNeedClk{}; 
        ///Enable all USB interrupts. When this bit is cleared, the NVIC does not see the ORed output of the USB interrupt lines.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> enUsbInts{}; 
    }
    namespace Nonedmacreqsel{    ///<Selects between alternative requests on DMA channels 0 through 7 and 10 through 15
        using Addr = Register::Address<0x400fc1c4,0xffffff00,0,unsigned>;
        ///Selects the DMA request for GPDMA input 8: 0 - uart0 tx  1 - Timer 0 match 0 is selected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmasel08{}; 
        ///Selects the DMA request for GPDMA input 9: 0 - uart0 rx 1 - Timer 0 match 1 is selected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmasel09{}; 
        ///Selects the DMA request for GPDMA input 10: 0 - uart1 tx  is selected. 1 - Timer 1 match 0 is selected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmasel10{}; 
        ///Selects the DMA request for GPDMA input 11: 0 - uart1 rx  is selected. 1 - Timer 1 match 1 is selected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmasel11{}; 
        ///Selects the DMA request for GPDMA input 12: 0 - uart2 tx  is selected. 1 - Timer 2 match 0 is selected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmasel12{}; 
        ///Selects the DMA request for GPDMA input 13: 0 - uart2 rx  is selected. 1 - Timer 2 match 1 is selected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmasel13{}; 
        ///Selects the DMA request for GPDMA input 14: 0 - uart3 tx  is selected. 1 - I2S channel 0 is selected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dmasel14{}; 
        ///Selects the DMA request for GPDMA input 15: 0 - uart3 rx is selected. 1 - I2S channel 1 is selected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmasel15{}; 
    }
    namespace Noneclkoutcfg{    ///<Clock Output Configuration Register
        using Addr = Register::Address<0x400fc1c8,0xfffffc00,0,unsigned>;
        ///Selects the clock source for the CLKOUT function. Other values are reserved. Do not use.
        enum class ClkoutselVal {
            selectsTheCpuCloc=0x00000000,     ///<Selects the CPU clock as the CLKOUT source.
            selectsTheMainOsc=0x00000001,     ///<Selects the main oscillator as the CLKOUT source.
            selectsTheInternal=0x00000002,     ///<Selects the Internal RC oscillator as the CLKOUT source.
            selectsTheUsbCloc=0x00000003,     ///<Selects the USB clock as the CLKOUT source.
            selectsTheRtcOsci=0x00000004,     ///<Selects the RTC oscillator as the CLKOUT source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,ClkoutselVal> clkoutsel{}; 
        namespace ClkoutselValC{
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::selectsTheCpuCloc> selectsTheCpuCloc{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::selectsTheMainOsc> selectsTheMainOsc{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::selectsTheInternal> selectsTheInternal{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::selectsTheUsbCloc> selectsTheUsbCloc{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::selectsTheRtcOsci> selectsTheRtcOsci{};
        }
        ///Integer value to divide the output clock by, minus one. 0 = Clock is divided by 1 1 = Clock is divided by 2. 2 = Clock is divided by 3. ... 15 = Clock is divided by 16.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> clkoutdiv{}; 
        ///CLKOUT enable control, allows switching the CLKOUT source without glitches. Clear to stop CLKOUT on the next falling edge. Set to enable CLKOUT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clkoutEn{}; 
        ///CLKOUT activity indication. Reads as 1 when CLKOUT is enabled. Read as 0 when CLKOUT has been disabled via the CLKOUT_EN bit and the clock has completed being stopped.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clkoutAct{}; 
    }
}
