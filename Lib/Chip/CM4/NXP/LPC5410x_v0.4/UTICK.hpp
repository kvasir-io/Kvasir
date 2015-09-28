#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonectrl{
        using Addr = Register::Address<0x40020000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> DELAYVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> REPEAT; 
    }
    namespace Nonestat{
        using Addr = Register::Address<0x40020004,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACTIVE; 
    }
}
