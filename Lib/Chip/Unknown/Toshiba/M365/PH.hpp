#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0700,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0704,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0708,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2F1; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0710,0xffffffe3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4F3; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0728,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c072c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4UP; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0738,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4IE; 
    }
}
