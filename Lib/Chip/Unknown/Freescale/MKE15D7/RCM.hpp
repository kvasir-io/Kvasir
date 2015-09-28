#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RCM_srsl{
        using Addr = Register::Address<0x40057000,0xffffff19>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LVD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POR; 
    }
    namespace RCM_srsh{
        using Addr = Register::Address<0x40057001,0xffffffd0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> JTAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MDMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SACKERR; 
    }
    namespace RCM_rpfc{
        using Addr = Register::Address<0x40057004,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RSTFLTSRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTFLTSS; 
    }
    namespace RCM_rpfw{
        using Addr = Register::Address<0x40057005,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> RSTFLTSS; 
    }
}
