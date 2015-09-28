#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TC1_ccr0{
        using Addr = Register::Address<0xf800c000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLKDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRG; 
    }
    namespace TC1_cmr0{
        using Addr = Register::Address<0xf800c004,0xfff03800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TCCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDBSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LDBDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ETRGEDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ABETRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CPCTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> LDRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> LDRB; 
    }
    namespace TC1_cmr0_wave_eq_1{
        using Addr = Register::Address<0xf800c004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TCCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CPCSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CPCDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EEVTEDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENETRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> WAVSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> ACPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> ACPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> AEEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> ASWTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> BCPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> BCPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> BEEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> BSWTRG; 
    }
    namespace TC1_rab0{
        using Addr = Register::Address<0xf800c00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RAB; 
    }
    namespace TC1_cv0{
        using Addr = Register::Address<0xf800c010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CV; 
    }
    namespace TC1_ra0{
        using Addr = Register::Address<0xf800c014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RA; 
    }
    namespace TC1_rb0{
        using Addr = Register::Address<0xf800c018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RB; 
    }
    namespace TC1_rc0{
        using Addr = Register::Address<0xf800c01c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RC; 
    }
    namespace TC1_sr0{
        using Addr = Register::Address<0xf800c020,0xfff8ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLKSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MTIOA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MTIOB; 
    }
    namespace TC1_ier0{
        using Addr = Register::Address<0xf800c024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC1_idr0{
        using Addr = Register::Address<0xf800c028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC1_imr0{
        using Addr = Register::Address<0xf800c02c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC1_ccr1{
        using Addr = Register::Address<0xf800c040,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLKDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRG; 
    }
    namespace TC1_cmr1{
        using Addr = Register::Address<0xf800c044,0xfff03800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TCCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDBSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LDBDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ETRGEDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ABETRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CPCTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> LDRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> LDRB; 
    }
    namespace TC1_cmr1_wave_eq_1{
        using Addr = Register::Address<0xf800c044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TCCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CPCSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CPCDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EEVTEDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENETRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> WAVSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> ACPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> ACPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> AEEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> ASWTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> BCPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> BCPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> BEEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> BSWTRG; 
    }
    namespace TC1_rab1{
        using Addr = Register::Address<0xf800c04c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RAB; 
    }
    namespace TC1_cv1{
        using Addr = Register::Address<0xf800c050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CV; 
    }
    namespace TC1_ra1{
        using Addr = Register::Address<0xf800c054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RA; 
    }
    namespace TC1_rb1{
        using Addr = Register::Address<0xf800c058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RB; 
    }
    namespace TC1_rc1{
        using Addr = Register::Address<0xf800c05c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RC; 
    }
    namespace TC1_sr1{
        using Addr = Register::Address<0xf800c060,0xfff8ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLKSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MTIOA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MTIOB; 
    }
    namespace TC1_ier1{
        using Addr = Register::Address<0xf800c064,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC1_idr1{
        using Addr = Register::Address<0xf800c068,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC1_imr1{
        using Addr = Register::Address<0xf800c06c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC1_ccr2{
        using Addr = Register::Address<0xf800c080,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLKDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRG; 
    }
    namespace TC1_cmr2{
        using Addr = Register::Address<0xf800c084,0xfff03800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TCCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDBSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LDBDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ETRGEDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ABETRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CPCTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> LDRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> LDRB; 
    }
    namespace TC1_cmr2_wave_eq_1{
        using Addr = Register::Address<0xf800c084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TCCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CPCSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CPCDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EEVTEDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENETRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> WAVSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> ACPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> ACPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> AEEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> ASWTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> BCPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> BCPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> BEEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> BSWTRG; 
    }
    namespace TC1_rab2{
        using Addr = Register::Address<0xf800c08c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RAB; 
    }
    namespace TC1_cv2{
        using Addr = Register::Address<0xf800c090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CV; 
    }
    namespace TC1_ra2{
        using Addr = Register::Address<0xf800c094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RA; 
    }
    namespace TC1_rb2{
        using Addr = Register::Address<0xf800c098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RB; 
    }
    namespace TC1_rc2{
        using Addr = Register::Address<0xf800c09c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RC; 
    }
    namespace TC1_sr2{
        using Addr = Register::Address<0xf800c0a0,0xfff8ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLKSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MTIOA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MTIOB; 
    }
    namespace TC1_ier2{
        using Addr = Register::Address<0xf800c0a4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC1_idr2{
        using Addr = Register::Address<0xf800c0a8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC1_imr2{
        using Addr = Register::Address<0xf800c0ac,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC1_bcr{
        using Addr = Register::Address<0xf800c0c0,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYNC; 
    }
    namespace TC1_bmr{
        using Addr = Register::Address<0xf800c0c4,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TC0XC0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TC1XC1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TC2XC2S; 
    }
}
