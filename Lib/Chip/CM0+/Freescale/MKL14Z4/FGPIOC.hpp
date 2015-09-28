#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FGPIOC_pdor{
        using Addr = Register::Address<0xf80ff080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace FGPIOC_psor{
        using Addr = Register::Address<0xf80ff084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace FGPIOC_pcor{
        using Addr = Register::Address<0xf80ff088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace FGPIOC_ptor{
        using Addr = Register::Address<0xf80ff08c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace FGPIOC_pdir{
        using Addr = Register::Address<0xf80ff090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace FGPIOC_pddr{
        using Addr = Register::Address<0xf80ff094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
