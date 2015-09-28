#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace WDT_cr{
        using Addr = Register::Address<0xfffffe40,0x00fffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WDRSTT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> KEY; 
    }
    namespace WDT_mr{
        using Addr = Register::Address<0xfffffe44,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> WDV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WDFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WDRSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> WDRPROC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WDDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> WDD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> WDDBGHLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WDIDLEHLT; 
    }
    namespace WDT_sr{
        using Addr = Register::Address<0xfffffe48,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WDUNF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WDERR; 
    }
}
