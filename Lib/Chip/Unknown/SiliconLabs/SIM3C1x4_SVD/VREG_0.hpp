#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40040000,0x7ffffe1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VBUSVLDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SUSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BGDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SENSEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> VBUSIVLDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VBUSIVLDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> VREGDIS; 
    }
}
