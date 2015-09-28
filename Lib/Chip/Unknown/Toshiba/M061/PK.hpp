#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0a00,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0a04,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0a08,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1F1; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0a28,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c0a2c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1UP; 
    }
    namespace Nonepkn{
        using Addr = Register::Address<0x400c0a30,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0a38,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1IE; 
    }
}
