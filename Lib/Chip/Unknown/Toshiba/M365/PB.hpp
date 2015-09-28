#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0100,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB7; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0104,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB7C; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0128,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB7OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c012c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB7UP; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0138,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB7IE; 
    }
}
