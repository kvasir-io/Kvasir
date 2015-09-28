#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonebtsel0123{
        using Addr = Register::Address<0x40025100,0xffff00ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SEL23_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> SEL01_; 
    }
}
