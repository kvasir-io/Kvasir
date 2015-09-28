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
    namespace Nonetasks_flushrx{
        using Addr = Register::Address<0x4000202c,0xffffffff>;
    }
    namespace Noneevents_cts{
        using Addr = Register::Address<0x40002100,0xffffffff>;
    }
    namespace Noneevents_ncts{
        using Addr = Register::Address<0x40002104,0xffffffff>;
    }
    namespace Noneevents_endrx{
        using Addr = Register::Address<0x40002110,0xffffffff>;
    }
    namespace Noneevents_endtx{
        using Addr = Register::Address<0x40002120,0xffffffff>;
    }
    namespace Noneevents_error{
        using Addr = Register::Address<0x40002124,0xffffffff>;
    }
    namespace Noneevents_rxto{
        using Addr = Register::Address<0x40002144,0xffffffff>;
    }
    namespace Noneevents_rxstarted{
        using Addr = Register::Address<0x4000214c,0xffffffff>;
    }
    namespace Noneevents_txstarted{
        using Addr = Register::Address<0x40002150,0xffffffff>;
    }
    namespace Noneevents_txstopped{
        using Addr = Register::Address<0x40002158,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x40002200,0xffffff9f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENDRX_STARTRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDRX_STOPRX; 
    }
    namespace Noneinten{
        using Addr = Register::Address<0x40002300,0xffa5fcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TXSTOPPED; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40002304,0xffa5fcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TXSTOPPED; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40002308,0xffa5fcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TXSTOPPED; 
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
