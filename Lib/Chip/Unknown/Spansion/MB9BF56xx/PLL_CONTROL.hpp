#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral PLL_CONTROL 
    namespace PllControlSsctl1{    ///< register SSCTL1 
        using Addr = Register::Address<0x4003c800,0xffffffff,0x00000000,unsigned>;
    }
    namespace PllControlSsctl2{    ///< register SSCTL2 
        using Addr = Register::Address<0x4003c804,0xffffffff,0x00000000,unsigned>;
    }
}
