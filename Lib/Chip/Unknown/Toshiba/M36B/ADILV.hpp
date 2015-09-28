#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetrgsel{
        using Addr = Register::Address<0x40066010,0xffff00fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRGSELEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> HPTRGSEL; 
    }
}
