#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System and clock control
    namespace Noneflashcfg{    ///<Flash Accelerator Configuration Register. Controls flash access timing.
        using Addr = Register::Address<0x400fc000,0xffff0fff,0,unsigned>;
        ///Flash access time. The value of this field plus 1 gives the number of CPU clocks used for a flash access. Warning: improper setting of this value may result in incorrect operation of the device. All other values are reserved.
        enum class flashtimVal {
            flashAccessesUse1=0x00000000,     ///<Flash accesses use 1 CPU clock. Use for up to 20 MHz CPU clock with power boost off.
            flashAccessesUse2=0x00000001,     ///<Flash accesses use 2 CPU clocks. Use for up to 40 MHz CPU clock with power boost off.
            flashAccessesUse3=0x00000002,     ///<Flash accesses use 3 CPU clocks. Use for up to 60 MHz CPU clock with power boost off.
            flashAccessesUse4=0x00000003,     ///<Flash accesses use 4 CPU clocks. Use for up to 80 MHz CPU clock with power boost off. Use this setting for operation from 100 to 120 MHz operation with power boost on.
            flashAccessesUse5=0x00000004,     ///<Flash accesses use 5 CPU clocks. Use for up to 100 MHz CPU clock with power boost off.
            flashAccessesUse6=0x00000005,     ///<Flash accesses use 6 CPU clocks. Safe setting for any allowed conditions.
        };
        namespace flashtimValC{
            constexpr MPL::Value<flashtimVal,flashtimVal::flashAccessesUse1> flashAccessesUse1{};
            constexpr MPL::Value<flashtimVal,flashtimVal::flashAccessesUse2> flashAccessesUse2{};
            constexpr MPL::Value<flashtimVal,flashtimVal::flashAccessesUse3> flashAccessesUse3{};
            constexpr MPL::Value<flashtimVal,flashtimVal::flashAccessesUse4> flashAccessesUse4{};
            constexpr MPL::Value<flashtimVal,flashtimVal::flashAccessesUse5> flashAccessesUse5{};
            constexpr MPL::Value<flashtimVal,flashtimVal::flashAccessesUse6> flashAccessesUse6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,flashtimVal> flashtim{}; 
    }
    namespace Nonepll0con{    ///<PLL0 Control register
        using Addr = Register::Address<0x400fc080,0xfffffffe,0,unsigned>;
        ///PLL Enable. When one, and after a valid PLL feed, this bit will activate the related PLL and allow it to lock to the requested frequency. See PLLSTAT register, Table 12.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> plle{}; 
    }
    namespace Nonepll1con{    ///<PLL0 Control register
        using Addr = Register::Address<0x400fc0a0,0xfffffffe,0,unsigned>;
        ///PLL Enable. When one, and after a valid PLL feed, this bit will activate the related PLL and allow it to lock to the requested frequency. See PLLSTAT register, Table 12.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> plle{}; 
    }
    namespace Nonepll0cfg{    ///<PLL0 Configuration register
        using Addr = Register::Address<0x400fc084,0xffffff80,0,unsigned>;
        ///PLL Multiplier value. Supplies the value "M" in the PLL frequency calculations. Note: For details on selecting the right value for MSEL see Section 3.10.4.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> msel{}; 
        ///PLL Divider value. Supplies the value "P" in the PLL frequency calculations. Note: For details on selecting the right value for PSEL see Section 3.10.4.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> psel{}; 
    }
    namespace Nonepll1cfg{    ///<PLL0 Configuration register
        using Addr = Register::Address<0x400fc0a4,0xffffff80,0,unsigned>;
        ///PLL Multiplier value. Supplies the value "M" in the PLL frequency calculations. Note: For details on selecting the right value for MSEL see Section 3.10.4.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> msel{}; 
        ///PLL Divider value. Supplies the value "P" in the PLL frequency calculations. Note: For details on selecting the right value for PSEL see Section 3.10.4.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> psel{}; 
    }
    namespace Nonepll0stat{    ///<PLL0 Status register
        using Addr = Register::Address<0x400fc088,0xfffffa80,0,unsigned>;
        ///Read-back for the PLL Multiplier value. This is the value currently used by the related PLL.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> msel{}; 
        ///Read-back for the PLL Divider value. This is the value currently used by the related PLL.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> psel{}; 
        ///Read-back for the PLL Enable bit. When one, the related PLL is currently activated. When zero, the related PLL is turned off. This bit is automatically cleared when Power-down mode is activated.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> plleStat{}; 
        ///Reflects the PLL Lock status. When zero, the related PLL is not locked. When one, the related PLL is locked onto the requested frequency.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> plock{}; 
    }
    namespace Nonepll1stat{    ///<PLL0 Status register
        using Addr = Register::Address<0x400fc0a8,0xfffffa80,0,unsigned>;
        ///Read-back for the PLL Multiplier value. This is the value currently used by the related PLL.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> msel{}; 
        ///Read-back for the PLL Divider value. This is the value currently used by the related PLL.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> psel{}; 
        ///Read-back for the PLL Enable bit. When one, the related PLL is currently activated. When zero, the related PLL is turned off. This bit is automatically cleared when Power-down mode is activated.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> plleStat{}; 
        ///Reflects the PLL Lock status. When zero, the related PLL is not locked. When one, the related PLL is locked onto the requested frequency.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> plock{}; 
    }
    namespace Nonepll0feed{    ///<PLL0 Feed register
        using Addr = Register::Address<0x400fc08c,0xffffff00,0,unsigned>;
        ///The PLL feed sequence must be written to this register in order for the related PLL's configuration and control register changes to take effect.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pllfeed{}; 
    }
    namespace Nonepll1feed{    ///<PLL0 Feed register
        using Addr = Register::Address<0x400fc0ac,0xffffff00,0,unsigned>;
        ///The PLL feed sequence must be written to this register in order for the related PLL's configuration and control register changes to take effect.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pllfeed{}; 
    }
    namespace Nonepcon{    ///<Power Control register
        using Addr = Register::Address<0x400fc0c0,0xfffff0e0,0,unsigned>;
        ///Power mode control bit 0. This bit controls entry to the Power-down mode. See Section 3.3.6.1 below for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0{}; 
        ///Power mode control bit 1. This bit controls entry to the Deep Power-down mode. See Section 3.3.6.1 below for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1{}; 
        ///Brown-Out Reduced Power Mode. When BODRPM is 1, the Brown-Out Detect circuitry will be turned off when chip Power-down mode or Deep Sleep mode is entered, resulting in a further reduction in power usage. However, the possibility of using Brown-Out Detect as a wake-up source from the reduced power mode will be lost. When 0, the Brown-Out Detect function remains active during Power-down and Deep Sleep modes. See the System Control Block chapter for details of Brown-Out detection.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bodrpm{}; 
        ///Brown-Out Global Disable. When BOGD is 1, the Brown-Out Detect circuitry is fully disabled at all times, and does not consume power. When 0, the Brown-Out Detect circuitry is enabled. See the System Control Block chapter for details of Brown-Out detection.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bogd{}; 
        ///Brown-Out Reset Disable. When BORD is 1, the BOD will not reset the device when the VDD(REG)(3V3) voltage dips goes below the BOD reset trip level. The Brown-Out interrupt is not affected. When BORD is 0, the BOD reset is enabled. See the Section 3.6 for details of Brown-Out detection.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bord{}; 
        ///Sleep Mode entry flag. Set when the Sleep mode is successfully entered. Cleared by software writing a one to this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> smflag{}; 
        ///Deep Sleep entry flag. Set when the Deep Sleep mode is successfully entered. Cleared by software writing a one to this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dsflag{}; 
        ///Power-down entry flag. Set when the Power-down mode is successfully entered. Cleared by software writing a one to this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdflag{}; 
        ///Deep Power-down entry flag. Set when the Deep Power-down mode is successfully entered. Cleared by software writing a one to this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dpdflag{}; 
    }
    namespace Nonepconp{    ///<Power Control for Peripherals
        using Addr = Register::Address<0x400fc0c4,0x00000000,0,unsigned>;
        ///LCD controller power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pclcd{}; 
        ///Timer/Counter 0 power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pctim0{}; 
        ///Timer/Counter 1 power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pctim1{}; 
        ///UART0 power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pcuart0{}; 
        ///UART1 power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pcuart1{}; 
        ///PWM0 power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pcpwm0{}; 
        ///PWM1 power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pcpwm1{}; 
        ///I2C0 interface power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pci2c0{}; 
        ///UART4 power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pcuart4{}; 
        ///RTC and Event Monitor/Recorder power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pcrtc{}; 
        ///SSP 1 interface power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pcssp1{}; 
        ///External Memory Controller power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pcemc{}; 
        ///A/D converter (ADC) power/clock control bit. Note: Clear the PDN bit in the AD0CR before clearing this bit, and set this bit before attempting to set PDN.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pcadc{}; 
        ///CAN Controller 1 power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pccan1{}; 
        ///CAN Controller 2 power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pccan2{}; 
        ///Power/clock control bit for IOCON, GPIO, and GPIO interrupts.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pcgpio{}; 
        ///SPI Flash Interface power/clock control bit (LPC1773 only).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pcspifi{}; 
        ///Motor Control PWM power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pcmcpwm{}; 
        ///Quadrature Encoder Interface power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pcqei{}; 
        ///I2C1 interface power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pci2c1{}; 
        ///SSP2 interface power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pcssp2{}; 
        ///SSP0 interface power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pcssp0{}; 
        ///Timer 2 power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pctim2{}; 
        ///Timer 3 power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pctim3{}; 
        ///UART 2 power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pcuart2{}; 
        ///UART 3 power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pcuart3{}; 
        ///I2C interface 2 power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pci2c2{}; 
        ///I2S interface power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pci2s{}; 
        ///SD Card interface power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pcsdc{}; 
        ///GPDMA function power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pcgpdma{}; 
        ///Ethernet block power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pcenet{}; 
        ///USB interface power/clock control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pcusb{}; 
    }
    namespace Noneemcclksel{    ///<External Memory Controller Clock Selection register
        using Addr = Register::Address<0x400fc100,0xfffffffe,0,unsigned>;
        ///Selects the EMC clock rate relative to the CPU clock.
        enum class emcdivVal {
            theEmcUsesTheSam=0x00000000,     ///<The EMC uses the same clock as the CPU.
            theEmcUsesAClock=0x00000001,     ///<The EMC uses a clock at half the rate of the CPU.
        };
        namespace emcdivValC{
            constexpr MPL::Value<emcdivVal,emcdivVal::theEmcUsesTheSam> theEmcUsesTheSam{};
            constexpr MPL::Value<emcdivVal,emcdivVal::theEmcUsesAClock> theEmcUsesAClock{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,emcdivVal> emcdiv{}; 
    }
    namespace Nonecclksel{    ///<CPU Clock Selection register
        using Addr = Register::Address<0x400fc104,0xfffffee0,0,unsigned>;
        ///Selects the divide value for creating the CPU clock (CCLK) from the selected clock source. 0 = The divider is turned off., no clock will be provided to the CPU. This setting should typically not be used, the CPU will be halted and a reset will be required to restore operation. 1 = The input clock is divided by 1 to produce the CPU clock. 2 = The input clock is divided by 2 to produce the CPU clock. 3 = The input clock is divided by 3 to produce the CPU clock. ... 31 = The input clock is divided by 31 to produce the CPU clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cclkdiv{}; 
        ///Selects the input clock for the CPU clock divider.
        enum class cclkselVal {
            sysclkIsUsedAsTh=0x00000000,     ///<Sysclk is used as the input to the CPU clock divider.
            theOutputOfTheMa=0x00000001,     ///<The output of the Main PLL is used as the input to the CPU clock divider.
        };
        namespace cclkselValC{
            constexpr MPL::Value<cclkselVal,cclkselVal::sysclkIsUsedAsTh> sysclkIsUsedAsTh{};
            constexpr MPL::Value<cclkselVal,cclkselVal::theOutputOfTheMa> theOutputOfTheMa{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cclkselVal> cclksel{}; 
    }
    namespace Noneusbclksel{    ///<USB Clock Selection register
        using Addr = Register::Address<0x400fc108,0xfffffce0,0,unsigned>;
        ///Selects the divide value for creating the USB clock from the selected PLL output. Only the values shown below can produce even number multiples of 48 MHz from the PLL. Warning: Improper setting of this value will result in incorrect operation of the USB interface. Only the main oscillator in conjunction with either PLL0 or PLL1 can provide a clock that meets USB accuracy and jitter specifications. Other values cannot produce the 48 MHz clock required for USB operation.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> usbdiv{}; 
        ///Selects the input clock for the USB clock divider.
        enum class usbselVal {
            sysclkIsUsedAsTh=0x00000000,     ///<Sysclk is used as the input to the USB clock divider. When this clock is selected, the USB can be accessed by software but cannot perform USB functions.
            theOutputOfTheMa=0x00000001,     ///<The output of the Main PLL is used as the input to the USB clock divider.
            theOutputOfTheAl=0x00000002,     ///<The output of the Alt PLL is used as the input to the USB clock divider.
        };
        namespace usbselValC{
            constexpr MPL::Value<usbselVal,usbselVal::sysclkIsUsedAsTh> sysclkIsUsedAsTh{};
            constexpr MPL::Value<usbselVal,usbselVal::theOutputOfTheMa> theOutputOfTheMa{};
            constexpr MPL::Value<usbselVal,usbselVal::theOutputOfTheAl> theOutputOfTheAl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,usbselVal> usbsel{}; 
    }
    namespace Noneclksrcsel{    ///<Clock Source Select Register
        using Addr = Register::Address<0x400fc10c,0xfffffffe,0,unsigned>;
        ///Selects the clock source for sysclk and PLL0 as follows:
        enum class clksrcVal {
            selectsTheInternal=0x00000000,     ///<Selects the Internal RC oscillator as the sysclk and PLL0 clock source (default).
            selectsTheMainOsc=0x00000001,     ///<Selects the main oscillator as the sysclk and PLL0 clock source.
        };
        namespace clksrcValC{
            constexpr MPL::Value<clksrcVal,clksrcVal::selectsTheInternal> selectsTheInternal{};
            constexpr MPL::Value<clksrcVal,clksrcVal::selectsTheMainOsc> selectsTheMainOsc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,clksrcVal> clksrc{}; 
    }
    namespace Nonecansleepclr{    ///<Allows clearing the current CAN channel sleep state as well as reading that state.
        using Addr = Register::Address<0x400fc110,0xfffffff9,0,unsigned>;
        ///Sleep status and control for CAN channel 1. Read: when 1, indicates that CAN channel 1 is in the sleep mode. Write: writing a 1 causes clocks to be restored to CAN channel 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> can1sleep{}; 
        ///Sleep status and control for CAN channel 2. Read: when 1, indicates that CAN channel 2 is in the sleep mode. Write: writing a 1 causes clocks to be restored to CAN channel 2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> can2sleep{}; 
    }
    namespace Nonecanwakeflags{    ///<Allows reading the wake-up state of the CAN channels.
        using Addr = Register::Address<0x400fc114,0xfffffff9,0,unsigned>;
        ///Wake-up status for CAN channel 1. Read: when 1, indicates that a falling edge has occurred on the receive data line of CAN channel 1. Write: writing a 1 clears this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> can1wake{}; 
        ///Wake-up status for CAN channel 2. Read: when 1, indicates that a falling edge has occurred on the receive data line of CAN channel 2. Write: writing a 1 clears this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> can2wake{}; 
    }
    namespace Noneextint{    ///<External Interrupt Flag Register
        using Addr = Register::Address<0x400fc140,0xfffffff0,0,unsigned>;
        ///In level-sensitive mode, this bit is set if the EINT0 function is selected for its pin, and the pin is in its active state. In edge-sensitive mode, this bit is set if the EINT0 function is selected for its pin, and the selected edge occurs on the pin. This bit is cleared by writing a one to it, except in level sensitive mode when the pin is in its active state.[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eint0{}; 
        ///In level-sensitive mode, this bit is set if the EINT1 function is selected for its pin, and the pin is in its active state. In edge-sensitive mode, this bit is set if the EINT1 function is selected for its pin, and the selected edge occurs on the pin. This bit is cleared by writing a one to it, except in level sensitive mode when the pin is in its active state.[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eint1{}; 
        ///In level-sensitive mode, this bit is set if the EINT2 function is selected for its pin, and the pin is in its active state. In edge-sensitive mode, this bit is set if the EINT2 function is selected for its pin, and the selected edge occurs on the pin. This bit is cleared by writing a one to it, except in level sensitive mode when the pin is in its active state.[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eint2{}; 
        ///In level-sensitive mode, this bit is set if the EINT3 function is selected for its pin, and the pin is in its active state. In edge-sensitive mode, this bit is set if the EINT3 function is selected for its pin, and the selected edge occurs on the pin. This bit is cleared by writing a one to it, except in level sensitive mode when the pin is in its active state.[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eint3{}; 
    }
    namespace Noneextmode{    ///<External Interrupt Mode register
        using Addr = Register::Address<0x400fc148,0xfffffff0,0,unsigned>;
        ///Level or edge sensitivity select for EINT0.
        enum class extmode0Val {
            levelSensitive=0x00000000,     ///<Level sensitive.
            edgeSensitive=0x00000001,     ///<Edge sensitive.
        };
        namespace extmode0ValC{
            constexpr MPL::Value<extmode0Val,extmode0Val::levelSensitive> levelSensitive{};
            constexpr MPL::Value<extmode0Val,extmode0Val::edgeSensitive> edgeSensitive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,extmode0Val> extmode0{}; 
        ///Level or edge sensitivity select for EINT1.
        enum class extmode1Val {
            levelSensitive=0x00000000,     ///<Level sensitive.
            edgeSensitive=0x00000001,     ///<Edge sensitive.
        };
        namespace extmode1ValC{
            constexpr MPL::Value<extmode1Val,extmode1Val::levelSensitive> levelSensitive{};
            constexpr MPL::Value<extmode1Val,extmode1Val::edgeSensitive> edgeSensitive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,extmode1Val> extmode1{}; 
        ///Level or edge sensitivity select for EINT2.
        enum class extmode2Val {
            levelSensitive=0x00000000,     ///<Level sensitive.
            edgeSensitive=0x00000001,     ///<Edge sensitive.
        };
        namespace extmode2ValC{
            constexpr MPL::Value<extmode2Val,extmode2Val::levelSensitive> levelSensitive{};
            constexpr MPL::Value<extmode2Val,extmode2Val::edgeSensitive> edgeSensitive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,extmode2Val> extmode2{}; 
        ///Level or edge sensitivity select for EINT3.
        enum class extmode3Val {
            levelSensitive=0x00000000,     ///<Level sensitive.
            edgeSensitive=0x00000001,     ///<Edge sensitive.
        };
        namespace extmode3ValC{
            constexpr MPL::Value<extmode3Val,extmode3Val::levelSensitive> levelSensitive{};
            constexpr MPL::Value<extmode3Val,extmode3Val::edgeSensitive> edgeSensitive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,extmode3Val> extmode3{}; 
    }
    namespace Noneextpolar{    ///<External Interrupt Polarity Register
        using Addr = Register::Address<0x400fc14c,0xfffffff0,0,unsigned>;
        ///External interrupt polarity for EINT0.
        enum class extpolar0Val {
            lowActiveOrFallin=0x00000000,     ///<Low-active or falling-edge sensitive (depending on EXTMODE0).
            highActiveOrRisin=0x00000001,     ///<High-active or rising-edge sensitive (depending on EXTMODE0).
        };
        namespace extpolar0ValC{
            constexpr MPL::Value<extpolar0Val,extpolar0Val::lowActiveOrFallin> lowActiveOrFallin{};
            constexpr MPL::Value<extpolar0Val,extpolar0Val::highActiveOrRisin> highActiveOrRisin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,extpolar0Val> extpolar0{}; 
        ///External interrupt polarity for EINT1.
        enum class extpolar1Val {
            lowActiveOrFallin=0x00000000,     ///<Low-active or falling-edge sensitive (depending on EXTMODE1).
            highActiveOrRisin=0x00000001,     ///<High-active or rising-edge sensitive (depending on EXTMODE1).
        };
        namespace extpolar1ValC{
            constexpr MPL::Value<extpolar1Val,extpolar1Val::lowActiveOrFallin> lowActiveOrFallin{};
            constexpr MPL::Value<extpolar1Val,extpolar1Val::highActiveOrRisin> highActiveOrRisin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,extpolar1Val> extpolar1{}; 
        ///External interrupt polarity for EINT2.
        enum class extpolar2Val {
            lowActiveOrFallin=0x00000000,     ///<Low-active or falling-edge sensitive (depending on EXTMODE2).
            highActiveOrRisin=0x00000001,     ///<High-active or rising-edge sensitive (depending on EXTMODE2).
        };
        namespace extpolar2ValC{
            constexpr MPL::Value<extpolar2Val,extpolar2Val::lowActiveOrFallin> lowActiveOrFallin{};
            constexpr MPL::Value<extpolar2Val,extpolar2Val::highActiveOrRisin> highActiveOrRisin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,extpolar2Val> extpolar2{}; 
        ///External interrupt polarity for EINT3.
        enum class extpolar3Val {
            lowActiveOrFallin=0x00000000,     ///<Low-active or falling-edge sensitive (depending on EXTMODE3).
            highActiveOrRisin=0x00000001,     ///<High-active or rising-edge sensitive (depending on EXTMODE3).
        };
        namespace extpolar3ValC{
            constexpr MPL::Value<extpolar3Val,extpolar3Val::lowActiveOrFallin> lowActiveOrFallin{};
            constexpr MPL::Value<extpolar3Val,extpolar3Val::highActiveOrRisin> highActiveOrRisin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,extpolar3Val> extpolar3{}; 
    }
    namespace Nonersid{    ///<Reset Source Identification Register
        using Addr = Register::Address<0x400fc180,0xffffffc0,0,unsigned>;
        ///Assertion of the POR signal sets this bit, and clears all of the other bits in this register. But if another Reset signal (e.g., External Reset) remains asserted after the POR signal is negated, then its bit is set. This bit is not affected by any of the other sources of Reset.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> por{}; 
        ///Assertion of the external RESET signal sets this bit. This bit is cleared only by software or POR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extr{}; 
        ///This bit is set when the Watchdog Timer times out and the WDTRESET bit in the Watchdog Mode Register is 1. This bit is cleared only by software or POR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdtr{}; 
        ///This bit is set when the VDD(REG)(3V3) voltage reaches a level below the BOD reset trip level (typically 1.85 V under nominal room temperature conditions). If the VDD(REG)(3V3) voltage dips from the normal operating range to below the BOD reset trip level and recovers, the BODR bit will be set to 1. If the VDD(REG)(3V3) voltage dips from the normal operating range to below the BOD reset trip level and continues to decline to the level at which POR is asserted (nominally 1 V), the BODR bit is cleared. If the VDD(REG)(3V3) voltage rises continuously from below 1 V to a level above the BOD reset trip level, the BODR will be set to 1. This bit is cleared only by software or POR. Note: Only in the case where a reset occurs and the POR = 0, the BODR bit indicates if the VDD(REG)(3V3) voltage was below the BOD reset trip level or not.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bodr{}; 
        ///This bit is set if the processor has been reset due to a system reset request, as described in Section 40.4.3.6 Application Interrupt and Reset Control Register. Setting the SYSRESETREQ bit in the Cortex-M3 AIRCR register causes a chip reset in the LPC178x/177x. This bit is cleared only by software or POR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sysreset{}; 
        ///This bit is set if the processor has been reset due to a lockup, as described in Section 40.3.4.4 Lockup. The lockup state causes a chip reset in the LPC178x/177x. This bit is cleared only by software or POR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lockup{}; 
    }
    namespace Nonematrixarb{    ///<Matrix arbitration register
        using Addr = Register::Address<0x400fc188,0xfffec000,0,unsigned>;
        ///I-Code bus priority. Should be lower than PRI_DCODE for proper operation.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> priIcode{}; 
        ///D-Code bus priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> priDcode{}; 
        ///System bus priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> priSys{}; 
        ///General Purpose DMA controller priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> priGpdma{}; 
        ///Ethernet DMA priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> priEth{}; 
        ///LCD DMA priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> priLcd{}; 
        ///USB DMA priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> priUsb{}; 
        ///ROM latency select. Should always be 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> romLat{}; 
    }
    namespace Nonescs{    ///<System Control and Status
        using Addr = Register::Address<0x400fc1a0,0xffffff80,0,unsigned>;
        ///EMC Shift Control. Controls how addresses are output on the EMC address pins for static memories. Also see Section 10.9 in the EMC chapter.
        enum class emcscVal {
            staticMemoryAddres=0x00000000,     ///<Static memory addresses are shifted to match the data bus width. For example, when accessing a 32-bit wide data bus, the address is shifted right 2 places such that bit 2 is the LSB. In this mode, address bit 0 for the this device is connected to address bit 0 of the memory device, thus simplifying memory connections. This also makes a larger memory address range possible, because additional upper address bits can appear on the higher address pins due to the shift.
            staticMemoryAddres=0x00000001,     ///<Static memory addresses are always output as byte addresses regardless of the data bus width. For example, when word data is accessed on a 32-bit bus, address bits 1 and 0 will always be 0. In this mode, one or both lower address bits may not be connected to memories that are part of a bus that is wider than 8 bits. This mode matches the operation of LPC23xx and LPC24xx devices.
        };
        namespace emcscValC{
            constexpr MPL::Value<emcscVal,emcscVal::staticMemoryAddres> staticMemoryAddres{};
            constexpr MPL::Value<emcscVal,emcscVal::staticMemoryAddres> staticMemoryAddres{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,emcscVal> emcsc{}; 
        ///EMC Reset Disable[1]. External Memory Controller Reset Disable. Also see Section 10.8 in the EMC chapter.
        enum class emcrdVal {
            bothEmcResetsAre=0x00000000,     ///<Both EMC resets are asserted when any type of chip reset event occurs. In this mode, all registers and functions of the EMC are initialized upon any reset condition.
            manyPortionsOfThe=0x00000001,     ///<Many portions of the EMC are only reset by a power-on or brown-out event, in order to allow the EMC to retain its state through a warm reset (external reset or watchdog reset). If the EMC is configured correctly, auto-refresh can be maintained through a warm reset.
        };
        namespace emcrdValC{
            constexpr MPL::Value<emcrdVal,emcrdVal::bothEmcResetsAre> bothEmcResetsAre{};
            constexpr MPL::Value<emcrdVal,emcrdVal::manyPortionsOfThe> manyPortionsOfThe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,emcrdVal> emcrd{}; 
        ///External Memory Controller burst control. Also see Section 10.10 in the EMC chapter.
        enum class emcbcVal {
            burstEnabled=0x00000000,     ///<Burst enabled.
            burstDisabledThis=0x00000001,     ///<Burst disabled. This mode can be used to prevent multiple sequential accesses to memory mapped I/O devices connected to EMC static memory chip selects. These unrequested accesses can cause issues with some I/O devices.
        };
        namespace emcbcValC{
            constexpr MPL::Value<emcbcVal,emcbcVal::burstEnabled> burstEnabled{};
            constexpr MPL::Value<emcbcVal,emcbcVal::burstDisabledThis> burstDisabledThis{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,emcbcVal> emcbc{}; 
        ///MCIPWR Active Level[1]. Selects the active level of the SD card interface signal SD_PWR.
        enum class mcipwralVal {
            sdPwrIsActiveLow=0x00000000,     ///<SD_PWR is active low (inverted output of the SD Card interface block).
            sdPwrIsActiveHig=0x00000001,     ///<SD_PWR is active high (follows the output of the SD Card interface block).
        };
        namespace mcipwralValC{
            constexpr MPL::Value<mcipwralVal,mcipwralVal::sdPwrIsActiveLow> sdPwrIsActiveLow{};
            constexpr MPL::Value<mcipwralVal,mcipwralVal::sdPwrIsActiveHig> sdPwrIsActiveHig{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,mcipwralVal> mcipwral{}; 
        ///Main oscillator range select.
        enum class oscrsVal {
            theFrequencyRange=0x00000000,     ///<The frequency range of the main oscillator is 1 MHz to 20 MHz.
            theFrequencyRange=0x00000001,     ///<The frequency range of the main oscillator is 15 MHz to 25 MHz.
        };
        namespace oscrsValC{
            constexpr MPL::Value<oscrsVal,oscrsVal::theFrequencyRange> theFrequencyRange{};
            constexpr MPL::Value<oscrsVal,oscrsVal::theFrequencyRange> theFrequencyRange{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,oscrsVal> oscrs{}; 
        ///Main oscillator enable.
        enum class oscenVal {
            theMainOscillator=0x00000000,     ///<The main oscillator is disabled.
            theMainOscillator=0x00000001,     ///<The main oscillator is enabled, and will start up if the correct external circuitry is connected to the XTAL1 and XTAL2 pins.
        };
        namespace oscenValC{
            constexpr MPL::Value<oscenVal,oscenVal::theMainOscillator> theMainOscillator{};
            constexpr MPL::Value<oscenVal,oscenVal::theMainOscillator> theMainOscillator{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,oscenVal> oscen{}; 
        ///Main oscillator status.
        enum class oscstatVal {
            theMainOscillator=0x00000000,     ///<The main oscillator is not ready to be used as a clock source.
            theMainOscillator=0x00000001,     ///<The main oscillator is ready to be used as a clock source. The main oscillator must be enabled via the OSCEN bit.
        };
        namespace oscstatValC{
            constexpr MPL::Value<oscstatVal,oscstatVal::theMainOscillator> theMainOscillator{};
            constexpr MPL::Value<oscstatVal,oscstatVal::theMainOscillator> theMainOscillator{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,oscstatVal> oscstat{}; 
    }
    namespace Nonepclksel{    ///<Peripheral Clock Selection register
        using Addr = Register::Address<0x400fc1a8,0xffffffe0,0,unsigned>;
        ///Selects the divide value for the clock used for all APB peripherals. 0 = The divider is turned off., no clock will be provided to APB peripherals.. 1 = The input clock is divided by 1 to produce the APB peripheral clock. 2 = The input clock is divided by 2 to produce the APB peripheral clock. 3 = The input clock is divided by 3 to produce the APB peripheral clock. ... 31 = The input clock is divided by 31 to produce the APB peripheral clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pclkdiv{}; 
    }
    namespace Nonepboost{    ///<Power boost register
        using Addr = Register::Address<0x400fc1b0,0xfffffffc,0,unsigned>;
        ///Boost control bits. 00 : Boost is off, operation must be below 100 MHz. 11 : Boost is on, operation up to 120 MHz is supported. Other values are not allowed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> boost{}; 
    }
    namespace Nonespificlksel{    ///<SPIFI Clock Selection register
        using Addr = Register::Address<0x400fc1b4,0xfffffce0,0,unsigned>;
        ///Selects the divide value for creating the SPIFI clock from the selected clock source. 0 = The divider is turned off., no clock will be provided to the SPIFI. 1 = The input clock is divided by 1 to produce the SPIFI clock. 2 = The input clock is divided by 2 to produce the SPIFI clock. 3 = The input clock is divided by 3 to produce the SPIFI clock. ... 31 = The input clock is divided by 31 to produce the SPIFI clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> spifidiv{}; 
        ///Selects the input clock for the USB clock divider.
        enum class spifiselVal {
            sysclkIsUsedAsTh=0x00000000,     ///<Sysclk is used as the input to the SPIFI clock divider.
            theOutputOfTheMa=0x00000001,     ///<The output of the Main PLL is used as the input to the SPIFI clock divider.
            theOutputOfTheAl=0x00000002,     ///<The output of the Alt PLL is used as the input to the SPIFI clock divider.
        };
        namespace spifiselValC{
            constexpr MPL::Value<spifiselVal,spifiselVal::sysclkIsUsedAsTh> sysclkIsUsedAsTh{};
            constexpr MPL::Value<spifiselVal,spifiselVal::theOutputOfTheMa> theOutputOfTheMa{};
            constexpr MPL::Value<spifiselVal,spifiselVal::theOutputOfTheAl> theOutputOfTheAl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,spifiselVal> spifisel{}; 
    }
    namespace NonelcdCfg{    ///<LCD Clock configuration register
        using Addr = Register::Address<0x400fc1b8,0xffffffe0,0,unsigned>;
        ///LCD panel clock prescaler selection. The value in the this register plus 1 is used to divide the selected input clock (see the CLKSEL bit in the LCD_POL register), to produce the panel clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
    }
    namespace Noneusbintst{    ///<USB Interrupt Status
        using Addr = Register::Address<0x400fc1c0,0x7ffffe80,0,unsigned>;
        ///Low priority interrupt line status. This bit is read-only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbIntReqLp{}; 
        ///High priority interrupt line status. This bit is read-only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbIntReqHp{}; 
        ///DMA interrupt line status. This bit is read-only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbIntReqDma{}; 
        ///USB host interrupt line status. This bit is read-only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbHostInt{}; 
        ///External ATX interrupt line status. This bit is read-only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbAtxInt{}; 
        ///OTG interrupt line status. This bit is read-only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usbOtgInt{}; 
        ///I2C module interrupt line status. This bit is read-only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> usbI2cInt{}; 
        ///USB need clock indicator. This bit is read-only. This bit is set to 1 when USB activity or a change of state on the USB data pins is detected, and it indicates that a PLL supplied clock of 48 MHz is needed. Once USB_NEED_CLK becomes one, it resets to zero 5 ms after the last packet has been received/sent, or 2 ms after the Suspend Change (SUS_CH) interrupt has occurred. A change of this bit from 0 to 1 can wake up the microcontroller if activity on the USB bus is selected to wake up the part from the Power-down mode (see Section 4.7.9 Wake-up from Reduced Power Modes for details). Also see Section 4.5.8 PLLs and Power-down mode and Section 4.7.10 Power Control for Peripherals register (PCONP - 0x400F C0C4) for considerations about the PLL and invoking the Power-down mode. This bit is read-only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> usbNeedClk{}; 
        ///Enable all USB interrupts. When this bit is cleared, the NVIC does not see the ORed output of the USB interrupt lines.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> enUsbInts{}; 
    }
    namespace Nonedmacreqsel{    ///<Selects between alternative requests on DMA channels 0 through 7 and 10 through 15
        using Addr = Register::Address<0x400fc1c4,0xffff0300,0,unsigned>;
        ///Selects the DMA request for GPDMA input 0: 0 - (unused) 1 - Timer 0 match 0 is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmasel00{}; 
        ///Selects the DMA request for GPDMA input 1: 0 - SD card interface is selected. 1 - Timer 0 match 1 is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmasel01{}; 
        ///Selects the DMA request for GPDMA input 2: 0 - SSP0 transmit is selected. 1 - Timer 1 match 0 is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmasel02{}; 
        ///Selects the DMA request for GPDMA input 3: 0 - SSP0 receive is selected. 1 - Timer 1 match 1 is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmasel03{}; 
        ///Selects the DMA request for GPDMA input 4: 0 - SSP1 transmit is selected. 1 - Timer 2 match 0 is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmasel04{}; 
        ///Selects the DMA request for GPDMA input 5: 0 - SSP1 receive is selected. 1 - Timer 2 match 1 is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmasel05{}; 
        ///Selects the DMA request for GPDMA input 6: 0 - SSP2 transmit is selected. 1 - I2S channel 0 is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dmasel06{}; 
        ///Selects the DMA request for GPDMA input 7: 0 - SSP2 receive is selected. 1 - I2S channel 1 is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmasel07{}; 
        ///Selects the DMA request for GPDMA input 10: 0 - UART0 transmit is selected. 1 - UART3 transmit is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dmasel10{}; 
        ///Selects the DMA request for GPDMA input 11: 0 - UART0 receive is selected. 1 - UART3 receive is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmasel11{}; 
        ///Selects the DMA request for GPDMA input 12: 0 - UART1 transmit is selected. 1 - UART4 transmit is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmasel12{}; 
        ///Selects the DMA request for GPDMA input 13: 0 - UART1 receive is selected. 1 - UART4 receive is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmasel13{}; 
        ///Selects the DMA request for GPDMA input 14: 0 - UART2 transmit is selected. 1 - Timer 3 match 0 is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dmasel14{}; 
        ///Selects the DMA request for GPDMA input 15: 0 - UART2 receive is selected. 1 - Timer 3 match 1 is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dmasel15{}; 
    }
    namespace Noneclkoutcfg{    ///<Clock Output Configuration register
        using Addr = Register::Address<0x400fc1c8,0xfffffc00,0,unsigned>;
        ///Selects the clock source for the CLKOUT function. 0x0 = Selects the CPU clock as the CLKOUT source. 0x1 = Selects the main oscillator as the CLKOUT source. 0x2 = Selects the Internal RC oscillator as the CLKOUT source. 0x3 = Selects the USB clock as the CLKOUT source. 0x4 = Selects the RTC oscillator as the CLKOUT source. 0x5 = Selects the SPIFI clock as the CLKOUT source. 0x6 = Selects the Watchdog oscillator as the CLKOUT source. Other settings are reserved. Do not use.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clkoutsel{}; 
        ///Integer value to divide the output clock by, minus one. 0x0 = Clock is divided by 1. 0x1 = Clock is divided by 2. 0x2 = Clock is divided by 3. ... 0xF = Clock is divided by 16.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> clkoutdiv{}; 
        ///CLKOUT enable control, allows switching the CLKOUT source without glitches. Clear to stop CLKOUT on the next falling edge. Set to enable CLKOUT.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clkoutEn{}; 
        ///CLKOUT activity indication. Reads as 1 when CLKOUT is enabled. Read as 0 when CLKOUT has been disabled via the CLKOUT_EN bit and the clock has completed being stopped.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clkoutAct{}; 
    }
    namespace Nonerstcon0{    ///<Individual peripheral reset control bits
        using Addr = Register::Address<0x400fc1cc,0x00000000,0,unsigned>;
        ///LCD controller reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rstlcd{}; 
        ///Timer/Counter 0 reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rsttim0{}; 
        ///Timer/Counter 1 reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsttim1{}; 
        ///UART0 reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rstuart0{}; 
        ///UART1 reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rstuart1{}; 
        ///PWM0 reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rstpwm0{}; 
        ///PWM1 reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rstpwm1{}; 
        ///The I2C0 interface reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rsti2c0{}; 
        ///UART4 reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rstuart4{}; 
        ///RTC and Event Monitor/Recorder reset control bit. RTC reset is limited, see Table 628 Real-Time Clock register map for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rstrtc{}; 
        ///The SSP 1 interface reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rstssp1{}; 
        ///External Memory Controller reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rstemc{}; 
        ///A/D converter (ADC) reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rstadc{}; 
        ///CAN Controller 1 reset control bit. Note: The CAN acceptance filter may be reset by a separate bit in the RSTCON1 register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rstcan1{}; 
        ///CAN Controller 2 reset control bit. Note: The CAN acceptance filter may be reset by a separate bit in the RSTCON1 register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rstcan2{}; 
        ///Reset control bit for GPIO, and GPIO interrupts. Note: IOCON may be reset by a separate bit in the RSTCON1 register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rstgpio{}; 
        ///SPI Flash Interface reset control bit (LPC1773 only).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rstspifi{}; 
        ///Motor Control PWM reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rstmcpwm{}; 
        ///Quadrature Encoder Interface reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstqei{}; 
        ///The I2C1 interface reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsti2c1{}; 
        ///The SSP2 interface reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rstssp2{}; 
        ///The SSP0 interface reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rstssp0{}; 
        ///Timer 2 reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> rsttim2{}; 
        ///Timer 3 reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rsttim3{}; 
        ///UART 2 reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rstuart2{}; 
        ///UART 3 reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rstuart3{}; 
        ///I2C interface 2 reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rsti2c2{}; 
        ///I2S interface reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> rsti2s{}; 
        ///SD Card interface reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rstsdc{}; 
        ///GPDMA function reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rstgpdma{}; 
        ///Ethernet block reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rstenet{}; 
        ///USB interface reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> rstusb{}; 
    }
    namespace Nonerstcon1{    ///<Individual peripheral reset control bits
        using Addr = Register::Address<0x400fc1d0,0xfffffff8,0,unsigned>;
        ///Reset control bit for the IOCON registers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rstiocon{}; 
        ///D/A converter (DAC) reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rstdac{}; 
        ///CAN acceptance filter reset control bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rstcanacc{}; 
    }
    namespace Noneemcdlyctl{    ///<Values for the 4 programmable delays associated with SDRAM operation.
        using Addr = Register::Address<0x400fc1dc,0xe0e0e0e0,0,unsigned>;
        ///Programmable delay value for EMC outputs in command delayed mode. See Section 10.12.6. The delay amount is roughly (CMDDLY+1) * 250 picoseconds. This field applies only when the command delayed read strategy is selected in the EMCDynamicReadConfig register. In this mode, all control outputs from the EMC are delayed, but the output clock is not. Delaying the control outputs changes dynamic characteristics defined in the device data sheet.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cmddly{}; 
        ///Programmable delay value for the feedback clock that controls input data sampling. See  Section 10.5.3. The delay amount is roughly (FBCLKDLY+1) * 250 picoseconds.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> fbclkdly{}; 
        ///Programmable delay value for the CLKOUT0 output. This would typically be used in clock delayed mode. See Section 10.12.6 The delay amount is roughly (CLKOUT0DLY+1) * 250 picoseconds. Delaying the clock output changes dynamic characteristics defined in the device data sheet.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> clkout0dly{}; 
        ///Programmable delay value for the CLKOUT1 output. This would typically be used in clock delayed mode. See Section 10.12.6 The delay amount is roughly (CLKOUT1DLY+1) * 250 picoseconds.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> clkout1dly{}; 
    }
    namespace Noneemccal{    ///<Controls the calibration counter for programmable delays and returns the result value.
        using Addr = Register::Address<0x400fc1e0,0xffff3f00,0,unsigned>;
        ///Returns the count of the approximately 50 MHz ring oscillator that occur during 32 clocks of the IRC oscillator. This represents the composite effect of processing variation, internal regulator supply voltage, and ambient temperature.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> calvalue{}; 
        ///Start control bit for the EMC calibration counter. Writing a 1 to this bit begins the measurement process. This bit is cleared automatically when the measurement is complete.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> start{}; 
        ///Measurement completion flag. this bit is set when a calibration measurement is completed. This bit is cleared automatically when the START bit is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> done{}; 
    }
}
