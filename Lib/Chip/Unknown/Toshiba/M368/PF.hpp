#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0500,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PF7; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0504,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PF2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PF3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PF4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PF5C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PF6C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PF7C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0508,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PF2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PF3F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PF4F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PF5F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PF6F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PF7F1; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c050c,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PF4F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PF5F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PF6F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PF7F2; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0510,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PF2F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PF3F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PF4F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PF5F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PF6F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PF7F3; 
    }
    namespace Nonefr4{
        using Addr = Register::Address<0x400c0514,0xffffff19>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PF2F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PF5F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PF6F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PF7F4; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0528,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PF2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PF3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PF4OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PF5OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PF6OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PF7OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c052c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PF2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PF3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PF4UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PF5UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PF6UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PF7UP; 
    }
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0530,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PF2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PF3DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PF4DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PF5DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PF6DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PF7DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0538,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PF2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PF3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PF4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PF5IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PF6IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PF7IE; 
    }
}
