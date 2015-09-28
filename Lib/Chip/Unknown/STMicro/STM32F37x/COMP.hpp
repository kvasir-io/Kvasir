#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecsr{
        using Addr = Register::Address<0x40007c1c,0x00020080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMP1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COMP1_INP_DAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> COMP1MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> COMP1INSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> COMP1OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> COMP1POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMP1HYST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> COMP1OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> COMP1LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMP2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> COMP2MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> COMP2INSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> WNDWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> COMP2OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> COMP2POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> COMP2HYST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMP2OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMP2LOCK; 
    }
}
