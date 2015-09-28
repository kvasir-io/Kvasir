#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40007000,0xfff03000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PDDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CWUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PVDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> PLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DBP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FPDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LPLVDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MRLVDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> VOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ODEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ODSWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> UDEN; 
    }
    namespace Nonecsr{
        using Addr = Register::Address<0x40007004,0xfff0bcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PVDO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EWUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> VOSRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ODRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ODSWRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> UDRDY; 
    }
}
