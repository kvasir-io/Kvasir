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
        using Addr = Register::Address<0x41fff020,0xffc0fffe,0x00000000,unsigned>;
        ///RDY_BSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyBsy{}; 
        ///BLPRO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blpro{}; 
    }
}
