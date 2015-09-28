#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneen{
        using Addr = Register::Address<0x4006e000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LCDE; 
    }
    namespace Nonecr1{
        using Addr = Register::Address<0x4006e004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SLF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> DUTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EDSP; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x4006e008,0xffffff07>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BRH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> LRSE; 
    }
    namespace Nonebuf00{
        using Addr = Register::Address<0x4006e00c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG1; 
    }
    namespace Nonebuf01{
        using Addr = Register::Address<0x4006e010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG3; 
    }
    namespace Nonebuf02{
        using Addr = Register::Address<0x4006e014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG5; 
    }
    namespace Nonebuf03{
        using Addr = Register::Address<0x4006e018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG7; 
    }
    namespace Nonebuf04{
        using Addr = Register::Address<0x4006e01c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG9; 
    }
    namespace Nonebuf05{
        using Addr = Register::Address<0x4006e020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG11; 
    }
    namespace Nonebuf06{
        using Addr = Register::Address<0x4006e024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG13; 
    }
    namespace Nonebuf07{
        using Addr = Register::Address<0x4006e028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG15; 
    }
    namespace Nonebuf08{
        using Addr = Register::Address<0x4006e02c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG17; 
    }
    namespace Nonebuf09{
        using Addr = Register::Address<0x4006e030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG19; 
    }
    namespace Nonebuf10{
        using Addr = Register::Address<0x4006e034,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG21; 
    }
    namespace Nonebuf11{
        using Addr = Register::Address<0x4006e038,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG23; 
    }
    namespace Nonebuf12{
        using Addr = Register::Address<0x4006e03c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG25; 
    }
    namespace Nonebuf13{
        using Addr = Register::Address<0x4006e040,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG27; 
    }
    namespace Nonebuf14{
        using Addr = Register::Address<0x4006e044,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG29; 
    }
    namespace Nonebuf15{
        using Addr = Register::Address<0x4006e048,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG31; 
    }
    namespace Nonebuf16{
        using Addr = Register::Address<0x4006e04c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG33; 
    }
    namespace Nonebuf17{
        using Addr = Register::Address<0x4006e050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG35; 
    }
    namespace Nonebuf18{
        using Addr = Register::Address<0x4006e054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG37; 
    }
    namespace Nonebuf19{
        using Addr = Register::Address<0x4006e058,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SEG38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SEG39; 
    }
}
