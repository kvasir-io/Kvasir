#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//ADC
    namespace Nonetrgsel{    ///<Trigger Select Register
        using Addr = Register::Address<0x40066010,0xffff00fe,0,unsigned>;
        ///TRGSELEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trgselen{}; 
        ///TRGSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> trgsel{}; 
        ///HPTRGSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> hptrgsel{}; 
    }
}
