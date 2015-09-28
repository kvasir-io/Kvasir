#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemoder{
        using Addr = Register::Address<0x40020400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> MODER15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> MODER14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> MODER13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> MODER12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> MODER11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MODER10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> MODER9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> MODER8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> MODER7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> MODER6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> MODER5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> MODER4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> MODER3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MODER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MODER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODER0; 
    }
    namespace Noneotyper{
        using Addr = Register::Address<0x40020404,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OT15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OT0; 
    }
    namespace Noneospeeder{
        using Addr = Register::Address<0x40020408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> OSPEEDR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> OSPEEDR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> OSPEEDR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> OSPEEDR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> OSPEEDR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> OSPEEDR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> OSPEEDR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> OSPEEDR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> OSPEEDR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> OSPEEDR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> OSPEEDR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> OSPEEDR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> OSPEEDR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> OSPEEDR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> OSPEEDR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> OSPEEDR0; 
    }
    namespace Nonepupdr{
        using Addr = Register::Address<0x4002040c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PUPDR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PUPDR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PUPDR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> PUPDR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PUPDR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> PUPDR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> PUPDR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PUPDR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PUPDR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PUPDR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PUPDR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PUPDR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PUPDR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PUPDR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PUPDR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PUPDR0; 
    }
    namespace Noneidr{
        using Addr = Register::Address<0x40020410,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IDR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IDR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IDR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IDR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IDR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IDR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IDR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IDR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IDR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IDR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IDR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IDR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IDR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IDR0; 
    }
    namespace Noneodr{
        using Addr = Register::Address<0x40020414,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ODR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ODR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ODR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ODR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ODR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ODR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ODR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ODR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ODR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ODR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ODR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ODR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ODR0; 
    }
    namespace Nonebsrr{
        using Addr = Register::Address<0x40020418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> BR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> BR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> BR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> BR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> BR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> BR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> BR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> BR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> BR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> BR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BS15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BS14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BS13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BS12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BS11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BS10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BS9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BS8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BS7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BS6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BS0; 
    }
    namespace Nonelckr{
        using Addr = Register::Address<0x4002041c,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LCKK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LCK15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LCK14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LCK13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LCK12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> LCK11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LCK10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LCK9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LCK8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LCK7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LCK6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LCK5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LCK4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LCK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LCK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LCK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LCK0; 
    }
    namespace Noneafrl{
        using Addr = Register::Address<0x40020420,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> AFRL7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> AFRL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> AFRL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> AFRL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> AFRL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> AFRL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> AFRL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AFRL0; 
    }
    namespace Noneafrh{
        using Addr = Register::Address<0x40020424,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> AFRH15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> AFRH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> AFRH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> AFRH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> AFRH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> AFRH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> AFRH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AFRH8; 
    }
}
