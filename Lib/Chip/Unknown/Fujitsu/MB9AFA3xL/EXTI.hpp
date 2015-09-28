#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneenir{
        using Addr = Register::Address<0x40030000,0xffff7f80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EN15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN0; 
    }
    namespace Noneeirr{
        using Addr = Register::Address<0x40030004,0xffff7f80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ER15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ER6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ER5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ER4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ER3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ER0; 
    }
    namespace Noneeicl{
        using Addr = Register::Address<0x40030008,0xffff7f80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ECL15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ECL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ECL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ECL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ECL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ECL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ECL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ECL0; 
    }
    namespace Noneelvr{
        using Addr = Register::Address<0x4003000c,0x3fffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LB15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> LA15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> LB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LA0; 
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
