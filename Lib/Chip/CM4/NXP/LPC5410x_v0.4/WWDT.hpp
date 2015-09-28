#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemod{
        using Addr = Register::Address<0x40038000,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WDRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDTOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WDINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WDPROTECT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LOCK; 
    }
    namespace Nonetc{
        using Addr = Register::Address<0x40038004,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> COUNT; 
    }
    namespace Nonefeed{
        using Addr = Register::Address<0x40038008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FEED; 
    }
    namespace Nonetv{
        using Addr = Register::Address<0x4003800c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> COUNT; 
    }
    namespace Nonewarnint{
        using Addr = Register::Address<0x40038014,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> WARNINT; 
    }
    namespace Nonewindow{
        using Addr = Register::Address<0x40038018,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> WINDOW; 
    }
}
