#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MSCAN_canctl0{
        using Addr = Register::Address<0x40024000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INITRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SLPRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WUPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SYNCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CSWAI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXFRM; 
    }
    namespace MSCAN_canctl1{
        using Addr = Register::Address<0x40024001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INITAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SLPAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WUPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LISTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LOOPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLKSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CANE; 
    }
    namespace MSCAN_canbtr0{
        using Addr = Register::Address<0x40024002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> BRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SJW; 
    }
    namespace MSCAN_canbtr1{
        using Addr = Register::Address<0x40024003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TSEG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TSEG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SAMP; 
    }
    namespace MSCAN_canrflg{
        using Addr = Register::Address<0x40024004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVRIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CSCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WUPIF; 
    }
    namespace MSCAN_canrier{
        using Addr = Register::Address<0x40024005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TSTATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RSTATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CSCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WUPIE; 
    }
    namespace MSCAN_cantflg{
        using Addr = Register::Address<0x40024006,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TXE; 
    }
    namespace MSCAN_cantier{
        using Addr = Register::Address<0x40024007,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TXEIE; 
    }
    namespace MSCAN_cantarq{
        using Addr = Register::Address<0x40024008,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ABTRQ; 
    }
    namespace MSCAN_cantaak{
        using Addr = Register::Address<0x40024009,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ABTAK; 
    }
    namespace MSCAN_cantbsel{
        using Addr = Register::Address<0x4002400a,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TX; 
    }
    namespace MSCAN_canidac{
        using Addr = Register::Address<0x4002400b,0xffffffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> IDHIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> IDAM; 
    }
    namespace MSCAN_canmisc{
        using Addr = Register::Address<0x4002400d,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BOHOLD; 
    }
    namespace MSCAN_canrxerr{
        using Addr = Register::Address<0x4002400e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXERR; 
    }
    namespace MSCAN_cantxerr{
        using Addr = Register::Address<0x4002400f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXERR; 
    }
    namespace MSCAN_canidar0{
        using Addr = Register::Address<0x40024010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AC; 
    }
    namespace MSCAN_canidar1{
        using Addr = Register::Address<0x40024011,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AC; 
    }
    namespace MSCAN_canidar2{
        using Addr = Register::Address<0x40024012,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AC; 
    }
    namespace MSCAN_canidar3{
        using Addr = Register::Address<0x40024013,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AC; 
    }
    namespace MSCAN_canidmr0{
        using Addr = Register::Address<0x40024014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AM; 
    }
    namespace MSCAN_canidmr1{
        using Addr = Register::Address<0x40024015,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AM; 
    }
    namespace MSCAN_canidmr2{
        using Addr = Register::Address<0x40024016,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AM; 
    }
    namespace MSCAN_canidmr3{
        using Addr = Register::Address<0x40024017,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AM; 
    }
    namespace MSCAN_canidar4{
        using Addr = Register::Address<0x40024018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AC; 
    }
    namespace MSCAN_canidar5{
        using Addr = Register::Address<0x40024019,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AC; 
    }
    namespace MSCAN_canidar6{
        using Addr = Register::Address<0x4002401a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AC; 
    }
    namespace MSCAN_canidar7{
        using Addr = Register::Address<0x4002401b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AC; 
    }
    namespace MSCAN_canidmr4{
        using Addr = Register::Address<0x4002401c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AM; 
    }
    namespace MSCAN_canidmr5{
        using Addr = Register::Address<0x4002401d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AM; 
    }
    namespace MSCAN_canidmr6{
        using Addr = Register::Address<0x4002401e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AM; 
    }
    namespace MSCAN_canidmr7{
        using Addr = Register::Address<0x4002401f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AM; 
    }
    namespace MSCAN_reidr0{
        using Addr = Register::Address<0x40024020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REID28_REID21; 
    }
    namespace MSCAN_rsidr0{
        using Addr = Register::Address<0x40024020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RSID10_RSID3; 
    }
    namespace MSCAN_reidr1{
        using Addr = Register::Address<0x40024021,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> REID17_REID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RSRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> REID20_REID18; 
    }
    namespace MSCAN_rsidr1{
        using Addr = Register::Address<0x40024021,0xffffff07>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RSRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> RSID2_RSID0; 
    }
    namespace MSCAN_reidr2{
        using Addr = Register::Address<0x40024022,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REID14_REID7; 
    }
    namespace MSCAN_reidr3{
        using Addr = Register::Address<0x40024023,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RERTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> REID6_REID0; 
    }
    namespace MSCAN_redsr0{
        using Addr = Register::Address<0x40024024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RDB; 
    }
    namespace MSCAN_redsr1{
        using Addr = Register::Address<0x40024025,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RDB; 
    }
    namespace MSCAN_redsr2{
        using Addr = Register::Address<0x40024026,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RDB; 
    }
    namespace MSCAN_redsr3{
        using Addr = Register::Address<0x40024027,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RDB; 
    }
    namespace MSCAN_redsr4{
        using Addr = Register::Address<0x40024028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RDB; 
    }
    namespace MSCAN_redsr5{
        using Addr = Register::Address<0x40024029,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RDB; 
    }
    namespace MSCAN_redsr6{
        using Addr = Register::Address<0x4002402a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RDB; 
    }
    namespace MSCAN_redsr7{
        using Addr = Register::Address<0x4002402b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RDB; 
    }
    namespace MSCAN_rdlr{
        using Addr = Register::Address<0x4002402c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RDLC; 
    }
    namespace MSCAN_rtsrh{
        using Addr = Register::Address<0x4002402e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RTS; 
    }
    namespace MSCAN_rtsrl{
        using Addr = Register::Address<0x4002402f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RTS; 
    }
    namespace MSCAN_teidr0{
        using Addr = Register::Address<0x40024030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TEID28_TEID21; 
    }
    namespace MSCAN_tsidr0{
        using Addr = Register::Address<0x40024030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TSID10_TSID3; 
    }
    namespace MSCAN_teidr1{
        using Addr = Register::Address<0x40024031,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TEID17_TEID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TEIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TSRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> TEID20_TEID18; 
    }
    namespace MSCAN_tsidr1{
        using Addr = Register::Address<0x40024031,0xffffff07>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TSRTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> TSID2_TSID0; 
    }
    namespace MSCAN_teidr2{
        using Addr = Register::Address<0x40024032,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TEID14_TEID7; 
    }
    namespace MSCAN_teidr3{
        using Addr = Register::Address<0x40024033,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TERTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> TEID6_TEID0; 
    }
    namespace MSCAN_tedsr0{
        using Addr = Register::Address<0x40024034,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TDB; 
    }
    namespace MSCAN_tedsr1{
        using Addr = Register::Address<0x40024035,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TDB; 
    }
    namespace MSCAN_tedsr2{
        using Addr = Register::Address<0x40024036,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TDB; 
    }
    namespace MSCAN_tedsr3{
        using Addr = Register::Address<0x40024037,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TDB; 
    }
    namespace MSCAN_tedsr4{
        using Addr = Register::Address<0x40024038,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TDB; 
    }
    namespace MSCAN_tedsr5{
        using Addr = Register::Address<0x40024039,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TDB; 
    }
    namespace MSCAN_tedsr6{
        using Addr = Register::Address<0x4002403a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TDB; 
    }
    namespace MSCAN_tedsr7{
        using Addr = Register::Address<0x4002403b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TDB; 
    }
    namespace MSCAN_tdlr{
        using Addr = Register::Address<0x4002403c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TDLC; 
    }
    namespace MSCAN_tbpr{
        using Addr = Register::Address<0x4002403d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRIO; 
    }
    namespace MSCAN_ttsrh{
        using Addr = Register::Address<0x4002403e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TTS; 
    }
    namespace MSCAN_ttsrl{
        using Addr = Register::Address<0x4002403f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TTS; 
    }
}
