#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CHIPID_cidr{
        using Addr = Register::Address<0x400e0740,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> VERSION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> EPROC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> NVPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> NVPSIZ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> SRAMSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,20)> ARCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> NVPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EXT; 
    }
    namespace CHIPID_exid{
        using Addr = Register::Address<0x400e0744,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> EXID; 
    }
}
