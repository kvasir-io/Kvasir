#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace HSMCI0_cr{
        using Addr = Register::Address<0xfff80000,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MCIDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWSDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWRST; 
    }
    namespace HSMCI0_mr{
        using Addr = Register::Address<0xfff80004,0x00008000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PWSDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RDPROOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WRPROOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FBYTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PADV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKLEN; 
    }
    namespace HSMCI0_dtor{
        using Addr = Register::Address<0xfff80008,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DTOCYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> DTOMUL; 
    }
    namespace HSMCI0_sdcr{
        using Addr = Register::Address<0xfff8000c,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SDCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SDCBUS; 
    }
    namespace HSMCI0_argr{
        using Addr = Register::Address<0xfff80010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ARG; 
    }
    namespace HSMCI0_cmdr{
        using Addr = Register::Address<0xfff80014,0xf0c0e000>;
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
        using Addr = Register::Address<0xfff80018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKLEN; 
    }
    namespace HSMCI0_cstor{
        using Addr = Register::Address<0xfff8001c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CSTOCYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CSTOMUL; 
    }
    namespace HSMCI0_rspr0{
        using Addr = Register::Address<0xfff80020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI0_rspr1{
        using Addr = Register::Address<0xfff80024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI0_rspr2{
        using Addr = Register::Address<0xfff80028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI0_rspr3{
        using Addr = Register::Address<0xfff8002c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSP; 
    }
    namespace HSMCI0_rdr{
        using Addr = Register::Address<0xfff80030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_tdr{
        using Addr = Register::Address<0xfff80034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace HSMCI0_sr{
        using Addr = Register::Address<0xfff80040,0x0000cec0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MCI_SDIOIRQA; 
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
        using Addr = Register::Address<0xfff80044,0x0000cec0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MCI_SDIOIRQA; 
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
        using Addr = Register::Address<0xfff80048,0x0000cec0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MCI_SDIOIRQA; 
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
        using Addr = Register::Address<0xfff8004c,0x0000cec0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NOTBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MCI_SDIOIRQA; 
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
        using Addr = Register::Address<0xfff80050,0xffffeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> OFFSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> CHKSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ROPT; 
    }
    namespace HSMCI0_cfg{
        using Addr = Register::Address<0xfff80054,0xffffeeee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIFOMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FERRCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HSMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LSYNC; 
    }
    namespace HSMCI0_wpmr{
        using Addr = Register::Address<0xfff800e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WP_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WP_KEY; 
    }
    namespace HSMCI0_wpsr{
        using Addr = Register::Address<0xfff800e8,0xff0000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WP_VS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WP_VSRC; 
    }
}
