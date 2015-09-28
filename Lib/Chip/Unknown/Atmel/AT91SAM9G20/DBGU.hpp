#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DBGU_cr{
        using Addr = Register::Address<0xfffff200,0xfffffe03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSTTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RSTSTA; 
    }
    namespace DBGU_mr{
        using Addr = Register::Address<0xfffff204,0xffff31ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> PAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CHMODE; 
    }
    namespace DBGU_ier{
        using Addr = Register::Address<0xfffff208,0x3fffe504>;
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
        using Addr = Register::Address<0xfffff20c,0x3fffe504>;
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
        using Addr = Register::Address<0xfffff210,0x3fffe504>;
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
        using Addr = Register::Address<0xfffff214,0x3fffe504>;
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
        using Addr = Register::Address<0xfffff218,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXCHR; 
    }
    namespace DBGU_thr{
        using Addr = Register::Address<0xfffff21c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXCHR; 
    }
    namespace DBGU_brgr{
        using Addr = Register::Address<0xfffff220,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CD; 
    }
    namespace DBGU_cidr{
        using Addr = Register::Address<0xfffff240,0x00000000>;
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
        using Addr = Register::Address<0xfffff244,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> EXID; 
    }
    namespace DBGU_fnr{
        using Addr = Register::Address<0xfffff248,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FNTRST; 
    }
    namespace DBGU_rpr{
        using Addr = Register::Address<0xfffff300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace DBGU_rcr{
        using Addr = Register::Address<0xfffff304,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace DBGU_tpr{
        using Addr = Register::Address<0xfffff308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace DBGU_tcr{
        using Addr = Register::Address<0xfffff30c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace DBGU_rnpr{
        using Addr = Register::Address<0xfffff310,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace DBGU_rncr{
        using Addr = Register::Address<0xfffff314,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace DBGU_tnpr{
        using Addr = Register::Address<0xfffff318,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace DBGU_tncr{
        using Addr = Register::Address<0xfffff31c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace DBGU_ptcr{
        using Addr = Register::Address<0xfffff320,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace DBGU_ptsr{
        using Addr = Register::Address<0xfffff324,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
