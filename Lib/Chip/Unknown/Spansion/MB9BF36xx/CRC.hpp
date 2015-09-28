#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecrccr{
        using Addr = Register::Address<0x40039000,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FXOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CRCLSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRCLTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LSBFST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LTLEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CRC32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INIT; 
    }
    namespace Nonecrcinit{
        using Addr = Register::Address<0x40039004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> D; 
    }
    namespace Nonecrcin{
        using Addr = Register::Address<0x40039008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> D; 
    }
    namespace Nonecrcr{
        using Addr = Register::Address<0x4003900c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> D; 
    }
}
