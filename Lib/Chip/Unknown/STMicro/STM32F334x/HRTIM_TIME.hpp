#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetimecr{
        using Addr = Register::Address<0x40017680,0x00090380>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> UPDGAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25)> DACSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MSTU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TEU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TDU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TCU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TBU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TxRSTU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TxREPU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DELCMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DELCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SYNCSTRTx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SYNCRSTx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PSHPLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RETRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CK_PSCx; 
    }
    namespace Nonetimeisr{
        using Addr = Register::Address<0x40017684,0xfff08020>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> O2STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> O1STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IPPSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CPPSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DLYPRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RSTx2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETx2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RSTx1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETx1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CPT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CPT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMP1; 
    }
    namespace Nonetimeicr{
        using Addr = Register::Address<0x40017688,0xffff8020>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DLYPRTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RSTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RSTx2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SET2xC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RSTx1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SET1xC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CPT2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CPT1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UPDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMP4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMP3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMP2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMP1C; 
    }
    namespace Nonetimedier5{
        using Addr = Register::Address<0x4001768c,0x80208020>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DLYPRTDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RSTDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RSTx2DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SETx2DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> RSTx1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SET1xDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CPT2DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CPT1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> UPDDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> REPDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMP4DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CMP3DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMP2DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CMP1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DLYPRTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RSTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RSTx2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETx2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RSTx1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SET1xIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CPT2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CPT1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UPDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMP4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMP3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMP2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMP1IE; 
    }
    namespace Nonecnter{
        using Addr = Register::Address<0x40017690,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNTx; 
    }
    namespace Noneperer{
        using Addr = Register::Address<0x40017694,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PERx; 
    }
    namespace Nonereper{
        using Addr = Register::Address<0x40017698,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REPx; 
    }
    namespace Nonecmp1er{
        using Addr = Register::Address<0x4001769c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMP1x; 
    }
    namespace Nonecmp1cer{
        using Addr = Register::Address<0x400176a0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> REPx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMP1x; 
    }
    namespace Nonecmp2er{
        using Addr = Register::Address<0x400176a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMP2x; 
    }
    namespace Nonecmp3er{
        using Addr = Register::Address<0x400176a8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMP3x; 
    }
    namespace Nonecmp4er{
        using Addr = Register::Address<0x400176ac,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMP4x; 
    }
    namespace Nonecpt1er{
        using Addr = Register::Address<0x400176b0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CPT1x; 
    }
    namespace Nonecpt2er{
        using Addr = Register::Address<0x400176b4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CPT2x; 
    }
    namespace Nonedter{
        using Addr = Register::Address<0x400176b8,0x3c002000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DTFLKx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DTFSLKx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SDTFx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> DTFx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DTRLKx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DTRSLKx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> DTPRSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SDTRx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> DTRx; 
    }
    namespace Nonesete1r{
        using Addr = Register::Address<0x400176bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UPDATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EXTEVNT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EXTEVNT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EXTEVNT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EXTEVNT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EXTEVNT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EXTEVNT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EXTEVNT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EXTEVNT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EXTEVNT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EXTEVNT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TIMEVNT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TIMEVNT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIMEVNT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIMEVNT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIMEVNT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TIMEVNT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIMEVNT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIMEVNT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TIMEVNT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MSTCMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MSTCMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MSTCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MSTCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSTPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RESYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SST; 
    }
    namespace Nonerste1r{
        using Addr = Register::Address<0x400176c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UPDATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EXTEVNT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EXTEVNT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EXTEVNT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EXTEVNT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EXTEVNT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EXTEVNT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EXTEVNT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EXTEVNT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EXTEVNT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EXTEVNT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TIMEVNT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TIMEVNT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIMEVNT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIMEVNT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIMEVNT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TIMEVNT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIMEVNT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIMEVNT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TIMEVNT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MSTCMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MSTCMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MSTCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MSTCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSTPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RESYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SRT; 
    }
    namespace Nonesete2r{
        using Addr = Register::Address<0x400176c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UPDATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EXTEVNT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EXTEVNT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EXTEVNT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EXTEVNT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EXTEVNT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EXTEVNT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EXTEVNT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EXTEVNT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EXTEVNT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EXTEVNT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TIMEVNT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TIMEVNT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIMEVNT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIMEVNT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIMEVNT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TIMEVNT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIMEVNT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIMEVNT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TIMEVNT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MSTCMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MSTCMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MSTCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MSTCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSTPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RESYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SST; 
    }
    namespace Nonerste2r{
        using Addr = Register::Address<0x400176c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UPDATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EXTEVNT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EXTEVNT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EXTEVNT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EXTEVNT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EXTEVNT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EXTEVNT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EXTEVNT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EXTEVNT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EXTEVNT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EXTEVNT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TIMEVNT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TIMEVNT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIMEVNT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIMEVNT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIMEVNT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TIMEVNT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIMEVNT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIMEVNT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TIMEVNT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MSTCMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MSTCMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MSTCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MSTCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSTPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RESYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SRT; 
    }
    namespace Noneeefer1{
        using Addr = Register::Address<0x400176cc,0xe0820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,25)> EE5FLTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EE5LTCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,19)> EE4FLTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EE4LTCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13)> EE3FLTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EE3LTCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,7)> EE2FLTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EE2LTCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1)> EE1FLTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EE1LTCH; 
    }
    namespace Noneeefer2{
        using Addr = Register::Address<0x400176d0,0xe0820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,25)> EE10FLTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EE10LTCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,19)> EE9FLTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EE9LTCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13)> EE8FLTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EE8LTCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,7)> EE7FLTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EE7LTCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1)> EE6FLTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EE6LTCH; 
    }
    namespace Nonerster{
        using Addr = Register::Address<0x400176d4,0x80000001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TIMDCMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TIMDCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TIMDCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TIMCCMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TIMCCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TIMCCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TIMBCMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TIMBCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TIMBCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TIMACMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TIMACMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TIMACMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EXTEVNT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EXTEVNT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EXTEVNT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTEVNT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTEVNT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EXTEVNT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EXTEVNT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EXTEVNT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTEVNT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXTEVNT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MSTCMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSTCMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MSTCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSTCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSTPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDT; 
    }
    namespace Nonechper{
        using Addr = Register::Address<0x400176d8,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,7)> STRTPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CHPDTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPFRQ; 
    }
    namespace Nonecpt1ecr{
        using Addr = Register::Address<0x400176dc,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TDCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TDCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TD1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TD1SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TCCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TCCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TC1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TC1SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TBCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TBCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TB1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TB1SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TACMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TACMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TA1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TA1SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EXEV10CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXEV9CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXEV8CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EXEV7CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXEV6CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXEV5CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXEV4CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXEV3CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXEV2CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXEV1CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UDPCPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWCPT; 
    }
    namespace Nonecpt2ecr{
        using Addr = Register::Address<0x400176e0,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TDCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TDCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TD1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TD1SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TCCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TCCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TC1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TC1SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TBCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TBCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TB1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TB1SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TACMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TACMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TA1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TA1SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EXEV10CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXEV9CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXEV8CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EXEV7CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXEV6CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXEV5CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXEV4CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXEV3CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXEV2CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXEV1CPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UDPCPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWCPT; 
    }
    namespace Noneouter{
        using Addr = Register::Address<0x400176e4,0xff01e001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DIDL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CHP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> FAULT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IDLES2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IDLEM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> POL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> DLYPRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DLYPRTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIDL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> FAULT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IDLES1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDLEM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> POL1; 
    }
    namespace Noneflter{
        using Addr = Register::Address<0x400176e8,0x7fffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FLTLCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLT5EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FLT4EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLT3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLT2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLT1EN; 
    }
}
