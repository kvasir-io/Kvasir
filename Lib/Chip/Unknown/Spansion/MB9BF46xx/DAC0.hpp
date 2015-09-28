#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedacr{
        using Addr = Register::Address<0x40033000,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DDAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DAC10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DAE; 
    }
    namespace Nonedadr{
        using Addr = Register::Address<0x40033004,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DA; 
    }
}
