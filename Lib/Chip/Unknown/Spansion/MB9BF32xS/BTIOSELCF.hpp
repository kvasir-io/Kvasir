#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonebtselcdef{
        using Addr = Register::Address<0x40025700,0xffff00ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SELEF_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> SELCD_; 
    }
}
