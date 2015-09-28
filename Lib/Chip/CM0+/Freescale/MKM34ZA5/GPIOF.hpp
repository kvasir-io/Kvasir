#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOF_pdor{
        using Addr = Register::Address<0x400ff041,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDO; 
    }
    namespace GPIOF_pdir{
        using Addr = Register::Address<0x400ff051,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDI; 
    }
    namespace GPIOF_pddr{
        using Addr = Register::Address<0x400ff055,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDD; 
    }
    namespace GPIOF_gacr{
        using Addr = Register::Address<0x400ff05d,0xffffff78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ACB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ROB; 
    }
}
