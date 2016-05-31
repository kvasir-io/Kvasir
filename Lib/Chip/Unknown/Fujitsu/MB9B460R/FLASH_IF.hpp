#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Flash Memory
    namespace FlashIfFaszr{    ///<Flash Access Size Register
        using Addr = Register::Address<0x40000000,0xfffffffc,0x00000000,unsigned>;
        ///Access Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> asz{}; 
    }
    namespace FlashIfFrwtr{    ///<Flash Read Wait Register
        using Addr = Register::Address<0x40000004,0xfffffffc,0x00000000,unsigned>;
        ///Read Wait Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rwt{}; 
    }
    namespace FlashIfFstr{    ///<Flash Status Register
        using Addr = Register::Address<0x40000008,0xfffffff8,0x00000000,unsigned>;
        ///Flash ECC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> err{}; 
        ///Flash Hang flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hng{}; 
        ///Flash Rdy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdy{}; 
    }
    namespace FlashIfFsyndn{    ///<Flash Sync Down Register
        using Addr = Register::Address<0x40000010,0xfffffff8,0x00000000,unsigned>;
        ///Sync Down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sd{}; 
    }
    namespace FlashIfFbfcr{    ///<Flash Buffer Control Register
        using Addr = Register::Address<0x40000014,0xfffffffc,0x00000000,unsigned>;
        ///Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bs{}; 
        ///Buffer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> be{}; 
    }
    namespace FlashIfFicr{    ///<Flash Interrupt Control Register
        using Addr = Register::Address<0x40000020,0xfffffff8,0x00000000,unsigned>;
        ///Flash ECC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errie{}; 
        ///HANG Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangie{}; 
        ///RDY Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyie{}; 
    }
    namespace FlashIfFisr{    ///<Flash Interrupt Status Register
        using Addr = Register::Address<0x40000024,0xfffffff8,0x00000000,unsigned>;
        ///Flash ECC Error Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errif{}; 
        ///HANG Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hangif{}; 
        ///RDY Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyif{}; 
    }
    namespace FlashIfFiclr{    ///<Flash Interrupt Clear Register
        using Addr = Register::Address<0x40000028,0xfffffff8,0x00000000,unsigned>;
        ///Flash ECC Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> erric{}; 
        ///HANG Interrupt Clear 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangic{}; 
        ///RDY Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyic{}; 
    }
    namespace FlashIfCrtrmm{    ///<CR Trimming Data Mirror Register
        using Addr = Register::Address<0x40000100,0xffe0fc00,0x00000000,unsigned>;
        ///CR Temperature Trimming Data Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ttrmm{}; 
        ///CR Trimming Data Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trmm{}; 
    }
}
