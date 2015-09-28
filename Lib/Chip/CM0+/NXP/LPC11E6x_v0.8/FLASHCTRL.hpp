#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneflashcfg{
        using Addr = Register::Address<0x4003c010,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FLASHTIM; 
    }
    namespace Nonefmsstart{
        using Addr = Register::Address<0x4003c020,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0)> START; 
    }
    namespace Nonefmsstop{
        using Addr = Register::Address<0x4003c024,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0)> STOPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STRTBIST; 
    }
    namespace Nonefmsw0{
        using Addr = Register::Address<0x4003c02c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SIG; 
    }
}
