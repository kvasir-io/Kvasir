#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneimr1{
        using Addr = Register::Address<0x40010400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MR17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MR22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MR23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MR24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> MR25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MR26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> MR27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> MR28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MR29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MR30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MR31; 
    }
    namespace Noneemr1{
        using Addr = Register::Address<0x40010404,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MR17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MR22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MR23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MR24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> MR25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MR26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> MR27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> MR28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MR29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MR30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MR31; 
    }
    namespace Nonertsr1{
        using Addr = Register::Address<0x40010408,0xff820000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TR22; 
    }
    namespace Noneftsr1{
        using Addr = Register::Address<0x4001040c,0xff820000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TR22; 
    }
    namespace Noneswier1{
        using Addr = Register::Address<0x40010410,0xff820000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWIER0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWIER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWIER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SWIER3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SWIER4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SWIER5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SWIER6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWIER7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SWIER8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SWIER9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SWIER10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SWIER11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SWIER12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SWIER13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SWIER14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SWIER15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SWIER16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SWIER18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SWIER19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SWIER20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SWIER21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SWIER22; 
    }
    namespace Nonepr1{
        using Addr = Register::Address<0x40010414,0xff820000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PR22; 
    }
    namespace Noneimr2{
        using Addr = Register::Address<0x40010420,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MR32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MR33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MR34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MR35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MR36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MR37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MR38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MR39; 
    }
    namespace Noneemr2{
        using Addr = Register::Address<0x40010424,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MR32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MR33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MR34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MR35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MR36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MR37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MR38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MR39; 
    }
    namespace Nonertsr2{
        using Addr = Register::Address<0x40010428,0xffffff87>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RT35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RT36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RT37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RT38; 
    }
    namespace Noneftsr2{
        using Addr = Register::Address<0x4001042c,0xffffff87>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FT35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FT36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FT37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FT38; 
    }
    namespace Noneswier2{
        using Addr = Register::Address<0x40010430,0xffffff87>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SWI35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SWI36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SWI37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SWI38; 
    }
    namespace Nonepr2{
        using Addr = Register::Address<0x40010434,0xffffff87>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PIF35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PIF36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PIF37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PIF38; 
    }
}
