#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PAC_wpclr{
        using Addr = Register::Address<0x40000000,0x00000001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,1)> WP; 
    }
    namespace PAC_wpset{
        using Addr = Register::Address<0x40000004,0x00000001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,1)> WP; 
    }
}
