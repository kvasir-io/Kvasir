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
    namespace Noneevents_error{
        using Addr = Register::Address<0x40003124,0xffffffff>;
    }
    namespace Noneevents_rxstarted{
        using Addr = Register::Address<0x4000314c,0xffffffff>;
    }
    namespace Noneevents_txstarted{
        using Addr = Register::Address<0x40003150,0xffffffff>;
    }
    namespace Noneevents_lastrx{
        using Addr = Register::Address<0x4000315c,0xffffffff>;
    }
    namespace Noneevents_lasttx{
        using Addr = Register::Address<0x40003160,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x40003200,0xffffe87f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LASTTX_STARTRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LASTTX_SUSPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LASTTX_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LASTRX_STARTTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LASTRX_STOP; 
    }
    namespace Noneinten{
        using Addr = Register::Address<0x40003300,0xfe67fdfd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> LASTRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> LASTTX; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40003304,0xfe67fdfd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> LASTRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> LASTTX; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40003308,0xfe67fdfd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> LASTRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> LASTTX; 
    }
    namespace Noneerrorsrc{
        using Addr = Register::Address<0x400034c4,0xfffffff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ANACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DNACK; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40003500,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ENABLE; 
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
