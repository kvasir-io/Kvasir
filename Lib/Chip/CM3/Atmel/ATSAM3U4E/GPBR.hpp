#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPBR_gpbr0{
        using Addr = Register::Address<0x400e1290,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE; 
    }
    namespace GPBR_gpbr1{
        using Addr = Register::Address<0x400e1294,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE; 
    }
    namespace GPBR_gpbr2{
        using Addr = Register::Address<0x400e1298,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE; 
    }
    namespace GPBR_gpbr3{
        using Addr = Register::Address<0x400e129c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE; 
    }
}
