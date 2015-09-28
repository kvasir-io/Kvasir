#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOE_pdor{
        using Addr = Register::Address<0x400ff040,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDO; 
    }
    namespace GPIOE_pdir{
        using Addr = Register::Address<0x400ff050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDI; 
    }
    namespace GPIOE_pddr{
        using Addr = Register::Address<0x400ff054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDD; 
    }
    namespace GPIOE_gacr{
        using Addr = Register::Address<0x400ff05c,0xffffff78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ACB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ROB; 
    }
}
