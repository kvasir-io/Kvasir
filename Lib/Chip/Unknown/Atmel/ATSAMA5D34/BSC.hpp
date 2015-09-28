#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace BSC_cr{
        using Addr = Register::Address<0xfffffe54,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BOOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BOOTKEY; 
    }
}
