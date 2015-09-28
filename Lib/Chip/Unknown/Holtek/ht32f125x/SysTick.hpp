#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonectrl{
        using Addr = Register::Address<0xe000e010,0xfffefff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TICKINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKSOURCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COUNTFLAG; 
    }
    namespace Noneload{
        using Addr = Register::Address<0xe000e014,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> RELOAD; 
    }
    namespace Noneval{
        using Addr = Register::Address<0xe000e018,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CURRENT; 
    }
    namespace Nonecalib{
        using Addr = Register::Address<0xe000e01c,0x3f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> TENMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SKEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> NOREF; 
    }
}
