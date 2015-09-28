#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_start{
        using Addr = Register::Address<0x4000d000,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x4000d004,0xffffffff>;
    }
    namespace Noneevents_valrdy{
        using Addr = Register::Address<0x4000d100,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x4000d200,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALRDY_STOP; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x4000d304,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALRDY; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x4000d308,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALRDY; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x4000d504,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DERCEN; 
    }
    namespace Nonevalue{
        using Addr = Register::Address<0x4000d508,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> VALUE; 
    }
}
