#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Flash Memory
    namespace FlashIfFaszr{    ///<Flash Access Size Register
        using Addr = Register::Address<0x40000000,0xfffffffc,0x00000000,unsigned>;
        ///Flash Access Size 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> asz{}; 
    }
    namespace FlashIfFstr{    ///<Flash Status Register
        using Addr = Register::Address<0x40000008,0xfffffffc,0x00000000,unsigned>;
        ///Flash Hang flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hng{}; 
        ///Flash Rdy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdy{}; 
    }
    namespace FlashIfFsyndn{    ///<Flash Sync Down Register
        using Addr = Register::Address<0x40000010,0xfffffff8,0x00000000,unsigned>;
        ///Flash Sync
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sd{}; 
    }
    namespace FlashIfCrtrmm{    ///<CR Trimming Data Mirror Register
        using Addr = Register::Address<0x40000100,0xfffffc00,0x00000000,unsigned>;
        ///CR Trimming Data Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trmm{}; 
    }
}
