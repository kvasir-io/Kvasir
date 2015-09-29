#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Main PLL Control
    namespace Nonessctl1{    ///<SSCTL1
        using Addr = Register::Address<0x4003c800,0xffffffff,0,unsigned>;
    }
    namespace Nonessctl2{    ///<SSCTL2
        using Addr = Register::Address<0x4003c804,0xffffffff,0,unsigned>;
    }
}
