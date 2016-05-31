#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Encoder Input (ENC)
    namespace En0Tncr{    ///<Encoder Input Control Register
        using Addr = Register::Address<0x400f7000,0xfff80000,0x00000000,unsigned>;
        ///ENDEV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> endev{}; 
        ///INTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> inten{}; 
        ///NR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> nr{}; 
        ///ENRUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> enrun{}; 
        ///ZEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> zen{}; 
        ///CMPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmpen{}; 
        ///ZESEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> zesel{}; 
        ///ENCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enclr{}; 
        ///SFTCAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sftcap{}; 
        ///ZDET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> zdet{}; 
        ///UD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ud{}; 
        ///REVERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reverr{}; 
        ///CMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmp{}; 
        ///P3EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p3en{}; 
        ///MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace En0Reload{    ///<Encoder Counter Reload Register
        using Addr = Register::Address<0x400f7004,0xffff0000,0x00000000,unsigned>;
        ///RELOAD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reload{}; 
    }
    namespace En0Int{    ///<Encoder Compare Register
        using Addr = Register::Address<0x400f7008,0xff000000,0x00000000,unsigned>;
        ///INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> int_{}; 
    }
    namespace En0Cnt{    ///<Encoder Counter Register
        using Addr = Register::Address<0x400f700c,0xff000000,0x00000000,unsigned>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
}
