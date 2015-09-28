#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneferrad{
        using Addr = Register::Address<0x40000300,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> ERRAD; 
    }
}
