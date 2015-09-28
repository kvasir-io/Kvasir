#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonebtsssr{
        using Addr = Register::Address<0x40025ffc,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SSSR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SSSR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SSSR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SSSR0; 
    }
}
