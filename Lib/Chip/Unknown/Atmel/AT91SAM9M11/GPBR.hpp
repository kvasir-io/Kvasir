#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPBR_gpbr0{
        using Addr = Register::Address<0xfffffd60,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE0; 
    }
    namespace GPBR_gpbr1{
        using Addr = Register::Address<0xfffffd64,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE1; 
    }
    namespace GPBR_gpbr2{
        using Addr = Register::Address<0xfffffd68,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE2; 
    }
    namespace GPBR_gpbr3{
        using Addr = Register::Address<0xfffffd6c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPBR_VALUE3; 
    }
}
