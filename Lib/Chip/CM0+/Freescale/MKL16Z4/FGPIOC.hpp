#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FGPIOC_pdor{
        using Addr = Register::Address<0xf8000080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace FGPIOC_psor{
        using Addr = Register::Address<0xf8000084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace FGPIOC_pcor{
        using Addr = Register::Address<0xf8000088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace FGPIOC_ptor{
        using Addr = Register::Address<0xf800008c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace FGPIOC_pdir{
        using Addr = Register::Address<0xf8000090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace FGPIOC_pddr{
        using Addr = Register::Address<0xf8000094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
