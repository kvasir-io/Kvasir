#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepmd{
        using Addr = Register::Address<0x50004000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PMD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PMD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PMD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PMD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PMD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PMD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PMD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PMD7; 
    }
    namespace Noneoffd{
        using Addr = Register::Address<0x50004004,0xff00ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> OFFD; 
    }
    namespace Nonedout{
        using Addr = Register::Address<0x50004008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DOUT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DOUT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DOUT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DOUT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DOUT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DOUT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DOUT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DOUT7; 
    }
    namespace Nonedmask{
        using Addr = Register::Address<0x5000400c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMASK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMASK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMASK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DMASK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DMASK4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DMASK5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DMASK6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMASK7; 
    }
    namespace Nonepin{
        using Addr = Register::Address<0x50004010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PIN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PIN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PIN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PIN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PIN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PIN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PIN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PIN7; 
    }
    namespace Nonedben{
        using Addr = Register::Address<0x50004014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DBEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DBEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DBEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DBEN7; 
    }
    namespace Noneimd{
        using Addr = Register::Address<0x50004018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IMD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IMD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IMD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IMD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IMD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IMD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IMD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IMD7; 
    }
    namespace Noneien{
        using Addr = Register::Address<0x5000401c,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IF_EN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IF_EN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IF_EN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IF_EN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IF_EN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IF_EN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IF_EN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IF_EN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IR_EN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IR_EN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IR_EN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IR_EN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IR_EN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IR_EN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> IR_EN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> IR_EN7; 
    }
    namespace Noneisrc{
        using Addr = Register::Address<0x50004020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ISRC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ISRC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ISRC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ISRC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ISRC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ISRC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ISRC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ISRC7; 
    }
}
