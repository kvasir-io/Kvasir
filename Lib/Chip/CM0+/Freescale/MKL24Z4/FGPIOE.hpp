#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FGPIOE_pdor{
        using Addr = Register::Address<0xf80ff100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace FGPIOE_psor{
        using Addr = Register::Address<0xf80ff104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace FGPIOE_pcor{
        using Addr = Register::Address<0xf80ff108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace FGPIOE_ptor{
        using Addr = Register::Address<0xf80ff10c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace FGPIOE_pdir{
        using Addr = Register::Address<0xf80ff110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace FGPIOE_pddr{
        using Addr = Register::Address<0xf80ff114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
