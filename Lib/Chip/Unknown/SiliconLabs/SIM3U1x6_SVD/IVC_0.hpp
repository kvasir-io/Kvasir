#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40044000,0x3fffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> IN0RANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> IN1RANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> C0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> C1EN; 
    }
}
