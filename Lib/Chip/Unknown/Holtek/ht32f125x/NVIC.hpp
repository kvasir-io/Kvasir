#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneictr{
        using Addr = Register::Address<0xe000e004,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INTLINESNUM; 
    }
    namespace Noneactlr{
        using Addr = Register::Address<0xe000e008,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DISMCYCINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DISDEFWBUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISFOLD; 
    }
    namespace Noneiser0{
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
    namespace Noneiser1{
        using Addr = Register::Address<0xe000e104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETENA32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETENA33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETENA34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETENA35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETENA36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETENA37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETENA38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETENA39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETENA40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETENA41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETENA42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETENA43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETENA44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETENA45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETENA46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETENA47; 
    }
    namespace Noneicer0{
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
    namespace Noneicer1{
        using Addr = Register::Address<0xe000e184,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRENA32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRENA33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRENA34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRENA35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRENA36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRENA37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRENA38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRENA39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRENA40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRENA41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRENA42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRENA43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRENA44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRENA45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRENA46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRENA47; 
    }
    namespace Noneispr0{
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
    namespace Noneispr1{
        using Addr = Register::Address<0xe000e204,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETPEND32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETPEND33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETPEND34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETPEND35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETPEND36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETPEND37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETPEND38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETPEND39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETPEND40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETPEND41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETPEND42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETPEND43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETPEND44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETPEND45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETPEND46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETPEND47; 
    }
    namespace Noneicpr0{
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
    namespace Noneicpr1{
        using Addr = Register::Address<0xe000e284,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRPEND32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRPEND33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRPEND34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRPEND35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRPEND36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRPEND37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRPEND38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRPEND39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRPEND40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRPEND41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRPEND42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRPEND43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRPEND44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRPEND45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRPEND46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRPEND47; 
    }
    namespace Noneiabr0{
        using Addr = Register::Address<0xe000e300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACTIVE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACTIVE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACTIVE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACTIVE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACTIVE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACTIVE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ACTIVE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ACTIVE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ACTIVE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ACTIVE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ACTIVE11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ACTIVE12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ACTIVE13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ACTIVE14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ACTIVE15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ACTIVE16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ACTIVE17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ACTIVE18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ACTIVE19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ACTIVE20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ACTIVE21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ACTIVE22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ACTIVE23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ACTIVE24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> ACTIVE25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> ACTIVE26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ACTIVE27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ACTIVE28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ACTIVE29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ACTIVE30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ACTIVE31; 
    }
    namespace Noneiabr1{
        using Addr = Register::Address<0xe000e304,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACTIVE32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACTIVE33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACTIVE34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACTIVE35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACTIVE36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACTIVE37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ACTIVE39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ACTIVE40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ACTIVE41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ACTIVE42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ACTIVE43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ACTIVE44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ACTIVE45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ACTIVE46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ACTIVE47; 
    }
    namespace Noneip0{
        using Addr = Register::Address<0xe000e400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_3; 
    }
    namespace Noneip1{
        using Addr = Register::Address<0xe000e404,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_7; 
    }
    namespace Noneip2{
        using Addr = Register::Address<0xe000e408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_11; 
    }
    namespace Noneip3{
        using Addr = Register::Address<0xe000e40c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_15; 
    }
    namespace Noneip4{
        using Addr = Register::Address<0xe000e410,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_19; 
    }
    namespace Noneip5{
        using Addr = Register::Address<0xe000e414,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_23; 
    }
    namespace Noneip6{
        using Addr = Register::Address<0xe000e418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_27; 
    }
    namespace Noneip7{
        using Addr = Register::Address<0xe000e41c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_31; 
    }
    namespace Noneip8{
        using Addr = Register::Address<0xe000e420,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_35; 
    }
    namespace Noneip9{
        using Addr = Register::Address<0xe000e424,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_39; 
    }
    namespace Noneip10{
        using Addr = Register::Address<0xe000e428,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_43; 
    }
    namespace Noneip11{
        using Addr = Register::Address<0xe000e42c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_47; 
    }
    namespace Nonecpuid{
        using Addr = Register::Address<0xe000ed00,0x000f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> REVISION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> PARTNO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> VARIANT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IMPLEMENTER; 
    }
    namespace Noneicsr{
        using Addr = Register::Address<0xe000ed04,0x61000600>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> VECTACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RETTOBASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,12)> VECTPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ISRPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ISRPREEMPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PENDSTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PENDSTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PENDSVCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PENDSVSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> NMIPENDSET; 
    }
    namespace Nonevtor{
        using Addr = Register::Address<0xe000ed08,0xc000007f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,7)> TBLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TBLBASE; 
    }
    namespace Noneaircr{
        using Addr = Register::Address<0xe000ed0c,0x000078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VECTRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VECTCLRACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SYSRESETREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PRIGROUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ENDIANESS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> VECTKEY; 
    }
    namespace Noneshp0{
        using Addr = Register::Address<0xe000ed18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_7; 
    }
    namespace Noneshp1{
        using Addr = Register::Address<0xe000ed1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_11; 
    }
    namespace Noneshp2{
        using Addr = Register::Address<0xe000ed20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_15; 
    }
    namespace Noneshcsr{
        using Addr = Register::Address<0xe000ed24,0xfff80274>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MEMFAULTACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BUSFAULTACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USGFAULTACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SVCALLACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MONITORACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PENDSVACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SYSTICKACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> USGFAULTPENDED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MEMFAULTPENDED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BUSFAULTPENDED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SVCALLPENDED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MEMFAULTENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BUSFAULTENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USGFAULTENA; 
    }
    namespace Nonestir{
        using Addr = Register::Address<0xe000ef00,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> INTID; 
    }
}
