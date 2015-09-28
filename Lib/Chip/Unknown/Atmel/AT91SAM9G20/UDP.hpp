#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace UDP_frm_num{
        using Addr = Register::Address<0xfffa4000,0xfffcf800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> FRM_NUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FRM_ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FRM_OK; 
    }
    namespace UDP_glb_stat{
        using Addr = Register::Address<0xfffa4004,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FADDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CONFG; 
    }
    namespace UDP_faddr{
        using Addr = Register::Address<0xfffa4008,0xfffffe80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> FADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FEN; 
    }
    namespace UDP_ier{
        using Addr = Register::Address<0xfffa4010,0xffffd4c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP2INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP3INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP4INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP5INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUP; 
    }
    namespace UDP_idr{
        using Addr = Register::Address<0xfffa4014,0xffffd4c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP2INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP3INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP4INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP5INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUP; 
    }
    namespace UDP_imr{
        using Addr = Register::Address<0xfffa4018,0xffffc4c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP2INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP3INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP4INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP5INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BIT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUP; 
    }
    namespace UDP_isr{
        using Addr = Register::Address<0xfffa401c,0xffffc4c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP2INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP3INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP4INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP5INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENDBUSRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUP; 
    }
    namespace UDP_icr{
        using Addr = Register::Address<0xfffa4020,0xffffc4ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENDBUSRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUP; 
    }
    namespace UDP_rst_ep{
        using Addr = Register::Address<0xfffa4028,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP5; 
    }
    namespace UDP_csr0{
        using Addr = Register::Address<0xfffa4030,0xf8007000>;
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
        using Addr = Register::Address<0xfffa4034,0xf8007000>;
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
        using Addr = Register::Address<0xfffa4038,0xf8007000>;
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
        using Addr = Register::Address<0xfffa403c,0xf8007000>;
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
        using Addr = Register::Address<0xfffa4040,0xf8007000>;
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
        using Addr = Register::Address<0xfffa4044,0xf8007000>;
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
        using Addr = Register::Address<0xfffa4030,0xf8007000>;
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
        using Addr = Register::Address<0xfffa4050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIFO_DATA; 
    }
    namespace UDP_fdr1{
        using Addr = Register::Address<0xfffa4054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIFO_DATA; 
    }
    namespace UDP_fdr2{
        using Addr = Register::Address<0xfffa4058,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIFO_DATA; 
    }
    namespace UDP_fdr3{
        using Addr = Register::Address<0xfffa405c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIFO_DATA; 
    }
    namespace UDP_fdr4{
        using Addr = Register::Address<0xfffa4060,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIFO_DATA; 
    }
    namespace UDP_fdr5{
        using Addr = Register::Address<0xfffa4064,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FIFO_DATA; 
    }
    namespace UDP_txvc{
        using Addr = Register::Address<0xfffa4074,0xfffffcff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXVDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PUON; 
    }
}
