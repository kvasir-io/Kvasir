#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemcr_psr{
        using Addr = Register::Address<0x4002e000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CSR; 
    }
    namespace Nonemcr_ftrm{
        using Addr = Register::Address<0x4002e004,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TRD; 
    }
    namespace Nonemcr_rlr{
        using Addr = Register::Address<0x4002e00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TRMLCK; 
    }
}
