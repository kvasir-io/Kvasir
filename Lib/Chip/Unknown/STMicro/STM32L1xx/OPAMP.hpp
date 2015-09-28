#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecsr{
        using Addr = Register::Address<0x40007c5c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> OPA3CALOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OPA2CALOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> OPA1CALOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> AOP_RANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> S7SEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> ANAWSEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> ANAWSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ANAWSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OPA3LPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OPA3CAL_H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OPA3CAL_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> S6SEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> S5SEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> S4SEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> S3SEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OPA3PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OPA2LPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OPA2CAL_H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OPA2CAL_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> S6SEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> S5SEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> S4SEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> S3SEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OPA2PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OPA1LPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OPA1CAL_H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OPA1CAL_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> S6SEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> S5SEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> S4SEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> S3SEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OPA1PD; 
    }
    namespace Noneotr{
        using Addr = Register::Address<0x40007c60,0x40000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> OT_USER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20)> AO3_OPT_OFFSET_TRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> AO2_OPT_OFFSET_TRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> AO1_OPT_OFFSET_TRIM; 
    }
    namespace Nonelpotr{
        using Addr = Register::Address<0x40007c64,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20)> AO3_OPT_OFFSET_TRIM_LP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> AO2_OPT_OFFSET_TRIM_LP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> AO1_OPT_OFFSET_TRIM_LP; 
    }
}
