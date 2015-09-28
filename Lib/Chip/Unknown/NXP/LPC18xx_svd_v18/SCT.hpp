#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneconfig{
        using Addr = Register::Address<0x40000000,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UNIFY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLKMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NORELAODL_NORELOADU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NORELOADH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,9)> INSYNCn; 
    }
    namespace Nonectrl{
        using Addr = Register::Address<0x40000004,0xe000e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DOWN_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOP_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HALT_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRCTR_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BIDIR_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,5)> PRE_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DOWN_H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STOP_H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HALT_H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CLRCTR_H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> BIDIR_H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,21)> PRE_H; 
    }
    namespace Nonelimit{
        using Addr = Register::Address<0x40000008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LIMMSK_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LIMMSK_H; 
    }
    namespace Nonehalt{
        using Addr = Register::Address<0x4000000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HALTMSK_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> HALTMSK_H; 
    }
    namespace Nonestop{
        using Addr = Register::Address<0x40000010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> STOPMSK_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> STOPMSK_H; 
    }
    namespace Nonestart{
        using Addr = Register::Address<0x40000014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> STARTMSK_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> STARTMSK_H; 
    }
    namespace Nonecount{
        using Addr = Register::Address<0x40000040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CTR_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CTR_H; 
    }
    namespace Nonestate{
        using Addr = Register::Address<0x40000044,0xffe0ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> STATE_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> STATE_H; 
    }
    namespace Noneinput{
        using Addr = Register::Address<0x40000048,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AIN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AIN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AIN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AIN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AIN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AIN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AIN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AIN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SIN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SIN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SIN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SIN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SIN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SIN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SIN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SIN7; 
    }
    namespace Noneregmode{
        using Addr = Register::Address<0x4000004c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REGMOD_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REGMOD_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REGMOD_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REGMOD_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REGMOD_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REGMOD_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REGMOD_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REGMOD_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> REGMOD_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REGMOD_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> REGMOD_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> REGMOD_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> REGMOD_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REGMOD_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REGMOD_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> REGMOD_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> REGMOD_H16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> REGMOD_H17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> REGMOD_H18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> REGMOD_H19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> REGMOD_H20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> REGMOD_H21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> REGMOD_H22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> REGMOD_H23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> REGMOD_H24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> REGMOD_H25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> REGMOD_H26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> REGMOD_H27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> REGMOD_H28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> REGMOD_H29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> REGMOD_H30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> REGMOD_H31; 
    }
    namespace Noneoutput{
        using Addr = Register::Address<0x40000050,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OUT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OUT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OUT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OUT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OUT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OUT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OUT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OUT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OUT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OUT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OUT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OUT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OUT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OUT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OUT15; 
    }
    namespace Noneoutputdirctrl{
        using Addr = Register::Address<0x40000054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SETCLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SETCLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SETCLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SETCLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SETCLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SETCLR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SETCLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> SETCLR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SETCLR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> SETCLR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> SETCLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> SETCLR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SETCLR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> SETCLR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> SETCLR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> SETCLR15; 
    }
    namespace Noneres{
        using Addr = Register::Address<0x40000058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> O0RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> O1RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> O2RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> O3RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> O4RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> O5RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> O6RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> O7RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> O8RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> O9RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> O10RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> O11RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> O12RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> O13RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> O14RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> O15RES; 
    }
    namespace Nonedmareq0{
        using Addr = Register::Address<0x4000005c,0x3fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DEV_0_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEV_0_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DEV_0_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DEV_0_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DEV_0_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DEV_0_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DEV_0_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DEV_0_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DEV_0_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DEV_0_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DEV_0_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DEV_0_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DEV_0_12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DEV_0_13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DEV_0_14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DEV_0_15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DRL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DRQ0; 
    }
    namespace Nonedmareq1{
        using Addr = Register::Address<0x40000060,0x3fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DEV_1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEV_1_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DEV_1_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DEV_1_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DEV_1_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DEV_1_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DEV_1_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DEV_1_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DEV_1_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DEV_1_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DEV_1_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DEV_1_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DEV_1_12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DEV_1_13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DEV_1_14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DEV_1_15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DRL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DRQ1; 
    }
    namespace Noneeven{
        using Addr = Register::Address<0x400000f0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IEN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IEN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IEN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IEN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IEN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IEN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IEN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IEN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IEN15; 
    }
    namespace Noneevflag{
        using Addr = Register::Address<0x400000f4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLAG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLAG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLAG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FLAG3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLAG4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FLAG5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FLAG6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FLAG7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FLAG8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FLAG9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FLAG10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FLAG11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FLAG12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FLAG13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FLAG14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FLAG15; 
    }
    namespace Noneconen{
        using Addr = Register::Address<0x400000f8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NCEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NCEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NCEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NCEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NCEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NCEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NCEN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NCEN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> NCEN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> NCEN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> NCEN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NCEN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NCEN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NCEN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NCEN15; 
    }
    namespace Noneconflag{
        using Addr = Register::Address<0x400000fc,0x3fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NCFLAG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCFLAG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NCFLAG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NCFLAG3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NCFLAG4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NCFLAG5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NCFLAG6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NCFLAG7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NCFLAG8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> NCFLAG9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> NCFLAG10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> NCFLAG11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NCFLAG12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NCFLAG13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NCFLAG14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NCFLAG15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BUSERRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> BUSERRH; 
    }
    namespace Nonematch0{
        using Addr = Register::Address<0x40000100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch1{
        using Addr = Register::Address<0x40000104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch2{
        using Addr = Register::Address<0x40000108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch3{
        using Addr = Register::Address<0x4000010c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch4{
        using Addr = Register::Address<0x40000110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch5{
        using Addr = Register::Address<0x40000114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch6{
        using Addr = Register::Address<0x40000118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch7{
        using Addr = Register::Address<0x4000011c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch8{
        using Addr = Register::Address<0x40000120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch9{
        using Addr = Register::Address<0x40000124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch10{
        using Addr = Register::Address<0x40000128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch11{
        using Addr = Register::Address<0x4000012c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch12{
        using Addr = Register::Address<0x40000130,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch13{
        using Addr = Register::Address<0x40000134,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch14{
        using Addr = Register::Address<0x40000138,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch15{
        using Addr = Register::Address<0x4000013c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonecap0{
        using Addr = Register::Address<0x40000100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap1{
        using Addr = Register::Address<0x40000104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap2{
        using Addr = Register::Address<0x40000108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap3{
        using Addr = Register::Address<0x4000010c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap4{
        using Addr = Register::Address<0x40000110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap5{
        using Addr = Register::Address<0x40000114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap6{
        using Addr = Register::Address<0x40000118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap7{
        using Addr = Register::Address<0x4000011c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap8{
        using Addr = Register::Address<0x40000120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap9{
        using Addr = Register::Address<0x40000124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap10{
        using Addr = Register::Address<0x40000128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap11{
        using Addr = Register::Address<0x4000012c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap12{
        using Addr = Register::Address<0x40000130,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap13{
        using Addr = Register::Address<0x40000134,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap14{
        using Addr = Register::Address<0x40000138,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap15{
        using Addr = Register::Address<0x4000013c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonematchrel0{
        using Addr = Register::Address<0x40000200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel1{
        using Addr = Register::Address<0x40000204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel2{
        using Addr = Register::Address<0x40000208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel3{
        using Addr = Register::Address<0x4000020c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel4{
        using Addr = Register::Address<0x40000210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel5{
        using Addr = Register::Address<0x40000214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel6{
        using Addr = Register::Address<0x40000218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel7{
        using Addr = Register::Address<0x4000021c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel8{
        using Addr = Register::Address<0x40000220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel9{
        using Addr = Register::Address<0x40000224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel10{
        using Addr = Register::Address<0x40000228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel11{
        using Addr = Register::Address<0x4000022c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel12{
        using Addr = Register::Address<0x40000230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel13{
        using Addr = Register::Address<0x40000234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel14{
        using Addr = Register::Address<0x40000238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel15{
        using Addr = Register::Address<0x4000023c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonecapctrl0{
        using Addr = Register::Address<0x40000200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl1{
        using Addr = Register::Address<0x40000204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl2{
        using Addr = Register::Address<0x40000208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl3{
        using Addr = Register::Address<0x4000020c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl4{
        using Addr = Register::Address<0x40000210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl5{
        using Addr = Register::Address<0x40000214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl6{
        using Addr = Register::Address<0x40000218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl7{
        using Addr = Register::Address<0x4000021c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl8{
        using Addr = Register::Address<0x40000220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl9{
        using Addr = Register::Address<0x40000224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl10{
        using Addr = Register::Address<0x40000228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl11{
        using Addr = Register::Address<0x4000022c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl12{
        using Addr = Register::Address<0x40000230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl13{
        using Addr = Register::Address<0x40000234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl14{
        using Addr = Register::Address<0x40000238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl15{
        using Addr = Register::Address<0x4000023c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPCONn_L0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAPCONn_L1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPCONn_L2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCONn_L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPCONn_L4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAPCONn_L5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAPCONn_L6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAPCONn_L7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAPCONn_L8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAPCONn_L9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAPCONn_L10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPCONn_L11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAPCONn_L12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAPCONn_L13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAPCONn_L14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAPCONn_L15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Noneevstatemsk0{
        using Addr = Register::Address<0x40000300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk1{
        using Addr = Register::Address<0x40000308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk2{
        using Addr = Register::Address<0x40000310,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk3{
        using Addr = Register::Address<0x40000318,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk4{
        using Addr = Register::Address<0x40000320,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk5{
        using Addr = Register::Address<0x40000328,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk6{
        using Addr = Register::Address<0x40000330,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk7{
        using Addr = Register::Address<0x40000338,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk8{
        using Addr = Register::Address<0x40000340,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk9{
        using Addr = Register::Address<0x40000348,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk10{
        using Addr = Register::Address<0x40000350,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk11{
        using Addr = Register::Address<0x40000358,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk12{
        using Addr = Register::Address<0x40000360,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk13{
        using Addr = Register::Address<0x40000368,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk14{
        using Addr = Register::Address<0x40000370,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevstatemsk15{
        using Addr = Register::Address<0x40000378,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATEMSKn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATEMSKn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATEMSKn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATEMSKn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATEMSKn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATEMSKn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATEMSKn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATEMSKn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATEMSKn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATEMSKn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATEMSKn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATEMSKn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATEMSKn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATEMSKn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATEMSKn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATEMSKn15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATEMSKn16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> STATEMSKn17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> STATEMSKn18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STATEMSKn19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STATEMSKn20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> STATEMSKn21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> STATEMSKn22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> STATEMSKn23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STATEMSKn24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STATEMSKn25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STATEMSKn26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STATEMSKn27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STATEMSKn28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STATEMSKn29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STATEMSKn30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STATEMSKn31; 
    }
    namespace Noneevctrl0{
        using Addr = Register::Address<0x40000304,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl1{
        using Addr = Register::Address<0x4000030c,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl2{
        using Addr = Register::Address<0x40000314,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl3{
        using Addr = Register::Address<0x4000031c,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl4{
        using Addr = Register::Address<0x40000324,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl5{
        using Addr = Register::Address<0x4000032c,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl6{
        using Addr = Register::Address<0x40000334,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl7{
        using Addr = Register::Address<0x4000033c,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl8{
        using Addr = Register::Address<0x40000344,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl9{
        using Addr = Register::Address<0x4000034c,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl10{
        using Addr = Register::Address<0x40000354,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl11{
        using Addr = Register::Address<0x4000035c,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl12{
        using Addr = Register::Address<0x40000364,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl13{
        using Addr = Register::Address<0x4000036c,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl14{
        using Addr = Register::Address<0x40000374,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneevctrl15{
        using Addr = Register::Address<0x4000037c,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
    }
    namespace Noneoutputset0{
        using Addr = Register::Address<0x40000500,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset1{
        using Addr = Register::Address<0x40000508,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset2{
        using Addr = Register::Address<0x40000510,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset3{
        using Addr = Register::Address<0x40000518,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset4{
        using Addr = Register::Address<0x40000520,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset5{
        using Addr = Register::Address<0x40000528,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset6{
        using Addr = Register::Address<0x40000530,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset7{
        using Addr = Register::Address<0x40000538,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset8{
        using Addr = Register::Address<0x40000540,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset9{
        using Addr = Register::Address<0x40000548,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset10{
        using Addr = Register::Address<0x40000550,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset11{
        using Addr = Register::Address<0x40000558,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset12{
        using Addr = Register::Address<0x40000560,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset13{
        using Addr = Register::Address<0x40000568,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset14{
        using Addr = Register::Address<0x40000570,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputset15{
        using Addr = Register::Address<0x40000578,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETn15; 
    }
    namespace Noneoutputclr0{
        using Addr = Register::Address<0x40000504,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr1{
        using Addr = Register::Address<0x4000050c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr2{
        using Addr = Register::Address<0x40000514,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr3{
        using Addr = Register::Address<0x4000051c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr4{
        using Addr = Register::Address<0x40000524,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr5{
        using Addr = Register::Address<0x4000052c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr6{
        using Addr = Register::Address<0x40000534,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr7{
        using Addr = Register::Address<0x4000053c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr8{
        using Addr = Register::Address<0x40000544,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr9{
        using Addr = Register::Address<0x4000054c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr10{
        using Addr = Register::Address<0x40000554,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr11{
        using Addr = Register::Address<0x4000055c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr12{
        using Addr = Register::Address<0x40000564,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr13{
        using Addr = Register::Address<0x4000056c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr14{
        using Addr = Register::Address<0x40000574,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
    namespace Noneoutputclr15{
        using Addr = Register::Address<0x4000057c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLRn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLRn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLRn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLRn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLRn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLRn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLRn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLRn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLRn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLRn15; 
    }
}
