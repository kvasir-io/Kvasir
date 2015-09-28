#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOC_pdor{
        using Addr = Register::Address<0x400ff002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDO; 
    }
    namespace GPIOC_pdir{
        using Addr = Register::Address<0x400ff012,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDI; 
    }
    namespace GPIOC_pddr{
        using Addr = Register::Address<0x400ff016,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDD; 
    }
    namespace GPIOC_gacr{
        using Addr = Register::Address<0x400ff01e,0xffffff78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ACB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ROB; 
    }
}
