#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonereseten{
        using Addr = Register::Address<0x4002c000,0x07fff80b>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VMONREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MCDREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WDTREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SWREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMP0REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CMP1REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPFREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RTC0REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CPMREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> UART0MREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> LCD0MREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ACC0MREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RTC0MREN; 
    }
    namespace Noneresetflag{
        using Addr = Register::Address<0x4002c010,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PINRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PORRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VMONRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CORERF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MCDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WDTRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SWRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMP0RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CMP1RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPFRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RTC0RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAKERF; 
    }
}
