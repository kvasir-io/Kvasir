#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_start{
        using Addr = Register::Address<0x4000c000,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x4000c004,0xffffffff>;
    }
    namespace Noneevents_datardy{
        using Addr = Register::Address<0x4000c100,0xffffffff>;
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x4000c304,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATARDY; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x4000c308,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATARDY; 
    }
    namespace Nonetemp{
        using Addr = Register::Address<0x4000c508,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TEMP; 
    }
}
