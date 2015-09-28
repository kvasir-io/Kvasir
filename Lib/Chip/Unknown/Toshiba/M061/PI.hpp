#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0800,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PI6; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0804,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PI0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PI1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PI2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PI3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PI4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PI5C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PI6C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0808,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PI0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PI1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PI2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PI3F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PI4F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PI5F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PI6F1; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c080c,0xffffffba>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PI0F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PI2F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PI6F2; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0810,0xffffffbb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PI2F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PI6F3; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0828,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PI0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PI1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PI2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PI3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PI4OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PI5OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PI6OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c082c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PI0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PI1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PI2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PI3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PI4UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PI5UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PI6UP; 
    }
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0830,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PI0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PI1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PI2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PI3DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PI4DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PI5DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PI6DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0838,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PI0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PI1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PI2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PI3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PI4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PI5IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PI6IE; 
    }
}
