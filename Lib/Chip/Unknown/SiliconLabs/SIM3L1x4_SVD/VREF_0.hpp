#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40039010,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VREF2X; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TEMPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VREFOUTEN; 
    }
}
