#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneenir{
        using Addr = Register::Address<0x40030000,0xffc03f30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EN21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EN20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EN19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EN17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EN16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EN15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN0; 
    }
    namespace Noneeirr{
        using Addr = Register::Address<0x40030004,0xffc03f30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ER21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ER20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ER19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ER18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ER17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ER16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ER15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ER14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ER7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ER6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ER3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ER0; 
    }
    namespace Noneeicl{
        using Addr = Register::Address<0x40030008,0xffc03f30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ECL21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ECL20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ECL19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ECL18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ECL17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ECL16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ECL15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ECL14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECL7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ECL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ECL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ECL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ECL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ECL0; 
    }
    namespace Noneelvr{
        using Addr = Register::Address<0x4003000c,0x0fff0f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LB15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> LA15; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LA0; 
    }
    namespace Noneelvr1{
        using Addr = Register::Address<0x40030010,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> LB21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LA21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LB20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LA20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LB19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LA19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LB18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LA18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LB17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LA17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LB16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LA16; 
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
