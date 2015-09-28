#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesysmemremap{
        using Addr = Register::Address<0x40048000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MAP; 
    }
    namespace Nonepresetctrl{
        using Addr = Register::Address<0x40048004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SSP0_RST_N; 
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
    namespace Noneircctrl{
        using Addr = Register::Address<0x40048028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TRIM; 
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
        using Addr = Register::Address<0x40048080,0xfffe4020>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ROM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RAM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FLASHREG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLASHARRAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GPIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CT16B0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CT16B1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CT32B0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CT32B1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SSP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IOCON; 
    }
    namespace Nonessp0clkdiv{
        using Addr = Register::Address<0x40048094,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneuartclkdiv{
        using Addr = Register::Address<0x40048098,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Nonewdtclksel{
        using Addr = Register::Address<0x400480d0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Nonewdtclkuen{
        using Addr = Register::Address<0x400480d4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA; 
    }
    namespace Nonewdtclkdiv{
        using Addr = Register::Address<0x400480d8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneclkoutclksel{
        using Addr = Register::Address<0x400480e0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneclkoutuen{
        using Addr = Register::Address<0x400480e4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA; 
    }
    namespace Noneclkoutclkdiv{
        using Addr = Register::Address<0x400480e8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Nonepioporcap0{
        using Addr = Register::Address<0x40048100,0xfff300fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPPIO0_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPPIO0_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPPIO0_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPPIO0_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPPIO0_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPPIO1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPPIO1_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPPIO1_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPPIO1_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CAPPIO1_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CAPPIO1_7; 
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
    namespace Nonestartaprp0{
        using Addr = Register::Address<0x40048200,0xffffe0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> APRPIO0_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> APRPIO0_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> APRPIO0_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> APRPIO0_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> APRPIO0_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> APRPIO1_0; 
    }
    namespace Nonestarterp0{
        using Addr = Register::Address<0x40048204,0xffffe0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERPIO0_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERPIO0_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERPIO0_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ERPIO0_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ERPIO0_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERPIO1_0; 
    }
    namespace Nonestartrsrp0clr{
        using Addr = Register::Address<0x40048208,0xffffe0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RSRPIO0_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RSRPIO0_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RSRPIO0_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RSRPIO0_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RSRPIO0_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RSRPIO1_0; 
    }
    namespace Nonestartsrp0{
        using Addr = Register::Address<0x4004820c,0xffffe0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SRPIO0_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRPIO0_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRPIO0_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SRPIO0_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SRPIO0_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SRPIO1_0; 
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
