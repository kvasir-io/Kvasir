#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RTT_mr{
        using Addr = Register::Address<0x400e1a30,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RTPRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ALMIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RTTINCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RTTRST; 
    }
    namespace RTT_ar{
        using Addr = Register::Address<0x400e1a34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ALMV; 
    }
    namespace RTT_vr{
        using Addr = Register::Address<0x400e1a38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRTV; 
    }
    namespace RTT_sr{
        using Addr = Register::Address<0x400e1a3c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ALMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTTINC; 
    }
}
