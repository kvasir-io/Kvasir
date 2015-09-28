#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40024000,0x00000f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> CTPH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CTPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,17)> SSD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SSPSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> PGPSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> MCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IODEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SYNCPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSCE; 
    }
    namespace Noneier{
        using Addr = Register::Address<0x40024004,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MCEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOAIE; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x40024008,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MCEIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOAIC; 
    }
    namespace Noneisr{
        using Addr = Register::Address<0x4002400c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MCEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOAF; 
    }
    namespace Noneiohcr{
        using Addr = Register::Address<0x40024010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> G1_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> G1_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> G1_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> G1_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> G2_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> G2_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> G2_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> G2_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> G3_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> G3_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> G3_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> G3_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> G4_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> G4_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> G4_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> G4_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> G5_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> G5_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> G5_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> G5_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> G6_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> G6_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> G6_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> G6_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> G7_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> G7_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> G7_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> G7_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> G8_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> G8_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> G8_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> G8_IO4; 
    }
    namespace Noneioascr{
        using Addr = Register::Address<0x40024018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> G1_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> G1_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> G1_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> G1_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> G2_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> G2_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> G2_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> G2_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> G3_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> G3_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> G3_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> G3_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> G4_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> G4_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> G4_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> G4_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> G5_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> G5_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> G5_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> G5_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> G6_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> G6_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> G6_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> G6_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> G7_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> G7_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> G7_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> G7_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> G8_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> G8_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> G8_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> G8_IO4; 
    }
    namespace Noneioscr{
        using Addr = Register::Address<0x40024020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> G1_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> G1_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> G1_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> G1_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> G2_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> G2_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> G2_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> G2_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> G3_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> G3_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> G3_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> G3_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> G4_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> G4_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> G4_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> G4_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> G5_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> G5_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> G5_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> G5_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> G6_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> G6_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> G6_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> G6_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> G7_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> G7_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> G7_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> G7_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> G8_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> G8_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> G8_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> G8_IO4; 
    }
    namespace Noneioccr{
        using Addr = Register::Address<0x40024028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> G1_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> G1_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> G1_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> G1_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> G2_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> G2_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> G2_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> G2_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> G3_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> G3_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> G3_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> G3_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> G4_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> G4_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> G4_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> G4_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> G5_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> G5_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> G5_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> G5_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> G6_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> G6_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> G6_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> G6_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> G7_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> G7_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> G7_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> G7_IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> G8_IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> G8_IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> G8_IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> G8_IO4; 
    }
    namespace Noneiogcsr{
        using Addr = Register::Address<0x40024030,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> G8S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> G7S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> G6S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> G5S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> G4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> G3S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> G2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> G1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> G8E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> G7E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> G6E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> G5E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> G4E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> G3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> G2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> G1E; 
    }
    namespace Noneiog1cr{
        using Addr = Register::Address<0x40024034,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> CNT; 
    }
    namespace Noneiog2cr{
        using Addr = Register::Address<0x40024038,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> CNT; 
    }
    namespace Noneiog3cr{
        using Addr = Register::Address<0x4002403c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> CNT; 
    }
    namespace Noneiog4cr{
        using Addr = Register::Address<0x40024040,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> CNT; 
    }
    namespace Noneiog5cr{
        using Addr = Register::Address<0x40024044,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> CNT; 
    }
    namespace Noneiog6cr{
        using Addr = Register::Address<0x40024048,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> CNT; 
    }
    namespace Noneiog7cr{
        using Addr = Register::Address<0x4002404c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> CNT; 
    }
    namespace Noneiog8cr{
        using Addr = Register::Address<0x40024050,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> CNT; 
    }
}
