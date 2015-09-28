#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CAN1_mr{
        using Addr = Register::Address<0x400b8000,0xf8ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CANEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ABM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TEOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIMFRZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DRPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> RXSYNC; 
    }
    namespace CAN1_ier{
        using Addr = Register::Address<0x400b8004,0xe000ff00>;
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
    namespace CAN1_idr{
        using Addr = Register::Address<0x400b8008,0xe000ff00>;
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
    namespace CAN1_imr{
        using Addr = Register::Address<0x400b800c,0xe000ff00>;
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
    namespace CAN1_sr{
        using Addr = Register::Address<0x400b8010,0x0000ff00>;
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
    namespace CAN1_br{
        using Addr = Register::Address<0x400b8014,0xfe80c888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PHASE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PHASE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PROPAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SJW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> BRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SMP; 
    }
    namespace CAN1_tim{
        using Addr = Register::Address<0x400b8018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIMER; 
    }
    namespace CAN1_timestp{
        using Addr = Register::Address<0x400b801c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
    }
    namespace CAN1_ecr{
        using Addr = Register::Address<0x400b8020,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TEC; 
    }
    namespace CAN1_tcr{
        using Addr = Register::Address<0x400b8024,0x7fffff00>;
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
    namespace CAN1_acr{
        using Addr = Register::Address<0x400b8028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MB7; 
    }
    namespace CAN1_wpmr{
        using Addr = Register::Address<0x400b80e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace CAN1_wpsr{
        using Addr = Register::Address<0x400b80e8,0xffff00fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WPVSRC; 
    }
    namespace CAN1_mmr0{
        using Addr = Register::Address<0x400b8200,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam0{
        using Addr = Register::Address<0x400b8204,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid0{
        using Addr = Register::Address<0x400b8208,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid0{
        using Addr = Register::Address<0x400b820c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr0{
        using Addr = Register::Address<0x400b8210,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl0{
        using Addr = Register::Address<0x400b8214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh0{
        using Addr = Register::Address<0x400b8218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr0{
        using Addr = Register::Address<0x400b821c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN1_mmr1{
        using Addr = Register::Address<0x400b8220,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam1{
        using Addr = Register::Address<0x400b8224,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid1{
        using Addr = Register::Address<0x400b8228,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid1{
        using Addr = Register::Address<0x400b822c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr1{
        using Addr = Register::Address<0x400b8230,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl1{
        using Addr = Register::Address<0x400b8234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh1{
        using Addr = Register::Address<0x400b8238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr1{
        using Addr = Register::Address<0x400b823c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN1_mmr2{
        using Addr = Register::Address<0x400b8240,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam2{
        using Addr = Register::Address<0x400b8244,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid2{
        using Addr = Register::Address<0x400b8248,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid2{
        using Addr = Register::Address<0x400b824c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr2{
        using Addr = Register::Address<0x400b8250,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl2{
        using Addr = Register::Address<0x400b8254,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh2{
        using Addr = Register::Address<0x400b8258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr2{
        using Addr = Register::Address<0x400b825c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN1_mmr3{
        using Addr = Register::Address<0x400b8260,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam3{
        using Addr = Register::Address<0x400b8264,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid3{
        using Addr = Register::Address<0x400b8268,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid3{
        using Addr = Register::Address<0x400b826c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr3{
        using Addr = Register::Address<0x400b8270,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl3{
        using Addr = Register::Address<0x400b8274,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh3{
        using Addr = Register::Address<0x400b8278,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr3{
        using Addr = Register::Address<0x400b827c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN1_mmr4{
        using Addr = Register::Address<0x400b8280,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam4{
        using Addr = Register::Address<0x400b8284,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid4{
        using Addr = Register::Address<0x400b8288,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid4{
        using Addr = Register::Address<0x400b828c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr4{
        using Addr = Register::Address<0x400b8290,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl4{
        using Addr = Register::Address<0x400b8294,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh4{
        using Addr = Register::Address<0x400b8298,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr4{
        using Addr = Register::Address<0x400b829c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN1_mmr5{
        using Addr = Register::Address<0x400b82a0,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam5{
        using Addr = Register::Address<0x400b82a4,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid5{
        using Addr = Register::Address<0x400b82a8,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid5{
        using Addr = Register::Address<0x400b82ac,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr5{
        using Addr = Register::Address<0x400b82b0,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl5{
        using Addr = Register::Address<0x400b82b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh5{
        using Addr = Register::Address<0x400b82b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr5{
        using Addr = Register::Address<0x400b82bc,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN1_mmr6{
        using Addr = Register::Address<0x400b82c0,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam6{
        using Addr = Register::Address<0x400b82c4,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid6{
        using Addr = Register::Address<0x400b82c8,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid6{
        using Addr = Register::Address<0x400b82cc,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr6{
        using Addr = Register::Address<0x400b82d0,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl6{
        using Addr = Register::Address<0x400b82d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh6{
        using Addr = Register::Address<0x400b82d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr6{
        using Addr = Register::Address<0x400b82dc,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN1_mmr7{
        using Addr = Register::Address<0x400b82e0,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam7{
        using Addr = Register::Address<0x400b82e4,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid7{
        using Addr = Register::Address<0x400b82e8,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid7{
        using Addr = Register::Address<0x400b82ec,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr7{
        using Addr = Register::Address<0x400b82f0,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl7{
        using Addr = Register::Address<0x400b82f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh7{
        using Addr = Register::Address<0x400b82f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr7{
        using Addr = Register::Address<0x400b82fc,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
}
