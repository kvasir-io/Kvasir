#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral SDIF 
    namespace Nonedummy{    ///< register DUMMY 
        using Addr = Register::Address<0x4006e000,0xffffffff,0,unsigned>;
    }
}
