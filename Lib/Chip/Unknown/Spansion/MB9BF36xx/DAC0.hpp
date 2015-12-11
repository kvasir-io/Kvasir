#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral DAC0 
    namespace Nonedacr{    ///< register DACR 
        using Addr = Register::Address<0x40033000,0xffffffcc,0,unsigned char>;
        /// bitfield DDAS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ddas{}; 
        /// bitfield DAC10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dac10{}; 
        /// bitfield DRDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> drdy{}; 
        /// bitfield DAE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dae{}; 
    }
    namespace Nonedadr{    ///< register DADR 
        using Addr = Register::Address<0x40033004,0xfffffc00,0,unsigned>;
        /// bitfield DA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> da{}; 
    }
}
