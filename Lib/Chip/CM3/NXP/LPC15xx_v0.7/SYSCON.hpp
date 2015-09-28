#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesysmemremap{
        using Addr = Register::Address<0x40074000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MAP; 
    }
    namespace Nonesystckcal{
        using Addr = Register::Address<0x40074014,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,0)> CAL; 
    }
    namespace Nonenmisrc{
        using Addr = Register::Address<0x4007401c,0x7fffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> IRQNO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> NMIEN; 
    }
    namespace Nonesysrststat{
        using Addr = Register::Address<0x40074040,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SYSRST; 
    }
    namespace Nonepresetctrl0{
        using Addr = Register::Address<0x40074044,0x87c2147f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FLASH_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FMC_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EEPROM_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PMUX_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IOCON_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> GPIO0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GPIO1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> GPIO2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PINT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> GINT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DMA_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CRC_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ADC0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ADC1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DAC_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ACMP_RST; 
    }
    namespace Nonepresetctrl1{
        using Addr = Register::Address<0x40074048,0xff51d900>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MRT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RIT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SCT0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SCT1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SCT2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCT3_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SCTIPU_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCAN_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SPI0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SPI1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> I2C0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> UART0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> UART1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UART2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> QEI0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USB_RST; 
    }
    namespace Nonepioporcap0{
        using Addr = Register::Address<0x4007404c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PIOSTAT; 
    }
    namespace Nonepioporcap1{
        using Addr = Register::Address<0x40074050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PIOSTAT; 
    }
    namespace Nonepioporcap2{
        using Addr = Register::Address<0x40074054,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PIOSTAT; 
    }
    namespace Nonemainclksela{
        using Addr = Register::Address<0x40074080,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Nonemainclkselb{
        using Addr = Register::Address<0x40074084,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneusbclksel{
        using Addr = Register::Address<0x40074088,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneadcasyncclksel{
        using Addr = Register::Address<0x4007408c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneclkoutsela{
        using Addr = Register::Address<0x40074094,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneclkoutselb{
        using Addr = Register::Address<0x40074098,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Nonesyspllclksel{
        using Addr = Register::Address<0x400740a0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneusbpllclksel{
        using Addr = Register::Address<0x400740a4,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Nonesctpllclksel{
        using Addr = Register::Address<0x400740a8,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Nonesysahbclkdiv{
        using Addr = Register::Address<0x400740c0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Nonesysahbclkctrl0{
        using Addr = Register::Address<0x400740c4,0x87020464>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ROM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SRAM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SRAM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FLASH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FMC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EEPROM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> GPIO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GPIO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> GPIO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> GINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> WWDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ADC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ADC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CMP; 
    }
    namespace Nonesysahbclkctrl1{
        using Addr = Register::Address<0x400740c8,0xff519900>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SCT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SCT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SCT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SCTIPU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> I2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> I2C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> UART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> UART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> QEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USB; 
    }
    namespace Nonesystickclkdiv{
        using Addr = Register::Address<0x400740cc,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneuartclkdiv{
        using Addr = Register::Address<0x400740d0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneioconclkdiv{
        using Addr = Register::Address<0x400740d4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Nonetraceclkdiv{
        using Addr = Register::Address<0x400740d8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneusbclkdiv{
        using Addr = Register::Address<0x400740ec,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneadcasyncclkdiv{
        using Addr = Register::Address<0x400740f0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneclkoutdiv{
        using Addr = Register::Address<0x400740f8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Nonefrgctrl{
        using Addr = Register::Address<0x40074128,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MULT; 
    }
    namespace Noneusbclkctrl{
        using Addr = Register::Address<0x4007412c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AP_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> POL_CLK; 
    }
    namespace Noneusbclkst{
        using Addr = Register::Address<0x40074130,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NEED_CLKST; 
    }
    namespace Nonebodctrl{
        using Addr = Register::Address<0x40074180,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> BODRSTLEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> BODINTVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BODRSTENA; 
    }
    namespace Nonesysoscctrl{
        using Addr = Register::Address<0x40074188,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FREQRANGE; 
    }
    namespace Nonertcoscctrl{
        using Addr = Register::Address<0x40074190,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonesyspllctrl{
        using Addr = Register::Address<0x40074198,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PSEL; 
    }
    namespace Nonesyspllstat{
        using Addr = Register::Address<0x4007419c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOCK; 
    }
    namespace Noneusbpllctrl{
        using Addr = Register::Address<0x400741a0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PSEL; 
    }
    namespace Noneusbpllstat{
        using Addr = Register::Address<0x400741a4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOCK; 
    }
    namespace Nonesctpllctrl{
        using Addr = Register::Address<0x400741a8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PSEL; 
    }
    namespace Nonesctpllstat{
        using Addr = Register::Address<0x400741ac,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOCK; 
    }
    namespace Nonepdawakecfg{
        using Addr = Register::Address<0x40074204,0xfe000087>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IRCOUT_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FLASH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EEPROM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BOD_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USBPHY_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ADC0_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ADC1_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DAC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ACMP0_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ACMP1_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ACMP2_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ACMP3_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IREF_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TS_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> VDDADIV_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> WDTOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SYSOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SYSPLL_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USBPLL_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SCTPLL_PD; 
    }
    namespace Nonepdruncfg{
        using Addr = Register::Address<0x40074208,0xfe000087>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IRCOUT_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FLASH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EEPROM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BOD_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USBPHY_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ADC0_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ADC1_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DAC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ACMP0_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ACMP1_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ACMP2_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ACMP3_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IREF_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TS_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> VDDADIV_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> WDTOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SYSOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SYSPLL_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USBPLL_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SCTPLL_PD; 
    }
    namespace Nonestarterp0{
        using Addr = Register::Address<0x40074218,0xb81f801c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WWDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GINT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PINT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PINT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PINT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> USART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> USART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> I2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> USB_WAKEUP; 
    }
    namespace Nonestarterp1{
        using Addr = Register::Address<0x4007421c,0xffff90ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ACMP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ACMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ACMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ACMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RTCALARM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RTCWAKE; 
    }
}
