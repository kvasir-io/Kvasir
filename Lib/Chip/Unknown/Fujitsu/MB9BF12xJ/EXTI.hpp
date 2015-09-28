#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneenir{
        using Addr = Register::Address<0x40030000,0xfff3bf33>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EN19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EN2; 
    }
    namespace Noneeirr{
        using Addr = Register::Address<0x40030004,0xfff3bf33>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ER19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ER18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ER14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ER7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ER6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ER3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ER2; 
    }
    namespace Noneeicl{
        using Addr = Register::Address<0x40030008,0xfff3bf33>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ECL19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ECL18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ECL14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECL7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ECL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ECL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ECL2; 
    }
    namespace Noneelvr{
        using Addr = Register::Address<0x4003000c,0xcfff0f0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> LB14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> LA14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LA2; 
    }
    namespace Noneelvr1{
        using Addr = Register::Address<0x40030010,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LB19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LA19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LB18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LA18; 
    }
    namespace Nonenmirr{
        using Addr = Register::Address<0x40030014,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NR; 
    }
    namespace Nonenmicl{
        using Addr = Register::Address<0x40030018,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NCL; 
    }
}
