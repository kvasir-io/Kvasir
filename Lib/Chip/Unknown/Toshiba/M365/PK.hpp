#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0a00,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PK3; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0a04,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PK2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PK3C; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c0a0c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1F2; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0a10,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PK2F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PK3F3; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c0a2c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PK2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PK3UP; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0a38,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PK2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PK3IE; 
    }
}
