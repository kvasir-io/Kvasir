#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonerst_sr{
        using Addr = Register::Address<0x4000002c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OBFAIL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWRLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PWRHV; 
    }
}
