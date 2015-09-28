#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonelvd_ctl{
        using Addr = Register::Address<0x40035000,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LVDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,2)> SVHI; 
    }
    namespace Nonelvd_str{
        using Addr = Register::Address<0x40035004,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LVDIR; 
    }
    namespace Nonelvd_clr{
        using Addr = Register::Address<0x40035008,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LVDCL; 
    }
    namespace Nonelvd_rlr{
        using Addr = Register::Address<0x4003500c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> LVDLCK; 
    }
    namespace Nonelvd_str2{
        using Addr = Register::Address<0x40035010,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LVDIRDY; 
    }
}
