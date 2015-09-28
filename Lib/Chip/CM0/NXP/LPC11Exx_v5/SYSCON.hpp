#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesysmemremap{
        using Addr = Register::Address<0x40048000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MAP; 
    }
    namespace Nonepresetctrl{
        using Addr = Register::Address<0x40048004,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SSP0_RST_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> I2C_RST_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SSP1_RST_N; 
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
        using Addr = Register::Address<0x40048080,0xfa724000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ROM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RAM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FLASHREG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLASHARRAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> I2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GPIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CT16B0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CT16B1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CT32B0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CT32B1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SSP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> USART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WWDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SSP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> GROUP0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> GROUP1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> RAM1; 
    }
    namespace Nonessp0clkdiv{
        using Addr = Register::Address<0x40048094,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneuartclkdiv{
        using Addr = Register::Address<0x40048098,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Nonessp1clkdiv{
        using Addr = Register::Address<0x4004809c,0xffffff00>;
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
    namespace Nonepioporcap0{
        using Addr = Register::Address<0x40048100,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> PIOSTAT; 
    }
    namespace Nonepioporcap1{
        using Addr = Register::Address<0x40048104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PIOSTAT; 
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
        using Addr = Register::Address<0x40048214,0xffcfcfff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WWDTINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BODINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> GPIOINT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> GPIOINT1; 
    }
    namespace Nonepdsleepcfg{
        using Addr = Register::Address<0x40048230,0xffffffb7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOD_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WDTOSC_PD; 
    }
    namespace Nonepdawakecfg{
        using Addr = Register::Address<0x40048234,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRCOUT_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLASH_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOD_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYSOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WDTOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYSPLL_PD; 
    }
    namespace Nonepdruncfg{
        using Addr = Register::Address<0x40048238,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRCOUT_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLASH_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOD_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYSOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WDTOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYSPLL_PD; 
    }
    namespace Nonedevice_id{
        using Addr = Register::Address<0x400483f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICEID; 
    }
}
