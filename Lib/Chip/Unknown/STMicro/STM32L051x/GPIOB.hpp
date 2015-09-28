#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemoder{
        using Addr = Register::Address<0x50000400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> MODE15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> MODE14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> MODE13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> MODE12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> MODE11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MODE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> MODE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> MODE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> MODE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> MODE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> MODE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> MODE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> MODE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MODE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MODE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE0; 
    }
    namespace Noneotyper{
        using Addr = Register::Address<0x50000404,0xffff0000>;
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
    namespace Noneospeedr{
        using Addr = Register::Address<0x50000408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> OSPEED15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> OSPEED14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> OSPEED13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> OSPEED12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> OSPEED11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> OSPEED10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> OSPEED9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> OSPEED8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> OSPEED7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> OSPEED6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> OSPEED5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> OSPEED4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> OSPEED3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> OSPEED2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> OSPEED1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> OSPEED0; 
    }
    namespace Nonepupdr{
        using Addr = Register::Address<0x5000040c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PUPD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PUPD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PUPD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> PUPD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PUPD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> PUPD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> PUPD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PUPD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PUPD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PUPD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PUPD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PUPD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PUPD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PUPD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PUPD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PUPD0; 
    }
    namespace Noneidr{
        using Addr = Register::Address<0x50000410,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ID14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ID13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ID12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ID0; 
    }
    namespace Noneodr{
        using Addr = Register::Address<0x50000414,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OD0; 
    }
    namespace Nonebsrr{
        using Addr = Register::Address<0x50000418,0x00000000>;
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
        using Addr = Register::Address<0x5000041c,0xfffe0000>;
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
        using Addr = Register::Address<0x50000420,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> AFSEL7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> AFSEL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> AFSEL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> AFSEL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> AFSEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> AFSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> AFSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AFSEL0; 
    }
    namespace Noneafrh{
        using Addr = Register::Address<0x50000424,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> AFSEL15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> AFSEL14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> AFSEL13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> AFSEL12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> AFSEL11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> AFSEL10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> AFSEL9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AFSEL8; 
    }
    namespace Nonebrr{
        using Addr = Register::Address<0x50000428,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BR0; 
    }
}
