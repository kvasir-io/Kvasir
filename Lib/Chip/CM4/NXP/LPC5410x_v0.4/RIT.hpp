#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecompval{
        using Addr = Register::Address<0x40070000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RICOMP; 
    }
    namespace Nonemask{
        using Addr = Register::Address<0x40070004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RIMASK; 
    }
    namespace Nonectrl{
        using Addr = Register::Address<0x40070008,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RITINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RITENCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RITENBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RITEN; 
    }
    namespace Nonecounter{
        using Addr = Register::Address<0x4007000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RICOUNTER; 
    }
    namespace Nonecompval_h{
        using Addr = Register::Address<0x40070010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RICOMP; 
    }
    namespace Nonemask_h{
        using Addr = Register::Address<0x40070014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RIMASK; 
    }
    namespace Nonecounter_h{
        using Addr = Register::Address<0x4007001c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RICOUNTER; 
    }
}
