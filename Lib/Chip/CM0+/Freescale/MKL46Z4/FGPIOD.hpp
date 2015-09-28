#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FGPIOD_pdor{
        using Addr = Register::Address<0xf80000c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace FGPIOD_psor{
        using Addr = Register::Address<0xf80000c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace FGPIOD_pcor{
        using Addr = Register::Address<0xf80000c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace FGPIOD_ptor{
        using Addr = Register::Address<0xf80000cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace FGPIOD_pdir{
        using Addr = Register::Address<0xf80000d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace FGPIOD_pddr{
        using Addr = Register::Address<0xf80000d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
