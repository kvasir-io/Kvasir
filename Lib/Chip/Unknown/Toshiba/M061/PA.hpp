#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PA7; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PA0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PA1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PA2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PA3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PA4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PA5C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PA6C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PA7C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PA0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PA1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PA2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PA3F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PA4F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PA5F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PA6F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PA7F1; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PA0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PA1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PA2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PA3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PA4OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PA5OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PA6OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PA7OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c002c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PA0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PA1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PA2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PA3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PA4UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PA5UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PA6UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PA7UP; 
    }
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PA0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PA1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PA2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PA3DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PA4DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PA5DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PA6DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PA7DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0038,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PA0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PA1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PA2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PA3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PA4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PA5IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PA6IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PA7IE; 
    }
}
