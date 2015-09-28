#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOA_pdor{
        using Addr = Register::Address<0x400ff000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDO; 
    }
    namespace GPIOA_pdir{
        using Addr = Register::Address<0x400ff010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDI; 
    }
    namespace GPIOA_pddr{
        using Addr = Register::Address<0x400ff014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDD; 
    }
    namespace GPIOA_gacr{
        using Addr = Register::Address<0x400ff01c,0xffffff78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ACB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ROB; 
    }
}
