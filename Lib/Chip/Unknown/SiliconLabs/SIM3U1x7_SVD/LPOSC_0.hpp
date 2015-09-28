#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneoscval{
        using Addr = Register::Address<0x40041000,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> OSCVAL; 
    }
}
