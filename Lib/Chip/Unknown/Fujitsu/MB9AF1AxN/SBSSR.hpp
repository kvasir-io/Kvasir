#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonebtsssr{
        using Addr = Register::Address<0x40025ffc,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SSSR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SSSR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SSSR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SSSR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SSSR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SSSR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SSSR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SSSR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SSSR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SSSR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SSSR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SSSR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SSSR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SSSR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SSSR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SSSR0; 
    }
}
