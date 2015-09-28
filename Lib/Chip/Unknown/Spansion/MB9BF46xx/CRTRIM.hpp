#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemcr_psr{
        using Addr = Register::Address<0x4002e000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CSR; 
    }
    namespace Nonemcr_ftrm{
        using Addr = Register::Address<0x4002e004,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TRD; 
    }
    namespace Nonemcr_ttrm{
        using Addr = Register::Address<0x4002e008,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> TRT; 
    }
    namespace Nonemcr_rlr{
        using Addr = Register::Address<0x4002e00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TRMLCK; 
    }
}
