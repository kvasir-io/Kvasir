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
        using Addr = Register::Address<0xffffee08,0x3ffffd1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMMTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMMRX; 
    }
    namespace DBGU_idr{
        using Addr = Register::Address<0xffffee0c,0x3ffffd1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMMTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMMRX; 
    }
    namespace DBGU_imr{
        using Addr = Register::Address<0xffffee10,0x3ffffd1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COMMTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMMRX; 
    }
    namespace DBGU_sr{
        using Addr = Register::Address<0xffffee14,0x3ffffd1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
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
}
