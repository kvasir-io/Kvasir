#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x4002f000,0x7fffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VREGINSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VREGINLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VDDRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VDDLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> VDDHITHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> VDDLIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> VREGINLIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> VMONEN; 
    }
}
