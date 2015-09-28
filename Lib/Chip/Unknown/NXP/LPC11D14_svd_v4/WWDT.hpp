#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonewdmod{
        using Addr = Register::Address<0x40004000,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WDRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDTOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WDINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WDPROTECT; 
    }
    namespace Nonewdtc{
        using Addr = Register::Address<0x40004004,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> Count; 
    }
    namespace Nonewdfeed{
        using Addr = Register::Address<0x40004008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Feed; 
    }
    namespace Nonewdtv{
        using Addr = Register::Address<0x4000400c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> Count; 
    }
    namespace Nonewdwarnint{
        using Addr = Register::Address<0x40004014,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> WARNINT; 
    }
    namespace Nonewdwindow{
        using Addr = Register::Address<0x40004018,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> WINDOW; 
    }
}
