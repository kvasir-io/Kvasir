#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonenvic_iser{
        using Addr = Register::Address<0xe000e100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETENA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETENA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETENA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETENA8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETENA9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETENA10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETENA11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETENA12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETENA13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETENA14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETENA15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SETENA16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SETENA17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SETENA18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SETENA19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SETENA20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SETENA21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SETENA22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SETENA23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SETENA24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SETENA25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SETENA26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SETENA27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SETENA28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SETENA29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SETENA30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SETENA31; 
    }
    namespace Nonenvic_icer{
        using Addr = Register::Address<0xe000e180,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRENA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRENA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRENA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRENA8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRENA9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRENA10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRENA11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRENA12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRENA13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRENA14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRENA15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLRENA16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CLRENA17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CLRENA18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CLRENA19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CLRENA20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CLRENA21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CLRENA22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CLRENA23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CLRENA24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CLRENA25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CLRENA26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CLRENA27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CLRENA28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CLRENA29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CLRENA30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CLRENA31; 
    }
    namespace Nonenvic_ispr{
        using Addr = Register::Address<0xe000e200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETPEND0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETPEND1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETPEND2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETPEND3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETPEND4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETPEND5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETPEND6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETPEND7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETPEND8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETPEND9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETPEND10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETPEND11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETPEND12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETPEND13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETPEND14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETPEND15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SETPEND16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SETPEND17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SETPEND18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SETPEND19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SETPEND20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SETPEND21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SETPEND22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SETPEND23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SETPEND24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SETPEND25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SETPEND26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SETPEND27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SETPEND28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SETPEND29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SETPEND30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SETPEND31; 
    }
    namespace Nonenvic_icpr{
        using Addr = Register::Address<0xe000e280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRPEND0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRPEND1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRPEND2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRPEND3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRPEND4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRPEND5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRPEND6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRPEND7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRPEND8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRPEND9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRPEND10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRPEND11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRPEND12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRPEND13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRPEND14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRPEND15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLRPEND16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CLRPEND17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CLRPEND18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CLRPEND19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CLRPEND20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CLRPEND21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CLRPEND22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CLRPEND23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CLRPEND24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CLRPEND25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CLRPEND26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CLRPEND27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CLRPEND28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CLRPEND29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CLRPEND30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CLRPEND31; 
    }
    namespace Nonenvic_ipr0{
        using Addr = Register::Address<0xe000e400,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_3; 
    }
    namespace Nonenvic_ipr1{
        using Addr = Register::Address<0xe000e404,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_7; 
    }
    namespace Nonenvic_ipr2{
        using Addr = Register::Address<0xe000e408,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_11; 
    }
    namespace Nonenvic_ipr3{
        using Addr = Register::Address<0xe000e40c,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_15; 
    }
    namespace Nonenvic_ipr4{
        using Addr = Register::Address<0xe000e410,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_19; 
    }
    namespace Nonenvic_ipr5{
        using Addr = Register::Address<0xe000e414,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_23; 
    }
    namespace Nonenvic_ipr6{
        using Addr = Register::Address<0xe000e418,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_27; 
    }
    namespace Nonenvic_ipr7{
        using Addr = Register::Address<0xe000e41c,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_31; 
    }
}
