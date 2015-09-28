#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PWT_r1{
        using Addr = Register::Address<0x40033000,0x00000004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PWTOV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWTSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> POVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PWTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PWTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> PINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PPW; 
    }
    namespace PWT_r2{
        using Addr = Register::Address<0x40033004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PWTC; 
    }
}
