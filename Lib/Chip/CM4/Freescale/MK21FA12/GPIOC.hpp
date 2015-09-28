#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOC_pdor{
        using Addr = Register::Address<0x400ff080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace GPIOC_psor{
        using Addr = Register::Address<0x400ff084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace GPIOC_pcor{
        using Addr = Register::Address<0x400ff088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace GPIOC_ptor{
        using Addr = Register::Address<0x400ff08c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace GPIOC_pdir{
        using Addr = Register::Address<0x400ff090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace GPIOC_pddr{
        using Addr = Register::Address<0x400ff094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
