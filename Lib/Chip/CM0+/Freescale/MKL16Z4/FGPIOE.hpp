#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FGPIOE_pdor{
        using Addr = Register::Address<0xf8000100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace FGPIOE_psor{
        using Addr = Register::Address<0xf8000104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace FGPIOE_pcor{
        using Addr = Register::Address<0xf8000108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace FGPIOE_ptor{
        using Addr = Register::Address<0xf800010c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace FGPIOE_pdir{
        using Addr = Register::Address<0xf8000110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace FGPIOE_pddr{
        using Addr = Register::Address<0xf8000114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
