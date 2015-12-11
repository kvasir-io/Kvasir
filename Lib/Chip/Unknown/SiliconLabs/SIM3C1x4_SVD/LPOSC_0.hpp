#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneoscval{    ///<Low Power Oscillator Output Value
        using Addr = Register::Address<0x40041000,0xfffffff0,0,unsigned>;
        ///Low Power Oscillator Output Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> oscval{}; 
    }
}
