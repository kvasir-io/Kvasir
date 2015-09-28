#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_startrx{
        using Addr = Register::Address<0x40003000,0xffffffff>;
    }
    namespace Nonetasks_starttx{
        using Addr = Register::Address<0x40003008,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x40003014,0xffffffff>;
    }
    namespace Nonetasks_suspend{
        using Addr = Register::Address<0x4000301c,0xffffffff>;
    }
    namespace Nonetasks_resume{
        using Addr = Register::Address<0x40003020,0xffffffff>;
    }
    namespace Noneevents_stopped{
        using Addr = Register::Address<0x40003104,0xffffffff>;
    }
    namespace Noneevents_rxdready{
        using Addr = Register::Address<0x40003108,0xffffffff>;
    }
    namespace Noneevents_txdsent{
        using Addr = Register::Address<0x4000311c,0xffffffff>;
    }
    namespace Noneevents_error{
        using Addr = Register::Address<0x40003124,0xffffffff>;
    }
    namespace Noneevents_bb{
        using Addr = Register::Address<0x40003138,0xffffffff>;
    }
    namespace Noneevents_suspended{
        using Addr = Register::Address<0x40003148,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x40003200,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BB_SUSPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BB_STOP; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40003304,0xfffbbd79>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXDREADY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXDSENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SUSPENDED; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40003308,0xfffbbd79>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXDREADY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXDSENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SUSPENDED; 
    }
    namespace Noneerrorsrc{
        using Addr = Register::Address<0x400034c4,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ANACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DNACK; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40003500,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ENABLE; 
    }
    namespace Nonepselscl{
        using Addr = Register::Address<0x40003508,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PSELSCL; 
    }
    namespace Nonepselsda{
        using Addr = Register::Address<0x4000350c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PSELSDA; 
    }
    namespace Nonerxd{
        using Addr = Register::Address<0x40003518,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXD; 
    }
    namespace Nonetxd{
        using Addr = Register::Address<0x4000351c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXD; 
    }
    namespace Nonefrequency{
        using Addr = Register::Address<0x40003524,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FREQUENCY; 
    }
    namespace Noneaddress{
        using Addr = Register::Address<0x40003588,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> ADDRESS; 
    }
}
