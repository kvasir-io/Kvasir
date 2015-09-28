#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40002c00,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WDGA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> T; 
    }
    namespace Nonecfr{
        using Addr = Register::Address<0x40002c04,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EWI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WDGTB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WDGTB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> W; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40002c08,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EWIF; 
    }
}
