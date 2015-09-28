#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RNG_cr{
        using Addr = Register::Address<0x400a0000,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SLP; 
    }
    namespace RNG_sr{
        using Addr = Register::Address<0x400a0004,0xff0000e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SECV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ORU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SLP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> OREG_LVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> OREG_SIZE; 
    }
    namespace RNG_er{
        using Addr = Register::Address<0x400a0008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> EXT_ENT; 
    }
    namespace RNG_or{
        using Addr = Register::Address<0x400a000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RANDOUT; 
    }
}
