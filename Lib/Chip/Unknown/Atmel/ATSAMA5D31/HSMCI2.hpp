#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace HSMCI2_cr{
        using Addr = Register::Address<0xf8004000,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MCIDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWSDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWRST; 
    }
    namespace HSMCI2_mr{
        using Addr = Register::Address<0xf8004004,0xfffe8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PWSDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RDPROOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WRPROOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FBYTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PADV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLKODD; 
    }
    namespace HSMCI2_dtor{
        using Addr = Register::Address<0xf8004008,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DTOCYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> DTOMUL; 
    }
    namespace HSMCI2_sdcr{
        using Addr = Register::Address<0xf800400c,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SDCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SDCBUS; 
    }
    namespace HSMCI2_argr{
        using Addr = Register::Address<0xf8004010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ARG; 
    }
    namespace HSMCI2_cmdr{
        using Addr = Register::Address<0xf8004014,0xf0c0e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CMDNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> RSPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SPCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OPDCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MAXLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TRCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TRDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19)> TRTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> IOSPCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> ATACS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> BOOT_ACK; 
    }
    namespace HSMCI2_blkr{
        using Addr = Register::Address<0xf8004018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKLEN; 
    }
    namespace HSMCI2_cstor{
        using Addr = Register::Address<0xf800401c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CSTOCYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CSTOMUL; 
    }
    namespace HSMCI2_rspr0{
        using Addr = Register::Address<0xf8004020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI2_rspr1{
        using Addr = Register::Address<0xf8004024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI2_rspr2{
        using Addr = Register::Address<0xf8004028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI2_rspr3{
        using Addr = Register::Address<0xf800402c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI2_rdr{
        using Addr = Register::Address<0xf8004030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_tdr{
        using Addr = Register::Address<0xf8004034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_sr{
        using Addr = Register::Address<0xf8004040,0x0000cec0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SDIOIRQA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SDIOWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CSRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RINDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RENDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CSTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> BLKOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMADONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FIFOEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> XFRDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ACKRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ACKRCVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UNRE; 
    }
    namespace HSMCI2_ier{
        using Addr = Register::Address<0xf8004044,0x0000cec0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SDIOIRQA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SDIOWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CSRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RINDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RENDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CSTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> BLKOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMADONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FIFOEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> XFRDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ACKRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ACKRCVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UNRE; 
    }
    namespace HSMCI2_idr{
        using Addr = Register::Address<0xf8004048,0x0000cec0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SDIOIRQA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SDIOWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CSRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RINDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RENDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CSTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> BLKOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMADONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FIFOEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> XFRDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ACKRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ACKRCVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UNRE; 
    }
    namespace HSMCI2_imr{
        using Addr = Register::Address<0xf800404c,0x0000cec0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SDIOIRQA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SDIOWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CSRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RINDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RENDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CSTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> BLKOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMADONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FIFOEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> XFRDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ACKRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ACKRCVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UNRE; 
    }
    namespace HSMCI2_dma{
        using Addr = Register::Address<0xf8004050,0xffffee8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> OFFSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CHKSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ROPT; 
    }
    namespace HSMCI2_cfg{
        using Addr = Register::Address<0xf8004054,0xffffeeee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIFOMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FERRCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HSMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LSYNC; 
    }
    namespace HSMCI2_wpmr{
        using Addr = Register::Address<0xf80040e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WP_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WP_KEY; 
    }
    namespace HSMCI2_wpsr{
        using Addr = Register::Address<0xf80040e8,0xff0000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WP_VS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WP_VSRC; 
    }
    namespace HSMCI2_fifo0{
        using Addr = Register::Address<0xf8004200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo1{
        using Addr = Register::Address<0xf8004204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo2{
        using Addr = Register::Address<0xf8004208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo3{
        using Addr = Register::Address<0xf800420c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo4{
        using Addr = Register::Address<0xf8004210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo5{
        using Addr = Register::Address<0xf8004214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo6{
        using Addr = Register::Address<0xf8004218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo7{
        using Addr = Register::Address<0xf800421c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo8{
        using Addr = Register::Address<0xf8004220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo9{
        using Addr = Register::Address<0xf8004224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo10{
        using Addr = Register::Address<0xf8004228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo11{
        using Addr = Register::Address<0xf800422c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo12{
        using Addr = Register::Address<0xf8004230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo13{
        using Addr = Register::Address<0xf8004234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo14{
        using Addr = Register::Address<0xf8004238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo15{
        using Addr = Register::Address<0xf800423c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo16{
        using Addr = Register::Address<0xf8004240,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo17{
        using Addr = Register::Address<0xf8004244,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo18{
        using Addr = Register::Address<0xf8004248,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo19{
        using Addr = Register::Address<0xf800424c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo20{
        using Addr = Register::Address<0xf8004250,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo21{
        using Addr = Register::Address<0xf8004254,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo22{
        using Addr = Register::Address<0xf8004258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo23{
        using Addr = Register::Address<0xf800425c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo24{
        using Addr = Register::Address<0xf8004260,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo25{
        using Addr = Register::Address<0xf8004264,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo26{
        using Addr = Register::Address<0xf8004268,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo27{
        using Addr = Register::Address<0xf800426c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo28{
        using Addr = Register::Address<0xf8004270,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo29{
        using Addr = Register::Address<0xf8004274,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo30{
        using Addr = Register::Address<0xf8004278,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo31{
        using Addr = Register::Address<0xf800427c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo32{
        using Addr = Register::Address<0xf8004280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo33{
        using Addr = Register::Address<0xf8004284,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo34{
        using Addr = Register::Address<0xf8004288,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo35{
        using Addr = Register::Address<0xf800428c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo36{
        using Addr = Register::Address<0xf8004290,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo37{
        using Addr = Register::Address<0xf8004294,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo38{
        using Addr = Register::Address<0xf8004298,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo39{
        using Addr = Register::Address<0xf800429c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo40{
        using Addr = Register::Address<0xf80042a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo41{
        using Addr = Register::Address<0xf80042a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo42{
        using Addr = Register::Address<0xf80042a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo43{
        using Addr = Register::Address<0xf80042ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo44{
        using Addr = Register::Address<0xf80042b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo45{
        using Addr = Register::Address<0xf80042b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo46{
        using Addr = Register::Address<0xf80042b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo47{
        using Addr = Register::Address<0xf80042bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo48{
        using Addr = Register::Address<0xf80042c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo49{
        using Addr = Register::Address<0xf80042c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo50{
        using Addr = Register::Address<0xf80042c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo51{
        using Addr = Register::Address<0xf80042cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo52{
        using Addr = Register::Address<0xf80042d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo53{
        using Addr = Register::Address<0xf80042d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo54{
        using Addr = Register::Address<0xf80042d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo55{
        using Addr = Register::Address<0xf80042dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo56{
        using Addr = Register::Address<0xf80042e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo57{
        using Addr = Register::Address<0xf80042e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo58{
        using Addr = Register::Address<0xf80042e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo59{
        using Addr = Register::Address<0xf80042ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo60{
        using Addr = Register::Address<0xf80042f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo61{
        using Addr = Register::Address<0xf80042f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo62{
        using Addr = Register::Address<0xf80042f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo63{
        using Addr = Register::Address<0xf80042fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo64{
        using Addr = Register::Address<0xf8004300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo65{
        using Addr = Register::Address<0xf8004304,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo66{
        using Addr = Register::Address<0xf8004308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo67{
        using Addr = Register::Address<0xf800430c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo68{
        using Addr = Register::Address<0xf8004310,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo69{
        using Addr = Register::Address<0xf8004314,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo70{
        using Addr = Register::Address<0xf8004318,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo71{
        using Addr = Register::Address<0xf800431c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo72{
        using Addr = Register::Address<0xf8004320,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo73{
        using Addr = Register::Address<0xf8004324,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo74{
        using Addr = Register::Address<0xf8004328,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo75{
        using Addr = Register::Address<0xf800432c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo76{
        using Addr = Register::Address<0xf8004330,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo77{
        using Addr = Register::Address<0xf8004334,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo78{
        using Addr = Register::Address<0xf8004338,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo79{
        using Addr = Register::Address<0xf800433c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo80{
        using Addr = Register::Address<0xf8004340,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo81{
        using Addr = Register::Address<0xf8004344,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo82{
        using Addr = Register::Address<0xf8004348,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo83{
        using Addr = Register::Address<0xf800434c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo84{
        using Addr = Register::Address<0xf8004350,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo85{
        using Addr = Register::Address<0xf8004354,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo86{
        using Addr = Register::Address<0xf8004358,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo87{
        using Addr = Register::Address<0xf800435c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo88{
        using Addr = Register::Address<0xf8004360,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo89{
        using Addr = Register::Address<0xf8004364,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo90{
        using Addr = Register::Address<0xf8004368,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo91{
        using Addr = Register::Address<0xf800436c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo92{
        using Addr = Register::Address<0xf8004370,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo93{
        using Addr = Register::Address<0xf8004374,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo94{
        using Addr = Register::Address<0xf8004378,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo95{
        using Addr = Register::Address<0xf800437c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo96{
        using Addr = Register::Address<0xf8004380,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo97{
        using Addr = Register::Address<0xf8004384,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo98{
        using Addr = Register::Address<0xf8004388,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo99{
        using Addr = Register::Address<0xf800438c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo100{
        using Addr = Register::Address<0xf8004390,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo101{
        using Addr = Register::Address<0xf8004394,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo102{
        using Addr = Register::Address<0xf8004398,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo103{
        using Addr = Register::Address<0xf800439c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo104{
        using Addr = Register::Address<0xf80043a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo105{
        using Addr = Register::Address<0xf80043a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo106{
        using Addr = Register::Address<0xf80043a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo107{
        using Addr = Register::Address<0xf80043ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo108{
        using Addr = Register::Address<0xf80043b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo109{
        using Addr = Register::Address<0xf80043b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo110{
        using Addr = Register::Address<0xf80043b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo111{
        using Addr = Register::Address<0xf80043bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo112{
        using Addr = Register::Address<0xf80043c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo113{
        using Addr = Register::Address<0xf80043c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo114{
        using Addr = Register::Address<0xf80043c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo115{
        using Addr = Register::Address<0xf80043cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo116{
        using Addr = Register::Address<0xf80043d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo117{
        using Addr = Register::Address<0xf80043d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo118{
        using Addr = Register::Address<0xf80043d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo119{
        using Addr = Register::Address<0xf80043dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo120{
        using Addr = Register::Address<0xf80043e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo121{
        using Addr = Register::Address<0xf80043e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo122{
        using Addr = Register::Address<0xf80043e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo123{
        using Addr = Register::Address<0xf80043ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo124{
        using Addr = Register::Address<0xf80043f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo125{
        using Addr = Register::Address<0xf80043f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo126{
        using Addr = Register::Address<0xf80043f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo127{
        using Addr = Register::Address<0xf80043fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo128{
        using Addr = Register::Address<0xf8004400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo129{
        using Addr = Register::Address<0xf8004404,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo130{
        using Addr = Register::Address<0xf8004408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo131{
        using Addr = Register::Address<0xf800440c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo132{
        using Addr = Register::Address<0xf8004410,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo133{
        using Addr = Register::Address<0xf8004414,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo134{
        using Addr = Register::Address<0xf8004418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo135{
        using Addr = Register::Address<0xf800441c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo136{
        using Addr = Register::Address<0xf8004420,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo137{
        using Addr = Register::Address<0xf8004424,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo138{
        using Addr = Register::Address<0xf8004428,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo139{
        using Addr = Register::Address<0xf800442c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo140{
        using Addr = Register::Address<0xf8004430,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo141{
        using Addr = Register::Address<0xf8004434,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo142{
        using Addr = Register::Address<0xf8004438,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo143{
        using Addr = Register::Address<0xf800443c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo144{
        using Addr = Register::Address<0xf8004440,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo145{
        using Addr = Register::Address<0xf8004444,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo146{
        using Addr = Register::Address<0xf8004448,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo147{
        using Addr = Register::Address<0xf800444c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo148{
        using Addr = Register::Address<0xf8004450,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo149{
        using Addr = Register::Address<0xf8004454,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo150{
        using Addr = Register::Address<0xf8004458,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo151{
        using Addr = Register::Address<0xf800445c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo152{
        using Addr = Register::Address<0xf8004460,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo153{
        using Addr = Register::Address<0xf8004464,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo154{
        using Addr = Register::Address<0xf8004468,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo155{
        using Addr = Register::Address<0xf800446c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo156{
        using Addr = Register::Address<0xf8004470,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo157{
        using Addr = Register::Address<0xf8004474,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo158{
        using Addr = Register::Address<0xf8004478,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo159{
        using Addr = Register::Address<0xf800447c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo160{
        using Addr = Register::Address<0xf8004480,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo161{
        using Addr = Register::Address<0xf8004484,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo162{
        using Addr = Register::Address<0xf8004488,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo163{
        using Addr = Register::Address<0xf800448c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo164{
        using Addr = Register::Address<0xf8004490,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo165{
        using Addr = Register::Address<0xf8004494,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo166{
        using Addr = Register::Address<0xf8004498,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo167{
        using Addr = Register::Address<0xf800449c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo168{
        using Addr = Register::Address<0xf80044a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo169{
        using Addr = Register::Address<0xf80044a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo170{
        using Addr = Register::Address<0xf80044a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo171{
        using Addr = Register::Address<0xf80044ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo172{
        using Addr = Register::Address<0xf80044b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo173{
        using Addr = Register::Address<0xf80044b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo174{
        using Addr = Register::Address<0xf80044b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo175{
        using Addr = Register::Address<0xf80044bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo176{
        using Addr = Register::Address<0xf80044c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo177{
        using Addr = Register::Address<0xf80044c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo178{
        using Addr = Register::Address<0xf80044c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo179{
        using Addr = Register::Address<0xf80044cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo180{
        using Addr = Register::Address<0xf80044d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo181{
        using Addr = Register::Address<0xf80044d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo182{
        using Addr = Register::Address<0xf80044d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo183{
        using Addr = Register::Address<0xf80044dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo184{
        using Addr = Register::Address<0xf80044e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo185{
        using Addr = Register::Address<0xf80044e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo186{
        using Addr = Register::Address<0xf80044e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo187{
        using Addr = Register::Address<0xf80044ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo188{
        using Addr = Register::Address<0xf80044f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo189{
        using Addr = Register::Address<0xf80044f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo190{
        using Addr = Register::Address<0xf80044f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo191{
        using Addr = Register::Address<0xf80044fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo192{
        using Addr = Register::Address<0xf8004500,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo193{
        using Addr = Register::Address<0xf8004504,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo194{
        using Addr = Register::Address<0xf8004508,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo195{
        using Addr = Register::Address<0xf800450c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo196{
        using Addr = Register::Address<0xf8004510,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo197{
        using Addr = Register::Address<0xf8004514,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo198{
        using Addr = Register::Address<0xf8004518,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo199{
        using Addr = Register::Address<0xf800451c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo200{
        using Addr = Register::Address<0xf8004520,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo201{
        using Addr = Register::Address<0xf8004524,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo202{
        using Addr = Register::Address<0xf8004528,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo203{
        using Addr = Register::Address<0xf800452c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo204{
        using Addr = Register::Address<0xf8004530,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo205{
        using Addr = Register::Address<0xf8004534,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo206{
        using Addr = Register::Address<0xf8004538,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo207{
        using Addr = Register::Address<0xf800453c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo208{
        using Addr = Register::Address<0xf8004540,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo209{
        using Addr = Register::Address<0xf8004544,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo210{
        using Addr = Register::Address<0xf8004548,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo211{
        using Addr = Register::Address<0xf800454c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo212{
        using Addr = Register::Address<0xf8004550,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo213{
        using Addr = Register::Address<0xf8004554,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo214{
        using Addr = Register::Address<0xf8004558,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo215{
        using Addr = Register::Address<0xf800455c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo216{
        using Addr = Register::Address<0xf8004560,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo217{
        using Addr = Register::Address<0xf8004564,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo218{
        using Addr = Register::Address<0xf8004568,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo219{
        using Addr = Register::Address<0xf800456c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo220{
        using Addr = Register::Address<0xf8004570,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo221{
        using Addr = Register::Address<0xf8004574,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo222{
        using Addr = Register::Address<0xf8004578,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo223{
        using Addr = Register::Address<0xf800457c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo224{
        using Addr = Register::Address<0xf8004580,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo225{
        using Addr = Register::Address<0xf8004584,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo226{
        using Addr = Register::Address<0xf8004588,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo227{
        using Addr = Register::Address<0xf800458c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo228{
        using Addr = Register::Address<0xf8004590,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo229{
        using Addr = Register::Address<0xf8004594,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo230{
        using Addr = Register::Address<0xf8004598,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo231{
        using Addr = Register::Address<0xf800459c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo232{
        using Addr = Register::Address<0xf80045a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo233{
        using Addr = Register::Address<0xf80045a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo234{
        using Addr = Register::Address<0xf80045a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo235{
        using Addr = Register::Address<0xf80045ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo236{
        using Addr = Register::Address<0xf80045b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo237{
        using Addr = Register::Address<0xf80045b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo238{
        using Addr = Register::Address<0xf80045b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo239{
        using Addr = Register::Address<0xf80045bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo240{
        using Addr = Register::Address<0xf80045c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo241{
        using Addr = Register::Address<0xf80045c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo242{
        using Addr = Register::Address<0xf80045c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo243{
        using Addr = Register::Address<0xf80045cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo244{
        using Addr = Register::Address<0xf80045d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo245{
        using Addr = Register::Address<0xf80045d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo246{
        using Addr = Register::Address<0xf80045d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo247{
        using Addr = Register::Address<0xf80045dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo248{
        using Addr = Register::Address<0xf80045e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo249{
        using Addr = Register::Address<0xf80045e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo250{
        using Addr = Register::Address<0xf80045e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo251{
        using Addr = Register::Address<0xf80045ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo252{
        using Addr = Register::Address<0xf80045f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo253{
        using Addr = Register::Address<0xf80045f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo254{
        using Addr = Register::Address<0xf80045f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI2_fifo255{
        using Addr = Register::Address<0xf80045fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
}
