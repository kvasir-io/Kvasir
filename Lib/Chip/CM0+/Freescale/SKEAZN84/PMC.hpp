#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PMC_spmsc1{
        using Addr = Register::Address<0x4007d000,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BGBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LVDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LVDSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LVDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LVWIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LVWACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LVWF; 
    }
    namespace PMC_spmsc2{
        using Addr = Register::Address<0x4007d001,0xffffff8f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> LVWV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LVDV; 
    }
}
