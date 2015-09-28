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
        using Addr = Register::Address<0xfffff208,0x3ffffd1c>;
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
        using Addr = Register::Address<0xfffff20c,0x3ffffd1c>;
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
        using Addr = Register::Address<0xfffff210,0x3ffffd1c>;
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
        using Addr = Register::Address<0xfffff214,0x3ffffd1c>;
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
}
