#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0600,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PG3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PG4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PG5; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0604,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PG1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PG2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PG3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PG4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PG5C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0608,0xffffffd0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PG1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PG2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PG3F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PG5F1; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0610,0xffffffe1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PG1F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PG2F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PG3F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PG4F3; 
    }
    namespace Nonefr4{
        using Addr = Register::Address<0x400c0614,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PG1F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PG2F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PG3F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PG4F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PG5F4; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0628,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PG1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PG2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PG3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PG4OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PG5OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c062c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PG1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PG2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PG3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PG4UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PG5UP; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0638,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PG1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PG2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PG3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PG4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PG5IE; 
    }
}
