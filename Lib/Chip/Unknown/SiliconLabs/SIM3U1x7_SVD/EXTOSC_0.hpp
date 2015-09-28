#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x4003c000,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FREQCN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSCVLDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> OSCMD; 
    }
}
