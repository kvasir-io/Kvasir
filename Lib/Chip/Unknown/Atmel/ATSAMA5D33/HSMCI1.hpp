#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace HSMCI1_cr{
        using Addr = Register::Address<0xf8000000,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MCIDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWSDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWRST; 
    }
    namespace HSMCI1_mr{
        using Addr = Register::Address<0xf8000004,0xfffe8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PWSDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RDPROOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WRPROOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FBYTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PADV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLKODD; 
    }
    namespace HSMCI1_dtor{
        using Addr = Register::Address<0xf8000008,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DTOCYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> DTOMUL; 
    }
    namespace HSMCI1_sdcr{
        using Addr = Register::Address<0xf800000c,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SDCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SDCBUS; 
    }
    namespace HSMCI1_argr{
        using Addr = Register::Address<0xf8000010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ARG; 
    }
    namespace HSMCI1_cmdr{
        using Addr = Register::Address<0xf8000014,0xf0c0e000>;
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
    namespace HSMCI1_blkr{
        using Addr = Register::Address<0xf8000018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKLEN; 
    }
    namespace HSMCI1_cstor{
        using Addr = Register::Address<0xf800001c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CSTOCYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CSTOMUL; 
    }
    namespace HSMCI1_rspr0{
        using Addr = Register::Address<0xf8000020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI1_rspr1{
        using Addr = Register::Address<0xf8000024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI1_rspr2{
        using Addr = Register::Address<0xf8000028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI1_rspr3{
        using Addr = Register::Address<0xf800002c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI1_rdr{
        using Addr = Register::Address<0xf8000030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_tdr{
        using Addr = Register::Address<0xf8000034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_sr{
        using Addr = Register::Address<0xf8000040,0x0000cec0>;
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
    namespace HSMCI1_ier{
        using Addr = Register::Address<0xf8000044,0x0000cec0>;
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
    namespace HSMCI1_idr{
        using Addr = Register::Address<0xf8000048,0x0000cec0>;
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
    namespace HSMCI1_imr{
        using Addr = Register::Address<0xf800004c,0x0000cec0>;
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
    namespace HSMCI1_dma{
        using Addr = Register::Address<0xf8000050,0xffffee8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> OFFSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CHKSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ROPT; 
    }
    namespace HSMCI1_cfg{
        using Addr = Register::Address<0xf8000054,0xffffeeee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIFOMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FERRCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HSMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LSYNC; 
    }
    namespace HSMCI1_wpmr{
        using Addr = Register::Address<0xf80000e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WP_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WP_KEY; 
    }
    namespace HSMCI1_wpsr{
        using Addr = Register::Address<0xf80000e8,0xff0000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WP_VS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WP_VSRC; 
    }
    namespace HSMCI1_fifo0{
        using Addr = Register::Address<0xf8000200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo1{
        using Addr = Register::Address<0xf8000204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo2{
        using Addr = Register::Address<0xf8000208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo3{
        using Addr = Register::Address<0xf800020c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo4{
        using Addr = Register::Address<0xf8000210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo5{
        using Addr = Register::Address<0xf8000214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo6{
        using Addr = Register::Address<0xf8000218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo7{
        using Addr = Register::Address<0xf800021c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo8{
        using Addr = Register::Address<0xf8000220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo9{
        using Addr = Register::Address<0xf8000224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo10{
        using Addr = Register::Address<0xf8000228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo11{
        using Addr = Register::Address<0xf800022c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo12{
        using Addr = Register::Address<0xf8000230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo13{
        using Addr = Register::Address<0xf8000234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo14{
        using Addr = Register::Address<0xf8000238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo15{
        using Addr = Register::Address<0xf800023c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo16{
        using Addr = Register::Address<0xf8000240,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo17{
        using Addr = Register::Address<0xf8000244,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo18{
        using Addr = Register::Address<0xf8000248,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo19{
        using Addr = Register::Address<0xf800024c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo20{
        using Addr = Register::Address<0xf8000250,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo21{
        using Addr = Register::Address<0xf8000254,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo22{
        using Addr = Register::Address<0xf8000258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo23{
        using Addr = Register::Address<0xf800025c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo24{
        using Addr = Register::Address<0xf8000260,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo25{
        using Addr = Register::Address<0xf8000264,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo26{
        using Addr = Register::Address<0xf8000268,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo27{
        using Addr = Register::Address<0xf800026c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo28{
        using Addr = Register::Address<0xf8000270,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo29{
        using Addr = Register::Address<0xf8000274,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo30{
        using Addr = Register::Address<0xf8000278,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo31{
        using Addr = Register::Address<0xf800027c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo32{
        using Addr = Register::Address<0xf8000280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo33{
        using Addr = Register::Address<0xf8000284,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo34{
        using Addr = Register::Address<0xf8000288,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo35{
        using Addr = Register::Address<0xf800028c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo36{
        using Addr = Register::Address<0xf8000290,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo37{
        using Addr = Register::Address<0xf8000294,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo38{
        using Addr = Register::Address<0xf8000298,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo39{
        using Addr = Register::Address<0xf800029c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo40{
        using Addr = Register::Address<0xf80002a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo41{
        using Addr = Register::Address<0xf80002a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo42{
        using Addr = Register::Address<0xf80002a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo43{
        using Addr = Register::Address<0xf80002ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo44{
        using Addr = Register::Address<0xf80002b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo45{
        using Addr = Register::Address<0xf80002b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo46{
        using Addr = Register::Address<0xf80002b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo47{
        using Addr = Register::Address<0xf80002bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo48{
        using Addr = Register::Address<0xf80002c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo49{
        using Addr = Register::Address<0xf80002c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo50{
        using Addr = Register::Address<0xf80002c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo51{
        using Addr = Register::Address<0xf80002cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo52{
        using Addr = Register::Address<0xf80002d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo53{
        using Addr = Register::Address<0xf80002d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo54{
        using Addr = Register::Address<0xf80002d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo55{
        using Addr = Register::Address<0xf80002dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo56{
        using Addr = Register::Address<0xf80002e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo57{
        using Addr = Register::Address<0xf80002e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo58{
        using Addr = Register::Address<0xf80002e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo59{
        using Addr = Register::Address<0xf80002ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo60{
        using Addr = Register::Address<0xf80002f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo61{
        using Addr = Register::Address<0xf80002f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo62{
        using Addr = Register::Address<0xf80002f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo63{
        using Addr = Register::Address<0xf80002fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo64{
        using Addr = Register::Address<0xf8000300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo65{
        using Addr = Register::Address<0xf8000304,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo66{
        using Addr = Register::Address<0xf8000308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo67{
        using Addr = Register::Address<0xf800030c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo68{
        using Addr = Register::Address<0xf8000310,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo69{
        using Addr = Register::Address<0xf8000314,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo70{
        using Addr = Register::Address<0xf8000318,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo71{
        using Addr = Register::Address<0xf800031c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo72{
        using Addr = Register::Address<0xf8000320,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo73{
        using Addr = Register::Address<0xf8000324,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo74{
        using Addr = Register::Address<0xf8000328,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo75{
        using Addr = Register::Address<0xf800032c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo76{
        using Addr = Register::Address<0xf8000330,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo77{
        using Addr = Register::Address<0xf8000334,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo78{
        using Addr = Register::Address<0xf8000338,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo79{
        using Addr = Register::Address<0xf800033c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo80{
        using Addr = Register::Address<0xf8000340,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo81{
        using Addr = Register::Address<0xf8000344,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo82{
        using Addr = Register::Address<0xf8000348,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo83{
        using Addr = Register::Address<0xf800034c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo84{
        using Addr = Register::Address<0xf8000350,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo85{
        using Addr = Register::Address<0xf8000354,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo86{
        using Addr = Register::Address<0xf8000358,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo87{
        using Addr = Register::Address<0xf800035c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo88{
        using Addr = Register::Address<0xf8000360,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo89{
        using Addr = Register::Address<0xf8000364,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo90{
        using Addr = Register::Address<0xf8000368,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo91{
        using Addr = Register::Address<0xf800036c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo92{
        using Addr = Register::Address<0xf8000370,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo93{
        using Addr = Register::Address<0xf8000374,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo94{
        using Addr = Register::Address<0xf8000378,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo95{
        using Addr = Register::Address<0xf800037c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo96{
        using Addr = Register::Address<0xf8000380,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo97{
        using Addr = Register::Address<0xf8000384,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo98{
        using Addr = Register::Address<0xf8000388,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo99{
        using Addr = Register::Address<0xf800038c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo100{
        using Addr = Register::Address<0xf8000390,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo101{
        using Addr = Register::Address<0xf8000394,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo102{
        using Addr = Register::Address<0xf8000398,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo103{
        using Addr = Register::Address<0xf800039c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo104{
        using Addr = Register::Address<0xf80003a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo105{
        using Addr = Register::Address<0xf80003a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo106{
        using Addr = Register::Address<0xf80003a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo107{
        using Addr = Register::Address<0xf80003ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo108{
        using Addr = Register::Address<0xf80003b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo109{
        using Addr = Register::Address<0xf80003b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo110{
        using Addr = Register::Address<0xf80003b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo111{
        using Addr = Register::Address<0xf80003bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo112{
        using Addr = Register::Address<0xf80003c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo113{
        using Addr = Register::Address<0xf80003c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo114{
        using Addr = Register::Address<0xf80003c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo115{
        using Addr = Register::Address<0xf80003cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo116{
        using Addr = Register::Address<0xf80003d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo117{
        using Addr = Register::Address<0xf80003d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo118{
        using Addr = Register::Address<0xf80003d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo119{
        using Addr = Register::Address<0xf80003dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo120{
        using Addr = Register::Address<0xf80003e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo121{
        using Addr = Register::Address<0xf80003e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo122{
        using Addr = Register::Address<0xf80003e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo123{
        using Addr = Register::Address<0xf80003ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo124{
        using Addr = Register::Address<0xf80003f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo125{
        using Addr = Register::Address<0xf80003f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo126{
        using Addr = Register::Address<0xf80003f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo127{
        using Addr = Register::Address<0xf80003fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo128{
        using Addr = Register::Address<0xf8000400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo129{
        using Addr = Register::Address<0xf8000404,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo130{
        using Addr = Register::Address<0xf8000408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo131{
        using Addr = Register::Address<0xf800040c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo132{
        using Addr = Register::Address<0xf8000410,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo133{
        using Addr = Register::Address<0xf8000414,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo134{
        using Addr = Register::Address<0xf8000418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo135{
        using Addr = Register::Address<0xf800041c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo136{
        using Addr = Register::Address<0xf8000420,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo137{
        using Addr = Register::Address<0xf8000424,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo138{
        using Addr = Register::Address<0xf8000428,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo139{
        using Addr = Register::Address<0xf800042c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo140{
        using Addr = Register::Address<0xf8000430,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo141{
        using Addr = Register::Address<0xf8000434,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo142{
        using Addr = Register::Address<0xf8000438,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo143{
        using Addr = Register::Address<0xf800043c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo144{
        using Addr = Register::Address<0xf8000440,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo145{
        using Addr = Register::Address<0xf8000444,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo146{
        using Addr = Register::Address<0xf8000448,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo147{
        using Addr = Register::Address<0xf800044c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo148{
        using Addr = Register::Address<0xf8000450,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo149{
        using Addr = Register::Address<0xf8000454,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo150{
        using Addr = Register::Address<0xf8000458,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo151{
        using Addr = Register::Address<0xf800045c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo152{
        using Addr = Register::Address<0xf8000460,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo153{
        using Addr = Register::Address<0xf8000464,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo154{
        using Addr = Register::Address<0xf8000468,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo155{
        using Addr = Register::Address<0xf800046c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo156{
        using Addr = Register::Address<0xf8000470,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo157{
        using Addr = Register::Address<0xf8000474,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo158{
        using Addr = Register::Address<0xf8000478,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo159{
        using Addr = Register::Address<0xf800047c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo160{
        using Addr = Register::Address<0xf8000480,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo161{
        using Addr = Register::Address<0xf8000484,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo162{
        using Addr = Register::Address<0xf8000488,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo163{
        using Addr = Register::Address<0xf800048c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo164{
        using Addr = Register::Address<0xf8000490,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo165{
        using Addr = Register::Address<0xf8000494,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo166{
        using Addr = Register::Address<0xf8000498,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo167{
        using Addr = Register::Address<0xf800049c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo168{
        using Addr = Register::Address<0xf80004a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo169{
        using Addr = Register::Address<0xf80004a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo170{
        using Addr = Register::Address<0xf80004a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo171{
        using Addr = Register::Address<0xf80004ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo172{
        using Addr = Register::Address<0xf80004b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo173{
        using Addr = Register::Address<0xf80004b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo174{
        using Addr = Register::Address<0xf80004b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo175{
        using Addr = Register::Address<0xf80004bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo176{
        using Addr = Register::Address<0xf80004c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo177{
        using Addr = Register::Address<0xf80004c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo178{
        using Addr = Register::Address<0xf80004c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo179{
        using Addr = Register::Address<0xf80004cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo180{
        using Addr = Register::Address<0xf80004d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo181{
        using Addr = Register::Address<0xf80004d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo182{
        using Addr = Register::Address<0xf80004d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo183{
        using Addr = Register::Address<0xf80004dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo184{
        using Addr = Register::Address<0xf80004e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo185{
        using Addr = Register::Address<0xf80004e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo186{
        using Addr = Register::Address<0xf80004e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo187{
        using Addr = Register::Address<0xf80004ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo188{
        using Addr = Register::Address<0xf80004f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo189{
        using Addr = Register::Address<0xf80004f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo190{
        using Addr = Register::Address<0xf80004f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo191{
        using Addr = Register::Address<0xf80004fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo192{
        using Addr = Register::Address<0xf8000500,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo193{
        using Addr = Register::Address<0xf8000504,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo194{
        using Addr = Register::Address<0xf8000508,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo195{
        using Addr = Register::Address<0xf800050c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo196{
        using Addr = Register::Address<0xf8000510,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo197{
        using Addr = Register::Address<0xf8000514,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo198{
        using Addr = Register::Address<0xf8000518,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo199{
        using Addr = Register::Address<0xf800051c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo200{
        using Addr = Register::Address<0xf8000520,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo201{
        using Addr = Register::Address<0xf8000524,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo202{
        using Addr = Register::Address<0xf8000528,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo203{
        using Addr = Register::Address<0xf800052c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo204{
        using Addr = Register::Address<0xf8000530,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo205{
        using Addr = Register::Address<0xf8000534,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo206{
        using Addr = Register::Address<0xf8000538,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo207{
        using Addr = Register::Address<0xf800053c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo208{
        using Addr = Register::Address<0xf8000540,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo209{
        using Addr = Register::Address<0xf8000544,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo210{
        using Addr = Register::Address<0xf8000548,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo211{
        using Addr = Register::Address<0xf800054c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo212{
        using Addr = Register::Address<0xf8000550,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo213{
        using Addr = Register::Address<0xf8000554,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo214{
        using Addr = Register::Address<0xf8000558,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo215{
        using Addr = Register::Address<0xf800055c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo216{
        using Addr = Register::Address<0xf8000560,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo217{
        using Addr = Register::Address<0xf8000564,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo218{
        using Addr = Register::Address<0xf8000568,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo219{
        using Addr = Register::Address<0xf800056c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo220{
        using Addr = Register::Address<0xf8000570,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo221{
        using Addr = Register::Address<0xf8000574,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo222{
        using Addr = Register::Address<0xf8000578,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo223{
        using Addr = Register::Address<0xf800057c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo224{
        using Addr = Register::Address<0xf8000580,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo225{
        using Addr = Register::Address<0xf8000584,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo226{
        using Addr = Register::Address<0xf8000588,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo227{
        using Addr = Register::Address<0xf800058c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo228{
        using Addr = Register::Address<0xf8000590,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo229{
        using Addr = Register::Address<0xf8000594,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo230{
        using Addr = Register::Address<0xf8000598,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo231{
        using Addr = Register::Address<0xf800059c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo232{
        using Addr = Register::Address<0xf80005a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo233{
        using Addr = Register::Address<0xf80005a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo234{
        using Addr = Register::Address<0xf80005a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo235{
        using Addr = Register::Address<0xf80005ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo236{
        using Addr = Register::Address<0xf80005b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo237{
        using Addr = Register::Address<0xf80005b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo238{
        using Addr = Register::Address<0xf80005b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo239{
        using Addr = Register::Address<0xf80005bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo240{
        using Addr = Register::Address<0xf80005c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo241{
        using Addr = Register::Address<0xf80005c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo242{
        using Addr = Register::Address<0xf80005c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo243{
        using Addr = Register::Address<0xf80005cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo244{
        using Addr = Register::Address<0xf80005d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo245{
        using Addr = Register::Address<0xf80005d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo246{
        using Addr = Register::Address<0xf80005d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo247{
        using Addr = Register::Address<0xf80005dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo248{
        using Addr = Register::Address<0xf80005e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo249{
        using Addr = Register::Address<0xf80005e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo250{
        using Addr = Register::Address<0xf80005e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo251{
        using Addr = Register::Address<0xf80005ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo252{
        using Addr = Register::Address<0xf80005f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo253{
        using Addr = Register::Address<0xf80005f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo254{
        using Addr = Register::Address<0xf80005f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI1_fifo255{
        using Addr = Register::Address<0xf80005fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
}
