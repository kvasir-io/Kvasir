#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RCM_srs0{
        using Addr = Register::Address<0x4007f000,0xffffff18>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LVD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WDOG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POR; 
    }
    namespace RCM_srs1{
        using Addr = Register::Address<0x4007f001,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> JTAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MDM_AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EZPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SACKERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TAMPER; 
    }
    namespace RCM_rpfc{
        using Addr = Register::Address<0x4007f004,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RSTFLTSRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTFLTSS; 
    }
    namespace RCM_rpfw{
        using Addr = Register::Address<0x4007f005,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> RSTFLTSEL; 
    }
    namespace RCM_mr{
        using Addr = Register::Address<0x4007f007,0xfffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EZP_MS; 
    }
}
