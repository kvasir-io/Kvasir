#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0700,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0704,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0708,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3F1; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c070c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1F2; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0710,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3F3; 
    }
    namespace Nonefr4{
        using Addr = Register::Address<0x400c0714,0xfffffff3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2F4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3F4; 
    }
    namespace Nonefr5{
        using Addr = Register::Address<0x400c0718,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0F5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1F5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2F5; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0728,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c072c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3UP; 
    }
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0730,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0738,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2IE; 
    }
}
