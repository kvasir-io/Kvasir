#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RFCTRL_fecfg{
        using Addr = Register::Address<0x42005400,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> F0CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> F1CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> F2CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> F3CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> F4CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> F5CFG; 
    }
}
