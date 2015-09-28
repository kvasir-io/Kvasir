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
    namespace Noneusbpllctrl{
        using Addr = Register::Address<0x40048010,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> PSEL; 
    }
    namespace Noneusbpllstat{
        using Addr = Register::Address<0x40048014,0xfffffffe>;
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
    namespace Nonesysresstat{
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
    namespace Noneusbpllclksel{
        using Addr = Register::Address<0x40048048,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneusbpllclkuen{
        using Addr = Register::Address<0x4004804c,0xfffffffe>;
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
        using Addr = Register::Address<0x40048080,0xfffa0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ROM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RAM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FLASHREG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLASHARRAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> I2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GPIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CT16B0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CT16B1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CT32B0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CT32B1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USB_REG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SSP1; 
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
    namespace Nonetraceclkdiv{
        using Addr = Register::Address<0x400480ac,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Nonesystickclkdiv{
        using Addr = Register::Address<0x400480b0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Noneusbclksel{
        using Addr = Register::Address<0x400480c0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneusbclkuen{
        using Addr = Register::Address<0x400480c4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA; 
    }
    namespace Noneusbclkdiv{
        using Addr = Register::Address<0x400480c8,0xffffff00>;
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
    namespace Noneclkoutdiv{
        using Addr = Register::Address<0x400480e8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Nonepioporcap0{
        using Addr = Register::Address<0x40048100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPPIO0_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPPIO0_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPPIO0_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPPIO0_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPPIO0_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPPIO0_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPPIO0_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPPIO0_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPPIO0_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPPIO0_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPPIO0_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPPIO0_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPPIO1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPPIO1_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPPIO1_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPPIO1_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CAPPIO1_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CAPPIO1_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CAPPIO1_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CAPPIO1_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CAPPIO1_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CAPPIO1_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CAPPIO1_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CAPPIO1_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CAPPIO2_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CAPPIO2_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CAPPIO2_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CAPPIO2_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CAPPIO2_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CAPPIO2_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CAPPIO2_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CAPPIO2_7; 
    }
    namespace Nonepioporcap1{
        using Addr = Register::Address<0x40048104,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPPIO2_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPPIO2_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPPIO2_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPPIO2_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPPIO3_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPPIO3_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPPIO3_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPPIO3_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPPIO3_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPPIO3_5; 
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
        using Addr = Register::Address<0x40048200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> APRPIO0_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> APRPIO0_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> APRPIO0_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> APRPIO0_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> APRPIO0_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> APRPIO0_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> APRPIO0_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> APRPIO0_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> APRPIO0_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> APRPIO0_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> APRPIO0_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> APRPIO0_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> APRPIO1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> APRPIO1_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> APRPIO1_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> APRPIO1_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> APRPIO1_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> APRPIO1_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> APRPIO1_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> APRPIO1_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> APRPIO1_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> APRPIO1_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> APRPIO1_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> APRPIO1_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> APRPIO2_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> APRPIO2_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> APRPIO2_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> APRPIO2_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> APRPIO2_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> APRPIO2_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> APRPIO2_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> APRPIO2_7; 
    }
    namespace Nonestarterp0{
        using Addr = Register::Address<0x40048204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERPIO0_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERPIO0_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERPIO0_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ERPIO0_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERPIO0_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ERPIO0_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ERPIO0_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ERPIO0_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERPIO0_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERPIO0_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ERPIO0_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ERPIO0_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERPIO1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERPIO1_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERPIO1_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ERPIO1_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERPIO1_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERPIO1_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERPIO1_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERPIO1_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ERPIO1_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ERPIO1_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ERPIO1_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ERPIO1_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ERPIO2_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> ERPIO2_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> ERPIO2_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ERPIO2_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ERPIO2_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ERPIO2_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ERPIO2_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ERPIO2_7; 
    }
    namespace Nonestartrsrp0clr{
        using Addr = Register::Address<0x40048208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RSRPIO0_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RSRPIO0_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSRPIO0_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSRPIO0_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RSRPIO0_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSRPIO0_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RSRPIO0_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RSRPIO0_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RSRPIO0_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RSRPIO0_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RSRPIO0_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RSRPIO0_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RSRPIO1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RSRPIO1_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RSRPIO1_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RSRPIO1_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RSRPIO1_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RSRPIO1_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSRPIO1_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RSRPIO1_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RSRPIO1_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RSRPIO1_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RSRPIO1_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RSRPIO1_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RSRPIO2_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RSRPIO2_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> RSRPIO2_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RSRPIO2_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RSRPIO2_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RSRPIO2_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RSRPIO2_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RSRPIO2_7; 
    }
    namespace Nonestartsrp0{
        using Addr = Register::Address<0x4004820c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SRPIO0_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SRPIO0_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRPIO0_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SRPIO0_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SRPIO0_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SRPIO0_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SRPIO0_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRPIO0_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRPIO0_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRPIO0_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SRPIO0_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SRPIO0_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SRPIO1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SRPIO1_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRPIO1_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SRPIO1_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRPIO1_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SRPIO1_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SRPIO1_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SRPIO1_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SRPIO1_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SRPIO1_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRPIO1_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SRPIO1_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SRPIO2_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SRPIO2_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SRPIO2_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SRPIO2_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SRPIO2_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SRPIO2_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SRPIO2_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SRPIO2_7; 
    }
    namespace Nonestartaprp1{
        using Addr = Register::Address<0x40048210,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> APRPIO2_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> APRPIO2_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> APRPIO2_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> APRPIO2_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> APRPIO3_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> APRPIO3_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> APRPIO3_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> APRPIO3_3; 
    }
    namespace Nonestarterp1{
        using Addr = Register::Address<0x40048214,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERPIO2_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERPIO2_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERPIO2_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ERPIO2_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERPIO3_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ERPIO3_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ERPIO3_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ERPIO3_3; 
    }
    namespace Nonestartrsrp1clr{
        using Addr = Register::Address<0x40048218,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RSRPIO2_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RSRPIO2_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSRPIO2_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSRPIO2_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RSRPIO3_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSRPIO3_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RSRPIO3_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RSRPIO3_3; 
    }
    namespace Nonestartsrp1{
        using Addr = Register::Address<0x4004821c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SRPIO2_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SRPIO2_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRPIO2_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SRPIO2_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SRPIO3_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SRPIO3_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SRPIO3_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRPIO3_3; 
    }
    namespace Nonepdsleepcfg{
        using Addr = Register::Address<0x40048230,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FIXEDVAL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOD_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> FIXEDVAL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WDTOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,7)> FIXEDVAL2; 
    }
    namespace Nonepdawakecfg{
        using Addr = Register::Address<0x40048234,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRCOUT_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLASH_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOD_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYSOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WDTOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYSPLL_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> USBPLL_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FIXEDVAL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> USBPAD_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FIXEDVAL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FIXEDVAL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> FIXEDVAL3; 
    }
    namespace Nonepdruncfg{
        using Addr = Register::Address<0x40048238,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRCOUT_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLASH_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOD_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYSOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WDTOSC_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYSPLL_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> USBPLL_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FIXEDVAL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> USBPAD_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FIXEDVAL1; 
    }
    namespace Nonedevice_id{
        using Addr = Register::Address<0x400483f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICEID; 
    }
}
