#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Random number generator
    namespace RngCr{    ///<control register
        using Addr = Register::Address<0x40025000,0xfffffff3,0x00000000,unsigned>;
        ///Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ie{}; 
        ///Random number generator              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rngen{}; 
    }
    namespace RngSr{    ///<status register
        using Addr = Register::Address<0x40025004,0xffffff98,0x00000000,unsigned>;
        ///Seed error interrupt              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> seis{}; 
        ///Clock error interrupt              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ceis{}; 
        ///Seed error current status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> secs{}; 
        ///Clock error current status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cecs{}; 
        ///Data ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drdy{}; 
    }
    namespace RngDr{    ///<data register
        using Addr = Register::Address<0x40025008,0x00000000,0x00000000,unsigned>;
        ///Random data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rndata{}; 
    }
}
