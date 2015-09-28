#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FGPIOA_pdor{
        using Addr = Register::Address<0xf8000000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDO; 
    }
    namespace FGPIOA_psor{
        using Addr = Register::Address<0xf8000004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTSO; 
    }
    namespace FGPIOA_pcor{
        using Addr = Register::Address<0xf8000008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTCO; 
    }
    namespace FGPIOA_ptor{
        using Addr = Register::Address<0xf800000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTTO; 
    }
    namespace FGPIOA_pdir{
        using Addr = Register::Address<0xf8000010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDI; 
    }
    namespace FGPIOA_pddr{
        using Addr = Register::Address<0xf8000014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDD; 
    }
    namespace FGPIOA_pidr{
        using Addr = Register::Address<0xf8000018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PID; 
    }
}
