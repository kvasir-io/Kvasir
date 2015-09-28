#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace KBI1_pe{
        using Addr = Register::Address<0x4007a000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KBIPE; 
    }
    namespace KBI1_es{
        using Addr = Register::Address<0x4007a004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KBEDG; 
    }
    namespace KBI1_sc{
        using Addr = Register::Address<0x4007a008,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> KBMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> KBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> KBACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> KBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> KBSPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSTKBSP; 
    }
    namespace KBI1_sp{
        using Addr = Register::Address<0x4007a00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SP; 
    }
}
