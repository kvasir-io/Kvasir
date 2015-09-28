#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonettcr0{
        using Addr = Register::Address<0x40024000,0xffff00ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TRG6O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TRG4O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TRG2O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TRG0O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> CS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MONI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STR0; 
    }
    namespace Nonecomp0{
        using Addr = Register::Address<0x40024008,0xffffffff>;
    }
    namespace Nonecomp2{
        using Addr = Register::Address<0x4002400c,0xffffffff>;
    }
    namespace Nonecomp4{
        using Addr = Register::Address<0x40024010,0xffffffff>;
    }
    namespace Nonecomp6{
        using Addr = Register::Address<0x40024014,0xffffffff>;
    }
    namespace Nonetrg{
        using Addr = Register::Address<0x40024100,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PEN07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PEN06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PEN05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PEN04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PEN03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PEN02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PEN01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PEN00; 
    }
    namespace Nonerevc{
        using Addr = Register::Address<0x40024104,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REV07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REV06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REV05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REV04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REV03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REV02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REV01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REV00; 
    }
    namespace Noneppgc0{
        using Addr = Register::Address<0x40024201,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> PCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TTRG; 
    }
    namespace Noneppgc1{
        using Addr = Register::Address<0x40024200,0xffffffff>;
    }
    namespace Noneppgc2{
        using Addr = Register::Address<0x40024205,0xffffffff>;
    }
    namespace Noneppgc3{
        using Addr = Register::Address<0x40024204,0xffffffff>;
    }
    namespace Noneppgc4{
        using Addr = Register::Address<0x40024241,0xffffffff>;
    }
    namespace Noneppgc5{
        using Addr = Register::Address<0x40024240,0xffffffff>;
    }
    namespace Noneppgc6{
        using Addr = Register::Address<0x40024245,0xffffffff>;
    }
    namespace Noneppgc7{
        using Addr = Register::Address<0x40024244,0xffffffff>;
    }
    namespace Noneprlh0{
        using Addr = Register::Address<0x40024209,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRLH; 
    }
    namespace Noneprll0{
        using Addr = Register::Address<0x40024208,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRLL; 
    }
    namespace Noneprlh1{
        using Addr = Register::Address<0x4002420d,0xffffffff>;
    }
    namespace Noneprll1{
        using Addr = Register::Address<0x4002420c,0xffffffff>;
    }
    namespace Noneprlh2{
        using Addr = Register::Address<0x40024211,0xffffffff>;
    }
    namespace Noneprll2{
        using Addr = Register::Address<0x40024210,0xffffffff>;
    }
    namespace Noneprlh3{
        using Addr = Register::Address<0x40024215,0xffffffff>;
    }
    namespace Noneprll3{
        using Addr = Register::Address<0x40024214,0xffffffff>;
    }
    namespace Noneprlh4{
        using Addr = Register::Address<0x40024249,0xffffffff>;
    }
    namespace Noneprll4{
        using Addr = Register::Address<0x40024248,0xffffffff>;
    }
    namespace Noneprlh5{
        using Addr = Register::Address<0x4002424d,0xffffffff>;
    }
    namespace Noneprll5{
        using Addr = Register::Address<0x4002424c,0xffffffff>;
    }
    namespace Noneprlh6{
        using Addr = Register::Address<0x40024251,0xffffffff>;
    }
    namespace Noneprll6{
        using Addr = Register::Address<0x40024250,0xffffffff>;
    }
    namespace Noneprlh7{
        using Addr = Register::Address<0x40024255,0xffffffff>;
    }
    namespace Noneprll7{
        using Addr = Register::Address<0x40024254,0xffffffff>;
    }
    namespace Nonegatec0{
        using Addr = Register::Address<0x40024218,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STRG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EDGE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STRG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EDGE0; 
    }
    namespace Nonegatec4{
        using Addr = Register::Address<0x40024258,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STRG6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EDGE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STRG4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EDGE4; 
    }
    namespace Noneigbtc{
        using Addr = Register::Address<0x40024380,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IGATIH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> IGNFW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IGOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IGTRGLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IGBTMD; 
    }
}
