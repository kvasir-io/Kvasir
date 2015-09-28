#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RTC_sc{
        using Addr = Register::Address<0x4003d000,0xffff382f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RTCO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RTIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> RTCPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> RTCLKS; 
    }
    namespace RTC_mod{
        using Addr = Register::Address<0x4003d004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MOD; 
    }
    namespace RTC_cnt{
        using Addr = Register::Address<0x4003d008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
}
