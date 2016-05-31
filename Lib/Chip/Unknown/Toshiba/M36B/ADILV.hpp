#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//ADC
    namespace AdilvTrgsel{    ///<Trigger Select Register
        using Addr = Register::Address<0x40066010,0xffff00fe,0x00000000,unsigned>;
        ///TRGSELEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trgselen{}; 
        ///TRGSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> trgsel{}; 
        ///HPTRGSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> hptrgsel{}; 
    }
}
