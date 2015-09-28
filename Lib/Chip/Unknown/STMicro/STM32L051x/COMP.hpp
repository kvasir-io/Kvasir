#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecomp1_csr{
        using Addr = Register::Address<0x40010030,0x3fff0ece>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMP1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> COMP1_INN_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> COMP1_WM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> COMP1_OUT_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> COMP1_POLARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMP1_VALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMP1_LOCK; 
    }
    namespace Nonecomp2_csr{
        using Addr = Register::Address<0x40010034,0x3fff0886>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMP2_LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMP2_VALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> COMP2_POLARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> COMP2_INP_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> COMP2_INN_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> COMP2_SPEED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMP2_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> COMP2_OUT_SEL; 
    }
}
