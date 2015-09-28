#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0100,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0104,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0108,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6F1; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c010c,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6F2; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0110,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5F3; 
    }
    namespace Nonefr4{
        using Addr = Register::Address<0x400c0114,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6F4; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0128,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c012c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6UP; 
    }
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0130,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0138,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5IE; 
    }
}
