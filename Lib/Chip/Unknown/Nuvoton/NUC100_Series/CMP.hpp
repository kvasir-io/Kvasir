#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecmp0cr{
        using Addr = Register::Address<0x400d0000,0xffffffe8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HYSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CN0; 
    }
    namespace Nonecmp1cr{
        using Addr = Register::Address<0x400d0004,0xffffffe8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HYSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CN1; 
    }
    namespace Nonecmpsr{
        using Addr = Register::Address<0x400d0008,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMPF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMPF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CO1; 
    }
}
