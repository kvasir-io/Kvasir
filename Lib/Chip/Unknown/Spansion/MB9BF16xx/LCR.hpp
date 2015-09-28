#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonelcr_prsld{
        using Addr = Register::Address<0x4003c000,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> LCR_PRSLD; 
    }
}
