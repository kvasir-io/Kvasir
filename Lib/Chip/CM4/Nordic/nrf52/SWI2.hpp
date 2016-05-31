#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Software interrupt 2
    namespace Swi2Unused{    ///<Unused.
        using Addr = Register::Address<0x40016000,0xffffffff,0x00000000,unsigned>;
    }
}
