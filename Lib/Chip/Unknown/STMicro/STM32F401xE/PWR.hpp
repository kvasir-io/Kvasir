#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40007000,0xffff1c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> VOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADCDC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FPDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DBP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> PLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PVDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CWUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PDDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPDS; 
    }
    namespace Nonecsr{
        using Addr = Register::Address<0x40007004,0xffffbcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PVDO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EWUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> VOSRDY; 
    }
}
