#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral DAC0 
    namespace Dac1Dacr{    ///< register DACR 
        using Addr = Register::Address<0x40033008,0xffffffcc,0x00000000,unsigned char>;
        /// bitfield DDAS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ddas{}; 
        /// bitfield DAC10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dac10{}; 
        /// bitfield DRDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drdy{}; 
        /// bitfield DAE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dae{}; 
    }
    namespace Dac1Dadr{    ///< register DADR 
        using Addr = Register::Address<0x4003300c,0xfffffc00,0x00000000,unsigned>;
        /// bitfield DA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> da{}; 
    }
}
