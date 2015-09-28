#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneout{
        using Addr = Register::Address<0x50000504,0x00000000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PIN16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PIN17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PIN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PIN19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PIN20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PIN21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PIN22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PIN23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PIN24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PIN25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PIN26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PIN27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PIN28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PIN29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PIN30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PIN31; 
    }
    namespace Noneoutset{
        using Addr = Register::Address<0x50000508,0x00000000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PIN16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PIN17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PIN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PIN19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PIN20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PIN21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PIN22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PIN23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PIN24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PIN25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PIN26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PIN27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PIN28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PIN29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PIN30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PIN31; 
    }
    namespace Noneoutclr{
        using Addr = Register::Address<0x5000050c,0x00000000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PIN16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PIN17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PIN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PIN19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PIN20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PIN21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PIN22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PIN23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PIN24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PIN25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PIN26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PIN27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PIN28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PIN29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PIN30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PIN31; 
    }
    namespace Nonein{
        using Addr = Register::Address<0x50000510,0x00000000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PIN16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PIN17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PIN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PIN19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PIN20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PIN21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PIN22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PIN23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PIN24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PIN25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PIN26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PIN27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PIN28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PIN29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PIN30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PIN31; 
    }
    namespace Nonedir{
        using Addr = Register::Address<0x50000514,0x00000000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PIN16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PIN17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PIN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PIN19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PIN20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PIN21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PIN22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PIN23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PIN24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PIN25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PIN26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PIN27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PIN28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PIN29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PIN30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PIN31; 
    }
    namespace Nonedirset{
        using Addr = Register::Address<0x50000518,0x00000000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PIN16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PIN17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PIN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PIN19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PIN20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PIN21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PIN22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PIN23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PIN24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PIN25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PIN26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PIN27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PIN28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PIN29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PIN30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PIN31; 
    }
    namespace Nonedirclr{
        using Addr = Register::Address<0x5000051c,0x00000000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PIN16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PIN17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PIN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PIN19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PIN20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PIN21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PIN22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PIN23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PIN24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PIN25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PIN26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PIN27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PIN28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PIN29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PIN30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PIN31; 
    }
    namespace Nonelatch{
        using Addr = Register::Address<0x50000520,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> LATCH; 
    }
    namespace Nonedetectmode{
        using Addr = Register::Address<0x50000524,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DETECTMODE; 
    }
    namespace Nonepin_cnf0{
        using Addr = Register::Address<0x50000700,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf1{
        using Addr = Register::Address<0x50000704,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf2{
        using Addr = Register::Address<0x50000708,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf3{
        using Addr = Register::Address<0x5000070c,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf4{
        using Addr = Register::Address<0x50000710,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf5{
        using Addr = Register::Address<0x50000714,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf6{
        using Addr = Register::Address<0x50000718,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf7{
        using Addr = Register::Address<0x5000071c,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf8{
        using Addr = Register::Address<0x50000720,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf9{
        using Addr = Register::Address<0x50000724,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf10{
        using Addr = Register::Address<0x50000728,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf11{
        using Addr = Register::Address<0x5000072c,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf12{
        using Addr = Register::Address<0x50000730,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf13{
        using Addr = Register::Address<0x50000734,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf14{
        using Addr = Register::Address<0x50000738,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf15{
        using Addr = Register::Address<0x5000073c,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf16{
        using Addr = Register::Address<0x50000740,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf17{
        using Addr = Register::Address<0x50000744,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf18{
        using Addr = Register::Address<0x50000748,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf19{
        using Addr = Register::Address<0x5000074c,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf20{
        using Addr = Register::Address<0x50000750,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf21{
        using Addr = Register::Address<0x50000754,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf22{
        using Addr = Register::Address<0x50000758,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf23{
        using Addr = Register::Address<0x5000075c,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf24{
        using Addr = Register::Address<0x50000760,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf25{
        using Addr = Register::Address<0x50000764,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf26{
        using Addr = Register::Address<0x50000768,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf27{
        using Addr = Register::Address<0x5000076c,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf28{
        using Addr = Register::Address<0x50000770,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf29{
        using Addr = Register::Address<0x50000774,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf30{
        using Addr = Register::Address<0x50000778,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
    namespace Nonepin_cnf31{
        using Addr = Register::Address<0x5000077c,0xfffcf8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DRIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SENSE; 
    }
}
