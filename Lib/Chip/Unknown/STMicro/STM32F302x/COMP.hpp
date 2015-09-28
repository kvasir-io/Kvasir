#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecomp2_csr{
        using Addr = Register::Address<0x40010024,0x3fe04102>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMP2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> COMP2MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> COMP2INSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COMP2INPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> COMP2INMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,10)> COMP2_OUT_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> COMP2POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> COMP2HYST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> COMP2_BLANKING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMP2OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMP2LOCK; 
    }
    namespace Nonecomp4_csr{
        using Addr = Register::Address<0x4001002c,0x3fe04102>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMP4EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> COMP4MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> COMP4INSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COMP4INPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> COM4WINMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,10)> COMP4_OUT_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> COMP4POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> COMP4HYST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> COMP4_BLANKING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMP4OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMP4LOCK; 
    }
    namespace Nonecomp6_csr{
        using Addr = Register::Address<0x40010034,0x3fe04102>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMP6EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> COMP6MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> COMP6INSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COMP6INPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> COM6WINMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,10)> COMP6_OUT_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> COMP6POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> COMP6HYST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> COMP6_BLANKING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMP6OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMP6LOCK; 
    }
}
