#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefs_pcgcctl{
        using Addr = Register::Address<0x50000e00,0xffffffec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STPPCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GATEHCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PHYSUSP; 
    }
}
