#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral DAC0 
    namespace Dac0Dacr{    ///< register DACR 
        using Addr = Register::Address<0x40033000,0xffffffcc,0x00000000,unsigned char>;
        /// bitfield DDAS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ddas{}; 
        /// bitfield DAC10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dac10{}; 
        /// bitfield DRDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drdy{}; 
        /// bitfield DAE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dae{}; 
    }
    namespace Dac0Dadr{    ///< register DADR 
        using Addr = Register::Address<0x40033004,0xfffffc00,0x00000000,unsigned>;
        /// bitfield DA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> da{}; 
    }
}
