#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Software interrupt 3
    namespace Swi3Unused{    ///<Unused.
        using Addr = Register::Address<0x40017000,0xffffffff,0x00000000,unsigned>;
    }
}
