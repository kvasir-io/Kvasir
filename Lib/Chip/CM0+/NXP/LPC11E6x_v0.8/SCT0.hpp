#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneconfig{
        using Addr = Register::Address<0x5000c000,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UNIFY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLKMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3)> CKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NORELAOD_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NORELOAD_H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,9)> INSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> AUTOLIMIT_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AUTOLIMIT_H; 
    }
    namespace Nonectrl{
        using Addr = Register::Address<0x5000c004,0xe000e000>;
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
        using Addr = Register::Address<0x5000c008,0xffc0ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> LIMMSK_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> LIMMSK_H; 
    }
    namespace Nonehalt{
        using Addr = Register::Address<0x5000c00c,0xffc0ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> HALTMSK_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> HALTMSK_H; 
    }
    namespace Nonestop{
        using Addr = Register::Address<0x5000c010,0xffc0ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> STOPMSK_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> STOPMSK_H; 
    }
    namespace Nonestart{
        using Addr = Register::Address<0x5000c014,0xffc0ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> STARTMSK_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> STARTMSK_H; 
    }
    namespace Nonecount{
        using Addr = Register::Address<0x5000c040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CTR_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CTR_H; 
    }
    namespace Nonestate{
        using Addr = Register::Address<0x5000c044,0xffe0ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> STATE_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> STATE_H; 
    }
    namespace Noneinput{
        using Addr = Register::Address<0x5000c048,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AIN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AIN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AIN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AIN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SIN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SIN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SIN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SIN3; 
    }
    namespace Noneregmode{
        using Addr = Register::Address<0x5000c04c,0xffe0ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> REGMOD_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> REGMOD_H; 
    }
    namespace Noneoutput{
        using Addr = Register::Address<0x5000c050,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> OUT; 
    }
    namespace Noneoutputdirctrl{
        using Addr = Register::Address<0x5000c054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SETCLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SETCLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SETCLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SETCLR3; 
    }
    namespace Noneres{
        using Addr = Register::Address<0x5000c058,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> O0RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> O1RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> O2RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> O3RES; 
    }
    namespace Nonedmareq0{
        using Addr = Register::Address<0x5000c05c,0x3fffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> DEV_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DRL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DRQ0; 
    }
    namespace Nonedmareq1{
        using Addr = Register::Address<0x5000c060,0x3fffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> DEV_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DRL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DRQ1; 
    }
    namespace Noneeven{
        using Addr = Register::Address<0x5000c0f0,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> IEN; 
    }
    namespace Noneevflag{
        using Addr = Register::Address<0x5000c0f4,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> FLAG; 
    }
    namespace Noneconen{
        using Addr = Register::Address<0x5000c0f8,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> NCEN; 
    }
    namespace Noneconflag{
        using Addr = Register::Address<0x5000c0fc,0x3ffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> NCFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BUSERRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> BUSERRH; 
    }
    namespace Nonematch0{
        using Addr = Register::Address<0x5000c100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch1{
        using Addr = Register::Address<0x5000c104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch2{
        using Addr = Register::Address<0x5000c108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch3{
        using Addr = Register::Address<0x5000c10c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonematch4{
        using Addr = Register::Address<0x5000c110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCHn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MATCHn_H; 
    }
    namespace Nonecap0{
        using Addr = Register::Address<0x5000c100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap1{
        using Addr = Register::Address<0x5000c104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap2{
        using Addr = Register::Address<0x5000c108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap3{
        using Addr = Register::Address<0x5000c10c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonecap4{
        using Addr = Register::Address<0x5000c110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CAPn_H; 
    }
    namespace Nonematchrel0{
        using Addr = Register::Address<0x5000c200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel1{
        using Addr = Register::Address<0x5000c204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel2{
        using Addr = Register::Address<0x5000c208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel3{
        using Addr = Register::Address<0x5000c20c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonematchrel4{
        using Addr = Register::Address<0x5000c210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOADn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RELOADn_H; 
    }
    namespace Nonecapctrl0{
        using Addr = Register::Address<0x5000c200,0xffc0ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl1{
        using Addr = Register::Address<0x5000c204,0xffc0ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl2{
        using Addr = Register::Address<0x5000c208,0xffc0ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl3{
        using Addr = Register::Address<0x5000c20c,0xffc0ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> CAPCONn_H; 
    }
    namespace Nonecapctrl4{
        using Addr = Register::Address<0x5000c210,0xffc0ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CAPCONn_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> CAPCONn_H; 
    }
    namespace Noneev0_state{
        using Addr = Register::Address<0x5000c300,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> STATEMSKn; 
    }
    namespace Noneev1_state{
        using Addr = Register::Address<0x5000c308,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> STATEMSKn; 
    }
    namespace Noneev2_state{
        using Addr = Register::Address<0x5000c310,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> STATEMSKn; 
    }
    namespace Noneev3_state{
        using Addr = Register::Address<0x5000c318,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> STATEMSKn; 
    }
    namespace Noneev4_state{
        using Addr = Register::Address<0x5000c320,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> STATEMSKn; 
    }
    namespace Noneev5_state{
        using Addr = Register::Address<0x5000c328,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> STATEMSKn; 
    }
    namespace Noneev0_ctrl{
        using Addr = Register::Address<0x5000c304,0xff800000>;
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
        using Addr = Register::Address<0x5000c30c,0xff800000>;
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
        using Addr = Register::Address<0x5000c314,0xff800000>;
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
        using Addr = Register::Address<0x5000c31c,0xff800000>;
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
        using Addr = Register::Address<0x5000c324,0xff800000>;
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
        using Addr = Register::Address<0x5000c32c,0xff800000>;
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
        using Addr = Register::Address<0x5000c500,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SET; 
    }
    namespace Noneout1_set{
        using Addr = Register::Address<0x5000c508,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SET; 
    }
    namespace Noneout2_set{
        using Addr = Register::Address<0x5000c510,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SET; 
    }
    namespace Noneout3_set{
        using Addr = Register::Address<0x5000c518,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SET; 
    }
    namespace Noneout0_clr{
        using Addr = Register::Address<0x5000c504,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLR; 
    }
    namespace Noneout1_clr{
        using Addr = Register::Address<0x5000c50c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLR; 
    }
    namespace Noneout2_clr{
        using Addr = Register::Address<0x5000c514,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLR; 
    }
    namespace Noneout3_clr{
        using Addr = Register::Address<0x5000c51c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLR; 
    }
}
