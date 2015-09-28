#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FGPIOD_pdor{
        using Addr = Register::Address<0xf80ff0c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace FGPIOD_psor{
        using Addr = Register::Address<0xf80ff0c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace FGPIOD_pcor{
        using Addr = Register::Address<0xf80ff0c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace FGPIOD_ptor{
        using Addr = Register::Address<0xf80ff0cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace FGPIOD_pdir{
        using Addr = Register::Address<0xf80ff0d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace FGPIOD_pddr{
        using Addr = Register::Address<0xf80ff0d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
