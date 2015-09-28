#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonekr{
        using Addr = Register::Address<0x40003000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> KEY; 
    }
    namespace Nonepr{
        using Addr = Register::Address<0x40003004,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PR; 
    }
    namespace Nonerlr{
        using Addr = Register::Address<0x40003008,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> RL; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x4000300c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RVU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PVU; 
    }
}
