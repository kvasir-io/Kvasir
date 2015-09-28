#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CAN1_mr{
        using Addr = Register::Address<0xf8010000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CANEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ABM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TEOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIMFRZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DRPT; 
    }
    namespace CAN1_ier{
        using Addr = Register::Address<0xf8010004,0xe000ff00>;
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
        using Addr = Register::Address<0xf8010008,0xe000ff00>;
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
        using Addr = Register::Address<0xf801000c,0xe000ff00>;
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
        using Addr = Register::Address<0xf8010010,0x0000ff00>;
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
        using Addr = Register::Address<0xf8010014,0xfe80c888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PHASE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PHASE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PROPAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SJW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> BRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SMP; 
    }
    namespace CAN1_tim{
        using Addr = Register::Address<0xf8010018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIMER; 
    }
    namespace CAN1_timestp{
        using Addr = Register::Address<0xf801001c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
    }
    namespace CAN1_ecr{
        using Addr = Register::Address<0xf8010020,0xfe00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> TEC; 
    }
    namespace CAN1_tcr{
        using Addr = Register::Address<0xf8010024,0x7fffff00>;
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
        using Addr = Register::Address<0xf8010028,0xffffff00>;
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
        using Addr = Register::Address<0xf80100e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace CAN1_wpsr{
        using Addr = Register::Address<0xf80100e8,0xffff00fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WPVSRC; 
    }
    namespace CAN1_mmr0{
        using Addr = Register::Address<0xf8010200,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam0{
        using Addr = Register::Address<0xf8010204,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid0{
        using Addr = Register::Address<0xf8010208,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid0{
        using Addr = Register::Address<0xf801020c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr0{
        using Addr = Register::Address<0xf8010210,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl0{
        using Addr = Register::Address<0xf8010214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh0{
        using Addr = Register::Address<0xf8010218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr0{
        using Addr = Register::Address<0xf801021c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN1_mmr1{
        using Addr = Register::Address<0xf8010220,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam1{
        using Addr = Register::Address<0xf8010224,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid1{
        using Addr = Register::Address<0xf8010228,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid1{
        using Addr = Register::Address<0xf801022c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr1{
        using Addr = Register::Address<0xf8010230,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl1{
        using Addr = Register::Address<0xf8010234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh1{
        using Addr = Register::Address<0xf8010238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr1{
        using Addr = Register::Address<0xf801023c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN1_mmr2{
        using Addr = Register::Address<0xf8010240,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam2{
        using Addr = Register::Address<0xf8010244,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid2{
        using Addr = Register::Address<0xf8010248,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid2{
        using Addr = Register::Address<0xf801024c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr2{
        using Addr = Register::Address<0xf8010250,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl2{
        using Addr = Register::Address<0xf8010254,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh2{
        using Addr = Register::Address<0xf8010258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr2{
        using Addr = Register::Address<0xf801025c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN1_mmr3{
        using Addr = Register::Address<0xf8010260,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam3{
        using Addr = Register::Address<0xf8010264,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid3{
        using Addr = Register::Address<0xf8010268,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid3{
        using Addr = Register::Address<0xf801026c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr3{
        using Addr = Register::Address<0xf8010270,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl3{
        using Addr = Register::Address<0xf8010274,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh3{
        using Addr = Register::Address<0xf8010278,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr3{
        using Addr = Register::Address<0xf801027c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN1_mmr4{
        using Addr = Register::Address<0xf8010280,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam4{
        using Addr = Register::Address<0xf8010284,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid4{
        using Addr = Register::Address<0xf8010288,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid4{
        using Addr = Register::Address<0xf801028c,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr4{
        using Addr = Register::Address<0xf8010290,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl4{
        using Addr = Register::Address<0xf8010294,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh4{
        using Addr = Register::Address<0xf8010298,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr4{
        using Addr = Register::Address<0xf801029c,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN1_mmr5{
        using Addr = Register::Address<0xf80102a0,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam5{
        using Addr = Register::Address<0xf80102a4,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid5{
        using Addr = Register::Address<0xf80102a8,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid5{
        using Addr = Register::Address<0xf80102ac,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr5{
        using Addr = Register::Address<0xf80102b0,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl5{
        using Addr = Register::Address<0xf80102b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh5{
        using Addr = Register::Address<0xf80102b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr5{
        using Addr = Register::Address<0xf80102bc,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN1_mmr6{
        using Addr = Register::Address<0xf80102c0,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam6{
        using Addr = Register::Address<0xf80102c4,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid6{
        using Addr = Register::Address<0xf80102c8,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid6{
        using Addr = Register::Address<0xf80102cc,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr6{
        using Addr = Register::Address<0xf80102d0,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl6{
        using Addr = Register::Address<0xf80102d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh6{
        using Addr = Register::Address<0xf80102d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr6{
        using Addr = Register::Address<0xf80102dc,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
    namespace CAN1_mmr7{
        using Addr = Register::Address<0xf80102e0,0xf8f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMEMARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MOT; 
    }
    namespace CAN1_mam7{
        using Addr = Register::Address<0xf80102e4,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mid7{
        using Addr = Register::Address<0xf80102e8,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MIDvB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> MIDvA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIDE; 
    }
    namespace CAN1_mfid7{
        using Addr = Register::Address<0xf80102ec,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> MFID; 
    }
    namespace CAN1_msr7{
        using Addr = Register::Address<0xf80102f0,0xfe200000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTIMESTAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MMI; 
    }
    namespace CAN1_mdl7{
        using Addr = Register::Address<0xf80102f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDL; 
    }
    namespace CAN1_mdh7{
        using Addr = Register::Address<0xf80102f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MDH; 
    }
    namespace CAN1_mcr7{
        using Addr = Register::Address<0xf80102fc,0xff20ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MTCR; 
    }
}
