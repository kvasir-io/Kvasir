#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace EFC1_fmr{
        using Addr = Register::Address<0x400e0c00,0xfafef0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> FWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SCOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FAM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CLOE; 
    }
    namespace EFC1_fcr{
        using Addr = Register::Address<0x400e0c04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> FARG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> FKEY; 
    }
    namespace EFC1_fsr{
        using Addr = Register::Address<0x400e0c08,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FCMDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLOCKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FLERR; 
    }
    namespace EFC1_frr{
        using Addr = Register::Address<0x400e0c0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FVALUE; 
    }
}
