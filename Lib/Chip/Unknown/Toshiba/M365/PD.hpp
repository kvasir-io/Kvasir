#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0300,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0304,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7C; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0310,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7F3; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0328,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c032c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7UP; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0338,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7IE; 
    }
}
