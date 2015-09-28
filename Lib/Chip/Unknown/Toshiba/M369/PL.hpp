#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0b00,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PL7; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0b04,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PL4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PL5C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PL6C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PL7C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0b08,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PL4F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PL5F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PL6F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PL7F1; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c0b0c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PL4F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PL5F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PL6F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PL7F2; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0b10,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3F3; 
    }
    namespace Nonefr4{
        using Addr = Register::Address<0x400c0b14,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3F4; 
    }
    namespace Nonefr5{
        using Addr = Register::Address<0x400c0b18,0xfffffff1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1F5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2F5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3F5; 
    }
    namespace Nonefr6{
        using Addr = Register::Address<0x400c0b1c,0xfffffff7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3F6; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0b28,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PL4OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PL5OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PL6OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PL7OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c0b2c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PL4UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PL5UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PL6UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PL7UP; 
    }
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0b30,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PL4DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PL5DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PL6DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PL7DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0b38,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PL4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PL5IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PL6IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PL7IE; 
    }
}
