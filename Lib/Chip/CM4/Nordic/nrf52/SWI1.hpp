#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Software interrupt 1
    namespace Swi1Unused{    ///<Unused.
        using Addr = Register::Address<0x40015000,0xffffffff,0x00000000,unsigned>;
    }
}
