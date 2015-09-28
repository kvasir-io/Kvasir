#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOG_pdor{
        using Addr = Register::Address<0x400ff042,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDO; 
    }
    namespace GPIOG_pdir{
        using Addr = Register::Address<0x400ff052,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDI; 
    }
    namespace GPIOG_pddr{
        using Addr = Register::Address<0x400ff056,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PDD; 
    }
    namespace GPIOG_gacr{
        using Addr = Register::Address<0x400ff05e,0xffffff78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ACB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ROB; 
    }
}
