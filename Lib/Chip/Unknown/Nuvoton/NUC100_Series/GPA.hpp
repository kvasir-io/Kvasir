#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepmd{
        using Addr = Register::Address<0x50004000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PMD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PMD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PMD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PMD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PMD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PMD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PMD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PMD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PMD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> PMD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> PMD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PMD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> PMD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PMD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PMD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PMD15; 
    }
    namespace Noneoffd{
        using Addr = Register::Address<0x50004004,0x0000ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> OFFD; 
    }
    namespace Nonedout{
        using Addr = Register::Address<0x50004008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DOUT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DOUT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DOUT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DOUT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DOUT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DOUT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DOUT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DOUT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DOUT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DOUT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DOUT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DOUT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DOUT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DOUT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DOUT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DOUT15; 
    }
    namespace Nonedmask{
        using Addr = Register::Address<0x5000400c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMASK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMASK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMASK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DMASK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DMASK4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DMASK5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DMASK6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMASK7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMASK8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DMASK9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DMASK10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DMASK11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DMASK12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DMASK13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DMASK14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DMASK15; 
    }
    namespace Nonepin{
        using Addr = Register::Address<0x50004010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PIN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PIN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PIN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PIN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PIN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PIN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PIN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PIN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PIN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PIN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PIN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PIN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PIN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PIN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PIN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PIN15; 
    }
    namespace Nonedben{
        using Addr = Register::Address<0x50004014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DBEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DBEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DBEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DBEN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DBEN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DBEN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DBEN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DBEN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DBEN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DBEN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DBEN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DBEN15; 
    }
    namespace Noneimd{
        using Addr = Register::Address<0x50004018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IMD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IMD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IMD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IMD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IMD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IMD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IMD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IMD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IMD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IMD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IMD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IMD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IMD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IMD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IMD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IMD15; 
    }
    namespace Noneien{
        using Addr = Register::Address<0x5000401c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IF_EN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IF_EN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IF_EN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IF_EN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IF_EN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IF_EN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IF_EN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IF_EN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IF_EN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IF_EN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IF_EN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IF_EN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IF_EN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IF_EN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IF_EN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IF_EN15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IR_EN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IR_EN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IR_EN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IR_EN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IR_EN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IR_EN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> IR_EN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> IR_EN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> IR_EN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> IR_EN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> IR_EN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> IR_EN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> IR_EN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> IR_EN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IR_EN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> IR_EN15; 
    }
    namespace Noneisrc{
        using Addr = Register::Address<0x50004020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ISRC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ISRC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ISRC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ISRC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ISRC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ISRC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ISRC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ISRC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ISRC8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ISRC9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ISRC10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ISRC11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ISRC12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ISRC13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ISRC14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ISRC15; 
    }
}
