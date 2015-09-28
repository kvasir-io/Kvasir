#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ICS_c1{
        using Addr = Register::Address<0x40064000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IREFSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRCLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IREFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> RDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CLKS; 
    }
    namespace ICS_c2{
        using Addr = Register::Address<0x40064001,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> BDIV; 
    }
    namespace ICS_c3{
        using Addr = Register::Address<0x40064002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCTRIM; 
    }
    namespace ICS_c4{
        using Addr = Register::Address<0x40064003,0xffffff5e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SCFTRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOLIE; 
    }
    namespace ICS_s{
        using Addr = Register::Address<0x40064004,0xffffff23>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CLKST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IREFST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOLS; 
    }
}
