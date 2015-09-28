#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace VREF_trm{
        using Addr = Register::Address<0x40074000,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> TRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHOPEN; 
    }
    namespace VREF_sc{
        using Addr = Register::Address<0x40074001,0xffffff18>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE_LV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VREFST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ICOMPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> VREFEN; 
    }
}
