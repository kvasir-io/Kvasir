#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TRNG_cr{
        using Addr = Register::Address<0xf8040000,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> KEY; 
    }
    namespace TRNG_ier{
        using Addr = Register::Address<0xf8040010,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
    }
    namespace TRNG_idr{
        using Addr = Register::Address<0xf8040014,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
    }
    namespace TRNG_imr{
        using Addr = Register::Address<0xf8040018,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
    }
    namespace TRNG_isr{
        using Addr = Register::Address<0xf804001c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
    }
    namespace TRNG_odata{
        using Addr = Register::Address<0xf8040050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
}
