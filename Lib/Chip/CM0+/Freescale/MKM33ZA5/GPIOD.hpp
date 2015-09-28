#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOD_pdor{
        using Addr = Register::Address<0x400ff003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDO; 
    }
    namespace GPIOD_pdir{
        using Addr = Register::Address<0x400ff013,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDI; 
    }
    namespace GPIOD_pddr{
        using Addr = Register::Address<0x400ff017,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDD; 
    }
    namespace GPIOD_gacr{
        using Addr = Register::Address<0x400ff01f,0xffffff78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ACB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ROB; 
    }
}
