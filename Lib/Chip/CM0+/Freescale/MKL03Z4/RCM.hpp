#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RCM_srs0{
        using Addr = Register::Address<0x4007f000,0xffffff1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LVD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WDOG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POR; 
    }
    namespace RCM_srs1{
        using Addr = Register::Address<0x4007f001,0xffffffd1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MDM_AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SACKERR; 
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
    namespace RCM_fm{
        using Addr = Register::Address<0x4007f006,0xfffffff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> FORCEROM; 
    }
    namespace RCM_mr{
        using Addr = Register::Address<0x4007f007,0xfffffff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> BOOTROM; 
    }
    namespace RCM_ssrs0{
        using Addr = Register::Address<0x4007f008,0xffffff1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SLVD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SWDOG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPOR; 
    }
    namespace RCM_ssrs1{
        using Addr = Register::Address<0x4007f009,0xffffffd1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SLOCKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SMDM_AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SSACKERR; 
    }
}
