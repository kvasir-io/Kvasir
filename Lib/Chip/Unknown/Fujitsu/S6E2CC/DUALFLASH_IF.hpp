#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedfaszr{
        using Addr = Register::Address<0x40000400,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DASZ; 
    }
    namespace Nonedfrwtr{
        using Addr = Register::Address<0x40000404,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DRWT; 
    }
    namespace Nonedfstr{
        using Addr = Register::Address<0x40000408,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DFERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DFHNG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFRDY; 
    }
}
