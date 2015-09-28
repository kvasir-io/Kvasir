#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOE_pdor{
        using Addr = Register::Address<0x400ff100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace GPIOE_psor{
        using Addr = Register::Address<0x400ff104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace GPIOE_pcor{
        using Addr = Register::Address<0x400ff108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace GPIOE_ptor{
        using Addr = Register::Address<0x400ff10c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace GPIOE_pdir{
        using Addr = Register::Address<0x400ff110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace GPIOE_pddr{
        using Addr = Register::Address<0x400ff114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
