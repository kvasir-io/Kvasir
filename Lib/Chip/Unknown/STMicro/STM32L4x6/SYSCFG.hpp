#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonememrmp{
        using Addr = Register::Address<0x40010000,0xfffffef0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FB_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> QFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MEM_MODE; 
    }
    namespace Nonecfgr1{
        using Addr = Register::Address<0x40010004,0x0380fefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26)> FPU_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C3_FMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C2_FMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> I2C1_FMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> I2C_PB9_FMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> I2C_PB8_FMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> I2C_PB7_FMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> I2C_PB6_FMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BOOSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FWDIS; 
    }
    namespace Noneexticr1{
        using Addr = Register::Address<0x40010008,0xffff8888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> EXTI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EXTI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EXTI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EXTI0; 
    }
    namespace Noneexticr2{
        using Addr = Register::Address<0x4001000c,0xffff8888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> EXTI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EXTI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EXTI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EXTI4; 
    }
    namespace Noneexticr3{
        using Addr = Register::Address<0x40010010,0xffff8888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> EXTI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EXTI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EXTI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EXTI8; 
    }
    namespace Noneexticr4{
        using Addr = Register::Address<0x40010014,0xffff8888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> EXTI15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EXTI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EXTI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EXTI12; 
    }
    namespace Nonescsr{
        using Addr = Register::Address<0x40010018,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SRAM2BSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SRAM2ER; 
    }
    namespace Nonecfgr2{
        using Addr = Register::Address<0x4001001c,0xfffffef0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ECCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PVDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLL; 
    }
    namespace Noneswpr{
        using Addr = Register::Address<0x40010020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> P31WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> P30WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> P29WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> P28WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> P27WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> P26WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> P25WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> P24WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> P23WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> P22WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> P21WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P20WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> P19WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> P18WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> P17WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> P16WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P15WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P14WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P13WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P12WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P11WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P10WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P9WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P8WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P7WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P6WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P5WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P4WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P3WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P1WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0WP; 
    }
    namespace Noneskr{
        using Addr = Register::Address<0x40010024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
}
