#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40007000,0xffffb8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> VOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DBP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LPMS; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40007004,0xfffff900>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> USV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IOSV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PVME4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PVME3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PVME2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PVME1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> PLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PVDE; 
    }
    namespace Nonecr3{
        using Addr = Register::Address<0x40007008,0xffff7ae0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> APC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EWUP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EWUP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EWUP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EWUP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EWUP1; 
    }
    namespace Nonecr4{
        using Addr = Register::Address<0x4000700c,0xfffffce0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> VBRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WP1; 
    }
    namespace Nonesr1{
        using Addr = Register::Address<0x40007010,0xffff7ee0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WUFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CWUF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CWUF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CWUF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CWUF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CWUF1; 
    }
    namespace Nonesr2{
        using Addr = Register::Address<0x40007014,0xffff00ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PVMO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PVMO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PVMO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PVMO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PVDO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> VOSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REGLPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> REGLPS; 
    }
    namespace Nonescr{
        using Addr = Register::Address<0x40007018,0xfffffee0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WUF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WUF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WUF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WUF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WUF1; 
    }
    namespace Nonepucra{
        using Addr = Register::Address<0x40007020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PU15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PU14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PU13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PU12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PU11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PU10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PU9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PU8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PU7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PU6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PU5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PU4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PU3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PU2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PU1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PU0; 
    }
    namespace Nonepdcra{
        using Addr = Register::Address<0x40007024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0; 
    }
    namespace Nonepucrb{
        using Addr = Register::Address<0x40007028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PU15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PU14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PU13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PU12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PU11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PU10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PU9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PU8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PU7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PU6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PU5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PU4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PU3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PU2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PU1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PU0; 
    }
    namespace Nonepdcrb{
        using Addr = Register::Address<0x4000702c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0; 
    }
    namespace Nonepucrc{
        using Addr = Register::Address<0x40007030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PU15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PU14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PU13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PU12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PU11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PU10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PU9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PU8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PU7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PU6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PU5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PU4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PU3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PU2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PU1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PU0; 
    }
    namespace Nonepdcrc{
        using Addr = Register::Address<0x40007034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0; 
    }
    namespace Nonepucrd{
        using Addr = Register::Address<0x40007038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PU15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PU14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PU13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PU12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PU11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PU10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PU9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PU8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PU7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PU6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PU5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PU4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PU3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PU2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PU1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PU0; 
    }
    namespace Nonepdcrd{
        using Addr = Register::Address<0x4000703c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0; 
    }
    namespace Nonepucre{
        using Addr = Register::Address<0x40007040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PU15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PU14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PU13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PU12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PU11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PU10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PU9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PU8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PU7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PU6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PU5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PU4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PU3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PU2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PU1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PU0; 
    }
    namespace Nonepdcre{
        using Addr = Register::Address<0x40007044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0; 
    }
    namespace Nonepucrf{
        using Addr = Register::Address<0x40007048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PU15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PU14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PU13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PU12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PU11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PU10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PU9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PU8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PU7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PU6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PU5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PU4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PU3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PU2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PU1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PU0; 
    }
    namespace Nonepdcrf{
        using Addr = Register::Address<0x4000704c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0; 
    }
    namespace Nonepucrg{
        using Addr = Register::Address<0x40007050,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PU15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PU14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PU13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PU12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PU11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PU10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PU9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PU8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PU7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PU6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PU5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PU4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PU3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PU2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PU1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PU0; 
    }
    namespace Nonepdcrg{
        using Addr = Register::Address<0x40007054,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0; 
    }
    namespace Nonepucrh{
        using Addr = Register::Address<0x40007058,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PU1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PU0; 
    }
    namespace Nonepdcrh{
        using Addr = Register::Address<0x4000705c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0; 
    }
}
