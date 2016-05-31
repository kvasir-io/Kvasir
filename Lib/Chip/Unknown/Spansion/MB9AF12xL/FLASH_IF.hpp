#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral FLASH_IF 
    namespace FlashIfFrwtr{    ///< register FRWTR 
        using Addr = Register::Address<0x40000004,0xfffffffc,0x00000000,unsigned>;
        /// bitfield RWT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rwt{}; 
    }
    namespace FlashIfFstr{    ///< register FSTR 
        using Addr = Register::Address<0x40000008,0xffffffc0,0x00000000,unsigned>;
        /// bitfield PGMS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pgms{}; 
        /// bitfield SERS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sers{}; 
        /// bitfield ESPS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> esps{}; 
        /// bitfield CERS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cers{}; 
        /// bitfield HNG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hng{}; 
        /// bitfield RDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdy{}; 
    }
    namespace FlashIfFicr{    ///< register FICR 
        using Addr = Register::Address<0x40000020,0xfffffffc,0x00000000,unsigned>;
        /// bitfield HANGIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangie{}; 
        /// bitfield RDYIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyie{}; 
    }
    namespace FlashIfFisr{    ///< register FISR 
        using Addr = Register::Address<0x40000024,0xfffffffc,0x00000000,unsigned>;
        /// bitfield HANGIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangif{}; 
        /// bitfield RDYIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyif{}; 
    }
    namespace FlashIfFiclr{    ///< register FICLR 
        using Addr = Register::Address<0x40000028,0xfffffffc,0x00000000,unsigned>;
        /// bitfield HANGC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangc{}; 
        /// bitfield RDYC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyc{}; 
    }
    namespace FlashIfCrtrmm{    ///< register CRTRMM 
        using Addr = Register::Address<0x40000100,0xffe0fc00,0x00000000,unsigned>;
        /// bitfield TTRMM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ttrmm{}; 
        /// bitfield TRMM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trmm{}; 
    }
}
