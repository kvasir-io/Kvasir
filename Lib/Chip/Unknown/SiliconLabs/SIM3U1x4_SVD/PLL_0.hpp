#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedivider{
        using Addr = Register::Address<0x4003b000,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> N; 
    }
    namespace Nonecontrol{
        using Addr = Register::Address<0x4003b010,0x0bccf1f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LLMTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HLMTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LCKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LMTIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LCKIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> LCKPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> REFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> LOCKTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DITHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EDGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> OUTMD; 
    }
    namespace Nonesspr{
        using Addr = Register::Address<0x4003b020,0xffffe0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SSAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SSUINV; 
    }
    namespace Nonecalconfig{
        using Addr = Register::Address<0x4003b030,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DITHER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> CAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> RANGE; 
    }
}
