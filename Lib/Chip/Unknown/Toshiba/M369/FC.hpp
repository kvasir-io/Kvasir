#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesecbit{
        using Addr = Register::Address<0x41fff010,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SECBIT; 
    }
    namespace Noneflcs{
        using Addr = Register::Address<0x41fff020,0xffc0fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDY_BSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> BLPRO; 
    }
}
