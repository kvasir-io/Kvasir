#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneenir{
        using Addr = Register::Address<0x40030000,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EN23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EN22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EN21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EN20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EN19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EN17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EN16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EN15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EN9; 
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
        using Addr = Register::Address<0x40030004,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ER23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ER22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ER21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ER20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ER19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ER18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ER17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ER16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ER15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ER14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ER13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ER12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ER11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ER10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ER9; 
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
        using Addr = Register::Address<0x40030008,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ECL23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ECL22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ECL21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ECL20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ECL19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ECL18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ECL17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ECL16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ECL15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ECL14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ECL13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ECL12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ECL11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ECL10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ECL9; 
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
        using Addr = Register::Address<0x4003000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LB15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> LA15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> LB14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> LA14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> LB13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> LA13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> LB12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> LA12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> LB11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LA11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LB10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LA10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> LB9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> LA9; 
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
    namespace Noneelvr1{
        using Addr = Register::Address<0x40030010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LB23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LA23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LB22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LA22; 
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
