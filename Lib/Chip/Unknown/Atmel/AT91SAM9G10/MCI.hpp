#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MCI_cr{
        using Addr = Register::Address<0xfffa8000,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MCIDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWSDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWRST; 
    }
    namespace MCI_mr{
        using Addr = Register::Address<0xfffa8004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PWSDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RDPROOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WRPROOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PDCFBYTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PDCPADV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PDCMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKLEN; 
    }
    namespace MCI_dtor{
        using Addr = Register::Address<0xfffa8008,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DTOCYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> DTOMUL; 
    }
    namespace MCI_sdcr{
        using Addr = Register::Address<0xfffa800c,0xffffff7c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SDCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SDCBUS; 
    }
    namespace MCI_argr{
        using Addr = Register::Address<0xfffa8010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ARG; 
    }
    namespace MCI_cmdr{
        using Addr = Register::Address<0xfffa8014,0xfcc0e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CMDNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> RSPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SPCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OPDCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MAXLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TRCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TRDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19)> TRTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> IOSPCMD; 
    }
    namespace MCI_blkr{
        using Addr = Register::Address<0xfffa8018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKLEN; 
    }
    namespace MCI_rspr0{
        using Addr = Register::Address<0xfffa8020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace MCI_rspr1{
        using Addr = Register::Address<0xfffa8024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace MCI_rspr2{
        using Addr = Register::Address<0xfffa8028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace MCI_rspr3{
        using Addr = Register::Address<0xfffa802c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace MCI_rdr{
        using Addr = Register::Address<0xfffa8030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace MCI_tdr{
        using Addr = Register::Address<0xfffa8034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace MCI_sr{
        using Addr = Register::Address<0xfffa8040,0x3f803f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RINDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RENDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UNRE; 
    }
    namespace MCI_ier{
        using Addr = Register::Address<0xfffa8044,0x3f803f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RINDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RENDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UNRE; 
    }
    namespace MCI_idr{
        using Addr = Register::Address<0xfffa8048,0x3f803f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RINDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RENDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UNRE; 
    }
    namespace MCI_imr{
        using Addr = Register::Address<0xfffa804c,0x3f803f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RINDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RENDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UNRE; 
    }
    namespace MCI_rpr{
        using Addr = Register::Address<0xfffa8100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace MCI_rcr{
        using Addr = Register::Address<0xfffa8104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace MCI_tpr{
        using Addr = Register::Address<0xfffa8108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace MCI_tcr{
        using Addr = Register::Address<0xfffa810c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace MCI_rnpr{
        using Addr = Register::Address<0xfffa8110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace MCI_rncr{
        using Addr = Register::Address<0xfffa8114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace MCI_tnpr{
        using Addr = Register::Address<0xfffa8118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace MCI_tncr{
        using Addr = Register::Address<0xfffa811c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace MCI_ptcr{
        using Addr = Register::Address<0xfffa8120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace MCI_ptsr{
        using Addr = Register::Address<0xfffa8124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
