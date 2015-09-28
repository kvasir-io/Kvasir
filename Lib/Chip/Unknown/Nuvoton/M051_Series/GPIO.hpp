#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedbncecon{
        using Addr = Register::Address<0x50004180,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DBCLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBCLKSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ICLK_ON; 
    }
}
