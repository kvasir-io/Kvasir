#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x40003014,0xffffffff>;
    }
    namespace Nonetasks_suspend{
        using Addr = Register::Address<0x4000301c,0xffffffff>;
    }
    namespace Nonetasks_resume{
        using Addr = Register::Address<0x40003020,0xffffffff>;
    }
    namespace Nonetasks_preparerx{
        using Addr = Register::Address<0x40003030,0xffffffff>;
    }
    namespace Nonetasks_preparetx{
        using Addr = Register::Address<0x40003034,0xffffffff>;
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
    namespace Noneevents_write{
        using Addr = Register::Address<0x40003164,0xffffffff>;
    }
    namespace Noneevents_read{
        using Addr = Register::Address<0x40003168,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x40003200,0xffff9fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WRITE_SUSPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> READ_SUSPEND; 
    }
    namespace Noneinten{
        using Addr = Register::Address<0x40003300,0xf9e7fdfd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WRITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> READ; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40003304,0xf9e7fdfd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WRITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> READ; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40003308,0xf9e7fdfd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TXSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WRITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> READ; 
    }
    namespace Noneerrorsrc{
        using Addr = Register::Address<0x400034d0,0xfffffff2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVERFLOW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DNACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVERREAD; 
    }
    namespace Nonematch{
        using Addr = Register::Address<0x400034d4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40003500,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ENABLE; 
    }
    namespace Noneaddress0{
        using Addr = Register::Address<0x40003588,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> ADDRESS; 
    }
    namespace Noneaddress1{
        using Addr = Register::Address<0x4000358c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> ADDRESS; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40003594,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADDRESS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADDRESS1; 
    }
    namespace Noneorc{
        using Addr = Register::Address<0x400035c0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ORC; 
    }
}
