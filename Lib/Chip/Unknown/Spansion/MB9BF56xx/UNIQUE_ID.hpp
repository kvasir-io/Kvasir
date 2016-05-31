#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral UNIQUE_ID 
    namespace UniqueIdUidr0{    ///< register UIDR0 
        using Addr = Register::Address<0x40000200,0x0000000f,0x00000000,unsigned>;
        /// bitfield UID 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uid{}; 
    }
    namespace UniqueIdUidr1{    ///< register UIDR1 
        using Addr = Register::Address<0x40000204,0xffffe000,0x00000000,unsigned>;
        /// bitfield UID 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uid{}; 
    }
}
