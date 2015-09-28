#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0500,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0504,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0508,0xfffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1F1; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0528,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c052c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1UP; 
    }
    namespace Nonepfn{
        using Addr = Register::Address<0x400c0530,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0538,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1IE; 
    }
}
