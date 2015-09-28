#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepcon{
        using Addr = Register::Address<0x40038000,0xfffffeff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLEEPFLAG; 
    }
}
