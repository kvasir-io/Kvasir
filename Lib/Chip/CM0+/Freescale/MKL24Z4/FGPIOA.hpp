#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FGPIOA_pdor{
        using Addr = Register::Address<0xf80ff000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace FGPIOA_psor{
        using Addr = Register::Address<0xf80ff004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace FGPIOA_pcor{
        using Addr = Register::Address<0xf80ff008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace FGPIOA_ptor{
        using Addr = Register::Address<0xf80ff00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace FGPIOA_pdir{
        using Addr = Register::Address<0xf80ff010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace FGPIOA_pddr{
        using Addr = Register::Address<0xf80ff014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
}
