#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Software interrupt 4
    namespace Swi4Unused{    ///<Unused.
        using Addr = Register::Address<0x40018000,0xffffffff,0x00000000,unsigned>;
    }
}
