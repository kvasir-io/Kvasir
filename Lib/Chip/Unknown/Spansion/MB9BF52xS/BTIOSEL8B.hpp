#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonebtsel89ab{
        using Addr = Register::Address<0x40025500,0xffff00ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SELAB_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> SEL89_; 
    }
}
