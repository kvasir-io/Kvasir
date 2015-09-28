#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PWM_clk{
        using Addr = Register::Address<0x40094000,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIVA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> PREA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DIVB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PREB; 
    }
    namespace PWM_ena{
        using Addr = Register::Address<0x40094004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CHID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CHID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHID7; 
    }
    namespace PWM_dis{
        using Addr = Register::Address<0x40094008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CHID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CHID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHID7; 
    }
    namespace PWM_sr{
        using Addr = Register::Address<0x4009400c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CHID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CHID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHID7; 
    }
    namespace PWM_ier1{
        using Addr = Register::Address<0x40094010,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CHID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CHID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FCHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FCHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FCHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FCHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FCHID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FCHID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FCHID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FCHID7; 
    }
    namespace PWM_idr1{
        using Addr = Register::Address<0x40094014,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CHID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CHID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FCHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FCHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FCHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FCHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FCHID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FCHID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FCHID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FCHID7; 
    }
    namespace PWM_imr1{
        using Addr = Register::Address<0x40094018,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CHID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CHID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FCHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FCHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FCHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FCHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FCHID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FCHID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FCHID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FCHID7; 
    }
    namespace PWM_isr1{
        using Addr = Register::Address<0x4009401c,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CHID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CHID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FCHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FCHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FCHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FCHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FCHID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FCHID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FCHID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FCHID7; 
    }
    namespace PWM_scm{
        using Addr = Register::Address<0x40094020,0xff0cff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYNC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYNC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SYNC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SYNC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SYNC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYNC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SYNC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYNC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> UPDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PTRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> PTRCS; 
    }
    namespace PWM_scuc{
        using Addr = Register::Address<0x40094028,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UPDULOCK; 
    }
    namespace PWM_scup{
        using Addr = Register::Address<0x4009402c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> UPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> UPRCNT; 
    }
    namespace PWM_scupupd{
        using Addr = Register::Address<0x40094030,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> UPRUPD; 
    }
    namespace PWM_ier2{
        using Addr = Register::Address<0x40094034,0xff0000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXBUFE; 
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
        using Addr = Register::Address<0x40094038,0xff0000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXBUFE; 
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
        using Addr = Register::Address<0x4009403c,0xff0000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXBUFE; 
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
        using Addr = Register::Address<0x40094040,0xff0000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXBUFE; 
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
        using Addr = Register::Address<0x40094044,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OOVH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OOVH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OOVH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OOVH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OOVH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OOVH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OOVH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OOVH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OOVL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OOVL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OOVL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OOVL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OOVL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OOVL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OOVL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OOVL7; 
    }
    namespace PWM_os{
        using Addr = Register::Address<0x40094048,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OSH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OSH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OSH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OSH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OSH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OSL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OSL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OSL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OSL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OSL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OSL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OSL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OSL7; 
    }
    namespace PWM_oss{
        using Addr = Register::Address<0x4009404c,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OSSH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSSH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSSH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSSH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OSSH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OSSH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OSSH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OSSH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OSSL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OSSL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OSSL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OSSL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OSSL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OSSL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OSSL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OSSL7; 
    }
    namespace PWM_osc{
        using Addr = Register::Address<0x40094050,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OSCH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSCH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSCH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSCH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OSCH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OSCH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OSCH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OSCH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OSCL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OSCL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OSCL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OSCL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OSCL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OSCL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OSCL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OSCL7; 
    }
    namespace PWM_ossupd{
        using Addr = Register::Address<0x40094054,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OSSUPH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSSUPH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSSUPH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSSUPH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OSSUPH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OSSUPH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OSSUPH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OSSUPH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OSSUPL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OSSUPL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OSSUPL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OSSUPL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OSSUPL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OSSUPL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OSSUPL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OSSUPL7; 
    }
    namespace PWM_oscupd{
        using Addr = Register::Address<0x40094058,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OSCUPH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSCUPH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSCUPH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSCUPH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OSCUPH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OSCUPH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OSCUPH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OSCUPH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OSCUPL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OSCUPL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OSCUPL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OSCUPL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OSCUPL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OSCUPL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OSCUPDL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OSCUPL7; 
    }
    namespace PWM_fmr{
        using Addr = Register::Address<0x4009405c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> FMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> FFIL; 
    }
    namespace PWM_fsr{
        using Addr = Register::Address<0x40094060,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> FS; 
    }
    namespace PWM_fcr{
        using Addr = Register::Address<0x40094064,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FCLR; 
    }
    namespace PWM_fpv{
        using Addr = Register::Address<0x40094068,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FPVH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FPVH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FPVH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FPVH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FPVH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FPVH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FPVH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FPVH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FPVL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FPVL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FPVL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FPVL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FPVL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FPVL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FPVL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FPVL7; 
    }
    namespace PWM_fpe1{
        using Addr = Register::Address<0x4009406c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FPE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> FPE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> FPE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> FPE3; 
    }
    namespace PWM_fpe2{
        using Addr = Register::Address<0x40094070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FPE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> FPE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> FPE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> FPE7; 
    }
    namespace PWM_elmr0{
        using Addr = Register::Address<0x4009407c,0xffffff00>;
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
        using Addr = Register::Address<0x40094080,0xffffff00>;
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
        using Addr = Register::Address<0x400940b0,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GCEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GCEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GCEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GCEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DOWN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DOWN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DOWN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DOWN3; 
    }
    namespace PWM_wpcr{
        using Addr = Register::Address<0x400940e4,0x00000000>;
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
        using Addr = Register::Address<0x400940e8,0x0000c040>;
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
        using Addr = Register::Address<0x40094130,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd0{
        using Addr = Register::Address<0x40094134,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm0{
        using Addr = Register::Address<0x40094138,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd0{
        using Addr = Register::Address<0x4009413c,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmpv1{
        using Addr = Register::Address<0x40094140,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd1{
        using Addr = Register::Address<0x40094144,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm1{
        using Addr = Register::Address<0x40094148,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd1{
        using Addr = Register::Address<0x4009414c,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmpv2{
        using Addr = Register::Address<0x40094150,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd2{
        using Addr = Register::Address<0x40094154,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm2{
        using Addr = Register::Address<0x40094158,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd2{
        using Addr = Register::Address<0x4009415c,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmpv3{
        using Addr = Register::Address<0x40094160,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd3{
        using Addr = Register::Address<0x40094164,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm3{
        using Addr = Register::Address<0x40094168,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd3{
        using Addr = Register::Address<0x4009416c,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmpv4{
        using Addr = Register::Address<0x40094170,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd4{
        using Addr = Register::Address<0x40094174,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm4{
        using Addr = Register::Address<0x40094178,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd4{
        using Addr = Register::Address<0x4009417c,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmpv5{
        using Addr = Register::Address<0x40094180,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd5{
        using Addr = Register::Address<0x40094184,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm5{
        using Addr = Register::Address<0x40094188,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd5{
        using Addr = Register::Address<0x4009418c,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmpv6{
        using Addr = Register::Address<0x40094190,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd6{
        using Addr = Register::Address<0x40094194,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm6{
        using Addr = Register::Address<0x40094198,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd6{
        using Addr = Register::Address<0x4009419c,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmpv7{
        using Addr = Register::Address<0x400941a0,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVM; 
    }
    namespace PWM_cmpvupd7{
        using Addr = Register::Address<0x400941a4,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CVUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CVMUPD; 
    }
    namespace PWM_cmpm7{
        using Addr = Register::Address<0x400941a8,0xff00000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CPRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CUPRCNT; 
    }
    namespace PWM_cmpmupd7{
        using Addr = Register::Address<0x400941ac,0xfff0f00e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CPRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CUPRUPD; 
    }
    namespace PWM_cmr0{
        using Addr = Register::Address<0x40094200,0xfff8f8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DTHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DTLI; 
    }
    namespace PWM_cdty0{
        using Addr = Register::Address<0x40094204,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTY; 
    }
    namespace PWM_cdtyupd0{
        using Addr = Register::Address<0x40094208,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTYUPD; 
    }
    namespace PWM_cprd0{
        using Addr = Register::Address<0x4009420c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRD; 
    }
    namespace PWM_cprdupd0{
        using Addr = Register::Address<0x40094210,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRDUPD; 
    }
    namespace PWM_ccnt0{
        using Addr = Register::Address<0x40094214,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CNT; 
    }
    namespace PWM_dt0{
        using Addr = Register::Address<0x40094218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTL; 
    }
    namespace PWM_dtupd0{
        using Addr = Register::Address<0x4009421c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTHUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTLUPD; 
    }
    namespace PWM_cmr1{
        using Addr = Register::Address<0x40094220,0xfff8f8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DTHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DTLI; 
    }
    namespace PWM_cdty1{
        using Addr = Register::Address<0x40094224,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTY; 
    }
    namespace PWM_cdtyupd1{
        using Addr = Register::Address<0x40094228,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTYUPD; 
    }
    namespace PWM_cprd1{
        using Addr = Register::Address<0x4009422c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRD; 
    }
    namespace PWM_cprdupd1{
        using Addr = Register::Address<0x40094230,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRDUPD; 
    }
    namespace PWM_ccnt1{
        using Addr = Register::Address<0x40094234,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CNT; 
    }
    namespace PWM_dt1{
        using Addr = Register::Address<0x40094238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTL; 
    }
    namespace PWM_dtupd1{
        using Addr = Register::Address<0x4009423c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTHUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTLUPD; 
    }
    namespace PWM_cmr2{
        using Addr = Register::Address<0x40094240,0xfff8f8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DTHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DTLI; 
    }
    namespace PWM_cdty2{
        using Addr = Register::Address<0x40094244,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTY; 
    }
    namespace PWM_cdtyupd2{
        using Addr = Register::Address<0x40094248,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTYUPD; 
    }
    namespace PWM_cprd2{
        using Addr = Register::Address<0x4009424c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRD; 
    }
    namespace PWM_cprdupd2{
        using Addr = Register::Address<0x40094250,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRDUPD; 
    }
    namespace PWM_ccnt2{
        using Addr = Register::Address<0x40094254,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CNT; 
    }
    namespace PWM_dt2{
        using Addr = Register::Address<0x40094258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTL; 
    }
    namespace PWM_dtupd2{
        using Addr = Register::Address<0x4009425c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTHUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTLUPD; 
    }
    namespace PWM_cmr3{
        using Addr = Register::Address<0x40094260,0xfff8f8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DTHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DTLI; 
    }
    namespace PWM_cdty3{
        using Addr = Register::Address<0x40094264,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTY; 
    }
    namespace PWM_cdtyupd3{
        using Addr = Register::Address<0x40094268,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTYUPD; 
    }
    namespace PWM_cprd3{
        using Addr = Register::Address<0x4009426c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRD; 
    }
    namespace PWM_cprdupd3{
        using Addr = Register::Address<0x40094270,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRDUPD; 
    }
    namespace PWM_ccnt3{
        using Addr = Register::Address<0x40094274,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CNT; 
    }
    namespace PWM_dt3{
        using Addr = Register::Address<0x40094278,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTL; 
    }
    namespace PWM_dtupd3{
        using Addr = Register::Address<0x4009427c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTHUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTLUPD; 
    }
    namespace PWM_cmr4{
        using Addr = Register::Address<0x40094280,0xfff8f8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DTHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DTLI; 
    }
    namespace PWM_cdty4{
        using Addr = Register::Address<0x40094284,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTY; 
    }
    namespace PWM_cdtyupd4{
        using Addr = Register::Address<0x40094288,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTYUPD; 
    }
    namespace PWM_cprd4{
        using Addr = Register::Address<0x4009428c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRD; 
    }
    namespace PWM_cprdupd4{
        using Addr = Register::Address<0x40094290,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRDUPD; 
    }
    namespace PWM_ccnt4{
        using Addr = Register::Address<0x40094294,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CNT; 
    }
    namespace PWM_dt4{
        using Addr = Register::Address<0x40094298,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTL; 
    }
    namespace PWM_dtupd4{
        using Addr = Register::Address<0x4009429c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTHUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTLUPD; 
    }
    namespace PWM_cmr5{
        using Addr = Register::Address<0x400942a0,0xfff8f8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DTHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DTLI; 
    }
    namespace PWM_cdty5{
        using Addr = Register::Address<0x400942a4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTY; 
    }
    namespace PWM_cdtyupd5{
        using Addr = Register::Address<0x400942a8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTYUPD; 
    }
    namespace PWM_cprd5{
        using Addr = Register::Address<0x400942ac,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRD; 
    }
    namespace PWM_cprdupd5{
        using Addr = Register::Address<0x400942b0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRDUPD; 
    }
    namespace PWM_ccnt5{
        using Addr = Register::Address<0x400942b4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CNT; 
    }
    namespace PWM_dt5{
        using Addr = Register::Address<0x400942b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTL; 
    }
    namespace PWM_dtupd5{
        using Addr = Register::Address<0x400942bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTHUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTLUPD; 
    }
    namespace PWM_cmr6{
        using Addr = Register::Address<0x400942c0,0xfff8f8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DTHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DTLI; 
    }
    namespace PWM_cdty6{
        using Addr = Register::Address<0x400942c4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTY; 
    }
    namespace PWM_cdtyupd6{
        using Addr = Register::Address<0x400942c8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTYUPD; 
    }
    namespace PWM_cprd6{
        using Addr = Register::Address<0x400942cc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRD; 
    }
    namespace PWM_cprdupd6{
        using Addr = Register::Address<0x400942d0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRDUPD; 
    }
    namespace PWM_ccnt6{
        using Addr = Register::Address<0x400942d4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CNT; 
    }
    namespace PWM_dt6{
        using Addr = Register::Address<0x400942d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTL; 
    }
    namespace PWM_dtupd6{
        using Addr = Register::Address<0x400942dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTHUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTLUPD; 
    }
    namespace PWM_cmr7{
        using Addr = Register::Address<0x400942e0,0xfff8f8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DTHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DTLI; 
    }
    namespace PWM_cdty7{
        using Addr = Register::Address<0x400942e4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTY; 
    }
    namespace PWM_cdtyupd7{
        using Addr = Register::Address<0x400942e8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CDTYUPD; 
    }
    namespace PWM_cprd7{
        using Addr = Register::Address<0x400942ec,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRD; 
    }
    namespace PWM_cprdupd7{
        using Addr = Register::Address<0x400942f0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CPRDUPD; 
    }
    namespace PWM_ccnt7{
        using Addr = Register::Address<0x400942f4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CNT; 
    }
    namespace PWM_dt7{
        using Addr = Register::Address<0x400942f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTL; 
    }
    namespace PWM_dtupd7{
        using Addr = Register::Address<0x400942fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTHUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DTLUPD; 
    }
    namespace PWM_tpr{
        using Addr = Register::Address<0x40094108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace PWM_tcr{
        using Addr = Register::Address<0x4009410c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace PWM_tnpr{
        using Addr = Register::Address<0x40094118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace PWM_tncr{
        using Addr = Register::Address<0x4009411c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace PWM_ptcr{
        using Addr = Register::Address<0x40094120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace PWM_ptsr{
        using Addr = Register::Address<0x40094124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
