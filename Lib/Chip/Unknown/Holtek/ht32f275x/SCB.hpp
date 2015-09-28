#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonescr{
        using Addr = Register::Address<0xe000ed10,0xffffffe9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SLEEPONEXIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SLEEPDEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SEVONPEND; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0xe000ed14,0xfffffce4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NONEBASETHRDENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USERSETMPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UNALIGN_TRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIV_0_TRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BFHFNMIGN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STKALIGN; 
    }
}
