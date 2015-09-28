#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_startrx{
        using Addr = Register::Address<0x40002000,0xffffffff>;
    }
    namespace Nonetasks_stoprx{
        using Addr = Register::Address<0x40002004,0xffffffff>;
    }
    namespace Nonetasks_starttx{
        using Addr = Register::Address<0x40002008,0xffffffff>;
    }
    namespace Nonetasks_stoptx{
        using Addr = Register::Address<0x4000200c,0xffffffff>;
    }
    namespace Nonetasks_suspend{
        using Addr = Register::Address<0x4000201c,0xffffffff>;
    }
    namespace Noneevents_cts{
        using Addr = Register::Address<0x40002100,0xffffffff>;
    }
    namespace Noneevents_ncts{
        using Addr = Register::Address<0x40002104,0xffffffff>;
    }
    namespace Noneevents_rxdrdy{
        using Addr = Register::Address<0x40002108,0xffffffff>;
    }
    namespace Noneevents_txdrdy{
        using Addr = Register::Address<0x4000211c,0xffffffff>;
    }
    namespace Noneevents_error{
        using Addr = Register::Address<0x40002124,0xffffffff>;
    }
    namespace Noneevents_rxto{
        using Addr = Register::Address<0x40002144,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x40002200,0xffffffe7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTS_STARTRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NCTS_STOPRX; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40002304,0xfffdfd78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXTO; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40002308,0xfffdfd78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXDRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXTO; 
    }
    namespace Noneerrorsrc{
        using Addr = Register::Address<0x40002480,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FRAMING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BREAK; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40002500,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ENABLE; 
    }
    namespace Nonepselrts{
        using Addr = Register::Address<0x40002508,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PSELRTS; 
    }
    namespace Nonepseltxd{
        using Addr = Register::Address<0x4000250c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PSELTXD; 
    }
    namespace Nonepselcts{
        using Addr = Register::Address<0x40002510,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PSELCTS; 
    }
    namespace Nonepselrxd{
        using Addr = Register::Address<0x40002514,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PSELRXD; 
    }
    namespace Nonerxd{
        using Addr = Register::Address<0x40002518,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXD; 
    }
    namespace Nonetxd{
        using Addr = Register::Address<0x4000251c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXD; 
    }
    namespace Nonebaudrate{
        using Addr = Register::Address<0x40002524,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BAUDRATE; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x4000256c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HWFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> PARITY; 
    }
}
