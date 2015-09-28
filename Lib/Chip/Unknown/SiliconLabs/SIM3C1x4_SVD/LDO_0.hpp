#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40039000,0x7ffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDOIBIAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LDOAEN; 
    }
}
