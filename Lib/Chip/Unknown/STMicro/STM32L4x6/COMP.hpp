#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecomp1_csr{
        using Addr = Register::Address<0x40010200,0x3f207f02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMP1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> COMP1_PWRMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> COMP1_INMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COMP1_INPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> COMP1_POLARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> COMP1_HYST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> COMP1_BLANKING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> COMP1_BRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> COMP1_SCALEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMP1_VALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMP1_LOCK; 
    }
    namespace Nonecomp2_csr{
        using Addr = Register::Address<0x40010204,0x3f207d02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMP2_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> COMP2_PWRMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> COMP2_INMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COMP2_INPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> COMP2_WINMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> COMP2_POLARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> COMP2_HYST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> COMP2_BLANKING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> COMP2_BRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> COMP2_SCALEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMP2_VALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMP2_LOCK; 
    }
}
