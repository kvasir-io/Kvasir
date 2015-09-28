#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FGPIOB_pdor{
        using Addr = Register::Address<0xf8000040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace FGPIOB_psor{
        using Addr = Register::Address<0xf8000044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace FGPIOB_pcor{
        using Addr = Register::Address<0xf8000048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace FGPIOB_ptor{
        using Addr = Register::Address<0xf800004c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace FGPIOB_pdir{
        using Addr = Register::Address<0xf8000050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace FGPIOB_pddr{
        using Addr = Register::Address<0xf8000054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
