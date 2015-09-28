#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace LMEM_pcccr{
        using Addr = Register::Address<0xe0082000,0x70fffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENCACHE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENWRBUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCCR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PCCR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> INVW0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PUSHW0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> INVW1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PUSHW1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> GO; 
    }
    namespace LMEM_pcclcr{
        using Addr = Register::Address<0xe0082004,0xf08eb002>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LGO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,2)> CACHEADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> WSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TDSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LCIVB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LCIMB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LCWAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> LCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> LADSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> LACC; 
    }
    namespace LMEM_pccsar{
        using Addr = Register::Address<0xe0082008,0x00000002>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LGO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> PHYADDR; 
    }
    namespace LMEM_pcccvr{
        using Addr = Register::Address<0xe008200c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace LMEM_pccrmr{
        using Addr = Register::Address<0xe0082020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> R15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> R14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> R13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> R12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> R11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> R10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> R9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> R8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> R7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> R6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> R5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> R4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> R3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> R2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> R1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> R0; 
    }
}
