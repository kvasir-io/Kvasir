#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemactmr_cntr{
        using Addr = Register::Address<0x40002038,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0)> CNT; 
    }
    namespace Nonemactmr_cr{
        using Addr = Register::Address<0x4000208c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RST; 
    }
}
