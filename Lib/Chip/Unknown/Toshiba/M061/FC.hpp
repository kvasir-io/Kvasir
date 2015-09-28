#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesecbit{
        using Addr = Register::Address<0x41fff010,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SECBIT; 
    }
    namespace Noneflcs{
        using Addr = Register::Address<0x41fff020,0xfff0fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDY_BSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> BLPRO; 
    }
    namespace Nonedbgen{
        using Addr = Register::Address<0x41fff05c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EN1; 
    }
}
