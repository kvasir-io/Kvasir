#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TRNG_cr{
        using Addr = Register::Address<0x400bc000,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> KEY; 
    }
    namespace TRNG_ier{
        using Addr = Register::Address<0x400bc010,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
    }
    namespace TRNG_idr{
        using Addr = Register::Address<0x400bc014,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
    }
    namespace TRNG_imr{
        using Addr = Register::Address<0x400bc018,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
    }
    namespace TRNG_isr{
        using Addr = Register::Address<0x400bc01c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
    }
    namespace TRNG_odata{
        using Addr = Register::Address<0x400bc050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
}
