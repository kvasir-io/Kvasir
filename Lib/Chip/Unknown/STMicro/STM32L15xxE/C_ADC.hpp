#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecsr{
        using Addr = Register::Address<0x40012700,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADONS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STRT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> JSTRT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> JEOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AWD1; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0x40012704,0xff7cffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TSVREFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> ADCPRE; 
    }
}
