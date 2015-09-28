#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RTT_mr{
        using Addr = Register::Address<0xfffffd20,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RTPRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ALMIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RTTINCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RTTRST; 
    }
    namespace RTT_ar{
        using Addr = Register::Address<0xfffffd24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ALMV; 
    }
    namespace RTT_vr{
        using Addr = Register::Address<0xfffffd28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRTV; 
    }
    namespace RTT_sr{
        using Addr = Register::Address<0xfffffd2c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ALMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTTINC; 
    }
}
