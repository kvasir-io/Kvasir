#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Software interrupt 0
    namespace Noneunused{    ///<Unused.
        using Addr = Register::Address<0x40014000,0xffffffff,0,unsigned>;
    }
}
