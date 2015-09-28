#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonewdg_cr{
        using Addr = Register::Address<0x40006000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WDGDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WDGEN; 
    }
    namespace Nonewdg_kr{
        using Addr = Register::Address<0x40006004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> KEY; 
    }
    namespace Nonewdg_kicksr{
        using Addr = Register::Address<0x40006008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> KS; 
    }
}
