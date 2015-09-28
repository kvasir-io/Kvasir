#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace VREF_vrefh_trm{
        using Addr = Register::Address<0x4006f000,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> TRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHOPEN; 
    }
    namespace VREF_vrefh_sc{
        using Addr = Register::Address<0x4006f001,0xffffff18>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE_LV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VREFST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ICOMPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> VREFEN; 
    }
    namespace VREF_vrefl_trm{
        using Addr = Register::Address<0x4006f005,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> VREFL_TRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VREFL_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> VREFL_SEL; 
    }
}
