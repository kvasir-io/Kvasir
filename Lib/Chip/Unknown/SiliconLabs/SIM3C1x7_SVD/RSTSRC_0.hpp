#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonereseten{
        using Addr = Register::Address<0x4002d060,0xfffff20b>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VMONREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MCDREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WDTREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SWREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMP0REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CMP1REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RTC0REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAKEREN; 
    }
    namespace Noneresetflag{
        using Addr = Register::Address<0x4002d070,0xfffff200>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PINRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PORRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VMONRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CORERF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MCDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WDTRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SWRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMP0RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CMP1RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RTC0RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAKERF; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x4002d080,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMSEL; 
    }
}
