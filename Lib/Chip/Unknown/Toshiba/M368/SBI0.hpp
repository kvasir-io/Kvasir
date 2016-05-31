#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial Bus Interface (SBI)
    namespace Sbi0Cr0{    ///<SBI Control Register 0
        using Addr = Register::Address<0x400e0000,0xffffff7f,0x00000000,unsigned>;
        ///SBIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sbien{}; 
    }
    namespace Sbi0Cr1A{    ///<SBI Control Register 1 (I2C Mode)
        using Addr = Register::Address<0x400e0004,0xffffff08,0x00000000,unsigned>;
        ///SWRMON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrmon{}; 
        ///SCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sck{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ack{}; 
        ///BC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> bc{}; 
    }
    namespace Sbi0Cr1B{    ///<SBI Control Register 1 (SIO Mode)
        using Addr = Register::Address<0x400e0004,0xffffff08,0x00000000,unsigned>;
        ///SCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sck{}; 
        ///SIOM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> siom{}; 
        ///SIOINH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sioinh{}; 
        ///SIOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sios{}; 
    }
    namespace Sbi0Dbr{    ///<SBI Data Buffer Register
        using Addr = Register::Address<0x400e0008,0xffffff00,0x00000000,unsigned>;
        ///DB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> db{}; 
    }
    namespace Sbi0I2car{    ///<SBI I2C Bus Address Register
        using Addr = Register::Address<0x400e000c,0xffffff00,0x00000000,unsigned>;
        ///ALS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> als{}; 
        ///SA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace Sbi0Cr2{    ///<SBI Control Register 2 (I2C Mode)
        using Addr = Register::Address<0x400e0010,0xffffff00,0x00000000,unsigned>;
        ///SWRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///SBIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sbim{}; 
        ///PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pin{}; 
        ///BB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bb{}; 
        ///TRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trx{}; 
        ///MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mst{}; 
    }
    namespace Sbi0Sr{    ///<SBI Status Register (I2C Mode)
        using Addr = Register::Address<0x400e0010,0xffffff00,0x00000000,unsigned>;
        ///LRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lrb{}; 
        ///ADO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ado{}; 
        ///AAS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> aas{}; 
        ///AL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> al{}; 
        ///PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pin{}; 
        ///BB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bb{}; 
        ///TRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trx{}; 
        ///MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mst{}; 
    }
    namespace Sbi0Br0{    ///<SBI Baud Rate Register 0
        using Addr = Register::Address<0x400e0014,0xffffffbf,0x00000000,unsigned>;
        ///I2SBI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> i2sbi{}; 
    }
}
