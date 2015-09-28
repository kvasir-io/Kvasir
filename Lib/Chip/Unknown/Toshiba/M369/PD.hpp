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
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0308,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7F1; 
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
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0330,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7DN; 
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
