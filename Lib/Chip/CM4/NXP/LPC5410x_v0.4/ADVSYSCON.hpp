#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonebodctrl{
        using Addr = Register::Address<0x4002c044,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> BODRSTLEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> BODINTVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BODRSTENA; 
    }
}
