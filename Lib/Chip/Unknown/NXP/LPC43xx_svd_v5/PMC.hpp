#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepd0_sleep0_hw_ena{
        using Addr = Register::Address<0x40042000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA_EVENT0; 
    }
    namespace Nonepd0_sleep0_mode{
        using Addr = Register::Address<0x4004201c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PWR_STATE; 
    }
}
