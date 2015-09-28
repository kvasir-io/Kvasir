#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepinsel0{
        using Addr = Register::Address<0x4002c000,0x3f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> P0_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> P0_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> P0_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> P0_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> P0_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> P0_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> P0_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> P0_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> P0_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> P0_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> P0_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> P0_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> P0_15; 
    }
    namespace Nonepinsel1{
        using Addr = Register::Address<0x4002c004,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> P0_16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> P0_17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> P0_18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> P0_19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> P0_20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> P0_21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> P0_22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> P0_23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> P0_24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> P0_25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> P0_26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> P0_27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> P0_28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> P0_29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> P0_30; 
    }
    namespace Nonepinsel2{
        using Addr = Register::Address<0x4002c008,0x3f00fcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> P1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> P1_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> P1_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> P1_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> P1_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> P1_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> P1_14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> P1_15; 
    }
    namespace Nonepinsel3{
        using Addr = Register::Address<0x4002c00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> P1_16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> P1_17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> P1_18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> P1_19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> P1_20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> P1_21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> P1_22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> P1_23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> P1_24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> P1_25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> P1_26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> P1_27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> P1_28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> P1_29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> P1_30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> P1_31; 
    }
    namespace Nonepinsel4{
        using Addr = Register::Address<0x4002c010,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> P2_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> P2_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> P2_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> P2_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> P2_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> P2_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> P2_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> P2_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> P2_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> P2_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> P2_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> P2_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> P2_12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> P2_13; 
    }
    namespace Nonepinsel7{
        using Addr = Register::Address<0x4002c01c,0xffc3ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> P3_25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> P3_26; 
    }
    namespace Nonepinsel9{
        using Addr = Register::Address<0x4002c024,0xf0ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> P4_28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> P4_29; 
    }
    namespace Nonepinsel10{
        using Addr = Register::Address<0x4002c028,0xfffffff7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TPIUCTRL; 
    }
    namespace Nonepinmode0{
        using Addr = Register::Address<0x4002c040,0x3f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> P0_00MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> P0_01MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> P0_02MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> P0_03MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> P0_04MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> P0_05MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> P0_06MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> P0_07MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> P0_08MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> P0_09MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> P0_10MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> P0_11MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> P0_15MODE; 
    }
    namespace Nonepinmode1{
        using Addr = Register::Address<0x4002c044,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> P0_16MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> P0_17MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> P0_18MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> P0_19MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> P0_20MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> P0_21MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> P0_22MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> P0_23MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> P0_24MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> P0_25MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> P0_26MODE; 
    }
    namespace Nonepinmode2{
        using Addr = Register::Address<0x4002c048,0x0fc0fcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> P1_00MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> P1_01MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> P1_04MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> P1_08MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> P1_09MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> P1_10MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> P1_14MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> P1_15MODE; 
    }
    namespace Nonepinmode3{
        using Addr = Register::Address<0x4002c04c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> P1_16MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> P1_17MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> P1_18MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> P1_19MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> P1_20MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> P1_21MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> P1_22MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> P1_23MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> P1_24MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> P1_25MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> P1_26MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> P1_27MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> P1_28MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> P1_29MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> P1_30MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> P1_31MODE; 
    }
    namespace Nonepinmode4{
        using Addr = Register::Address<0x4002c050,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> P2_00MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> P2_01MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> P2_02MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> P2_03MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> P2_04MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> P2_05MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> P2_06MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> P2_07MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> P2_08MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> P2_09MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> P2_10MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> P2_11MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> P2_12MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> P2_13MODE; 
    }
    namespace Nonepinmode7{
        using Addr = Register::Address<0x4002c05c,0xffc3ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> P3_25MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> P3_26MODE; 
    }
    namespace Nonepinmode9{
        using Addr = Register::Address<0x4002c064,0xf0ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> P4_28MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> P4_29MODE; 
    }
    namespace Nonepinmode_od0{
        using Addr = Register::Address<0x4002c068,0x98007000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0_00OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P0_01OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P0_02OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P0_03OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P0_04OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P0_05OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P0_06OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P0_07OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P0_08OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P0_09OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P0_10OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P0_11OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P0_15OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> P0_16OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> P0_17OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> P0_18OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> P0_19OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P0_20OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> P0_21OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> P0_22OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> P0_23OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> P0_24OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> P0_25OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> P0_26OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> P0_29OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> P0_30OD; 
    }
    namespace Nonepinmode_od1{
        using Addr = Register::Address<0x4002c06c,0x000038ec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P1_00OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P1_01OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P1_04OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P1_08OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P1_09OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P1_10OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P1_14OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P1_15OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> P1_16OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> P1_17OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> P1_18OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> P1_19OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P1_20OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> P1_21OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> P1_22OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> P1_23OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> P1_24OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> P1_25OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> P1_26OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> P1_27OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> P1_28OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> P1_29OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> P1_30OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> P1_31OD; 
    }
    namespace Nonepinmode_od2{
        using Addr = Register::Address<0x4002c070,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P2_00OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P2_01OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2_02OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P2_03OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P2_04OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P2_05OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P2_06OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P2_07OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P2_08OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P2_09OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P2_10OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P2_11OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P2_12OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P2_13OD; 
    }
    namespace Nonepinmode_od3{
        using Addr = Register::Address<0x4002c074,0xf9ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> P3_25OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> P3_26OD; 
    }
    namespace Nonepinmode_od4{
        using Addr = Register::Address<0x4002c078,0xcfffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> P4_28OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> P4_29OD; 
    }
    namespace Nonei2cpadcfg{
        using Addr = Register::Address<0x4002c07c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SDADRV0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SDAI2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SCLDRV0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SCLI2C0; 
    }
}
