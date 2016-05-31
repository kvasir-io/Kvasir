#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Flash Control (FC)
    namespace FcSecbit{    ///<FC Security Bit Register
        using Addr = Register::Address<0x41fff010,0xfffffffe,0x00000000,unsigned>;
        ///SECBIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> secbit{}; 
    }
    namespace FcFlcs{    ///<FC Flash Control Register
        using Addr = Register::Address<0x41fff020,0xfff0fffe,0x00000000,unsigned>;
        ///RDY_BSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyBsy{}; 
        ///BLPRO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blpro{}; 
    }
    namespace FcDbgen{    ///<FC Debug enable monitor Register
        using Addr = Register::Address<0x41fff05c,0xfffffffc,0x00000000,unsigned>;
        ///EN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> en0{}; 
        ///EN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> en1{}; 
    }
}
