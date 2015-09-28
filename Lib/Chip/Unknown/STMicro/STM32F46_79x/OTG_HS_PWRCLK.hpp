#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneotg_hs_pcgcr{
        using Addr = Register::Address<0x40040e00,0xffffffec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STPPCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GATEHCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PHYSUSP; 
    }
}
