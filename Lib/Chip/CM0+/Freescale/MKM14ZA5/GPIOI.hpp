#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOI_pdor{
        using Addr = Register::Address<0x400ff080,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDO; 
    }
    namespace GPIOI_pdir{
        using Addr = Register::Address<0x400ff090,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDI; 
    }
    namespace GPIOI_pddr{
        using Addr = Register::Address<0x400ff094,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDD; 
    }
    namespace GPIOI_gacr{
        using Addr = Register::Address<0x400ff09c,0xffffff78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ACB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ROB; 
    }
}
