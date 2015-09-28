#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MCG_c1{
        using Addr = Register::Address<0x40064000,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IREFSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRCLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CLKS; 
    }
    namespace MCG_c2{
        using Addr = Register::Address<0x40064001,0xffffffc2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EREFS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HGO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RANGE0; 
    }
    namespace MCG_s{
        using Addr = Register::Address<0x40064006,0xfffffff1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSCINIT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CLKST; 
    }
    namespace MCG_sc{
        using Addr = Register::Address<0x40064008,0xfffffff1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> FCRDIV; 
    }
    namespace MCG_mc{
        using Addr = Register::Address<0x40064018,0xffffff38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LIRC_DIV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HIRCLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HIRCEN; 
    }
}
