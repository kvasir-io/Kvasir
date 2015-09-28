#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneenir{
        using Addr = Register::Address<0x40030000,0xffff3e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EN15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN0; 
    }
    namespace Noneeirr{
        using Addr = Register::Address<0x40030004,0xffff3e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ER15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ER14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ER8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ER7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ER6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ER5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ER4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ER3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ER0; 
    }
    namespace Noneeicl{
        using Addr = Register::Address<0x40030008,0xffff3e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ECL15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ECL14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ECL8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECL7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ECL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ECL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ECL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ECL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ECL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ECL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ECL0; 
    }
    namespace Noneelvr{
        using Addr = Register::Address<0x4003000c,0x0ffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LB15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> LA15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> LB14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> LA14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LB8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LA8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LA7; 
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
