#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonereg_ctl{
        using Addr = Register::Address<0x40035100,0xfffffff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> ISUBSEL; 
    }
    namespace Nonerck_ctl{
        using Addr = Register::Address<0x40035104,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RTCCKE; 
    }
    namespace Nonepmd_ctl{
        using Addr = Register::Address<0x40035800,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RTCE; 
    }
}
