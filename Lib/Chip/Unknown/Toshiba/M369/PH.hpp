#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0700,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PH7; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0704,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PH6C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PH7C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0708,0xffffff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PH6F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PH7F1; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c070c,0xffffff50>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PH7F2; 
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
        using Addr = Register::Address<0x400c0718,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0F5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1F5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2F5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3F5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4F5; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0728,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PH6OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PH7OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c072c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PH6UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PH7UP; 
    }
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0730,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PN0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PN1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PN2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PN3DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PN4DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PN5DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PN6DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PN7DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0738,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PH0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PH1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PH2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PH3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PH4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PH5IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PH6IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PH7IE; 
    }
}
