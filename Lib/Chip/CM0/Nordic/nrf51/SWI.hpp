#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//SW Interrupts.
    namespace SwiUnused{    ///<Unused.
        using Addr = Register::Address<0x40014000,0xffffffff,0x00000000,unsigned>;
    }
}
