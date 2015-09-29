#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral PLL_CONTROL 
    namespace Nonessctl1{    ///< register SSCTL1 
        using Addr = Register::Address<0x4003c800,0xffffffff,0,unsigned>;
    }
    namespace Nonessctl2{    ///< register SSCTL2 
        using Addr = Register::Address<0x4003c804,0xffffffff,0,unsigned>;
    }
}
