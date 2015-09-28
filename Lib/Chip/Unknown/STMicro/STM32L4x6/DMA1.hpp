#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneisr{
        using Addr = Register::Address<0x40020000,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TEIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> HTIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TCIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> GIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TEIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> HTIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TCIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> GIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TEIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HTIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TCIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> GIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TEIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> HTIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TCIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> GIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TEIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HTIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TCIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TEIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HTIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TCIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TEIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HTIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GIF1; 
    }
    namespace Noneifcr{
        using Addr = Register::Address<0x40020004,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CTEIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CHTIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CTCIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CGIF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CTEIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CHTIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CTCIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CGIF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTEIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CHTIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CTCIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CGIF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTEIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CHTIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CTCIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CGIF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CTEIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CHTIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTCIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CGIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTEIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHTIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTCIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CGIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTEIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHTIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTCIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CGIF1; 
    }
    namespace Noneccr1{
        using Addr = Register::Address<0x40020008,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MEM2MEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonecndtr1{
        using Addr = Register::Address<0x4002000c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nonecpar1{
        using Addr = Register::Address<0x40020010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nonecmar1{
        using Addr = Register::Address<0x40020014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MA; 
    }
    namespace Noneccr2{
        using Addr = Register::Address<0x4002001c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MEM2MEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonecndtr2{
        using Addr = Register::Address<0x40020020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nonecpar2{
        using Addr = Register::Address<0x40020024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nonecmar2{
        using Addr = Register::Address<0x40020028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MA; 
    }
    namespace Noneccr3{
        using Addr = Register::Address<0x40020030,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MEM2MEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonecndtr3{
        using Addr = Register::Address<0x40020034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nonecpar3{
        using Addr = Register::Address<0x40020038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nonecmar3{
        using Addr = Register::Address<0x4002003c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MA; 
    }
    namespace Noneccr4{
        using Addr = Register::Address<0x40020044,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MEM2MEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonecndtr4{
        using Addr = Register::Address<0x40020048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nonecpar4{
        using Addr = Register::Address<0x4002004c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nonecmar4{
        using Addr = Register::Address<0x40020050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MA; 
    }
    namespace Noneccr5{
        using Addr = Register::Address<0x40020058,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MEM2MEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonecndtr5{
        using Addr = Register::Address<0x4002005c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nonecpar5{
        using Addr = Register::Address<0x40020060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nonecmar5{
        using Addr = Register::Address<0x40020064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MA; 
    }
    namespace Noneccr6{
        using Addr = Register::Address<0x4002006c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MEM2MEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonecndtr6{
        using Addr = Register::Address<0x40020070,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nonecpar6{
        using Addr = Register::Address<0x40020074,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nonecmar6{
        using Addr = Register::Address<0x40020078,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MA; 
    }
    namespace Noneccr7{
        using Addr = Register::Address<0x40020080,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MEM2MEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> MSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CIRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonecndtr7{
        using Addr = Register::Address<0x40020084,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NDT; 
    }
    namespace Nonecpar7{
        using Addr = Register::Address<0x40020088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PA; 
    }
    namespace Nonecmar7{
        using Addr = Register::Address<0x4002008c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MA; 
    }
    namespace Nonecselr{
        using Addr = Register::Address<0x400200a8,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> C7S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> C6S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> C5S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> C4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> C3S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> C2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> C1S; 
    }
}
