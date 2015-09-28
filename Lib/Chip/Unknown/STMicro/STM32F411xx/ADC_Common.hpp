#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecsr{
        using Addr = Register::Address<0x40012300,0xffc0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OVR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STRT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> JSTRT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> JEOC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EOC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AWD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OVR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STRT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> JSTRT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> JEOC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EOC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AWD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STRT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> JSTRT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> JEOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AWD1; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0x40012304,0xff3c10ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TSVREFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> VBATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> ADCPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DELAY; 
    }
}
