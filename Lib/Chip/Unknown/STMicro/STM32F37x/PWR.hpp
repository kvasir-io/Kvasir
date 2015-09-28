#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40007000,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PDDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CWUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PVDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> PLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DBP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ENSD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ENSD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ENSD3; 
    }
    namespace Nonecsr{
        using Addr = Register::Address<0x40007004,0xfffff8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PVDO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EWUP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EWUP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EWUP3; 
    }
}
