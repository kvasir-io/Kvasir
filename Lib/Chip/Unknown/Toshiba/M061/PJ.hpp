#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0900,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PJ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PJ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PJ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PJ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PJ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PJ5; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0904,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PJ0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PJ1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PJ2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PJ3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PJ4C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0908,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PJ0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PJ1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PJ2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PJ3F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PJ4F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PJ5F1; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c090c,0xffffffcb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PJ2F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PJ4F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PJ5F2; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0928,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PJ0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PJ1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PJ2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PJ3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PJ4OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c092c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PJ0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PJ1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PJ2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PJ3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PJ4UP; 
    }
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0930,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PJ0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PJ1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PJ2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PJ3DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PJ4DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0938,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PJ0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PJ1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PJ2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PJ3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PJ4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PJ5IE; 
    }
}
