#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesysmemremap{
        using Addr = Register::Address<0x40048000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MAP; 
    }
    namespace Nonepresetctrl{
        using Addr = Register::Address<0x40048004,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPI0_RST_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPI1_RST_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UARTFRG_RST_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USART0_RST_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UART1_RST_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UART2_RST_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2C_RST_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MRT_RST_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SCT_RST_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WKT_RST_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GPIO_RST_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FLASH_RST_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ACMP_RST_N; 
    }
    namespace Nonesyspllctrl{
        using Addr = Register::Address<0x40048008,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> PSEL; 
    }
    namespace Nonesyspllstat{
        using Addr = Register::Address<0x4004800c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOCK; 
    }
    namespace Nonesysoscctrl{
        using Addr = Register::Address<0x40048020,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FREQRANGE; 
    }
    namespace Nonewdtoscctrl{
        using Addr = Register::Address<0x40048024,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DIVSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,5)> FREQSEL; 
    }
    namespace Nonesysrststat{
        using Addr = Register::Address<0x40048030,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SYSRST; 
    }
    namespace Nonesyspllclksel{
        using Addr = Register::Address<0x40048040,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Nonesyspllclkuen{
        using Addr = Register::Address<0x40048044,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA; 
    }
    namespace Nonemainclksel{
        using Addr = Register::Address<0x40048070,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Nonemainclkuen{
        using Addr = Register::Address<0x40048074,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA; 
    }
    namespace Nonesysahbclkdiv{
        using Addr = Register::Address<0x40048078,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Nonesysahbclkctrl{
        using Addr = Register::Address<0x40048080,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ROM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RAM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FLASHREG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLASH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> I2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GPIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SCT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> UART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> UART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> UART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WWDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ACMP; 
    }
    namespace Noneuartclkdiv{
        using Addr = Register::Address<0x40048094,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneclkoutsel{
        using Addr = Register::Address<0x400480e0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneclkoutuen{
        using Addr = Register::Address<0x400480e4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA; 
    }
    namespace Noneclkoutdiv{
        using Addr = Register::Address<0x400480e8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneuartfrgdiv{
        using Addr = Register::Address<0x400480f0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneuartfrgmult{
        using Addr = Register::Address<0x400480f4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MULT; 
    }
    namespace Noneexttracecmd{
        using Addr = Register::Address<0x400480fc,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOP; 
    }
    namespace Nonepioporcap0{
        using Addr = Register::Address<0x40048100,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> PIOSTAT; 
    }
    namespace Noneioconclkdiv6{
        using Addr = Register::Address<0x40048134,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneioconclkdiv5{
        using Addr = Register::Address<0x40048138,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneioconclkdiv4{
        using Addr = Register::Address<0x4004813c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneioconclkdiv3{
        using Addr = Register::Address<0x40048140,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneioconclkdiv2{
        using Addr = Register::Address<0x40048144,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneioconclkdiv1{
        using Addr = Register::Address<0x40048148,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneioconclkdiv0{
        using Addr = Register::Address<0x4004814c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Nonebodctrl{
        using Addr = Register::Address<0x40048150,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> BODRSTLEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> BODINTVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BODRSTENA; 
    }
    namespace Nonesystckcal{
        using Addr = Register::Address<0x40048154,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,0)> CAL; 
    }
    namespace Noneirqlatency{
        using Addr = Register::Address<0x40048170,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LATENCY; 
    }
    namespace Nonenmisrc{
        using Addr = Register::Address<0x40048174,0x7fffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> IRQNO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> NMIEN; 
    }
    namespace Nonepintsel0{
        using Addr = Register::Address<0x40048178,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> INTPIN; 
    }
    namespace Nonepintsel1{
        using Addr = Register::Address<0x4004817c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> INTPIN; 
    }
    namespace Nonepintsel2{
        using Addr = Register::Address<0x40048180,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> INTPIN; 
    }
    namespace Nonepintsel3{
        using Addr = Register::Address<0x40048184,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> INTPIN; 
    }
    namespace Nonepintsel4{
        using Addr = Register::Address<0x40048188,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> INTPIN; 
    }
    namespace Nonepintsel5{
        using Addr = Register::Address<0x4004818c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> INTPIN; 
    }
    namespace Nonepintsel6{
        using Addr = Register::Address<0x40048190,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> INTPIN; 
    }
    namespace Nonepintsel7{
        using Addr = Register::Address<0x40048194,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> INTPIN; 
    }
    namespace Nonestarterp0{
        using Addr = Register::Address<0x40048204,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PINT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PINT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PINT7; 
    }
    namespace Nonestarterp1{
        using Addr = Register::Address<0x40048214,0xffff4fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WWDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WKT; 
    }
    namespace Nonepdsleepcfg{
        using Addr = Register::Address<0x40048230,0xffffffb7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOD_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WDTOSC_PD; 
    }
    namespace Nonepdawakecfg{
        using Addr = Register::Address<0x40048234,0xffff7f10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRCOUT_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLASH_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOD_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYSOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WDTOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYSPLL_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ACMP; 
    }
    namespace Nonepdruncfg{
        using Addr = Register::Address<0x40048238,0xffff7f10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRCOUT_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLASH_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOD_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYSOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WDTOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYSPLL_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ACMP; 
    }
    namespace Nonedevice_id{
        using Addr = Register::Address<0x400483f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICEID; 
    }
}
