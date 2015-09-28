#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOB_pdor{
        using Addr = Register::Address<0x400ff040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace GPIOB_psor{
        using Addr = Register::Address<0x400ff044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace GPIOB_pcor{
        using Addr = Register::Address<0x400ff048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace GPIOB_ptor{
        using Addr = Register::Address<0x400ff04c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace GPIOB_pdir{
        using Addr = Register::Address<0x400ff050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace GPIOB_pddr{
        using Addr = Register::Address<0x400ff054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
