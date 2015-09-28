#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOA_pdor{
        using Addr = Register::Address<0x4007f000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace GPIOA_psor{
        using Addr = Register::Address<0x4007f004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace GPIOA_pcor{
        using Addr = Register::Address<0x4007f008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace GPIOA_ptor{
        using Addr = Register::Address<0x4007f00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace GPIOA_pdir{
        using Addr = Register::Address<0x4007f010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace GPIOA_pddr{
        using Addr = Register::Address<0x4007f014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
