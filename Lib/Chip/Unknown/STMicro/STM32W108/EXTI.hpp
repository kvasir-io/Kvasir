#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneexti_pr{
        using Addr = Register::Address<0x4000a814,0xffffffff>;
    }
    namespace Noneextia_tsr{
        using Addr = Register::Address<0x4000a860,0xfffffe1f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> INTMOD; 
    }
    namespace Noneextib_tsr{
        using Addr = Register::Address<0x4000a864,0xfffffe1f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> INTMOD; 
    }
    namespace Noneextic_tsr{
        using Addr = Register::Address<0x4000a868,0xfffffe1f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> INTMOD; 
    }
    namespace Noneextic_cr{
        using Addr = Register::Address<0x4000bc14,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> GPIO_SEL; 
    }
    namespace Noneextid_tsr{
        using Addr = Register::Address<0x4000a86c,0xfffffe1f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> INTMOD; 
    }
    namespace Noneextid_cr{
        using Addr = Register::Address<0x4000bc18,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> GPIO_SEL; 
    }
}
