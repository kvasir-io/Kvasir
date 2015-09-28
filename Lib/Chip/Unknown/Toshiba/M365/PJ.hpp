#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0900,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PJ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PJ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PJ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PJ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PJ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PJ5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PJ6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PJ7; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0904,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PJ0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PJ1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PJ2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PJ3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PJ4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PJ5C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PJ6C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PJ7C; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c090c,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PJ7F2; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0910,0xffffff3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PJ6F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PJ7F3; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c092c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PJ0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PJ1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PJ2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PJ3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PJ4UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PJ5UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PJ6UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PJ7UP; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0938,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PJ0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PJ1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PJ2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PJ3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PJ4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PJ5IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PJ6IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PJ7IE; 
    }
}
