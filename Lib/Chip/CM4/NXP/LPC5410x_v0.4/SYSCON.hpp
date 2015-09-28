#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesysmemremap{
        using Addr = Register::Address<0x40000000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MAP; 
    }
    namespace Noneahbmatprio{
        using Addr = Register::Address<0x40000004,0xfffc3cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PRI_ICODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PRI_DCODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PRI_SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PRI_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_FIFO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PRI_M0; 
    }
    namespace Nonesystckcal{
        using Addr = Register::Address<0x40000014,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SKEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> NOREF; 
    }
    namespace Nonenmisrc{
        using Addr = Register::Address<0x4000001c,0x3fffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> IRQM4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> IRQM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> NMIENM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> NMIENM4; 
    }
    namespace Noneasyncapbctrl{
        using Addr = Register::Address<0x40000020,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
    }
    namespace Nonesysrststat{
        using Addr = Register::Address<0x40000040,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SYSRST; 
    }
    namespace Nonepresetctrl0{
        using Addr = Register::Address<0x40000044,0xf303167f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FLASH_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FMC_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MUX_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IOCON_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> GPIO0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GPIO1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PINT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> GINT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DMA_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CRC_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> WWDT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RTC_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MAILBOX_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ADC0_RST; 
    }
    namespace Nonepresetctrl1{
        using Addr = Register::Address<0x40000048,0xf3bff9f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MRT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RIT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SCT0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FIFO_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UTICK_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TIMER2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TIMER3_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TIMER4_RST; 
    }
    namespace Nonepresetctrlset0{
        using Addr = Register::Address<0x4000004c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RST_SET0; 
    }
    namespace Nonepresetctrlset1{
        using Addr = Register::Address<0x40000050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RST_SET1; 
    }
    namespace Nonepresetctrlclr0{
        using Addr = Register::Address<0x40000054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RST_CLR0; 
    }
    namespace Nonepresetctrlclr1{
        using Addr = Register::Address<0x40000058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RST_CLR1; 
    }
    namespace Nonepioporcap0{
        using Addr = Register::Address<0x4000005c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PIOPORSTAT; 
    }
    namespace Nonepioporcap1{
        using Addr = Register::Address<0x40000060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PIOPORSTAT; 
    }
    namespace Nonepiorescap0{
        using Addr = Register::Address<0x40000068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PIORESSTAT; 
    }
    namespace Nonepiorescap1{
        using Addr = Register::Address<0x4000006c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PIORESSTAT; 
    }
    namespace Nonemainclksela{
        using Addr = Register::Address<0x40000080,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Nonemainclkselb{
        using Addr = Register::Address<0x40000084,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneadcclksel{
        using Addr = Register::Address<0x4000008c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneclkoutsela{
        using Addr = Register::Address<0x40000094,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneclkoutselb{
        using Addr = Register::Address<0x40000098,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Nonesyspllclksel{
        using Addr = Register::Address<0x400000a0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneahbclkctrl0{
        using Addr = Register::Address<0x400000c0,0xf3031665>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ROM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SRAM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SRAM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FLASH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FMC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> INPUTMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> GPIO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GPIO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> GINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> WWDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MAILBOX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ADC0; 
    }
    namespace Noneahbclkctrl1{
        using Addr = Register::Address<0x400000c4,0xf3bff9f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SCT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FIFO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UTICK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TIMER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TIMER3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TIMER4; 
    }
    namespace Noneahbclkctrlset0{
        using Addr = Register::Address<0x400000c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLK_SET0; 
    }
    namespace Noneahbclkctrlset1{
        using Addr = Register::Address<0x400000cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLK_SET1; 
    }
    namespace Noneahbclkctrlclr0{
        using Addr = Register::Address<0x400000d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLK_CLR0; 
    }
    namespace Noneahbclkctrlclr1{
        using Addr = Register::Address<0x400000d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLK_CLR1; 
    }
    namespace Nonesystickclkdiv{
        using Addr = Register::Address<0x400000e0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneahbclkdiv{
        using Addr = Register::Address<0x40000100,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneadcclkdiv{
        using Addr = Register::Address<0x40000108,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneclkoutdiv{
        using Addr = Register::Address<0x4000010c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Nonefreqmectrl{
        using Addr = Register::Address<0x40000120,0x7fffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> CAPVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PROG; 
    }
    namespace Noneflashcfg{
        using Addr = Register::Address<0x40000124,0xffff8fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> FLASHTIM; 
    }
    namespace Nonefifoctrl{
        using Addr = Register::Address<0x40000148,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> U0TXFIFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> U1TXFIFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> U2TXFIFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> U3TXFIFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SPI0TXFIFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPI1TXFIFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> U0RXFIFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> U1RXFIFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> U2RXFIFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> U3RXFIFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI0RXFIFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SPI1RXFIFOEN; 
    }
    namespace Noneircctrl{
        using Addr = Register::Address<0x40000184,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TRIM; 
    }
    namespace Nonertcoscctrl{
        using Addr = Register::Address<0x40000190,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonesyspllctrl{
        using Addr = Register::Address<0x400001b0,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SELR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,4)> SELI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> SELP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BYPASSCCODIV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> UPLIMOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BANDSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DIRECTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DIRECTO; 
    }
    namespace Nonesyspllstat{
        using Addr = Register::Address<0x400001b4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOCK; 
    }
    namespace Nonesyspllndec{
        using Addr = Register::Address<0x400001b8,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> NREQ; 
    }
    namespace Nonesyspllpdec{
        using Addr = Register::Address<0x400001bc,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PREQ; 
    }
    namespace Nonesyspllssctrl0{
        using Addr = Register::Address<0x400001c0,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0)> MDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SEL_EXT; 
    }
    namespace Nonesyspllssctrl1{
        using Addr = Register::Address<0x400001c4,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MDREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> MF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23)> MR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> MC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DITHER; 
    }
    namespace Nonepdruncfg{
        using Addr = Register::Address<0x40000210,0xfe241a47>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PDEN_IRC_OSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PDEN_IRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PDEN_FLASH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PDEN_BOD_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PDEN_BOD_INTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PDEN_ADC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PDEN_SRAM0A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PDEN_SRAM0B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PDEN_SRAM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDEN_SRAM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PDEN_ROM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PDEN_VDDA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PDEN_WDT_OSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PDEN_SYS_PLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PDEN_VREFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PDEN_32K_OSC; 
    }
    namespace Nonepdruncfgset{
        using Addr = Register::Address<0x40000214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PD_SET; 
    }
    namespace Nonepdruncfgclr{
        using Addr = Register::Address<0x40000218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PD_CLR; 
    }
    namespace Nonestarterp0{
        using Addr = Register::Address<0x40000240,0x40000004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WWDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GINT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PINT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> UTICK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TIMER0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TIMER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIMER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIMER3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TIMER4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SCT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> USART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> USART3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> I2C2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> ADC0_SEQA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ADC0_SEQB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ADC0_THCMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MAILBOX; 
    }
    namespace Nonestarterp1{
        using Addr = Register::Address<0x40000244,0xfffffee0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PINT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PINT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RIT; 
    }
    namespace Nonestarterpset0{
        using Addr = Register::Address<0x40000248,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> START_SET0; 
    }
    namespace Nonestarterpset1{
        using Addr = Register::Address<0x4000024c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> START_SET1; 
    }
    namespace Nonestarterpclr0{
        using Addr = Register::Address<0x40000250,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> START_CLR0; 
    }
    namespace Nonestarterpclr1{
        using Addr = Register::Address<0x40000254,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> START_CLR1; 
    }
    namespace Nonecpuctrl{
        using Addr = Register::Address<0x40000300,0xffffff82>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MASTERCPU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CM4CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CM0CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CM4RSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CM0RSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> POWERCPU; 
    }
    namespace Nonecpboot{
        using Addr = Register::Address<0x40000304,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BOOTADDR; 
    }
    namespace Nonecpstack{
        using Addr = Register::Address<0x40000308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STACKADDR; 
    }
    namespace Nonejtagidcode{
        using Addr = Register::Address<0x400003f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> JTAGID; 
    }
    namespace Nonedevice_id0{
        using Addr = Register::Address<0x400003f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PARTID; 
    }
    namespace Nonedevice_id1{
        using Addr = Register::Address<0x400003fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REVID; 
    }
}
