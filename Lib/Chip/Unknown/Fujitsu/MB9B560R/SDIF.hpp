#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SD Card Interface
    namespace Nonedummy{    ///<Dummy
        using Addr = Register::Address<0x4006e000,0xffffffff,0,unsigned>;
    }
}
