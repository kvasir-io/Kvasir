#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DBGU_cr{
        using Addr = Register::Address<0xffffee00,0xfffffe03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSTTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RSTSTA; 
    }
    namespace DBGU_mr{
        using Addr = Register::Address<0xffffee04,0xffff31ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> PAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CHMODE; 
    }
    namespace DBGU_ier{
        using Addr = Register::Address<0xffffee08,0x3fffe504>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMMTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMMRX; 
    }
    namespace DBGU_idr{
        using Addr = Register::Address<0xffffee0c,0x3fffe504>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMMTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMMRX; 
    }
    namespace DBGU_imr{
        using Addr = Register::Address<0xffffee10,0x3fffe504>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMMTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMMRX; 
    }
    namespace DBGU_sr{
        using Addr = Register::Address<0xffffee14,0x3fffe504>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMMTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMMRX; 
    }
    namespace DBGU_rhr{
        using Addr = Register::Address<0xffffee18,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXCHR; 
    }
    namespace DBGU_thr{
        using Addr = Register::Address<0xffffee1c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXCHR; 
    }
    namespace DBGU_brgr{
        using Addr = Register::Address<0xffffee20,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CD; 
    }
    namespace DBGU_cidr{
        using Addr = Register::Address<0xffffee40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> VERSION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> EPROC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> NVPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> NVPSIZ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> SRAMSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,20)> ARCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> NVPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EXT; 
    }
    namespace DBGU_exid{
        using Addr = Register::Address<0xffffee44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> EXID; 
    }
    namespace DBGU_fnr{
        using Addr = Register::Address<0xffffee48,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FNTRST; 
    }
    namespace DBGU_rpr{
        using Addr = Register::Address<0xffffef00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace DBGU_rcr{
        using Addr = Register::Address<0xffffef04,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace DBGU_tpr{
        using Addr = Register::Address<0xffffef08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace DBGU_tcr{
        using Addr = Register::Address<0xffffef0c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace DBGU_rnpr{
        using Addr = Register::Address<0xffffef10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace DBGU_rncr{
        using Addr = Register::Address<0xffffef14,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace DBGU_tnpr{
        using Addr = Register::Address<0xffffef18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace DBGU_tncr{
        using Addr = Register::Address<0xffffef1c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace DBGU_ptcr{
        using Addr = Register::Address<0xffffef20,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace DBGU_ptsr{
        using Addr = Register::Address<0xffffef24,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
