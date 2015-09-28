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
    namespace Nonettcr1{
        using Addr = Register::Address<0x40024020,0xffff00ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TRG7O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TRG5O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TRG3O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TRG1O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> CS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MONI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STR1; 
    }
    namespace Nonettcr2{
        using Addr = Register::Address<0x40024040,0xffff00ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TRG22O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TRG20O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TRG18O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TRG16O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> CS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MONI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STR2; 
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
    namespace Nonecomp1{
        using Addr = Register::Address<0x40024028,0xffffffff>;
    }
    namespace Nonecomp3{
        using Addr = Register::Address<0x4002402c,0xffffffff>;
    }
    namespace Nonecomp5{
        using Addr = Register::Address<0x40024030,0xffffffff>;
    }
    namespace Nonecomp7{
        using Addr = Register::Address<0x40024034,0xffffffff>;
    }
    namespace Nonecomp8{
        using Addr = Register::Address<0x40024048,0xffffffff>;
    }
    namespace Nonecomp10{
        using Addr = Register::Address<0x4002404c,0xffffffff>;
    }
    namespace Nonecomp12{
        using Addr = Register::Address<0x40024050,0xffffffff>;
    }
    namespace Nonecomp14{
        using Addr = Register::Address<0x40024054,0xffffffff>;
    }
    namespace Nonetrg{
        using Addr = Register::Address<0x40024100,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PEN15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PEN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PEN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PEN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PEN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PEN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PEN09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PEN08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PEN07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PEN06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PEN05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PEN04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PEN03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PEN02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PEN01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PEN00; 
    }
    namespace Nonetrg1{
        using Addr = Register::Address<0x40024140,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PEN23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PEN22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PEN21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PEN20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PEN19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PEN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PEN17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PEN16; 
    }
    namespace Nonerevc{
        using Addr = Register::Address<0x40024104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> REV15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REV14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REV13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> REV12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> REV11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> REV10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REV09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> REV08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REV07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REV06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REV05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REV04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REV03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REV02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REV01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REV00; 
    }
    namespace Nonerevc1{
        using Addr = Register::Address<0x40024144,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REV23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REV22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REV21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REV20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REV19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REV18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REV17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REV16; 
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
    namespace Noneppgc8{
        using Addr = Register::Address<0x40024281,0xffffffff>;
    }
    namespace Noneppgc9{
        using Addr = Register::Address<0x40024280,0xffffffff>;
    }
    namespace Noneppgc10{
        using Addr = Register::Address<0x40024285,0xffffffff>;
    }
    namespace Noneppgc11{
        using Addr = Register::Address<0x40024284,0xffffffff>;
    }
    namespace Noneppgc12{
        using Addr = Register::Address<0x400242c1,0xffffffff>;
    }
    namespace Noneppgc13{
        using Addr = Register::Address<0x400242c0,0xffffffff>;
    }
    namespace Noneppgc14{
        using Addr = Register::Address<0x400242c5,0xffffffff>;
    }
    namespace Noneppgc15{
        using Addr = Register::Address<0x400242c4,0xffffffff>;
    }
    namespace Noneppgc16{
        using Addr = Register::Address<0x40024301,0xffffffff>;
    }
    namespace Noneppgc17{
        using Addr = Register::Address<0x40024300,0xffffffff>;
    }
    namespace Noneppgc18{
        using Addr = Register::Address<0x40024305,0xffffffff>;
    }
    namespace Noneppgc19{
        using Addr = Register::Address<0x40024304,0xffffffff>;
    }
    namespace Noneppgc20{
        using Addr = Register::Address<0x40024341,0xffffffff>;
    }
    namespace Noneppgc21{
        using Addr = Register::Address<0x40024340,0xffffffff>;
    }
    namespace Noneppgc22{
        using Addr = Register::Address<0x40024345,0xffffffff>;
    }
    namespace Noneppgc23{
        using Addr = Register::Address<0x40024344,0xffffffff>;
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
    namespace Noneprlh8{
        using Addr = Register::Address<0x40024289,0xffffffff>;
    }
    namespace Noneprll8{
        using Addr = Register::Address<0x40024288,0xffffffff>;
    }
    namespace Noneprlh9{
        using Addr = Register::Address<0x4002428d,0xffffffff>;
    }
    namespace Noneprll9{
        using Addr = Register::Address<0x4002428c,0xffffffff>;
    }
    namespace Noneprlh10{
        using Addr = Register::Address<0x40024291,0xffffffff>;
    }
    namespace Noneprll10{
        using Addr = Register::Address<0x40024290,0xffffffff>;
    }
    namespace Noneprlh11{
        using Addr = Register::Address<0x40024295,0xffffffff>;
    }
    namespace Noneprll11{
        using Addr = Register::Address<0x40024294,0xffffffff>;
    }
    namespace Noneprlh12{
        using Addr = Register::Address<0x400242c9,0xffffffff>;
    }
    namespace Noneprll12{
        using Addr = Register::Address<0x400242c8,0xffffffff>;
    }
    namespace Noneprlh13{
        using Addr = Register::Address<0x400242cd,0xffffffff>;
    }
    namespace Noneprll13{
        using Addr = Register::Address<0x400242cc,0xffffffff>;
    }
    namespace Noneprlh14{
        using Addr = Register::Address<0x400242d1,0xffffffff>;
    }
    namespace Noneprll14{
        using Addr = Register::Address<0x400242d0,0xffffffff>;
    }
    namespace Noneprlh15{
        using Addr = Register::Address<0x400242d5,0xffffffff>;
    }
    namespace Noneprll15{
        using Addr = Register::Address<0x400242d4,0xffffffff>;
    }
    namespace Noneprlh16{
        using Addr = Register::Address<0x40024309,0xffffffff>;
    }
    namespace Noneprll16{
        using Addr = Register::Address<0x40024308,0xffffffff>;
    }
    namespace Noneprlh17{
        using Addr = Register::Address<0x4002430d,0xffffffff>;
    }
    namespace Noneprll17{
        using Addr = Register::Address<0x4002430c,0xffffffff>;
    }
    namespace Noneprlh18{
        using Addr = Register::Address<0x40024311,0xffffffff>;
    }
    namespace Noneprll18{
        using Addr = Register::Address<0x40024310,0xffffffff>;
    }
    namespace Noneprlh19{
        using Addr = Register::Address<0x40024315,0xffffffff>;
    }
    namespace Noneprll19{
        using Addr = Register::Address<0x40024314,0xffffffff>;
    }
    namespace Noneprlh20{
        using Addr = Register::Address<0x40024349,0xffffffff>;
    }
    namespace Noneprll20{
        using Addr = Register::Address<0x40024348,0xffffffff>;
    }
    namespace Noneprlh21{
        using Addr = Register::Address<0x4002434d,0xffffffff>;
    }
    namespace Noneprll21{
        using Addr = Register::Address<0x4002434c,0xffffffff>;
    }
    namespace Noneprlh22{
        using Addr = Register::Address<0x40024351,0xffffffff>;
    }
    namespace Noneprll22{
        using Addr = Register::Address<0x40024350,0xffffffff>;
    }
    namespace Noneprlh23{
        using Addr = Register::Address<0x40024355,0xffffffff>;
    }
    namespace Noneprll23{
        using Addr = Register::Address<0x40024354,0xffffffff>;
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
    namespace Nonegatec8{
        using Addr = Register::Address<0x40024298,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STRG10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EDGE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STRG8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EDGE8; 
    }
    namespace Nonegatec12{
        using Addr = Register::Address<0x400242d8,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STRG14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EDGE14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STRG12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EDGE12; 
    }
    namespace Nonegatec16{
        using Addr = Register::Address<0x40024318,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STRG18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EDGE18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STRG16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EDGE16; 
    }
    namespace Nonegatec20{
        using Addr = Register::Address<0x40024358,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STRG22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EDGE22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STRG20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EDGE20; 
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
