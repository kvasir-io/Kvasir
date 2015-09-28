#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneuidr0{
        using Addr = Register::Address<0x40000200,0x0000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UID27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> UID26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UID25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> UID24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> UID23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> UID22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> UID21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> UID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> UID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> UID18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> UID17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> UID16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> UID14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> UID13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> UID12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> UID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> UID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> UID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UID0; 
    }
    namespace Noneuidr1{
        using Addr = Register::Address<0x40000204,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UID40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UID39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UID38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> UID37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UID36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UID35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UID34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UID33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UID32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UID31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UID30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UID29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UID28; 
    }
}
