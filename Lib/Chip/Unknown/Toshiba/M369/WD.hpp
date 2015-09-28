#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemod{
        using Addr = Register::Address<0x400f2000,0xffffff09>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RESCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> I2WDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> WDTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WDTE; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400f2004,0xffffffff>;
    }
}
