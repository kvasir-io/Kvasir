#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonewtcr1{
        using Addr = Register::Address<0x4003b000,0x0000e082>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> INTCRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> INTERIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> INTALIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> INTTMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> INTHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> INTMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> INTSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> INTSSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> INTCRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> INTERI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> INTALI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> INTTMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> INTHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> INTMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> INTSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> INTSSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> YEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SCST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ST; 
    }
    namespace Nonewtcr2{
        using Addr = Register::Address<0x4003b004,0xfffff8fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TMRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TMST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CREAD; 
    }
    namespace Nonewtbr{
        using Addr = Register::Address<0x4003b008,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> BR23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> BR22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> BR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> BR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> BR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BR17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BR16; 
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
    namespace Nonewtdr{
        using Addr = Register::Address<0x4003b00f,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> D; 
    }
    namespace Nonewthr{
        using Addr = Register::Address<0x4003b00e,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> H; 
    }
    namespace Nonewtmir{
        using Addr = Register::Address<0x4003b00d,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MI; 
    }
    namespace Nonewtsr{
        using Addr = Register::Address<0x4003b00c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> S; 
    }
    namespace Nonewtyr{
        using Addr = Register::Address<0x4003b012,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> Y; 
    }
    namespace Nonewtmor{
        using Addr = Register::Address<0x4003b011,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TMO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MO; 
    }
    namespace Nonewtdw{
        using Addr = Register::Address<0x4003b010,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DW; 
    }
    namespace Nonealdr{
        using Addr = Register::Address<0x4003b017,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AD; 
    }
    namespace Nonealhr{
        using Addr = Register::Address<0x4003b016,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AH; 
    }
    namespace Nonealmir{
        using Addr = Register::Address<0x4003b015,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TAMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AMI; 
    }
    namespace Nonealyr{
        using Addr = Register::Address<0x4003b01a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AY; 
    }
    namespace Nonealmor{
        using Addr = Register::Address<0x4003b019,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TAMO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AMO; 
    }
    namespace Nonewttr{
        using Addr = Register::Address<0x4003b01c,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TM17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TM16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TM15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TM14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TM13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TM12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TM11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TM10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TM9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TM8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TM7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TM6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TM5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TM4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TM0; 
    }
    namespace Nonewtclks{
        using Addr = Register::Address<0x4003b020,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WTCLKS; 
    }
    namespace Nonewtclkm{
        using Addr = Register::Address<0x4003b021,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WTCLKM; 
    }
    namespace Nonewtcal{
        using Addr = Register::Address<0x4003b024,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> WTCAL; 
    }
    namespace Nonewtcalen{
        using Addr = Register::Address<0x4003b026,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WTCALEN; 
    }
    namespace Nonewtdiv{
        using Addr = Register::Address<0x4003b028,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WTDIV; 
    }
    namespace Nonewtdiven{
        using Addr = Register::Address<0x4003b029,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WTDIVRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WTDIVEN; 
    }
    namespace Nonewtcalprd{
        using Addr = Register::Address<0x4003b02c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> WTCALPRD; 
    }
    namespace Nonewtcosel{
        using Addr = Register::Address<0x4003b030,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WTCOSEL; 
    }
}
