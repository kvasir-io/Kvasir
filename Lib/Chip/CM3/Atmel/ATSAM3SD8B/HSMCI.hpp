#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace HSMCI_cr{
        using Addr = Register::Address<0x40000000,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MCIDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWSDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWRST; 
    }
    namespace HSMCI_mr{
        using Addr = Register::Address<0x40000004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PWSDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RDPROOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WRPROOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FBYTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PADV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PDCMODE; 
    }
    namespace HSMCI_dtor{
        using Addr = Register::Address<0x40000008,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DTOCYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> DTOMUL; 
    }
    namespace HSMCI_sdcr{
        using Addr = Register::Address<0x4000000c,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SDCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SDCBUS; 
    }
    namespace HSMCI_argr{
        using Addr = Register::Address<0x40000010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ARG; 
    }
    namespace HSMCI_cmdr{
        using Addr = Register::Address<0x40000014,0xf0c0e000>;
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
    namespace HSMCI_blkr{
        using Addr = Register::Address<0x40000018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKLEN; 
    }
    namespace HSMCI_cstor{
        using Addr = Register::Address<0x4000001c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CSTOCYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CSTOMUL; 
    }
    namespace HSMCI_rspr0{
        using Addr = Register::Address<0x40000020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI_rspr1{
        using Addr = Register::Address<0x40000024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI_rspr2{
        using Addr = Register::Address<0x40000028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI_rspr3{
        using Addr = Register::Address<0x4000002c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI_rdr{
        using Addr = Register::Address<0x40000030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI_tdr{
        using Addr = Register::Address<0x40000034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI_sr{
        using Addr = Register::Address<0x40000040,0x03000e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SDIOIRQA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SDIOWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CSRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RINDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RENDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CSTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FIFOEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> XFRDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ACKRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ACKRCVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UNRE; 
    }
    namespace HSMCI_ier{
        using Addr = Register::Address<0x40000044,0x03000e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SDIOIRQA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SDIOWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CSRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RINDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RENDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CSTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FIFOEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> XFRDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ACKRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ACKRCVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UNRE; 
    }
    namespace HSMCI_idr{
        using Addr = Register::Address<0x40000048,0x03000e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SDIOIRQA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SDIOWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CSRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RINDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RENDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CSTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FIFOEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> XFRDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ACKRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ACKRCVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UNRE; 
    }
    namespace HSMCI_imr{
        using Addr = Register::Address<0x4000004c,0x03000e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SDIOIRQA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SDIOWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CSRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RINDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RENDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CSTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FIFOEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> XFRDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ACKRCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ACKRCVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UNRE; 
    }
    namespace HSMCI_cfg{
        using Addr = Register::Address<0x40000054,0xffffeeee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIFOMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FERRCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HSMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LSYNC; 
    }
    namespace HSMCI_wpmr{
        using Addr = Register::Address<0x400000e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WP_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WP_KEY; 
    }
    namespace HSMCI_wpsr{
        using Addr = Register::Address<0x400000e8,0xff0000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WP_VS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WP_VSRC; 
    }
    namespace HSMCI_fifo0{
        using Addr = Register::Address<0x40000200,0xffffffff>;
    }
    namespace HSMCI_fifo1{
        using Addr = Register::Address<0x40000204,0xffffffff>;
    }
    namespace HSMCI_fifo2{
        using Addr = Register::Address<0x40000208,0xffffffff>;
    }
    namespace HSMCI_fifo3{
        using Addr = Register::Address<0x4000020c,0xffffffff>;
    }
    namespace HSMCI_fifo4{
        using Addr = Register::Address<0x40000210,0xffffffff>;
    }
    namespace HSMCI_fifo5{
        using Addr = Register::Address<0x40000214,0xffffffff>;
    }
    namespace HSMCI_fifo6{
        using Addr = Register::Address<0x40000218,0xffffffff>;
    }
    namespace HSMCI_fifo7{
        using Addr = Register::Address<0x4000021c,0xffffffff>;
    }
    namespace HSMCI_fifo8{
        using Addr = Register::Address<0x40000220,0xffffffff>;
    }
    namespace HSMCI_fifo9{
        using Addr = Register::Address<0x40000224,0xffffffff>;
    }
    namespace HSMCI_fifo10{
        using Addr = Register::Address<0x40000228,0xffffffff>;
    }
    namespace HSMCI_fifo11{
        using Addr = Register::Address<0x4000022c,0xffffffff>;
    }
    namespace HSMCI_fifo12{
        using Addr = Register::Address<0x40000230,0xffffffff>;
    }
    namespace HSMCI_fifo13{
        using Addr = Register::Address<0x40000234,0xffffffff>;
    }
    namespace HSMCI_fifo14{
        using Addr = Register::Address<0x40000238,0xffffffff>;
    }
    namespace HSMCI_fifo15{
        using Addr = Register::Address<0x4000023c,0xffffffff>;
    }
    namespace HSMCI_fifo16{
        using Addr = Register::Address<0x40000240,0xffffffff>;
    }
    namespace HSMCI_fifo17{
        using Addr = Register::Address<0x40000244,0xffffffff>;
    }
    namespace HSMCI_fifo18{
        using Addr = Register::Address<0x40000248,0xffffffff>;
    }
    namespace HSMCI_fifo19{
        using Addr = Register::Address<0x4000024c,0xffffffff>;
    }
    namespace HSMCI_fifo20{
        using Addr = Register::Address<0x40000250,0xffffffff>;
    }
    namespace HSMCI_fifo21{
        using Addr = Register::Address<0x40000254,0xffffffff>;
    }
    namespace HSMCI_fifo22{
        using Addr = Register::Address<0x40000258,0xffffffff>;
    }
    namespace HSMCI_fifo23{
        using Addr = Register::Address<0x4000025c,0xffffffff>;
    }
    namespace HSMCI_fifo24{
        using Addr = Register::Address<0x40000260,0xffffffff>;
    }
    namespace HSMCI_fifo25{
        using Addr = Register::Address<0x40000264,0xffffffff>;
    }
    namespace HSMCI_fifo26{
        using Addr = Register::Address<0x40000268,0xffffffff>;
    }
    namespace HSMCI_fifo27{
        using Addr = Register::Address<0x4000026c,0xffffffff>;
    }
    namespace HSMCI_fifo28{
        using Addr = Register::Address<0x40000270,0xffffffff>;
    }
    namespace HSMCI_fifo29{
        using Addr = Register::Address<0x40000274,0xffffffff>;
    }
    namespace HSMCI_fifo30{
        using Addr = Register::Address<0x40000278,0xffffffff>;
    }
    namespace HSMCI_fifo31{
        using Addr = Register::Address<0x4000027c,0xffffffff>;
    }
    namespace HSMCI_fifo32{
        using Addr = Register::Address<0x40000280,0xffffffff>;
    }
    namespace HSMCI_fifo33{
        using Addr = Register::Address<0x40000284,0xffffffff>;
    }
    namespace HSMCI_fifo34{
        using Addr = Register::Address<0x40000288,0xffffffff>;
    }
    namespace HSMCI_fifo35{
        using Addr = Register::Address<0x4000028c,0xffffffff>;
    }
    namespace HSMCI_fifo36{
        using Addr = Register::Address<0x40000290,0xffffffff>;
    }
    namespace HSMCI_fifo37{
        using Addr = Register::Address<0x40000294,0xffffffff>;
    }
    namespace HSMCI_fifo38{
        using Addr = Register::Address<0x40000298,0xffffffff>;
    }
    namespace HSMCI_fifo39{
        using Addr = Register::Address<0x4000029c,0xffffffff>;
    }
    namespace HSMCI_fifo40{
        using Addr = Register::Address<0x400002a0,0xffffffff>;
    }
    namespace HSMCI_fifo41{
        using Addr = Register::Address<0x400002a4,0xffffffff>;
    }
    namespace HSMCI_fifo42{
        using Addr = Register::Address<0x400002a8,0xffffffff>;
    }
    namespace HSMCI_fifo43{
        using Addr = Register::Address<0x400002ac,0xffffffff>;
    }
    namespace HSMCI_fifo44{
        using Addr = Register::Address<0x400002b0,0xffffffff>;
    }
    namespace HSMCI_fifo45{
        using Addr = Register::Address<0x400002b4,0xffffffff>;
    }
    namespace HSMCI_fifo46{
        using Addr = Register::Address<0x400002b8,0xffffffff>;
    }
    namespace HSMCI_fifo47{
        using Addr = Register::Address<0x400002bc,0xffffffff>;
    }
    namespace HSMCI_fifo48{
        using Addr = Register::Address<0x400002c0,0xffffffff>;
    }
    namespace HSMCI_fifo49{
        using Addr = Register::Address<0x400002c4,0xffffffff>;
    }
    namespace HSMCI_fifo50{
        using Addr = Register::Address<0x400002c8,0xffffffff>;
    }
    namespace HSMCI_fifo51{
        using Addr = Register::Address<0x400002cc,0xffffffff>;
    }
    namespace HSMCI_fifo52{
        using Addr = Register::Address<0x400002d0,0xffffffff>;
    }
    namespace HSMCI_fifo53{
        using Addr = Register::Address<0x400002d4,0xffffffff>;
    }
    namespace HSMCI_fifo54{
        using Addr = Register::Address<0x400002d8,0xffffffff>;
    }
    namespace HSMCI_fifo55{
        using Addr = Register::Address<0x400002dc,0xffffffff>;
    }
    namespace HSMCI_fifo56{
        using Addr = Register::Address<0x400002e0,0xffffffff>;
    }
    namespace HSMCI_fifo57{
        using Addr = Register::Address<0x400002e4,0xffffffff>;
    }
    namespace HSMCI_fifo58{
        using Addr = Register::Address<0x400002e8,0xffffffff>;
    }
    namespace HSMCI_fifo59{
        using Addr = Register::Address<0x400002ec,0xffffffff>;
    }
    namespace HSMCI_fifo60{
        using Addr = Register::Address<0x400002f0,0xffffffff>;
    }
    namespace HSMCI_fifo61{
        using Addr = Register::Address<0x400002f4,0xffffffff>;
    }
    namespace HSMCI_fifo62{
        using Addr = Register::Address<0x400002f8,0xffffffff>;
    }
    namespace HSMCI_fifo63{
        using Addr = Register::Address<0x400002fc,0xffffffff>;
    }
    namespace HSMCI_fifo64{
        using Addr = Register::Address<0x40000300,0xffffffff>;
    }
    namespace HSMCI_fifo65{
        using Addr = Register::Address<0x40000304,0xffffffff>;
    }
    namespace HSMCI_fifo66{
        using Addr = Register::Address<0x40000308,0xffffffff>;
    }
    namespace HSMCI_fifo67{
        using Addr = Register::Address<0x4000030c,0xffffffff>;
    }
    namespace HSMCI_fifo68{
        using Addr = Register::Address<0x40000310,0xffffffff>;
    }
    namespace HSMCI_fifo69{
        using Addr = Register::Address<0x40000314,0xffffffff>;
    }
    namespace HSMCI_fifo70{
        using Addr = Register::Address<0x40000318,0xffffffff>;
    }
    namespace HSMCI_fifo71{
        using Addr = Register::Address<0x4000031c,0xffffffff>;
    }
    namespace HSMCI_fifo72{
        using Addr = Register::Address<0x40000320,0xffffffff>;
    }
    namespace HSMCI_fifo73{
        using Addr = Register::Address<0x40000324,0xffffffff>;
    }
    namespace HSMCI_fifo74{
        using Addr = Register::Address<0x40000328,0xffffffff>;
    }
    namespace HSMCI_fifo75{
        using Addr = Register::Address<0x4000032c,0xffffffff>;
    }
    namespace HSMCI_fifo76{
        using Addr = Register::Address<0x40000330,0xffffffff>;
    }
    namespace HSMCI_fifo77{
        using Addr = Register::Address<0x40000334,0xffffffff>;
    }
    namespace HSMCI_fifo78{
        using Addr = Register::Address<0x40000338,0xffffffff>;
    }
    namespace HSMCI_fifo79{
        using Addr = Register::Address<0x4000033c,0xffffffff>;
    }
    namespace HSMCI_fifo80{
        using Addr = Register::Address<0x40000340,0xffffffff>;
    }
    namespace HSMCI_fifo81{
        using Addr = Register::Address<0x40000344,0xffffffff>;
    }
    namespace HSMCI_fifo82{
        using Addr = Register::Address<0x40000348,0xffffffff>;
    }
    namespace HSMCI_fifo83{
        using Addr = Register::Address<0x4000034c,0xffffffff>;
    }
    namespace HSMCI_fifo84{
        using Addr = Register::Address<0x40000350,0xffffffff>;
    }
    namespace HSMCI_fifo85{
        using Addr = Register::Address<0x40000354,0xffffffff>;
    }
    namespace HSMCI_fifo86{
        using Addr = Register::Address<0x40000358,0xffffffff>;
    }
    namespace HSMCI_fifo87{
        using Addr = Register::Address<0x4000035c,0xffffffff>;
    }
    namespace HSMCI_fifo88{
        using Addr = Register::Address<0x40000360,0xffffffff>;
    }
    namespace HSMCI_fifo89{
        using Addr = Register::Address<0x40000364,0xffffffff>;
    }
    namespace HSMCI_fifo90{
        using Addr = Register::Address<0x40000368,0xffffffff>;
    }
    namespace HSMCI_fifo91{
        using Addr = Register::Address<0x4000036c,0xffffffff>;
    }
    namespace HSMCI_fifo92{
        using Addr = Register::Address<0x40000370,0xffffffff>;
    }
    namespace HSMCI_fifo93{
        using Addr = Register::Address<0x40000374,0xffffffff>;
    }
    namespace HSMCI_fifo94{
        using Addr = Register::Address<0x40000378,0xffffffff>;
    }
    namespace HSMCI_fifo95{
        using Addr = Register::Address<0x4000037c,0xffffffff>;
    }
    namespace HSMCI_fifo96{
        using Addr = Register::Address<0x40000380,0xffffffff>;
    }
    namespace HSMCI_fifo97{
        using Addr = Register::Address<0x40000384,0xffffffff>;
    }
    namespace HSMCI_fifo98{
        using Addr = Register::Address<0x40000388,0xffffffff>;
    }
    namespace HSMCI_fifo99{
        using Addr = Register::Address<0x4000038c,0xffffffff>;
    }
    namespace HSMCI_fifo100{
        using Addr = Register::Address<0x40000390,0xffffffff>;
    }
    namespace HSMCI_fifo101{
        using Addr = Register::Address<0x40000394,0xffffffff>;
    }
    namespace HSMCI_fifo102{
        using Addr = Register::Address<0x40000398,0xffffffff>;
    }
    namespace HSMCI_fifo103{
        using Addr = Register::Address<0x4000039c,0xffffffff>;
    }
    namespace HSMCI_fifo104{
        using Addr = Register::Address<0x400003a0,0xffffffff>;
    }
    namespace HSMCI_fifo105{
        using Addr = Register::Address<0x400003a4,0xffffffff>;
    }
    namespace HSMCI_fifo106{
        using Addr = Register::Address<0x400003a8,0xffffffff>;
    }
    namespace HSMCI_fifo107{
        using Addr = Register::Address<0x400003ac,0xffffffff>;
    }
    namespace HSMCI_fifo108{
        using Addr = Register::Address<0x400003b0,0xffffffff>;
    }
    namespace HSMCI_fifo109{
        using Addr = Register::Address<0x400003b4,0xffffffff>;
    }
    namespace HSMCI_fifo110{
        using Addr = Register::Address<0x400003b8,0xffffffff>;
    }
    namespace HSMCI_fifo111{
        using Addr = Register::Address<0x400003bc,0xffffffff>;
    }
    namespace HSMCI_fifo112{
        using Addr = Register::Address<0x400003c0,0xffffffff>;
    }
    namespace HSMCI_fifo113{
        using Addr = Register::Address<0x400003c4,0xffffffff>;
    }
    namespace HSMCI_fifo114{
        using Addr = Register::Address<0x400003c8,0xffffffff>;
    }
    namespace HSMCI_fifo115{
        using Addr = Register::Address<0x400003cc,0xffffffff>;
    }
    namespace HSMCI_fifo116{
        using Addr = Register::Address<0x400003d0,0xffffffff>;
    }
    namespace HSMCI_fifo117{
        using Addr = Register::Address<0x400003d4,0xffffffff>;
    }
    namespace HSMCI_fifo118{
        using Addr = Register::Address<0x400003d8,0xffffffff>;
    }
    namespace HSMCI_fifo119{
        using Addr = Register::Address<0x400003dc,0xffffffff>;
    }
    namespace HSMCI_fifo120{
        using Addr = Register::Address<0x400003e0,0xffffffff>;
    }
    namespace HSMCI_fifo121{
        using Addr = Register::Address<0x400003e4,0xffffffff>;
    }
    namespace HSMCI_fifo122{
        using Addr = Register::Address<0x400003e8,0xffffffff>;
    }
    namespace HSMCI_fifo123{
        using Addr = Register::Address<0x400003ec,0xffffffff>;
    }
    namespace HSMCI_fifo124{
        using Addr = Register::Address<0x400003f0,0xffffffff>;
    }
    namespace HSMCI_fifo125{
        using Addr = Register::Address<0x400003f4,0xffffffff>;
    }
    namespace HSMCI_fifo126{
        using Addr = Register::Address<0x400003f8,0xffffffff>;
    }
    namespace HSMCI_fifo127{
        using Addr = Register::Address<0x400003fc,0xffffffff>;
    }
    namespace HSMCI_fifo128{
        using Addr = Register::Address<0x40000400,0xffffffff>;
    }
    namespace HSMCI_fifo129{
        using Addr = Register::Address<0x40000404,0xffffffff>;
    }
    namespace HSMCI_fifo130{
        using Addr = Register::Address<0x40000408,0xffffffff>;
    }
    namespace HSMCI_fifo131{
        using Addr = Register::Address<0x4000040c,0xffffffff>;
    }
    namespace HSMCI_fifo132{
        using Addr = Register::Address<0x40000410,0xffffffff>;
    }
    namespace HSMCI_fifo133{
        using Addr = Register::Address<0x40000414,0xffffffff>;
    }
    namespace HSMCI_fifo134{
        using Addr = Register::Address<0x40000418,0xffffffff>;
    }
    namespace HSMCI_fifo135{
        using Addr = Register::Address<0x4000041c,0xffffffff>;
    }
    namespace HSMCI_fifo136{
        using Addr = Register::Address<0x40000420,0xffffffff>;
    }
    namespace HSMCI_fifo137{
        using Addr = Register::Address<0x40000424,0xffffffff>;
    }
    namespace HSMCI_fifo138{
        using Addr = Register::Address<0x40000428,0xffffffff>;
    }
    namespace HSMCI_fifo139{
        using Addr = Register::Address<0x4000042c,0xffffffff>;
    }
    namespace HSMCI_fifo140{
        using Addr = Register::Address<0x40000430,0xffffffff>;
    }
    namespace HSMCI_fifo141{
        using Addr = Register::Address<0x40000434,0xffffffff>;
    }
    namespace HSMCI_fifo142{
        using Addr = Register::Address<0x40000438,0xffffffff>;
    }
    namespace HSMCI_fifo143{
        using Addr = Register::Address<0x4000043c,0xffffffff>;
    }
    namespace HSMCI_fifo144{
        using Addr = Register::Address<0x40000440,0xffffffff>;
    }
    namespace HSMCI_fifo145{
        using Addr = Register::Address<0x40000444,0xffffffff>;
    }
    namespace HSMCI_fifo146{
        using Addr = Register::Address<0x40000448,0xffffffff>;
    }
    namespace HSMCI_fifo147{
        using Addr = Register::Address<0x4000044c,0xffffffff>;
    }
    namespace HSMCI_fifo148{
        using Addr = Register::Address<0x40000450,0xffffffff>;
    }
    namespace HSMCI_fifo149{
        using Addr = Register::Address<0x40000454,0xffffffff>;
    }
    namespace HSMCI_fifo150{
        using Addr = Register::Address<0x40000458,0xffffffff>;
    }
    namespace HSMCI_fifo151{
        using Addr = Register::Address<0x4000045c,0xffffffff>;
    }
    namespace HSMCI_fifo152{
        using Addr = Register::Address<0x40000460,0xffffffff>;
    }
    namespace HSMCI_fifo153{
        using Addr = Register::Address<0x40000464,0xffffffff>;
    }
    namespace HSMCI_fifo154{
        using Addr = Register::Address<0x40000468,0xffffffff>;
    }
    namespace HSMCI_fifo155{
        using Addr = Register::Address<0x4000046c,0xffffffff>;
    }
    namespace HSMCI_fifo156{
        using Addr = Register::Address<0x40000470,0xffffffff>;
    }
    namespace HSMCI_fifo157{
        using Addr = Register::Address<0x40000474,0xffffffff>;
    }
    namespace HSMCI_fifo158{
        using Addr = Register::Address<0x40000478,0xffffffff>;
    }
    namespace HSMCI_fifo159{
        using Addr = Register::Address<0x4000047c,0xffffffff>;
    }
    namespace HSMCI_fifo160{
        using Addr = Register::Address<0x40000480,0xffffffff>;
    }
    namespace HSMCI_fifo161{
        using Addr = Register::Address<0x40000484,0xffffffff>;
    }
    namespace HSMCI_fifo162{
        using Addr = Register::Address<0x40000488,0xffffffff>;
    }
    namespace HSMCI_fifo163{
        using Addr = Register::Address<0x4000048c,0xffffffff>;
    }
    namespace HSMCI_fifo164{
        using Addr = Register::Address<0x40000490,0xffffffff>;
    }
    namespace HSMCI_fifo165{
        using Addr = Register::Address<0x40000494,0xffffffff>;
    }
    namespace HSMCI_fifo166{
        using Addr = Register::Address<0x40000498,0xffffffff>;
    }
    namespace HSMCI_fifo167{
        using Addr = Register::Address<0x4000049c,0xffffffff>;
    }
    namespace HSMCI_fifo168{
        using Addr = Register::Address<0x400004a0,0xffffffff>;
    }
    namespace HSMCI_fifo169{
        using Addr = Register::Address<0x400004a4,0xffffffff>;
    }
    namespace HSMCI_fifo170{
        using Addr = Register::Address<0x400004a8,0xffffffff>;
    }
    namespace HSMCI_fifo171{
        using Addr = Register::Address<0x400004ac,0xffffffff>;
    }
    namespace HSMCI_fifo172{
        using Addr = Register::Address<0x400004b0,0xffffffff>;
    }
    namespace HSMCI_fifo173{
        using Addr = Register::Address<0x400004b4,0xffffffff>;
    }
    namespace HSMCI_fifo174{
        using Addr = Register::Address<0x400004b8,0xffffffff>;
    }
    namespace HSMCI_fifo175{
        using Addr = Register::Address<0x400004bc,0xffffffff>;
    }
    namespace HSMCI_fifo176{
        using Addr = Register::Address<0x400004c0,0xffffffff>;
    }
    namespace HSMCI_fifo177{
        using Addr = Register::Address<0x400004c4,0xffffffff>;
    }
    namespace HSMCI_fifo178{
        using Addr = Register::Address<0x400004c8,0xffffffff>;
    }
    namespace HSMCI_fifo179{
        using Addr = Register::Address<0x400004cc,0xffffffff>;
    }
    namespace HSMCI_fifo180{
        using Addr = Register::Address<0x400004d0,0xffffffff>;
    }
    namespace HSMCI_fifo181{
        using Addr = Register::Address<0x400004d4,0xffffffff>;
    }
    namespace HSMCI_fifo182{
        using Addr = Register::Address<0x400004d8,0xffffffff>;
    }
    namespace HSMCI_fifo183{
        using Addr = Register::Address<0x400004dc,0xffffffff>;
    }
    namespace HSMCI_fifo184{
        using Addr = Register::Address<0x400004e0,0xffffffff>;
    }
    namespace HSMCI_fifo185{
        using Addr = Register::Address<0x400004e4,0xffffffff>;
    }
    namespace HSMCI_fifo186{
        using Addr = Register::Address<0x400004e8,0xffffffff>;
    }
    namespace HSMCI_fifo187{
        using Addr = Register::Address<0x400004ec,0xffffffff>;
    }
    namespace HSMCI_fifo188{
        using Addr = Register::Address<0x400004f0,0xffffffff>;
    }
    namespace HSMCI_fifo189{
        using Addr = Register::Address<0x400004f4,0xffffffff>;
    }
    namespace HSMCI_fifo190{
        using Addr = Register::Address<0x400004f8,0xffffffff>;
    }
    namespace HSMCI_fifo191{
        using Addr = Register::Address<0x400004fc,0xffffffff>;
    }
    namespace HSMCI_fifo192{
        using Addr = Register::Address<0x40000500,0xffffffff>;
    }
    namespace HSMCI_fifo193{
        using Addr = Register::Address<0x40000504,0xffffffff>;
    }
    namespace HSMCI_fifo194{
        using Addr = Register::Address<0x40000508,0xffffffff>;
    }
    namespace HSMCI_fifo195{
        using Addr = Register::Address<0x4000050c,0xffffffff>;
    }
    namespace HSMCI_fifo196{
        using Addr = Register::Address<0x40000510,0xffffffff>;
    }
    namespace HSMCI_fifo197{
        using Addr = Register::Address<0x40000514,0xffffffff>;
    }
    namespace HSMCI_fifo198{
        using Addr = Register::Address<0x40000518,0xffffffff>;
    }
    namespace HSMCI_fifo199{
        using Addr = Register::Address<0x4000051c,0xffffffff>;
    }
    namespace HSMCI_fifo200{
        using Addr = Register::Address<0x40000520,0xffffffff>;
    }
    namespace HSMCI_fifo201{
        using Addr = Register::Address<0x40000524,0xffffffff>;
    }
    namespace HSMCI_fifo202{
        using Addr = Register::Address<0x40000528,0xffffffff>;
    }
    namespace HSMCI_fifo203{
        using Addr = Register::Address<0x4000052c,0xffffffff>;
    }
    namespace HSMCI_fifo204{
        using Addr = Register::Address<0x40000530,0xffffffff>;
    }
    namespace HSMCI_fifo205{
        using Addr = Register::Address<0x40000534,0xffffffff>;
    }
    namespace HSMCI_fifo206{
        using Addr = Register::Address<0x40000538,0xffffffff>;
    }
    namespace HSMCI_fifo207{
        using Addr = Register::Address<0x4000053c,0xffffffff>;
    }
    namespace HSMCI_fifo208{
        using Addr = Register::Address<0x40000540,0xffffffff>;
    }
    namespace HSMCI_fifo209{
        using Addr = Register::Address<0x40000544,0xffffffff>;
    }
    namespace HSMCI_fifo210{
        using Addr = Register::Address<0x40000548,0xffffffff>;
    }
    namespace HSMCI_fifo211{
        using Addr = Register::Address<0x4000054c,0xffffffff>;
    }
    namespace HSMCI_fifo212{
        using Addr = Register::Address<0x40000550,0xffffffff>;
    }
    namespace HSMCI_fifo213{
        using Addr = Register::Address<0x40000554,0xffffffff>;
    }
    namespace HSMCI_fifo214{
        using Addr = Register::Address<0x40000558,0xffffffff>;
    }
    namespace HSMCI_fifo215{
        using Addr = Register::Address<0x4000055c,0xffffffff>;
    }
    namespace HSMCI_fifo216{
        using Addr = Register::Address<0x40000560,0xffffffff>;
    }
    namespace HSMCI_fifo217{
        using Addr = Register::Address<0x40000564,0xffffffff>;
    }
    namespace HSMCI_fifo218{
        using Addr = Register::Address<0x40000568,0xffffffff>;
    }
    namespace HSMCI_fifo219{
        using Addr = Register::Address<0x4000056c,0xffffffff>;
    }
    namespace HSMCI_fifo220{
        using Addr = Register::Address<0x40000570,0xffffffff>;
    }
    namespace HSMCI_fifo221{
        using Addr = Register::Address<0x40000574,0xffffffff>;
    }
    namespace HSMCI_fifo222{
        using Addr = Register::Address<0x40000578,0xffffffff>;
    }
    namespace HSMCI_fifo223{
        using Addr = Register::Address<0x4000057c,0xffffffff>;
    }
    namespace HSMCI_fifo224{
        using Addr = Register::Address<0x40000580,0xffffffff>;
    }
    namespace HSMCI_fifo225{
        using Addr = Register::Address<0x40000584,0xffffffff>;
    }
    namespace HSMCI_fifo226{
        using Addr = Register::Address<0x40000588,0xffffffff>;
    }
    namespace HSMCI_fifo227{
        using Addr = Register::Address<0x4000058c,0xffffffff>;
    }
    namespace HSMCI_fifo228{
        using Addr = Register::Address<0x40000590,0xffffffff>;
    }
    namespace HSMCI_fifo229{
        using Addr = Register::Address<0x40000594,0xffffffff>;
    }
    namespace HSMCI_fifo230{
        using Addr = Register::Address<0x40000598,0xffffffff>;
    }
    namespace HSMCI_fifo231{
        using Addr = Register::Address<0x4000059c,0xffffffff>;
    }
    namespace HSMCI_fifo232{
        using Addr = Register::Address<0x400005a0,0xffffffff>;
    }
    namespace HSMCI_fifo233{
        using Addr = Register::Address<0x400005a4,0xffffffff>;
    }
    namespace HSMCI_fifo234{
        using Addr = Register::Address<0x400005a8,0xffffffff>;
    }
    namespace HSMCI_fifo235{
        using Addr = Register::Address<0x400005ac,0xffffffff>;
    }
    namespace HSMCI_fifo236{
        using Addr = Register::Address<0x400005b0,0xffffffff>;
    }
    namespace HSMCI_fifo237{
        using Addr = Register::Address<0x400005b4,0xffffffff>;
    }
    namespace HSMCI_fifo238{
        using Addr = Register::Address<0x400005b8,0xffffffff>;
    }
    namespace HSMCI_fifo239{
        using Addr = Register::Address<0x400005bc,0xffffffff>;
    }
    namespace HSMCI_fifo240{
        using Addr = Register::Address<0x400005c0,0xffffffff>;
    }
    namespace HSMCI_fifo241{
        using Addr = Register::Address<0x400005c4,0xffffffff>;
    }
    namespace HSMCI_fifo242{
        using Addr = Register::Address<0x400005c8,0xffffffff>;
    }
    namespace HSMCI_fifo243{
        using Addr = Register::Address<0x400005cc,0xffffffff>;
    }
    namespace HSMCI_fifo244{
        using Addr = Register::Address<0x400005d0,0xffffffff>;
    }
    namespace HSMCI_fifo245{
        using Addr = Register::Address<0x400005d4,0xffffffff>;
    }
    namespace HSMCI_fifo246{
        using Addr = Register::Address<0x400005d8,0xffffffff>;
    }
    namespace HSMCI_fifo247{
        using Addr = Register::Address<0x400005dc,0xffffffff>;
    }
    namespace HSMCI_fifo248{
        using Addr = Register::Address<0x400005e0,0xffffffff>;
    }
    namespace HSMCI_fifo249{
        using Addr = Register::Address<0x400005e4,0xffffffff>;
    }
    namespace HSMCI_fifo250{
        using Addr = Register::Address<0x400005e8,0xffffffff>;
    }
    namespace HSMCI_fifo251{
        using Addr = Register::Address<0x400005ec,0xffffffff>;
    }
    namespace HSMCI_fifo252{
        using Addr = Register::Address<0x400005f0,0xffffffff>;
    }
    namespace HSMCI_fifo253{
        using Addr = Register::Address<0x400005f4,0xffffffff>;
    }
    namespace HSMCI_fifo254{
        using Addr = Register::Address<0x400005f8,0xffffffff>;
    }
    namespace HSMCI_fifo255{
        using Addr = Register::Address<0x400005fc,0xffffffff>;
    }
    namespace HSMCI_rpr{
        using Addr = Register::Address<0x40000100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace HSMCI_rcr{
        using Addr = Register::Address<0x40000104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace HSMCI_tpr{
        using Addr = Register::Address<0x40000108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace HSMCI_tcr{
        using Addr = Register::Address<0x4000010c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace HSMCI_rnpr{
        using Addr = Register::Address<0x40000110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace HSMCI_rncr{
        using Addr = Register::Address<0x40000114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace HSMCI_tnpr{
        using Addr = Register::Address<0x40000118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace HSMCI_tncr{
        using Addr = Register::Address<0x4000011c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace HSMCI_ptcr{
        using Addr = Register::Address<0x40000120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace HSMCI_ptsr{
        using Addr = Register::Address<0x40000124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
