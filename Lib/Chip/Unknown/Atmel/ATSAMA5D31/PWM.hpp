#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PWM_clk{
        using Addr = Register::Address<0xf002c000,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIVA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> PREA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DIVB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PREB; 
    }
    namespace PWM_ena{
        using Addr = Register::Address<0xf002c004,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
    }
    namespace PWM_dis{
        using Addr = Register::Address<0xf002c008,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
    }
    namespace PWM_sr{
        using Addr = Register::Address<0xf002c00c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
    }
    namespace PWM_ier1{
        using Addr = Register::Address<0xf002c010,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FCHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FCHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FCHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FCHID3; 
    }
    namespace PWM_idr1{
        using Addr = Register::Address<0xf002c014,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FCHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FCHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FCHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FCHID3; 
    }
    namespace PWM_imr1{
        using Addr = Register::Address<0xf002c018,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FCHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FCHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FCHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FCHID3; 
    }
    namespace PWM_isr1{
        using Addr = Register::Address<0xf002c01c,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FCHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FCHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FCHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FCHID3; 
    }
    namespace PWM_scm{
        using Addr = Register::Address<0xf002c020,0xfffcfff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYNC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYNC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SYNC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SYNC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> UPDM; 
    }
    namespace PWM_scuc{
        using Addr = Register::Address<0xf002c028,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UPDULOCK; 
    }
    namespace PWM_scup{
        using Addr = Register::Address<0xf002c02c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> UPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> UPRCNT; 
    }
    namespace PWM_scupupd{
        using Addr = Register::Address<0xf002c030,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> UPRUPD; 
    }
    namespace PWM_ier2{
        using Addr = Register::Address<0xf002c034,0xff0000f6>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UNRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CMPM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CMPM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CMPM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CMPM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CMPM4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CMPM5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CMPM6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CMPM7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CMPU0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMPU1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CMPU2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMPU3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CMPU4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CMPU5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CMPU6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CMPU7; 
    }
    namespace PWM_idr2{
        using Addr = Register::Address<0xf002c038,0xff0000f6>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UNRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CMPM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CMPM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CMPM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CMPM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CMPM4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CMPM5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CMPM6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CMPM7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CMPU0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMPU1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CMPU2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMPU3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CMPU4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CMPU5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CMPU6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CMPU7; 
    }
    namespace PWM_imr2{
        using Addr = Register::Address<0xf002c03c,0xff0000f6>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UNRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CMPM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CMPM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CMPM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CMPM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CMPM4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CMPM5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CMPM6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CMPM7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CMPU0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMPU1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CMPU2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMPU3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CMPU4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CMPU5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CMPU6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CMPU7; 
    }
    namespace PWM_isr2{
        using Addr = Register::Address<0xf002c040,0xff0000f6>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UNRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CMPM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CMPM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CMPM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CMPM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CMPM4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CMPM5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CMPM6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CMPM7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CMPU0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMPU1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CMPU2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMPU3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CMPU4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CMPU5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CMPU6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CMPU7; 
    }
    namespace PWM_oov{
        using Addr = Register::Address<0xf002c044,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OOVH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OOVH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OOVH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OOVH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OOVL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OOVL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OOVL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OOVL3; 
    }
    namespace PWM_os{
        using Addr = Register::Address<0xf002c048,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OSH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OSL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OSL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OSL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OSL3; 
    }
    namespace PWM_oss{
        using Addr = Register::Address<0xf002c04c,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OSSH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSSH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSSH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSSH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OSSL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OSSL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OSSL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OSSL3; 
    }
    namespace PWM_osc{
        using Addr = Register::Address<0xf002c050,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OSCH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSCH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSCH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSCH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OSCL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OSCL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OSCL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OSCL3; 
    }
    namespace PWM_ossupd{
        using Addr = Register::Address<0xf002c054,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OSSUPH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSSUPH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSSUPH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSSUPH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OSSUPL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OSSUPL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OSSUPL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OSSUPL3; 
    }
    namespace PWM_oscupd{
        using Addr = Register::Address<0xf002c058,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OSCUPH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSCUPH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSCUPH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSCUPH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OSCUPL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OSCUPL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OSCUPL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OSCUPL3; 
    }
    namespace PWM_fmr{
        using Addr = Register::Address<0xf002c05c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> FMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> FFIL; 
    }
    namespace PWM_fsr{
        using Addr = Register::Address<0xf002c060,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> FS; 
    }
    namespace PWM_fcr{
        using Addr = Register::Address<0xf002c064,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FCLR; 
    }
    namespace PWM_fpv{
        using Addr = Register::Address<0xf002c068,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FPVH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FPVH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FPVH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FPVH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FPVL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FPVL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FPVL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FPVL3; 
    }
    namespace PWM_fpe{
        using Addr = Register::Address<0xf002c06c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FPE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> FPE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> FPE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> FPE3; 
    }
    namespace PWM_elmr0{
        using Addr = Register::Address<0xf002c07c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CSEL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CSEL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CSEL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CSEL7; 
    }
    namespace PWM_elmr1{
        using Addr = Register::Address<0xf002c080,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CSEL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CSEL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CSEL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CSEL7; 
    }
    namespace PWM_smmr{
        using Addr = Register::Address<0xf002c0b0,0xfffcfffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GCEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GCEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DOWN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DOWN1; 
    }
    namespace PWM_wpcr{
        using Addr = Register::Address<0xf002c0e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WPCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WPRG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WPRG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WPRG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WPRG3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WPRG4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WPRG5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace PWM_wpsr{
        using Addr = Register::Address<0xf002c0e8,0x0000c040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPSWS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WPSWS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WPSWS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WPSWS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WPSWS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WPSWS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WPHWS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WPHWS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WPHWS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WPHWS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WPHWS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WPHWS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> WPVSRC; 
    }
    namespace PWM_cmpv0{
        using Addr = Register::Address<0xf002c130,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd0{
        using Addr = Register::Address<0xf002c134,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm0{
        using Addr = Register::Address<0xf002c138,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd0{
        using Addr = Register::Address<0xf002c13c,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmpv1{
        using Addr = Register::Address<0xf002c140,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd1{
        using Addr = Register::Address<0xf002c144,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm1{
        using Addr = Register::Address<0xf002c148,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd1{
        using Addr = Register::Address<0xf002c14c,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmpv2{
        using Addr = Register::Address<0xf002c150,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd2{
        using Addr = Register::Address<0xf002c154,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm2{
        using Addr = Register::Address<0xf002c158,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd2{
        using Addr = Register::Address<0xf002c15c,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmpv3{
        using Addr = Register::Address<0xf002c160,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd3{
        using Addr = Register::Address<0xf002c164,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm3{
        using Addr = Register::Address<0xf002c168,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd3{
        using Addr = Register::Address<0xf002c16c,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmpv4{
        using Addr = Register::Address<0xf002c170,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd4{
        using Addr = Register::Address<0xf002c174,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm4{
        using Addr = Register::Address<0xf002c178,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd4{
        using Addr = Register::Address<0xf002c17c,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmpv5{
        using Addr = Register::Address<0xf002c180,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd5{
        using Addr = Register::Address<0xf002c184,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm5{
        using Addr = Register::Address<0xf002c188,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd5{
        using Addr = Register::Address<0xf002c18c,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmpv6{
        using Addr = Register::Address<0xf002c190,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd6{
        using Addr = Register::Address<0xf002c194,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm6{
        using Addr = Register::Address<0xf002c198,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd6{
        using Addr = Register::Address<0xf002c19c,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmpv7{
        using Addr = Register::Address<0xf002c1a0,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd7{
        using Addr = Register::Address<0xf002c1a4,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm7{
        using Addr = Register::Address<0xf002c1a8,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd7{
        using Addr = Register::Address<0xf002c1ac,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmr0{
        using Addr = Register::Address<0xf002c200,0xfff8f8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DTHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DTLI; 
    }
    namespace PWM_cdty0{
        using Addr = Register::Address<0xf002c204,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTY; 
    }
    namespace PWM_cdtyupd0{
        using Addr = Register::Address<0xf002c208,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTYUPD; 
    }
    namespace PWM_cprd0{
        using Addr = Register::Address<0xf002c20c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRD; 
    }
    namespace PWM_cprdupd0{
        using Addr = Register::Address<0xf002c210,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRDUPD; 
    }
    namespace PWM_ccnt0{
        using Addr = Register::Address<0xf002c214,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CNT; 
    }
    namespace PWM_dt0{
        using Addr = Register::Address<0xf002c218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTL; 
    }
    namespace PWM_dtupd0{
        using Addr = Register::Address<0xf002c21c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTHUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTLUPD; 
    }
    namespace PWM_cmr1{
        using Addr = Register::Address<0xf002c220,0xfff8f8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DTHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DTLI; 
    }
    namespace PWM_cdty1{
        using Addr = Register::Address<0xf002c224,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTY; 
    }
    namespace PWM_cdtyupd1{
        using Addr = Register::Address<0xf002c228,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTYUPD; 
    }
    namespace PWM_cprd1{
        using Addr = Register::Address<0xf002c22c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRD; 
    }
    namespace PWM_cprdupd1{
        using Addr = Register::Address<0xf002c230,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRDUPD; 
    }
    namespace PWM_ccnt1{
        using Addr = Register::Address<0xf002c234,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CNT; 
    }
    namespace PWM_dt1{
        using Addr = Register::Address<0xf002c238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTL; 
    }
    namespace PWM_dtupd1{
        using Addr = Register::Address<0xf002c23c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTHUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTLUPD; 
    }
    namespace PWM_cmr2{
        using Addr = Register::Address<0xf002c240,0xfff8f8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DTHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DTLI; 
    }
    namespace PWM_cdty2{
        using Addr = Register::Address<0xf002c244,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTY; 
    }
    namespace PWM_cdtyupd2{
        using Addr = Register::Address<0xf002c248,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTYUPD; 
    }
    namespace PWM_cprd2{
        using Addr = Register::Address<0xf002c24c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRD; 
    }
    namespace PWM_cprdupd2{
        using Addr = Register::Address<0xf002c250,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRDUPD; 
    }
    namespace PWM_ccnt2{
        using Addr = Register::Address<0xf002c254,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CNT; 
    }
    namespace PWM_dt2{
        using Addr = Register::Address<0xf002c258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTL; 
    }
    namespace PWM_dtupd2{
        using Addr = Register::Address<0xf002c25c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTHUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTLUPD; 
    }
    namespace PWM_cmr3{
        using Addr = Register::Address<0xf002c260,0xfff8f8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DTHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DTLI; 
    }
    namespace PWM_cdty3{
        using Addr = Register::Address<0xf002c264,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTY; 
    }
    namespace PWM_cdtyupd3{
        using Addr = Register::Address<0xf002c268,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTYUPD; 
    }
    namespace PWM_cprd3{
        using Addr = Register::Address<0xf002c26c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRD; 
    }
    namespace PWM_cprdupd3{
        using Addr = Register::Address<0xf002c270,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRDUPD; 
    }
    namespace PWM_ccnt3{
        using Addr = Register::Address<0xf002c274,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CNT; 
    }
    namespace PWM_dt3{
        using Addr = Register::Address<0xf002c278,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTL; 
    }
    namespace PWM_dtupd3{
        using Addr = Register::Address<0xf002c27c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTHUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTLUPD; 
    }
}
