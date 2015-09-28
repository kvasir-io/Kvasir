#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefpscr{
        using Addr = Register::Address<0xe000eb88,0x083fff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DZC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IXC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> RMode; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> AHP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> V; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> Z; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> N; 
    }
}
