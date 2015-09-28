#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ICS_c1{
        using Addr = Register::Address<0x40044000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IREFSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRCLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IREFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> RDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CLKS; 
    }
    namespace ICS_c2{
        using Addr = Register::Address<0x40044001,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> FRDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> BDIV; 
    }
    namespace ICS_c3{
        using Addr = Register::Address<0x40044002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCTRIM; 
    }
    namespace ICS_c4{
        using Addr = Register::Address<0x40044003,0xffffff1e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SCFTRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RLOLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FLOLIE; 
    }
    namespace ICS_s{
        using Addr = Register::Address<0x40044004,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CLKST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IREFST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOLS; 
    }
}
