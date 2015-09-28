#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace HSMCI0_cr{
        using Addr = Register::Address<0xf0000000,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MCIDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWSDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWRST; 
    }
    namespace HSMCI0_mr{
        using Addr = Register::Address<0xf0000004,0xfffe8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PWSDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RDPROOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WRPROOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FBYTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PADV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLKODD; 
    }
    namespace HSMCI0_dtor{
        using Addr = Register::Address<0xf0000008,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DTOCYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> DTOMUL; 
    }
    namespace HSMCI0_sdcr{
        using Addr = Register::Address<0xf000000c,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SDCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SDCBUS; 
    }
    namespace HSMCI0_argr{
        using Addr = Register::Address<0xf0000010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ARG; 
    }
    namespace HSMCI0_cmdr{
        using Addr = Register::Address<0xf0000014,0xf0c0e000>;
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
    namespace HSMCI0_blkr{
        using Addr = Register::Address<0xf0000018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKLEN; 
    }
    namespace HSMCI0_cstor{
        using Addr = Register::Address<0xf000001c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CSTOCYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CSTOMUL; 
    }
    namespace HSMCI0_rspr0{
        using Addr = Register::Address<0xf0000020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI0_rspr1{
        using Addr = Register::Address<0xf0000024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI0_rspr2{
        using Addr = Register::Address<0xf0000028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI0_rspr3{
        using Addr = Register::Address<0xf000002c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI0_rdr{
        using Addr = Register::Address<0xf0000030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_tdr{
        using Addr = Register::Address<0xf0000034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_sr{
        using Addr = Register::Address<0xf0000040,0x0000cec0>;
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
    namespace HSMCI0_ier{
        using Addr = Register::Address<0xf0000044,0x0000cec0>;
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
    namespace HSMCI0_idr{
        using Addr = Register::Address<0xf0000048,0x0000cec0>;
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
    namespace HSMCI0_imr{
        using Addr = Register::Address<0xf000004c,0x0000cec0>;
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
    namespace HSMCI0_dma{
        using Addr = Register::Address<0xf0000050,0xffffee8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> OFFSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CHKSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ROPT; 
    }
    namespace HSMCI0_cfg{
        using Addr = Register::Address<0xf0000054,0xffffeeee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIFOMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FERRCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HSMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LSYNC; 
    }
    namespace HSMCI0_wpmr{
        using Addr = Register::Address<0xf00000e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WP_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WP_KEY; 
    }
    namespace HSMCI0_wpsr{
        using Addr = Register::Address<0xf00000e8,0xff0000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WP_VS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WP_VSRC; 
    }
    namespace HSMCI0_fifo0{
        using Addr = Register::Address<0xf0000200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo1{
        using Addr = Register::Address<0xf0000204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo2{
        using Addr = Register::Address<0xf0000208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo3{
        using Addr = Register::Address<0xf000020c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo4{
        using Addr = Register::Address<0xf0000210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo5{
        using Addr = Register::Address<0xf0000214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo6{
        using Addr = Register::Address<0xf0000218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo7{
        using Addr = Register::Address<0xf000021c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo8{
        using Addr = Register::Address<0xf0000220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo9{
        using Addr = Register::Address<0xf0000224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo10{
        using Addr = Register::Address<0xf0000228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo11{
        using Addr = Register::Address<0xf000022c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo12{
        using Addr = Register::Address<0xf0000230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo13{
        using Addr = Register::Address<0xf0000234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo14{
        using Addr = Register::Address<0xf0000238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo15{
        using Addr = Register::Address<0xf000023c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo16{
        using Addr = Register::Address<0xf0000240,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo17{
        using Addr = Register::Address<0xf0000244,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo18{
        using Addr = Register::Address<0xf0000248,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo19{
        using Addr = Register::Address<0xf000024c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo20{
        using Addr = Register::Address<0xf0000250,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo21{
        using Addr = Register::Address<0xf0000254,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo22{
        using Addr = Register::Address<0xf0000258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo23{
        using Addr = Register::Address<0xf000025c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo24{
        using Addr = Register::Address<0xf0000260,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo25{
        using Addr = Register::Address<0xf0000264,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo26{
        using Addr = Register::Address<0xf0000268,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo27{
        using Addr = Register::Address<0xf000026c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo28{
        using Addr = Register::Address<0xf0000270,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo29{
        using Addr = Register::Address<0xf0000274,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo30{
        using Addr = Register::Address<0xf0000278,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo31{
        using Addr = Register::Address<0xf000027c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo32{
        using Addr = Register::Address<0xf0000280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo33{
        using Addr = Register::Address<0xf0000284,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo34{
        using Addr = Register::Address<0xf0000288,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo35{
        using Addr = Register::Address<0xf000028c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo36{
        using Addr = Register::Address<0xf0000290,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo37{
        using Addr = Register::Address<0xf0000294,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo38{
        using Addr = Register::Address<0xf0000298,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo39{
        using Addr = Register::Address<0xf000029c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo40{
        using Addr = Register::Address<0xf00002a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo41{
        using Addr = Register::Address<0xf00002a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo42{
        using Addr = Register::Address<0xf00002a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo43{
        using Addr = Register::Address<0xf00002ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo44{
        using Addr = Register::Address<0xf00002b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo45{
        using Addr = Register::Address<0xf00002b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo46{
        using Addr = Register::Address<0xf00002b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo47{
        using Addr = Register::Address<0xf00002bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo48{
        using Addr = Register::Address<0xf00002c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo49{
        using Addr = Register::Address<0xf00002c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo50{
        using Addr = Register::Address<0xf00002c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo51{
        using Addr = Register::Address<0xf00002cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo52{
        using Addr = Register::Address<0xf00002d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo53{
        using Addr = Register::Address<0xf00002d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo54{
        using Addr = Register::Address<0xf00002d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo55{
        using Addr = Register::Address<0xf00002dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo56{
        using Addr = Register::Address<0xf00002e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo57{
        using Addr = Register::Address<0xf00002e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo58{
        using Addr = Register::Address<0xf00002e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo59{
        using Addr = Register::Address<0xf00002ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo60{
        using Addr = Register::Address<0xf00002f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo61{
        using Addr = Register::Address<0xf00002f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo62{
        using Addr = Register::Address<0xf00002f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo63{
        using Addr = Register::Address<0xf00002fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo64{
        using Addr = Register::Address<0xf0000300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo65{
        using Addr = Register::Address<0xf0000304,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo66{
        using Addr = Register::Address<0xf0000308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo67{
        using Addr = Register::Address<0xf000030c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo68{
        using Addr = Register::Address<0xf0000310,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo69{
        using Addr = Register::Address<0xf0000314,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo70{
        using Addr = Register::Address<0xf0000318,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo71{
        using Addr = Register::Address<0xf000031c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo72{
        using Addr = Register::Address<0xf0000320,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo73{
        using Addr = Register::Address<0xf0000324,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo74{
        using Addr = Register::Address<0xf0000328,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo75{
        using Addr = Register::Address<0xf000032c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo76{
        using Addr = Register::Address<0xf0000330,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo77{
        using Addr = Register::Address<0xf0000334,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo78{
        using Addr = Register::Address<0xf0000338,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo79{
        using Addr = Register::Address<0xf000033c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo80{
        using Addr = Register::Address<0xf0000340,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo81{
        using Addr = Register::Address<0xf0000344,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo82{
        using Addr = Register::Address<0xf0000348,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo83{
        using Addr = Register::Address<0xf000034c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo84{
        using Addr = Register::Address<0xf0000350,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo85{
        using Addr = Register::Address<0xf0000354,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo86{
        using Addr = Register::Address<0xf0000358,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo87{
        using Addr = Register::Address<0xf000035c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo88{
        using Addr = Register::Address<0xf0000360,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo89{
        using Addr = Register::Address<0xf0000364,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo90{
        using Addr = Register::Address<0xf0000368,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo91{
        using Addr = Register::Address<0xf000036c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo92{
        using Addr = Register::Address<0xf0000370,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo93{
        using Addr = Register::Address<0xf0000374,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo94{
        using Addr = Register::Address<0xf0000378,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo95{
        using Addr = Register::Address<0xf000037c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo96{
        using Addr = Register::Address<0xf0000380,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo97{
        using Addr = Register::Address<0xf0000384,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo98{
        using Addr = Register::Address<0xf0000388,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo99{
        using Addr = Register::Address<0xf000038c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo100{
        using Addr = Register::Address<0xf0000390,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo101{
        using Addr = Register::Address<0xf0000394,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo102{
        using Addr = Register::Address<0xf0000398,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo103{
        using Addr = Register::Address<0xf000039c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo104{
        using Addr = Register::Address<0xf00003a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo105{
        using Addr = Register::Address<0xf00003a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo106{
        using Addr = Register::Address<0xf00003a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo107{
        using Addr = Register::Address<0xf00003ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo108{
        using Addr = Register::Address<0xf00003b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo109{
        using Addr = Register::Address<0xf00003b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo110{
        using Addr = Register::Address<0xf00003b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo111{
        using Addr = Register::Address<0xf00003bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo112{
        using Addr = Register::Address<0xf00003c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo113{
        using Addr = Register::Address<0xf00003c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo114{
        using Addr = Register::Address<0xf00003c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo115{
        using Addr = Register::Address<0xf00003cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo116{
        using Addr = Register::Address<0xf00003d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo117{
        using Addr = Register::Address<0xf00003d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo118{
        using Addr = Register::Address<0xf00003d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo119{
        using Addr = Register::Address<0xf00003dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo120{
        using Addr = Register::Address<0xf00003e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo121{
        using Addr = Register::Address<0xf00003e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo122{
        using Addr = Register::Address<0xf00003e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo123{
        using Addr = Register::Address<0xf00003ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo124{
        using Addr = Register::Address<0xf00003f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo125{
        using Addr = Register::Address<0xf00003f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo126{
        using Addr = Register::Address<0xf00003f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo127{
        using Addr = Register::Address<0xf00003fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo128{
        using Addr = Register::Address<0xf0000400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo129{
        using Addr = Register::Address<0xf0000404,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo130{
        using Addr = Register::Address<0xf0000408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo131{
        using Addr = Register::Address<0xf000040c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo132{
        using Addr = Register::Address<0xf0000410,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo133{
        using Addr = Register::Address<0xf0000414,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo134{
        using Addr = Register::Address<0xf0000418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo135{
        using Addr = Register::Address<0xf000041c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo136{
        using Addr = Register::Address<0xf0000420,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo137{
        using Addr = Register::Address<0xf0000424,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo138{
        using Addr = Register::Address<0xf0000428,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo139{
        using Addr = Register::Address<0xf000042c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo140{
        using Addr = Register::Address<0xf0000430,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo141{
        using Addr = Register::Address<0xf0000434,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo142{
        using Addr = Register::Address<0xf0000438,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo143{
        using Addr = Register::Address<0xf000043c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo144{
        using Addr = Register::Address<0xf0000440,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo145{
        using Addr = Register::Address<0xf0000444,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo146{
        using Addr = Register::Address<0xf0000448,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo147{
        using Addr = Register::Address<0xf000044c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo148{
        using Addr = Register::Address<0xf0000450,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo149{
        using Addr = Register::Address<0xf0000454,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo150{
        using Addr = Register::Address<0xf0000458,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo151{
        using Addr = Register::Address<0xf000045c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo152{
        using Addr = Register::Address<0xf0000460,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo153{
        using Addr = Register::Address<0xf0000464,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo154{
        using Addr = Register::Address<0xf0000468,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo155{
        using Addr = Register::Address<0xf000046c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo156{
        using Addr = Register::Address<0xf0000470,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo157{
        using Addr = Register::Address<0xf0000474,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo158{
        using Addr = Register::Address<0xf0000478,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo159{
        using Addr = Register::Address<0xf000047c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo160{
        using Addr = Register::Address<0xf0000480,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo161{
        using Addr = Register::Address<0xf0000484,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo162{
        using Addr = Register::Address<0xf0000488,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo163{
        using Addr = Register::Address<0xf000048c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo164{
        using Addr = Register::Address<0xf0000490,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo165{
        using Addr = Register::Address<0xf0000494,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo166{
        using Addr = Register::Address<0xf0000498,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo167{
        using Addr = Register::Address<0xf000049c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo168{
        using Addr = Register::Address<0xf00004a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo169{
        using Addr = Register::Address<0xf00004a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo170{
        using Addr = Register::Address<0xf00004a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo171{
        using Addr = Register::Address<0xf00004ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo172{
        using Addr = Register::Address<0xf00004b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo173{
        using Addr = Register::Address<0xf00004b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo174{
        using Addr = Register::Address<0xf00004b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo175{
        using Addr = Register::Address<0xf00004bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo176{
        using Addr = Register::Address<0xf00004c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo177{
        using Addr = Register::Address<0xf00004c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo178{
        using Addr = Register::Address<0xf00004c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo179{
        using Addr = Register::Address<0xf00004cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo180{
        using Addr = Register::Address<0xf00004d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo181{
        using Addr = Register::Address<0xf00004d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo182{
        using Addr = Register::Address<0xf00004d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo183{
        using Addr = Register::Address<0xf00004dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo184{
        using Addr = Register::Address<0xf00004e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo185{
        using Addr = Register::Address<0xf00004e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo186{
        using Addr = Register::Address<0xf00004e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo187{
        using Addr = Register::Address<0xf00004ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo188{
        using Addr = Register::Address<0xf00004f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo189{
        using Addr = Register::Address<0xf00004f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo190{
        using Addr = Register::Address<0xf00004f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo191{
        using Addr = Register::Address<0xf00004fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo192{
        using Addr = Register::Address<0xf0000500,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo193{
        using Addr = Register::Address<0xf0000504,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo194{
        using Addr = Register::Address<0xf0000508,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo195{
        using Addr = Register::Address<0xf000050c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo196{
        using Addr = Register::Address<0xf0000510,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo197{
        using Addr = Register::Address<0xf0000514,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo198{
        using Addr = Register::Address<0xf0000518,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo199{
        using Addr = Register::Address<0xf000051c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo200{
        using Addr = Register::Address<0xf0000520,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo201{
        using Addr = Register::Address<0xf0000524,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo202{
        using Addr = Register::Address<0xf0000528,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo203{
        using Addr = Register::Address<0xf000052c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo204{
        using Addr = Register::Address<0xf0000530,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo205{
        using Addr = Register::Address<0xf0000534,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo206{
        using Addr = Register::Address<0xf0000538,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo207{
        using Addr = Register::Address<0xf000053c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo208{
        using Addr = Register::Address<0xf0000540,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo209{
        using Addr = Register::Address<0xf0000544,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo210{
        using Addr = Register::Address<0xf0000548,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo211{
        using Addr = Register::Address<0xf000054c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo212{
        using Addr = Register::Address<0xf0000550,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo213{
        using Addr = Register::Address<0xf0000554,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo214{
        using Addr = Register::Address<0xf0000558,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo215{
        using Addr = Register::Address<0xf000055c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo216{
        using Addr = Register::Address<0xf0000560,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo217{
        using Addr = Register::Address<0xf0000564,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo218{
        using Addr = Register::Address<0xf0000568,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo219{
        using Addr = Register::Address<0xf000056c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo220{
        using Addr = Register::Address<0xf0000570,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo221{
        using Addr = Register::Address<0xf0000574,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo222{
        using Addr = Register::Address<0xf0000578,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo223{
        using Addr = Register::Address<0xf000057c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo224{
        using Addr = Register::Address<0xf0000580,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo225{
        using Addr = Register::Address<0xf0000584,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo226{
        using Addr = Register::Address<0xf0000588,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo227{
        using Addr = Register::Address<0xf000058c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo228{
        using Addr = Register::Address<0xf0000590,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo229{
        using Addr = Register::Address<0xf0000594,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo230{
        using Addr = Register::Address<0xf0000598,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo231{
        using Addr = Register::Address<0xf000059c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo232{
        using Addr = Register::Address<0xf00005a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo233{
        using Addr = Register::Address<0xf00005a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo234{
        using Addr = Register::Address<0xf00005a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo235{
        using Addr = Register::Address<0xf00005ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo236{
        using Addr = Register::Address<0xf00005b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo237{
        using Addr = Register::Address<0xf00005b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo238{
        using Addr = Register::Address<0xf00005b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo239{
        using Addr = Register::Address<0xf00005bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo240{
        using Addr = Register::Address<0xf00005c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo241{
        using Addr = Register::Address<0xf00005c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo242{
        using Addr = Register::Address<0xf00005c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo243{
        using Addr = Register::Address<0xf00005cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo244{
        using Addr = Register::Address<0xf00005d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo245{
        using Addr = Register::Address<0xf00005d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo246{
        using Addr = Register::Address<0xf00005d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo247{
        using Addr = Register::Address<0xf00005dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo248{
        using Addr = Register::Address<0xf00005e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo249{
        using Addr = Register::Address<0xf00005e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo250{
        using Addr = Register::Address<0xf00005e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo251{
        using Addr = Register::Address<0xf00005ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo252{
        using Addr = Register::Address<0xf00005f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo253{
        using Addr = Register::Address<0xf00005f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo254{
        using Addr = Register::Address<0xf00005f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_fifo255{
        using Addr = Register::Address<0xf00005fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
}
