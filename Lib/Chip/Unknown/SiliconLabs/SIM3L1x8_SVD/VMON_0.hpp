#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x4002f000,0x7fffffa3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VBATRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VBATLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> VBATHITHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> VBATLIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> VMONEN; 
    }
}
