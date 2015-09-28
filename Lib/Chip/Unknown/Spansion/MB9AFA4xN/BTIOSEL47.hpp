#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonebtsel4567{
        using Addr = Register::Address<0x40025300,0xffff00ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SEL67_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> SEL45_; 
    }
}
