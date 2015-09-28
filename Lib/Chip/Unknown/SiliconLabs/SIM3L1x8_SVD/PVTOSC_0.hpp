#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x4003d000,0xffffff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LVOSCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HVOSCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LVOSCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HVOSCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLKSEL; 
    }
}
