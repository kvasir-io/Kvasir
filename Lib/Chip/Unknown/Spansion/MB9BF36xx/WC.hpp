#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonewcrd{
        using Addr = Register::Address<0x4003a000,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CTR; 
    }
    namespace Nonewcrl{
        using Addr = Register::Address<0x4003a001,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> RLC; 
    }
    namespace Nonewccr{
        using Addr = Register::Address<0x4003a002,0xffffff30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WCOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WCIF; 
    }
    namespace Noneclk_sel{
        using Addr = Register::Address<0x4003a010,0xfffff8fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SEL_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL_IN; 
    }
    namespace Noneclk_en{
        using Addr = Register::Address<0x4003a014,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_EN_R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLK_EN; 
    }
}
