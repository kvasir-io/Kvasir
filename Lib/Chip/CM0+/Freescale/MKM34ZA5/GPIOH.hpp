#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOH_pdor{
        using Addr = Register::Address<0x400ff043,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDO; 
    }
    namespace GPIOH_pdir{
        using Addr = Register::Address<0x400ff053,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDI; 
    }
    namespace GPIOH_pddr{
        using Addr = Register::Address<0x400ff057,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDD; 
    }
    namespace GPIOH_gacr{
        using Addr = Register::Address<0x400ff05f,0xffffff78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ACB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ROB; 
    }
}
