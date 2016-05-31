#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Periodic Interval Timer
    namespace PitMr{    ///<Mode Register
        using Addr = Register::Address<0xfffffd30,0xfcf00000,0x00000000,unsigned>;
        ///Periodic Interval Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> piv{}; 
        ///Period Interval Timer Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> piten{}; 
        ///Periodic Interval Timer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pitien{}; 
    }
    namespace PitSr{    ///<Status Register
        using Addr = Register::Address<0xfffffd34,0xfffffffe,0x00000000,unsigned>;
        ///Periodic Interval Timer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pits{}; 
    }
    namespace PitPivr{    ///<Periodic Interval Value Register
        using Addr = Register::Address<0xfffffd38,0x00000000,0x00000000,unsigned>;
        ///Current Periodic Interval Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpiv{}; 
        ///Periodic Interval Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> picnt{}; 
    }
    namespace PitPiir{    ///<Periodic Interval Image Register
        using Addr = Register::Address<0xfffffd3c,0x00000000,0x00000000,unsigned>;
        ///Current Periodic Interval Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpiv{}; 
        ///Periodic Interval Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> picnt{}; 
    }
}
