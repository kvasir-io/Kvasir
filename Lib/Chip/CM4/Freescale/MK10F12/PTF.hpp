#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOF_pdor{
        using Addr = Register::Address<0x400ff140,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace GPIOF_psor{
        using Addr = Register::Address<0x400ff144,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace GPIOF_pcor{
        using Addr = Register::Address<0x400ff148,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace GPIOF_ptor{
        using Addr = Register::Address<0x400ff14c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace GPIOF_pdir{
        using Addr = Register::Address<0x400ff150,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace GPIOF_pddr{
        using Addr = Register::Address<0x400ff154,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
