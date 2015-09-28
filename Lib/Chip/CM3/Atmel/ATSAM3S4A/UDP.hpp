#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace UDP_frm_num{
        using Addr = Register::Address<0x40034000,0xfffcf800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> FRM_NUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FRM_ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FRM_OK; 
    }
    namespace UDP_glb_stat{
        using Addr = Register::Address<0x40034004,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FADDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CONFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ESR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSMINPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RMWUPE; 
    }
    namespace UDP_faddr{
        using Addr = Register::Address<0x40034008,0xfffffe80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> FADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FEN; 
    }
    namespace UDP_ier{
        using Addr = Register::Address<0x40034010,0xffffd000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP2INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP3INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP4INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP5INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EP6INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EP7INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUP; 
    }
    namespace UDP_idr{
        using Addr = Register::Address<0x40034014,0xffffd000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP2INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP3INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP4INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP5INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EP6INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EP7INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUP; 
    }
    namespace UDP_imr{
        using Addr = Register::Address<0x40034018,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP2INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP3INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP4INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP5INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EP6INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EP7INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BIT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUP; 
    }
    namespace UDP_isr{
        using Addr = Register::Address<0x4003401c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP2INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP3INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP4INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP5INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EP6INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EP7INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENDBUSRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUP; 
    }
    namespace UDP_icr{
        using Addr = Register::Address<0x40034020,0xffffc0ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENDBUSRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUP; 
    }
    namespace UDP_rst_ep{
        using Addr = Register::Address<0x40034028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EP7; 
    }
    namespace UDP_csr0{
        using Addr = Register::Address<0x40034030,0xf8007000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RX_DATA_BK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLSENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXPKTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FORCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RX_DATA_BK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DTGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPEDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> RXBYTECNT; 
    }
    namespace UDP_csr1{
        using Addr = Register::Address<0x40034034,0xf8007000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RX_DATA_BK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLSENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXPKTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FORCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RX_DATA_BK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DTGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPEDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> RXBYTECNT; 
    }
    namespace UDP_csr2{
        using Addr = Register::Address<0x40034038,0xf8007000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RX_DATA_BK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLSENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXPKTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FORCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RX_DATA_BK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DTGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPEDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> RXBYTECNT; 
    }
    namespace UDP_csr3{
        using Addr = Register::Address<0x4003403c,0xf8007000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RX_DATA_BK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLSENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXPKTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FORCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RX_DATA_BK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DTGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPEDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> RXBYTECNT; 
    }
    namespace UDP_csr4{
        using Addr = Register::Address<0x40034040,0xf8007000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RX_DATA_BK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLSENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXPKTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FORCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RX_DATA_BK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DTGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPEDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> RXBYTECNT; 
    }
    namespace UDP_csr5{
        using Addr = Register::Address<0x40034044,0xf8007000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RX_DATA_BK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLSENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXPKTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FORCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RX_DATA_BK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DTGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPEDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> RXBYTECNT; 
    }
    namespace UDP_csr6{
        using Addr = Register::Address<0x40034048,0xf8007000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RX_DATA_BK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLSENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXPKTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FORCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RX_DATA_BK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DTGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPEDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> RXBYTECNT; 
    }
    namespace UDP_csr7{
        using Addr = Register::Address<0x4003404c,0xf8007000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RX_DATA_BK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLSENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXPKTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FORCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RX_DATA_BK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DTGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPEDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> RXBYTECNT; 
    }
    namespace UDP_csr0_isoendpt{
        using Addr = Register::Address<0x40034030,0xf8007000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RX_DATA_BK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ISOERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXPKTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FORCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RX_DATA_BK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DTGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPEDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> RXBYTECNT; 
    }
    namespace UDP_fdr0{
        using Addr = Register::Address<0x40034050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIFO_DATA; 
    }
    namespace UDP_fdr1{
        using Addr = Register::Address<0x40034054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIFO_DATA; 
    }
    namespace UDP_fdr2{
        using Addr = Register::Address<0x40034058,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIFO_DATA; 
    }
    namespace UDP_fdr3{
        using Addr = Register::Address<0x4003405c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIFO_DATA; 
    }
    namespace UDP_fdr4{
        using Addr = Register::Address<0x40034060,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIFO_DATA; 
    }
    namespace UDP_fdr5{
        using Addr = Register::Address<0x40034064,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIFO_DATA; 
    }
    namespace UDP_fdr6{
        using Addr = Register::Address<0x40034068,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIFO_DATA; 
    }
    namespace UDP_fdr7{
        using Addr = Register::Address<0x4003406c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIFO_DATA; 
    }
    namespace UDP_txvc{
        using Addr = Register::Address<0x40034074,0xfffffcff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXVDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PUON; 
    }
}
