#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemod{
        using Addr = Register::Address<0x40000000,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WDRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDTOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WDINT; 
    }
    namespace Nonetc{
        using Addr = Register::Address<0x40000004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> Count; 
    }
    namespace Nonefeed{
        using Addr = Register::Address<0x40000008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Feed; 
    }
    namespace Nonetv{
        using Addr = Register::Address<0x4000000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> Count; 
    }
    namespace Noneclksel{
        using Addr = Register::Address<0x40000010,0x7ffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOCK; 
    }
}
