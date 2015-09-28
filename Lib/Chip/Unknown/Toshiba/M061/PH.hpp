#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0700,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0704,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0708,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5F1; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c070c,0xffffffd2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5F2; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0710,0xffffffdb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5F3; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0728,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c072c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5UP; 
    }
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0730,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0738,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5IE; 
    }
}
