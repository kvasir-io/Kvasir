#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Shutdown Controller
    namespace ShdwcCr{    ///<Shutdown Control Register
        using Addr = Register::Address<0xfffffe10,0x00fffffe,0x00000000,unsigned>;
        ///Shutdown Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shdw{}; 
        ///Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key{}; 
    }
    namespace ShdwcMr{    ///<Shutdown Mode Register
        using Addr = Register::Address<0xfffffe14,0xfffdff0c,0x00000000,unsigned>;
        ///Wake-up Mode 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wkmode0{}; 
        ///Counter on Wake-up 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cptwk0{}; 
        ///Real-time Clock Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rtcwken{}; 
    }
    namespace ShdwcSr{    ///<Shutdown Status Register
        using Addr = Register::Address<0xfffffe18,0xfffdfffe,0x00000000,unsigned>;
        ///Wake-up 0 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeup0{}; 
        ///Real-time Clock Wake-up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtcwk{}; 
    }
}
