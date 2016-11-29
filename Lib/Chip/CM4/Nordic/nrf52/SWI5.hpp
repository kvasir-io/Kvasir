#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Software interrupt 5
    namespace Swi5Unused{    ///<Unused.
        using Addr = Register::Address<0x40019000,0xffffffff,0x00000000,unsigned>;
    }
}
