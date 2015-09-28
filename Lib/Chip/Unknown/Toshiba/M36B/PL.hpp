#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0b00,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0b04,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3C; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c0b0c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0F2; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0b10,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3F3; 
    }
    namespace Nonefr4{
        using Addr = Register::Address<0x400c0b14,0xfffffff2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0F4; 
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
        using Addr = Register::Address<0x400c0b28,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c0b2c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3UP; 
    }
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0b30,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0b38,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PL0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PL1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PL2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PL3IE; 
    }
}
