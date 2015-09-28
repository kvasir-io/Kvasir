#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecrl{
        using Addr = Register::Address<0x40010800,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CNF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MODE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CNF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> MODE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> CNF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> MODE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CNF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> MODE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CNF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MODE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> CNF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> MODE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> CNF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> MODE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> CNF7; 
    }
    namespace Nonecrh{
        using Addr = Register::Address<0x40010804,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CNF8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MODE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CNF9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> MODE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> CNF10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> MODE11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CNF11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> MODE12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CNF12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MODE13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> CNF13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> MODE14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> CNF14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> MODE15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> CNF15; 
    }
    namespace Noneidr{
        using Addr = Register::Address<0x40010808,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IDR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IDR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IDR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IDR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IDR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IDR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IDR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IDR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IDR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IDR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IDR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IDR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IDR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IDR15; 
    }
    namespace Noneodr{
        using Addr = Register::Address<0x4001080c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ODR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ODR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ODR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ODR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ODR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ODR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ODR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ODR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ODR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ODR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ODR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ODR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ODR15; 
    }
    namespace Nonebsrr{
        using Addr = Register::Address<0x40010810,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BS6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BS7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BS8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BS9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BS10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BS11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BS12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BS13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BS14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BS15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> BR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> BR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> BR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> BR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> BR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> BR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> BR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> BR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> BR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> BR15; 
    }
    namespace Nonebrr{
        using Addr = Register::Address<0x40010814,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BR15; 
    }
    namespace Nonelckr{
        using Addr = Register::Address<0x40010818,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LCK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LCK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LCK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LCK4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LCK5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LCK6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LCK7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LCK8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LCK9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LCK10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> LCK11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LCK12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LCK13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LCK14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LCK15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LCKK; 
    }
}
