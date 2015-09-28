#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DMAMUX3_chcfg{
        using Addr = Register::Address<0x40024000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SOURCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENBL; 
    }
}
