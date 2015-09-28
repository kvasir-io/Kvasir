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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SIG_START; 
    }
    namespace Nonefmsw0{
        using Addr = Register::Address<0x4003c02c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SW0_31_0; 
    }
    namespace Nonefmsw1{
        using Addr = Register::Address<0x4003c030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SW1_63_32; 
    }
    namespace Nonefmsw2{
        using Addr = Register::Address<0x4003c034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SW2_95_64; 
    }
    namespace Nonefmsw3{
        using Addr = Register::Address<0x4003c038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SW3_127_96; 
    }
    namespace Nonefmstat{
        using Addr = Register::Address<0x4003cfe0,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SIG_DONE; 
    }
    namespace Nonefmstatclr{
        using Addr = Register::Address<0x4003cfe8,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SIG_DONE_CLR; 
    }
}
