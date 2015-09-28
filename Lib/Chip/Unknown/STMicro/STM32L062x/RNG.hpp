#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40025000,0xfffffff3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RNGEN; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40025004,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SEIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CEIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SECS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CECS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DRDY; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0x40025008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RNDATA; 
    }
}
