#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Software-based Simultaneous Startup Register
    namespace SbssrBtsssr{    ///<Software-based Simultaneous Startup Register
        using Addr = Register::Address<0x40025ffc,0xfffffff0,0x00000000,unsigned>;
        ///Software-based simultaneous startup bit of Ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sssr3{}; 
        ///Software-based simultaneous startup bit of Ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sssr2{}; 
        ///Software-based simultaneous startup bit of Ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sssr1{}; 
        ///Software-based simultaneous startup bit of Ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sssr0{}; 
    }
}
