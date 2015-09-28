#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneconfig{
        using Addr = Register::Address<0x4001e000,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PHGFREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PUGFREN; 
    }
    namespace Nonecontrol{
        using Addr = Register::Address<0x4001e010,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EX0INVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EX1INVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EX2INVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EX3INVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EX0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EX1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EX2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EX3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATUS; 
    }
}
