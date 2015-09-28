#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonectrl{
        using Addr = Register::Address<0x40024000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ALARM1HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKE1KHZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ALARMDPD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WAKEDPD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RTC1KHZ_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RTC_EN; 
    }
    namespace Nonematch{
        using Addr = Register::Address<0x40024004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MATVAL; 
    }
    namespace Nonecount{
        using Addr = Register::Address<0x40024008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VAL; 
    }
    namespace Nonewake{
        using Addr = Register::Address<0x4002400c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
}
