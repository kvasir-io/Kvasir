#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOB_pdor{
        using Addr = Register::Address<0x400ff001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDO; 
    }
    namespace GPIOB_pdir{
        using Addr = Register::Address<0x400ff011,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDI; 
    }
    namespace GPIOB_pddr{
        using Addr = Register::Address<0x400ff015,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDD; 
    }
    namespace GPIOB_gacr{
        using Addr = Register::Address<0x400ff01d,0xffffff78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ACB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ROB; 
    }
}
