#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOC_pdor{
        using Addr = Register::Address<0x4007f080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace GPIOC_psor{
        using Addr = Register::Address<0x4007f084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace GPIOC_pcor{
        using Addr = Register::Address<0x4007f088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace GPIOC_ptor{
        using Addr = Register::Address<0x4007f08c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace GPIOC_pdir{
        using Addr = Register::Address<0x4007f090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace GPIOC_pddr{
        using Addr = Register::Address<0x4007f094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
