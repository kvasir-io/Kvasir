#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_start{
        using Addr = Register::Address<0x40025000,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x40025004,0xffffffff>;
    }
    namespace Noneevents_rxptrupd{
        using Addr = Register::Address<0x40025104,0xffffffff>;
    }
    namespace Noneevents_stopped{
        using Addr = Register::Address<0x40025108,0xffffffff>;
    }
    namespace Noneevents_txptrupd{
        using Addr = Register::Address<0x40025114,0xffffffff>;
    }
    namespace Noneinten{
        using Addr = Register::Address<0x40025300,0xffffffd9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXPTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXPTRUPD; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40025304,0xffffffd9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXPTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXPTRUPD; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40025308,0xffffffd9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXPTRUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXPTRUPD; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40025500,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
    }
}
