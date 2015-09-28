#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecfsr{
        using Addr = Register::Address<0xe000ed28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MFSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> BFSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> UFSR; 
    }
    namespace Nonemfsr{
        using Addr = Register::Address<0xe000ed28,0xffffff64>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IACCVIOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DACCVIOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MUNSTKERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSTKERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MMARVALID; 
    }
    namespace Nonemmfar{
        using Addr = Register::Address<0xe000ed34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDRESS; 
    }
    namespace Nonebfsr{
        using Addr = Register::Address<0xe000ed29,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IBUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PRECISERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IMPRECISERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UNSTKERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STKERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BFARVALID; 
    }
    namespace Nonebfar{
        using Addr = Register::Address<0xe000ed38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDRESS; 
    }
    namespace Noneufsr{
        using Addr = Register::Address<0xe000ed2a,0xfffffcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UNDEFINSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INVSTATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INVPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NOCP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UNALIGNED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DIVBYZERO; 
    }
    namespace Nonehfsr{
        using Addr = Register::Address<0xe000ed2c,0x3ffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VECTTBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FORCED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DEBUGEVT; 
    }
    namespace Nonedfsr{
        using Addr = Register::Address<0xe000ed30,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HALTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BKPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DWTTRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VCATCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTERNAL; 
    }
    namespace Noneafsr{
        using Addr = Register::Address<0xe000ed3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IMPDEF; 
    }
}
