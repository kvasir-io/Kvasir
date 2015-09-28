#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneconfig{
        using Addr = Register::Address<0x4002e000,0xffe2ff2c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SPMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RDSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PFINH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SQWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERASEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> BUFSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> BUSYF; 
    }
    namespace Nonewraddr{
        using Addr = Register::Address<0x4002e0a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> WRADDR; 
    }
    namespace Nonewrdata{
        using Addr = Register::Address<0x4002e0b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> WRDATA; 
    }
    namespace Nonekey{
        using Addr = Register::Address<0x4002e0c0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
    namespace Nonetcontrol{
        using Addr = Register::Address<0x4002e0d0,0xffffffbf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FLRTMD; 
    }
}
