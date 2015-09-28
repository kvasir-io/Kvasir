#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonewfaszr{
        using Addr = Register::Address<0x200e0000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ASZ; 
    }
    namespace Nonewfrwtr{
        using Addr = Register::Address<0x200e0004,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RWT; 
    }
    namespace Nonewfstr{
        using Addr = Register::Address<0x200e0008,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HNG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDY; 
    }
}
