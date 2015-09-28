#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GPIOD_pdor{
        using Addr = Register::Address<0x400ff0c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace GPIOD_psor{
        using Addr = Register::Address<0x400ff0c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace GPIOD_pcor{
        using Addr = Register::Address<0x400ff0c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace GPIOD_ptor{
        using Addr = Register::Address<0x400ff0cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace GPIOD_pdir{
        using Addr = Register::Address<0x400ff0d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace GPIOD_pddr{
        using Addr = Register::Address<0x400ff0d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
