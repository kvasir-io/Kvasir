#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedr{
        using Addr = Register::Address<0x40023000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> Data_register; 
    }
    namespace Noneidr{
        using Addr = Register::Address<0x40023004,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> Independent_data_register; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x40023008,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RESET; 
    }
}
