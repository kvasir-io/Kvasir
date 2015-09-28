#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0d00,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PN5; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0d04,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PN0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PN1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PN2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PN3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PN4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PN5C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0d08,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PN0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PN1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PN2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PN3F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PN4F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PN5F1; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c0d0c,0xffffffcf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PN4F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PN5F1; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0d28,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PN0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PN1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PN2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PN3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PN4OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PN5OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c0d2c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PN0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PN1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PN2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PN3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PN4UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PN5UP; 
    }
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0d30,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PN0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PN1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PN2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PN3DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PN4DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PN5DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0d38,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PN0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PN1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PN2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PN3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PN4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PN5IE; 
    }
}
