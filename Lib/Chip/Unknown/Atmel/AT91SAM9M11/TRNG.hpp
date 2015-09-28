#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TRNG_cr{
        using Addr = Register::Address<0xfffcc000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
    }
    namespace TRNG_ier{
        using Addr = Register::Address<0xfffcc010,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
    }
    namespace TRNG_idr{
        using Addr = Register::Address<0xfffcc014,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
    }
    namespace TRNG_imr{
        using Addr = Register::Address<0xfffcc018,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
    }
    namespace TRNG_isr{
        using Addr = Register::Address<0xfffcc01c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
    }
    namespace TRNG_odata{
        using Addr = Register::Address<0xfffcc050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
}
