#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecompval{
        using Addr = Register::Address<0x400c0000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RICOMP; 
    }
    namespace Nonemask{
        using Addr = Register::Address<0x400c0004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RIMASK; 
    }
    namespace Nonectrl{
        using Addr = Register::Address<0x400c0008,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RITINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RITENCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RITENBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RITEN; 
    }
    namespace Nonecounter{
        using Addr = Register::Address<0x400c000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RICOUNTER; 
    }
}
