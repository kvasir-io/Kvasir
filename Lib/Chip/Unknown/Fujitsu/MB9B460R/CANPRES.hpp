#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecanpre{
        using Addr = Register::Address<0x40037000,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CANPRE; 
    }
}
