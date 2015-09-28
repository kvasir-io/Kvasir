#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPBR_gpbr0{
        using Addr = Register::Address<0x400e1490,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE; 
    }
    namespace GPBR_gpbr1{
        using Addr = Register::Address<0x400e1494,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE; 
    }
    namespace GPBR_gpbr2{
        using Addr = Register::Address<0x400e1498,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE; 
    }
    namespace GPBR_gpbr3{
        using Addr = Register::Address<0x400e149c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE; 
    }
    namespace GPBR_gpbr4{
        using Addr = Register::Address<0x400e14a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE; 
    }
    namespace GPBR_gpbr5{
        using Addr = Register::Address<0x400e14a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE; 
    }
    namespace GPBR_gpbr6{
        using Addr = Register::Address<0x400e14a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE; 
    }
    namespace GPBR_gpbr7{
        using Addr = Register::Address<0x400e14ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE; 
    }
}
