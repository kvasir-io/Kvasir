#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneintst{
        using Addr = Register::Address<0x50008100,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TMR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REMOVE_PU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HNP_FAILURE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HNP_SUCCESS; 
    }
    namespace Noneinten{
        using Addr = Register::Address<0x50008104,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TMR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REMOVE_PU_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HNP_FAILURE_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HNP_SUCCES_EN; 
    }
    namespace Noneintset{
        using Addr = Register::Address<0x50008108,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TMR_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REMOVE_PU_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HNP_FAILURE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HNP_SUCCES_SET; 
    }
    namespace Noneintclr{
        using Addr = Register::Address<0x5000810c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TMR_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REMOVE_PU_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HNP_FAILURE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HNP_SUCCES_CLR; 
    }
    namespace Nonestctrl{
        using Addr = Register::Address<0x50008110,0x0000f880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PORT_FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TMR_SCALE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TMR_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TMR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TMR_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> B_HNP_TRACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> A_HNP_TRACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PU_REMOVED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TMR_CNT; 
    }
    namespace Nonetmr{
        using Addr = Register::Address<0x50008114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIMEOUT_CNT; 
    }
    namespace Nonedevintst{
        using Addr = Register::Address<0x50008200,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP_FAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP_SLOW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DEV_STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CCEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CDFULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RxENDPKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TxENDPKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP_RLZED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERR_INT; 
    }
    namespace Nonedevinten{
        using Addr = Register::Address<0x50008204,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAMEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP_FASTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP_SLOWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DEV_STATEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CCEMPTYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CDFULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RxENDPKTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TxENDPKTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP_RLZEDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERR_INTEN; 
    }
    namespace Nonedevintclr{
        using Addr = Register::Address<0x50008208,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAMECLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP_FASTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP_SLOWCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DEV_STATCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CCEMPTYCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CDFULLCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RxENDPKTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TxENDPKTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP_RLZEDCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERR_INTCLR; 
    }
    namespace Nonedevintset{
        using Addr = Register::Address<0x5000820c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAMESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP_FASTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP_SLOWSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DEV_STATSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CCEMPTYSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CDFULLSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RxENDPKTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TxENDPKTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP_RLZEDSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERR_INTSET; 
    }
    namespace Nonecmdcode{
        using Addr = Register::Address<0x50008210,0xff0000ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CMD_PHASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CMD_CODE_WDATA; 
    }
    namespace Nonecmddata{
        using Addr = Register::Address<0x50008214,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CMD_RDATA; 
    }
    namespace Nonerxdata{
        using Addr = Register::Address<0x50008218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RX_DATA; 
    }
    namespace Nonetxdata{
        using Addr = Register::Address<0x5000821c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TX_DATA; 
    }
    namespace Nonerxplen{
        using Addr = Register::Address<0x500080dc,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> PKT_LNGTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PKT_RDY; 
    }
    namespace Nonetxplen{
        using Addr = Register::Address<0x50008224,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> PKT_LNGTH; 
    }
    namespace Nonectrl{
        using Addr = Register::Address<0x50008228,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> LOG_ENDPOINT; 
    }
    namespace Nonedevintpri{
        using Addr = Register::Address<0x5000822c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP_FAST; 
    }
    namespace Noneepintst{
        using Addr = Register::Address<0x50008230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPST8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPST9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPST10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPST11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPST12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPST13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPST14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPST15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPST16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPST17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPST18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPST19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPST20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPST21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPST22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPST23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPST24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPST25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPST26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPST27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPST28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPST29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPST30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPST31; 
    }
    namespace Noneepinten{
        using Addr = Register::Address<0x50008234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPEN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPEN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPEN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPEN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPEN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPEN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPEN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPEN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPEN15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPEN16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPEN17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPEN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPEN19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPEN20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPEN21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPEN22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPEN23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPEN24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPEN25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPEN26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPEN27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPEN28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPEN29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPEN30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPEN31; 
    }
    namespace Noneepintclr{
        using Addr = Register::Address<0x50008238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPCLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPCLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPCLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPCLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPCLR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPCLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPCLR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPCLR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPCLR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPCLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPCLR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPCLR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPCLR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPCLR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPCLR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPCLR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPCLR17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPCLR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPCLR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPCLR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPCLR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPCLR22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPCLR23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPCLR24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPCLR25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPCLR26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPCLR27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPCLR28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPCLR29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPCLR30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPCLR31; 
    }
    namespace Noneepintset{
        using Addr = Register::Address<0x5000823c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPSET0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSET1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPSET2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPSET3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPSET4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPSET5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPSET6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPSET7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPSET8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPSET9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPSET10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPSET11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPSET12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPSET13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPSET14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPSET15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPSET16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPSET17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPSET18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPSET19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPSET20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPSET21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPSET22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPSET23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPSET24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPSET25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPSET26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPSET27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPSET28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPSET29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPSET30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPSET31; 
    }
    namespace Noneepintpri{
        using Addr = Register::Address<0x50008240,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPPRI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPPRI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPPRI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPPRI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPPRI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPPRI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPPRI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPPRI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPPRI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPPRI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPPRI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPPRI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPPRI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPPRI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPPRI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPPRI15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPPRI16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPPRI17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPPRI18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPPRI19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPPRI20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPPRI21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPPRI22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPPRI23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPPRI24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPPRI25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPPRI26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPPRI27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPPRI28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPPRI29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPPRI30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPPRI31; 
    }
    namespace Nonereep{
        using Addr = Register::Address<0x50008244,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPR17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPR22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPR23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPR24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPR25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPR26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPR27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPR28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPR29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPR30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPR31; 
    }
    namespace Noneepind{
        using Addr = Register::Address<0x50008248,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> PHY_EP; 
    }
    namespace Nonemaxpsize{
        using Addr = Register::Address<0x5000824c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> MPS; 
    }
    namespace Nonedmarst{
        using Addr = Register::Address<0x50008250,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPRST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPRST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPRST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPRST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPRST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPRST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPRST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPRST8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPRST9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPRST10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPRST11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPRST12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPRST13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPRST14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPRST15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPRST16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPRST17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPRST18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPRST19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPRST20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPRST21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPRST22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPRST23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPRST24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPRST25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPRST26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPRST27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPRST28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPRST29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPRST30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPRST31; 
    }
    namespace Nonedmarclr{
        using Addr = Register::Address<0x50008254,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPRCLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPRCLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPRCLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRCLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPRCLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPRCLR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPRCLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPRCLR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPRCLR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPRCLR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPRCLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPRCLR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPRCLR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPRCLR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPRCLR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPRCLR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPRCLR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPRCLR17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPRCLR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPRCLR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPRCLR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPRCLR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPRCLR22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPRCLR23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPRCLR24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPRCLR25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPRCLR26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPRCLR27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPRCLR28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPRCLR29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPRCLR30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPRCLR31; 
    }
    namespace Nonedmarset{
        using Addr = Register::Address<0x50008258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPRSET0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPRSET1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPRSET2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRSET3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPRSET4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPRSET5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPRSET6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPRSET7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPRSET8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPRSET9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPRSET10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPRSET11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPRSET12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPRSET13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPRSET14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPRSET15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPRSET16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPRSET17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPRSET18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPRSET19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPRSET20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPRSET21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPRSET22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPRSET23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPRSET24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPRSET25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPRSET26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPRSET27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPRSET28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPRSET29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPRSET30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPRSET31; 
    }
    namespace Noneudcah{
        using Addr = Register::Address<0x50008280,0x0000007f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,7)> UDCA_ADDR; 
    }
    namespace Noneepdmast{
        using Addr = Register::Address<0x50008284,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP_DMA_ST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP_DMA_ST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP_DMA_ST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP_DMA_ST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP_DMA_ST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP_DMA_ST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EP_DMA_ST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EP_DMA_ST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP_DMA_ST8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EP_DMA_ST9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EP_DMA_ST10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EP_DMA_ST11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EP_DMA_ST12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EP_DMA_ST13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EP_DMA_ST14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EP_DMA_ST15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EP_DMA_ST16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EP_DMA_ST17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EP_DMA_ST18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EP_DMA_ST19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EP_DMA_ST20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EP_DMA_ST21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EP_DMA_ST22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EP_DMA_ST23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EP_DMA_ST24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EP_DMA_ST25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EP_DMA_ST26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EP_DMA_ST27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EP_DMA_ST28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EP_DMA_ST29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EP_DMA_ST30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EP_DMA_ST31; 
    }
    namespace Noneepdmaen{
        using Addr = Register::Address<0x50008288,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP_DMA_EN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP_DMA_EN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> EP_DMA_EN; 
    }
    namespace Noneepdmadis{
        using Addr = Register::Address<0x5000828c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP_DMA_DIS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP_DMA_DIS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP_DMA_DIS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP_DMA_DIS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP_DMA_DIS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP_DMA_DIS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EP_DMA_DIS6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EP_DMA_DIS7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP_DMA_DIS8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EP_DMA_DIS9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EP_DMA_DIS10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EP_DMA_DIS11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EP_DMA_DIS12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EP_DMA_DIS13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EP_DMA_DIS14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EP_DMA_DIS15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EP_DMA_DIS16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EP_DMA_DIS17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EP_DMA_DIS18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EP_DMA_DIS19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EP_DMA_DIS20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EP_DMA_DIS21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EP_DMA_DIS22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EP_DMA_DIS23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EP_DMA_DIS24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EP_DMA_DIS25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EP_DMA_DIS26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EP_DMA_DIS27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EP_DMA_DIS28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EP_DMA_DIS29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EP_DMA_DIS30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EP_DMA_DIS31; 
    }
    namespace Nonedmaintst{
        using Addr = Register::Address<0x50008290,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NDDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERR; 
    }
    namespace Nonedmainten{
        using Addr = Register::Address<0x50008294,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NDDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERR; 
    }
    namespace Noneeotintst{
        using Addr = Register::Address<0x500082a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPTXINTST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPTXINTST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXINTST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPTXINTST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPTXINTST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPTXINTST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPTXINTST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPTXINTST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPTXINTST8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPTXINTST9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPTXINTST10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPTXINTST11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPTXINTST12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPTXINTST13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPTXINTST14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPTXINTST15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPTXINTST16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPTXINTST17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPTXINTST18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPTXINTST19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPTXINTST20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPTXINTST21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPTXINTST22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPTXINTST23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPTXINTST24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPTXINTST25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPTXINTST26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPTXINTST27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPTXINTST28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPTXINTST29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPTXINTST30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPTXINTST31; 
    }
    namespace Noneeotintclr{
        using Addr = Register::Address<0x500082a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPTXINTCLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPTXINTCLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXINTCLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPTXINTCLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPTXINTCLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPTXINTCLR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPTXINTCLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPTXINTCLR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPTXINTCLR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPTXINTCLR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPTXINTCLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPTXINTCLR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPTXINTCLR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPTXINTCLR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPTXINTCLR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPTXINTCLR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPTXINTCLR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPTXINTCLR17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPTXINTCLR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPTXINTCLR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPTXINTCLR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPTXINTCLR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPTXINTCLR22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPTXINTCLR23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPTXINTCLR24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPTXINTCLR25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPTXINTCLR26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPTXINTCLR27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPTXINTCLR28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPTXINTCLR29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPTXINTCLR30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPTXINTCLR31; 
    }
    namespace Noneeotintset{
        using Addr = Register::Address<0x500082a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPTXINTSET0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPTXINTSET1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXINTSET2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPTXINTSET3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPTXINTSET4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPTXINTSET5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPTXINTSET6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPTXINTSET7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPTXINTSET8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPTXINTSET9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPTXINTSET10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPTXINTSET11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPTXINTSET12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPTXINTSET13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPTXINTSET14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPTXINTSET15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPTXINTSET16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPTXINTSET17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPTXINTSET18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPTXINTSET19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPTXINTSET20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPTXINTSET21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPTXINTSET22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPTXINTSET23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPTXINTSET24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPTXINTSET25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPTXINTSET26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPTXINTSET27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPTXINTSET28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPTXINTSET29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPTXINTSET30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPTXINTSET31; 
    }
    namespace Nonenddrintst{
        using Addr = Register::Address<0x500082ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPNDDINTST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPNDDINTST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPNDDINTST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPNDDINTST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPNDDINTST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPNDDINTST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPNDDINTST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPNDDINTST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPNDDINTST8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPNDDINTST9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPNDDINTST10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPNDDINTST11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPNDDINTST12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPNDDINTST13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPNDDINTST14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPNDDINTST15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPNDDINTST16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPNDDINTST17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPNDDINTST18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPNDDINTST19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPNDDINTST20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPNDDINTST21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPNDDINTST22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPNDDINTST23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPNDDINTST24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPNDDINTST25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPNDDINTST26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPNDDINTST27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPNDDINTST28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPNDDINTST29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPNDDINTST30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPNDDINTST31; 
    }
    namespace Nonenddrintclr{
        using Addr = Register::Address<0x500082b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPNDDINTCLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPNDDINTCLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPNDDINTCLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPNDDINTCLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPNDDINTCLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPNDDINTCLR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPNDDINTCLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPNDDINTCLR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPNDDINTCLR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPNDDINTCLR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPNDDINTCLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPNDDINTCLR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPNDDINTCLR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPNDDINTCLR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPNDDINTCLR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPNDDINTCLR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPNDDINTCLR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPNDDINTCLR17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPNDDINTCLR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPNDDINTCLR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPNDDINTCLR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPNDDINTCLR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPNDDINTCLR22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPNDDINTCLR23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPNDDINTCLR24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPNDDINTCLR25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPNDDINTCLR26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPNDDINTCLR27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPNDDINTCLR28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPNDDINTCLR29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPNDDINTCLR30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPNDDINTCLR31; 
    }
    namespace Nonenddrintset{
        using Addr = Register::Address<0x500082b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPNDDINTSET0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPNDDINTSET1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPNDDINTSET2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPNDDINTSET3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPNDDINTSET4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPNDDINTSET5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPNDDINTSET6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPNDDINTSET7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPNDDINTSET8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPNDDINTSET9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPNDDINTSET10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPNDDINTSET11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPNDDINTSET12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPNDDINTSET13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPNDDINTSET14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPNDDINTSET15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPNDDINTSET16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPNDDINTSET17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPNDDINTSET18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPNDDINTSET19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPNDDINTSET20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPNDDINTSET21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPNDDINTSET22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPNDDINTSET23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPNDDINTSET24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPNDDINTSET25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPNDDINTSET26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPNDDINTSET27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPNDDINTSET28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPNDDINTSET29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPNDDINTSET30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPNDDINTSET31; 
    }
    namespace Nonesyserrintst{
        using Addr = Register::Address<0x500082b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPERRINTST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPERRINTST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPERRINTST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPERRINTST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPERRINTST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPERRINTST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPERRINTST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPERRINTST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPERRINTST8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPERRINTST9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPERRINTST10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPERRINTST11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPERRINTST12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPERRINTST13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPERRINTST14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPERRINTST15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPERRINTST16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPERRINTST17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPERRINTST18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPERRINTST19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPERRINTST20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPERRINTST21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPERRINTST22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPERRINTST23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPERRINTST24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPERRINTST25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPERRINTST26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPERRINTST27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPERRINTST28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPERRINTST29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPERRINTST30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPERRINTST31; 
    }
    namespace Nonesyserrintclr{
        using Addr = Register::Address<0x500082bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPERRINTCLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPERRINTCLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPERRINTCLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPERRINTCLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPERRINTCLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPERRINTCLR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPERRINTCLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPERRINTCLR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPERRINTCLR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPERRINTCLR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPERRINTCLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPERRINTCLR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPERRINTCLR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPERRINTCLR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPERRINTCLR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPERRINTCLR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPERRINTCLR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPERRINTCLR17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPERRINTCLR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPERRINTCLR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPERRINTCLR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPERRINTCLR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPERRINTCLR22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPERRINTCLR23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPERRINTCLR24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPERRINTCLR25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPERRINTCLR26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPERRINTCLR27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPERRINTCLR28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPERRINTCLR29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPERRINTCLR30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPERRINTCLR31; 
    }
    namespace Nonesyserrintset{
        using Addr = Register::Address<0x500082c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPERRINTSET0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPERRINTSET1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPERRINTSET2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPERRINTSET3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPERRINTSET4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPERRINTSET5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPERRINTSET6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPERRINTSET7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPERRINTSET8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPERRINTSET9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPERRINTSET10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPERRINTSET11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPERRINTSET12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPERRINTSET13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPERRINTSET14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPERRINTSET15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPERRINTSET16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPERRINTSET17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPERRINTSET18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPERRINTSET19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPERRINTSET20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPERRINTSET21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPERRINTSET22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPERRINTSET23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPERRINTSET24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EPERRINTSET25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EPERRINTSET26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EPERRINTSET27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPERRINTSET28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPERRINTSET29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPERRINTSET30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPERRINTSET31; 
    }
    namespace Nonei2c_rx{
        using Addr = Register::Address<0x50008300,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXDATA; 
    }
    namespace Nonei2c_wo{
        using Addr = Register::Address<0x50008300,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STOP; 
    }
    namespace Nonei2c_sts{
        using Addr = Register::Address<0x50008304,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NAI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DRMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DRSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> Active; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SDA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TFE; 
    }
    namespace Nonei2c_ctl{
        using Addr = Register::Address<0x50008308,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NAIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DRMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DRSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RFDAIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TFFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRST; 
    }
    namespace Nonei2c_clkhi{
        using Addr = Register::Address<0x5000830c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CDHI; 
    }
    namespace Nonei2c_clklo{
        using Addr = Register::Address<0x50008310,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CDLO; 
    }
    namespace Noneusbclkctrl{
        using Addr = Register::Address<0x50008ff4,0xffffffe5>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEV_CLK_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PORTSEL_CLK_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AHB_CLK_EN; 
    }
    namespace Noneotgclkctrl{
        using Addr = Register::Address<0x50008ff4,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HOST_CLK_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEV_CLK_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> I2C_CLK_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OTG_CLK_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AHB_CLK_EN; 
    }
    namespace Noneusbclkst{
        using Addr = Register::Address<0x50008ff8,0xffffffe5>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEV_CLK_ON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PORTSEL_CLK_ON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AHB_CLK_ON; 
    }
    namespace Noneotgclkst{
        using Addr = Register::Address<0x50008ff8,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HOST_CLK_ON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEV_CLK_ON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> I2C_CLK_ON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OTG_CLK_ON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AHB_CLK_ON; 
    }
}
