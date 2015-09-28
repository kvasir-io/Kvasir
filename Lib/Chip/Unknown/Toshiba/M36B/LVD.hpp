#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonercr{
        using Addr = Register::Address<0x400f4000,0xffffffd0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LVDEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> LVDLVL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LVDRSTEN; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x400f4004,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LVDEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> LVDLVL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LVDINTEN; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x400f4008,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LVDST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LVDST2; 
    }
}
