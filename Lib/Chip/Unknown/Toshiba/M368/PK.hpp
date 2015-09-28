#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0a00,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PK4; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0a04,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PK2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PK3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PK4C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0a08,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PK2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PK3F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PK4F1; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c0a0c,0xffffffe1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PK2F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PK3F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PK4F2; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0a10,0xffffffe1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PK2F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PK3F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PK4F3; 
    }
    namespace Nonefr4{
        using Addr = Register::Address<0x400c0a14,0xfffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1F4; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0a28,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PK2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PK3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PK4OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c0a2c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PK2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PK3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PK4UP; 
    }
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0a30,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PK2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PK3DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PK4DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0a38,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PK0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PK1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PK2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PK3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PK4IE; 
    }
}
