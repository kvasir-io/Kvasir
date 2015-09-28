#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecsr{
        using Addr = Register::Address<0x40010030,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VRR; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0x40010034,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> TRIM; 
    }
}
