#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemod{
        using Addr = Register::Address<0x40080000,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WDRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDTOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WDINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WDPROTECT; 
    }
    namespace Nonetc{
        using Addr = Register::Address<0x40080004,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> WDTC; 
    }
    namespace Nonefeed{
        using Addr = Register::Address<0x40080008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Feed; 
    }
    namespace Nonetv{
        using Addr = Register::Address<0x4008000c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> Count; 
    }
    namespace Nonewarnint{
        using Addr = Register::Address<0x40080014,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> WDWARNINT; 
    }
    namespace Nonewindow{
        using Addr = Register::Address<0x40080018,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> WDWINDOW; 
    }
}
