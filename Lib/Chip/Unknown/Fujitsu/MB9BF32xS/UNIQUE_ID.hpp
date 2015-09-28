#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneuidr0{
        using Addr = Register::Address<0x40000200,0x0000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,4)> UID27_0; 
    }
    namespace Noneuidr1{
        using Addr = Register::Address<0x40000204,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> UID40_28; 
    }
}
