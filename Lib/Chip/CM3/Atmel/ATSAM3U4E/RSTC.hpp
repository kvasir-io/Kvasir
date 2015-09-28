#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RSTC_cr{
        using Addr = Register::Address<0x400e1200,0x00fffff2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PROCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> KEY; 
    }
    namespace RSTC_sr{
        using Addr = Register::Address<0x400e1204,0xfffcf8fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> URSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> RSTTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> NRSTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SRCMP; 
    }
    namespace RSTC_mr{
        using Addr = Register::Address<0x400e1208,0x00fff0ee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> URSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> URSTIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ERSTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> KEY; 
    }
}
