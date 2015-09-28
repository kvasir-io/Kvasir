#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CAN0_mr{
        using Addr = Register::Address<0xf000c000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CANEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ABM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TEOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIMFRZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DRPT; 
    }
    namespace CAN0_ier{
        using Addr = Register::Address<0xf000c004,0xe000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WARN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> BOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> AERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BERR; 
    }
    namespace CAN0_idr{
        using Addr = Register::Address<0xf000c008,0xe000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WARN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> BOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> AERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BERR; 
    }
    namespace CAN0_imr{
        using Addr = Register::Address<0xf000c00c,0xe000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WARN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> BOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> AERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BERR; 
    }
    namespace CAN0_sr{
        using Addr = Register::Address<0xf000c010,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WARN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> BOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> AERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RBSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TBSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> OVLSY; 
    }
    namespace CAN0_br{
        using Addr = Register::Address<0xf000c014,0xfe80c888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PHASE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PHASE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PROPAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SJW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> BRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SMP; 
    }
    namespace CAN0_tim{
        using Addr = Register::Address<0xf000c018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIMER; 
    }
    namespace CAN0_timestp{
        using Addr = Register::Address<0xf000c01c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
    }
    namespace CAN0_ecr{
        using Addr = Register::Address<0xf000c020,0xfe00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> TEC; 
    }
    namespace CAN0_tcr{
        using Addr = Register::Address<0xf000c024,0x7fffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TIMRST; 
    }
    namespace CAN0_acr{
        using Addr = Register::Address<0xf000c028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MB7; 
    }
    namespace CAN0_wpmr{
        using Addr = Register::Address<0xf000c0e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace CAN0_wpsr{
        using Addr = Register::Address<0xf000c0e8,0xffff00fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WPVSRC; 
    }
    namespace CAN0_mmr0{
        using Addr = Register::Address<0xf000c200,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN0_mam0{
        using Addr = Register::Address<0xf000c204,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mid0{
        using Addr = Register::Address<0xf000c208,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mfid0{
        using Addr = Register::Address<0xf000c20c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN0_msr0{
        using Addr = Register::Address<0xf000c210,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN0_mdl0{
        using Addr = Register::Address<0xf000c214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN0_mdh0{
        using Addr = Register::Address<0xf000c218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN0_mcr0{
        using Addr = Register::Address<0xf000c21c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN0_mmr1{
        using Addr = Register::Address<0xf000c220,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN0_mam1{
        using Addr = Register::Address<0xf000c224,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mid1{
        using Addr = Register::Address<0xf000c228,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mfid1{
        using Addr = Register::Address<0xf000c22c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN0_msr1{
        using Addr = Register::Address<0xf000c230,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN0_mdl1{
        using Addr = Register::Address<0xf000c234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN0_mdh1{
        using Addr = Register::Address<0xf000c238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN0_mcr1{
        using Addr = Register::Address<0xf000c23c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN0_mmr2{
        using Addr = Register::Address<0xf000c240,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN0_mam2{
        using Addr = Register::Address<0xf000c244,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mid2{
        using Addr = Register::Address<0xf000c248,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mfid2{
        using Addr = Register::Address<0xf000c24c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN0_msr2{
        using Addr = Register::Address<0xf000c250,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN0_mdl2{
        using Addr = Register::Address<0xf000c254,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN0_mdh2{
        using Addr = Register::Address<0xf000c258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN0_mcr2{
        using Addr = Register::Address<0xf000c25c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN0_mmr3{
        using Addr = Register::Address<0xf000c260,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN0_mam3{
        using Addr = Register::Address<0xf000c264,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mid3{
        using Addr = Register::Address<0xf000c268,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mfid3{
        using Addr = Register::Address<0xf000c26c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN0_msr3{
        using Addr = Register::Address<0xf000c270,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN0_mdl3{
        using Addr = Register::Address<0xf000c274,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN0_mdh3{
        using Addr = Register::Address<0xf000c278,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN0_mcr3{
        using Addr = Register::Address<0xf000c27c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN0_mmr4{
        using Addr = Register::Address<0xf000c280,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN0_mam4{
        using Addr = Register::Address<0xf000c284,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mid4{
        using Addr = Register::Address<0xf000c288,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mfid4{
        using Addr = Register::Address<0xf000c28c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN0_msr4{
        using Addr = Register::Address<0xf000c290,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN0_mdl4{
        using Addr = Register::Address<0xf000c294,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN0_mdh4{
        using Addr = Register::Address<0xf000c298,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN0_mcr4{
        using Addr = Register::Address<0xf000c29c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN0_mmr5{
        using Addr = Register::Address<0xf000c2a0,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN0_mam5{
        using Addr = Register::Address<0xf000c2a4,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mid5{
        using Addr = Register::Address<0xf000c2a8,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mfid5{
        using Addr = Register::Address<0xf000c2ac,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN0_msr5{
        using Addr = Register::Address<0xf000c2b0,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN0_mdl5{
        using Addr = Register::Address<0xf000c2b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN0_mdh5{
        using Addr = Register::Address<0xf000c2b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN0_mcr5{
        using Addr = Register::Address<0xf000c2bc,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN0_mmr6{
        using Addr = Register::Address<0xf000c2c0,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN0_mam6{
        using Addr = Register::Address<0xf000c2c4,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mid6{
        using Addr = Register::Address<0xf000c2c8,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mfid6{
        using Addr = Register::Address<0xf000c2cc,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN0_msr6{
        using Addr = Register::Address<0xf000c2d0,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN0_mdl6{
        using Addr = Register::Address<0xf000c2d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN0_mdh6{
        using Addr = Register::Address<0xf000c2d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN0_mcr6{
        using Addr = Register::Address<0xf000c2dc,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN0_mmr7{
        using Addr = Register::Address<0xf000c2e0,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN0_mam7{
        using Addr = Register::Address<0xf000c2e4,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mid7{
        using Addr = Register::Address<0xf000c2e8,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN0_mfid7{
        using Addr = Register::Address<0xf000c2ec,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN0_msr7{
        using Addr = Register::Address<0xf000c2f0,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN0_mdl7{
        using Addr = Register::Address<0xf000c2f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN0_mdh7{
        using Addr = Register::Address<0xf000c2f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN0_mcr7{
        using Addr = Register::Address<0xf000c2fc,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
}
