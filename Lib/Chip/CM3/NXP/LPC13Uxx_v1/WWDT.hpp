#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemod{
        using Addr = Register::Address<0x40004000,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WDRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDTOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WDINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WDPROTECT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LOCK; 
    }
    namespace Nonetc{
        using Addr = Register::Address<0x40004004,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> COUNT; 
    }
    namespace Nonefeed{
        using Addr = Register::Address<0x40004008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FEED; 
    }
    namespace Nonetv{
        using Addr = Register::Address<0x4000400c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> COUNT; 
    }
    namespace Noneclksel{
        using Addr = Register::Address<0x40004010,0x7ffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOCK; 
    }
    namespace Nonewarnint{
        using Addr = Register::Address<0x40004014,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> WARNINT; 
    }
    namespace Nonewindow{
        using Addr = Register::Address<0x40004018,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> WINDOW; 
    }
}
