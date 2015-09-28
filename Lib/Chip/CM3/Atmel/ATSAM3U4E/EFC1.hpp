#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace EFC1_fmr{
        using Addr = Register::Address<0x400e0a00,0xfefef0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> FWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SCOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FAM; 
    }
    namespace EFC1_fcr{
        using Addr = Register::Address<0x400e0a04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> FARG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> FKEY; 
    }
    namespace EFC1_fsr{
        using Addr = Register::Address<0x400e0a08,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FCMDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLOCKE; 
    }
    namespace EFC1_frr{
        using Addr = Register::Address<0x400e0a0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FVALUE; 
    }
}
