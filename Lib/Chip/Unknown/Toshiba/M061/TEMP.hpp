#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneen{
        using Addr = Register::Address<0x4005d000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EN1; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x4005d004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CR0; 
    }
}
