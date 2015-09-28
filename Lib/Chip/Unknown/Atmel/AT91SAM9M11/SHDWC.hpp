#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SHDWC_cr{
        using Addr = Register::Address<0xfffffd10,0x00fffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SHDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> KEY; 
    }
    namespace SHDWC_mr{
        using Addr = Register::Address<0xfffffd14,0xfffcff0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WKMODE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CPTWK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RTTWKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RTCWKEN; 
    }
    namespace SHDWC_sr{
        using Addr = Register::Address<0xfffffd18,0xfffcfffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RTTWK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RTCWK; 
    }
}
