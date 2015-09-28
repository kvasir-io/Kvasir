#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneconfig{
        using Addr = Register::Address<0x1c018000,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UNIFY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLKMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NORELAOD_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NORELOAD_H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,9)> INSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> AUTOLIMIT_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AUTOLIMIT_H; 
    }
    namespace Nonectrl{
        using Addr = Register::Address<0x1c018004,0xe000e000>;
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
        using Addr = Register::Address<0x1c018008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LIMMSK_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LIMMSK_H; 
    }
    namespace Nonehalt{
        using Addr = Register::Address<0x1c01800c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HALTMSK_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> HALTMSK_H; 
    }
    namespace Nonestop{
        using Addr = Register::Address<0x1c018010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> STOPMSK_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> STOPMSK_H; 
    }
    namespace Nonestart{
        using Addr = Register::Address<0x1c018014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> STARTMSK_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> STARTMSK_H; 
    }
    namespace Nonedither{
        using Addr = Register::Address<0x1c018018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DITHMSK_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DITHMSK_H; 
    }
    namespace Nonecount{
        using Addr = Register::Address<0x1c018040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CTR_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CTR_H; 
    }
    namespace Nonestate{
        using Addr = Register::Address<0x1c018044,0xffe0ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> STATE_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> STATE_H; 
    }
    namespace Noneinput{
        using Addr = Register::Address<0x1c018048,0xff00ff00>;
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
        using Addr = Register::Address<0x1c01804c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> REGMOD_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> REGMOD_H; 
    }
    namespace Noneoutput{
        using Addr = Register::Address<0x1c018050,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> OUT; 
    }
    namespace Noneoutputdirctrl{
        using Addr = Register::Address<0x1c018054,0xfff00000>;
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
    }
    namespace Noneres{
        using Addr = Register::Address<0x1c018058,0xfff00000>;
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
    }
    namespace Nonedmareq0{
        using Addr = Register::Address<0x1c01805c,0x3fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DEV_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DRL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DRQ0; 
    }
    namespace Nonedmareq1{
        using Addr = Register::Address<0x1c018060,0x3fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DEV_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DRL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DRQ1; 
    }
    namespace Noneeven{
        using Addr = Register::Address<0x1c0180f0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IEN; 
    }
    namespace Noneevflag{
        using Addr = Register::Address<0x1c0180f4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FLAG; 
    }
    namespace Noneconen{
        using Addr = Register::Address<0x1c0180f8,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NCEN; 
    }
    namespace Noneconflag{
        using Addr = Register::Address<0x1c0180fc,0x3ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NCFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BUSERRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> BUSERRH; 
    }
    namespace Nonematch0{
        using Addr = Register::Address<0x1c018100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch1{
        using Addr = Register::Address<0x1c018104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch2{
        using Addr = Register::Address<0x1c018108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch3{
        using Addr = Register::Address<0x1c01810c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch4{
        using Addr = Register::Address<0x1c018110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch5{
        using Addr = Register::Address<0x1c018114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch6{
        using Addr = Register::Address<0x1c018118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch7{
        using Addr = Register::Address<0x1c01811c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch8{
        using Addr = Register::Address<0x1c018120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch9{
        using Addr = Register::Address<0x1c018124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch10{
        using Addr = Register::Address<0x1c018128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch11{
        using Addr = Register::Address<0x1c01812c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch12{
        using Addr = Register::Address<0x1c018130,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch13{
        using Addr = Register::Address<0x1c018134,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch14{
        using Addr = Register::Address<0x1c018138,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch15{
        using Addr = Register::Address<0x1c01813c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonefracmat0{
        using Addr = Register::Address<0x1c018140,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FRACMAT_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FRACMAT_H; 
    }
    namespace Nonefracmat1{
        using Addr = Register::Address<0x1c018144,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FRACMAT_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FRACMAT_H; 
    }
    namespace Nonefracmat2{
        using Addr = Register::Address<0x1c018148,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FRACMAT_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FRACMAT_H; 
    }
    namespace Nonefracmat3{
        using Addr = Register::Address<0x1c01814c,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FRACMAT_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FRACMAT_H; 
    }
    namespace Nonefracmat4{
        using Addr = Register::Address<0x1c018150,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FRACMAT_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FRACMAT_H; 
    }
    namespace Nonefracmat5{
        using Addr = Register::Address<0x1c018154,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FRACMAT_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FRACMAT_H; 
    }
    namespace Nonecap0{
        using Addr = Register::Address<0x1c018100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap1{
        using Addr = Register::Address<0x1c018104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap2{
        using Addr = Register::Address<0x1c018108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap3{
        using Addr = Register::Address<0x1c01810c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap4{
        using Addr = Register::Address<0x1c018110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap5{
        using Addr = Register::Address<0x1c018114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap6{
        using Addr = Register::Address<0x1c018118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap7{
        using Addr = Register::Address<0x1c01811c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap8{
        using Addr = Register::Address<0x1c018120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap9{
        using Addr = Register::Address<0x1c018124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap10{
        using Addr = Register::Address<0x1c018128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap11{
        using Addr = Register::Address<0x1c01812c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap12{
        using Addr = Register::Address<0x1c018130,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap13{
        using Addr = Register::Address<0x1c018134,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap14{
        using Addr = Register::Address<0x1c018138,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap15{
        using Addr = Register::Address<0x1c01813c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonematchrel0{
        using Addr = Register::Address<0x1c018200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel1{
        using Addr = Register::Address<0x1c018204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel2{
        using Addr = Register::Address<0x1c018208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel3{
        using Addr = Register::Address<0x1c01820c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel4{
        using Addr = Register::Address<0x1c018210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel5{
        using Addr = Register::Address<0x1c018214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel6{
        using Addr = Register::Address<0x1c018218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel7{
        using Addr = Register::Address<0x1c01821c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel8{
        using Addr = Register::Address<0x1c018220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel9{
        using Addr = Register::Address<0x1c018224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel10{
        using Addr = Register::Address<0x1c018228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel11{
        using Addr = Register::Address<0x1c01822c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel12{
        using Addr = Register::Address<0x1c018230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel13{
        using Addr = Register::Address<0x1c018234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel14{
        using Addr = Register::Address<0x1c018238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel15{
        using Addr = Register::Address<0x1c01823c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonefracmatrel0{
        using Addr = Register::Address<0x1c018240,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RELFRAC_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RELFRAC_H; 
    }
    namespace Nonefracmatrel1{
        using Addr = Register::Address<0x1c018244,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RELFRAC_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RELFRAC_H; 
    }
    namespace Nonefracmatrel2{
        using Addr = Register::Address<0x1c018248,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RELFRAC_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RELFRAC_H; 
    }
    namespace Nonefracmatrel3{
        using Addr = Register::Address<0x1c01824c,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RELFRAC_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RELFRAC_H; 
    }
    namespace Nonefracmatrel4{
        using Addr = Register::Address<0x1c018250,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RELFRAC_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RELFRAC_H; 
    }
    namespace Nonefracmatrel5{
        using Addr = Register::Address<0x1c018254,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RELFRAC_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RELFRAC_H; 
    }
    namespace Nonecapctrl0{
        using Addr = Register::Address<0x1c018200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl1{
        using Addr = Register::Address<0x1c018204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl2{
        using Addr = Register::Address<0x1c018208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl3{
        using Addr = Register::Address<0x1c01820c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl4{
        using Addr = Register::Address<0x1c018210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl5{
        using Addr = Register::Address<0x1c018214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl6{
        using Addr = Register::Address<0x1c018218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl7{
        using Addr = Register::Address<0x1c01821c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl8{
        using Addr = Register::Address<0x1c018220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl9{
        using Addr = Register::Address<0x1c018224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl10{
        using Addr = Register::Address<0x1c018228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl11{
        using Addr = Register::Address<0x1c01822c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl12{
        using Addr = Register::Address<0x1c018230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl13{
        using Addr = Register::Address<0x1c018234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl14{
        using Addr = Register::Address<0x1c018238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl15{
        using Addr = Register::Address<0x1c01823c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPCONn_H; 
    }
    namespace Noneev0_state{
        using Addr = Register::Address<0x1c018300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev1_state{
        using Addr = Register::Address<0x1c018308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev2_state{
        using Addr = Register::Address<0x1c018310,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev3_state{
        using Addr = Register::Address<0x1c018318,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev4_state{
        using Addr = Register::Address<0x1c018320,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev5_state{
        using Addr = Register::Address<0x1c018328,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev6_state{
        using Addr = Register::Address<0x1c018330,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev7_state{
        using Addr = Register::Address<0x1c018338,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev8_state{
        using Addr = Register::Address<0x1c018340,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev9_state{
        using Addr = Register::Address<0x1c018348,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev10_state{
        using Addr = Register::Address<0x1c018350,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev11_state{
        using Addr = Register::Address<0x1c018358,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev12_state{
        using Addr = Register::Address<0x1c018360,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev13_state{
        using Addr = Register::Address<0x1c018368,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev14_state{
        using Addr = Register::Address<0x1c018370,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev15_state{
        using Addr = Register::Address<0x1c018378,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATEMSKn; 
    }
    namespace Noneev0_ctrl{
        using Addr = Register::Address<0x1c018304,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev1_ctrl{
        using Addr = Register::Address<0x1c01830c,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev2_ctrl{
        using Addr = Register::Address<0x1c018314,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev3_ctrl{
        using Addr = Register::Address<0x1c01831c,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev4_ctrl{
        using Addr = Register::Address<0x1c018324,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev5_ctrl{
        using Addr = Register::Address<0x1c01832c,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev6_ctrl{
        using Addr = Register::Address<0x1c018334,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev7_ctrl{
        using Addr = Register::Address<0x1c01833c,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev8_ctrl{
        using Addr = Register::Address<0x1c018344,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev9_ctrl{
        using Addr = Register::Address<0x1c01834c,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev10_ctrl{
        using Addr = Register::Address<0x1c018354,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev11_ctrl{
        using Addr = Register::Address<0x1c01835c,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev12_ctrl{
        using Addr = Register::Address<0x1c018364,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev13_ctrl{
        using Addr = Register::Address<0x1c01836c,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev14_ctrl{
        using Addr = Register::Address<0x1c018374,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneev15_ctrl{
        using Addr = Register::Address<0x1c01837c,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MATCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HEVENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> IOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IOCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> COMBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> STATEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MATCHMEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DIRECTION; 
    }
    namespace Noneout0_set{
        using Addr = Register::Address<0x1c018500,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SET; 
    }
    namespace Noneout1_set{
        using Addr = Register::Address<0x1c018508,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SET; 
    }
    namespace Noneout2_set{
        using Addr = Register::Address<0x1c018510,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SET; 
    }
    namespace Noneout3_set{
        using Addr = Register::Address<0x1c018518,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SET; 
    }
    namespace Noneout4_set{
        using Addr = Register::Address<0x1c018520,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SET; 
    }
    namespace Noneout5_set{
        using Addr = Register::Address<0x1c018528,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SET; 
    }
    namespace Noneout6_set{
        using Addr = Register::Address<0x1c018530,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SET; 
    }
    namespace Noneout7_set{
        using Addr = Register::Address<0x1c018538,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SET; 
    }
    namespace Noneout8_set{
        using Addr = Register::Address<0x1c018540,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SET; 
    }
    namespace Noneout9_set{
        using Addr = Register::Address<0x1c018548,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SET; 
    }
    namespace Noneout0_clr{
        using Addr = Register::Address<0x1c018504,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CLR; 
    }
    namespace Noneout1_clr{
        using Addr = Register::Address<0x1c01850c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CLR; 
    }
    namespace Noneout2_clr{
        using Addr = Register::Address<0x1c018514,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CLR; 
    }
    namespace Noneout3_clr{
        using Addr = Register::Address<0x1c01851c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CLR; 
    }
    namespace Noneout4_clr{
        using Addr = Register::Address<0x1c018524,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CLR; 
    }
    namespace Noneout5_clr{
        using Addr = Register::Address<0x1c01852c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CLR; 
    }
    namespace Noneout6_clr{
        using Addr = Register::Address<0x1c018534,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CLR; 
    }
    namespace Noneout7_clr{
        using Addr = Register::Address<0x1c01853c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CLR; 
    }
    namespace Noneout8_clr{
        using Addr = Register::Address<0x1c018544,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CLR; 
    }
    namespace Noneout9_clr{
        using Addr = Register::Address<0x1c01854c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CLR; 
    }
}
