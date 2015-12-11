#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Bus Interface (SBI)
    namespace Nonecr0{    ///<SBI Control Register 0
        using Addr = Register::Address<0x400e0000,0xffffff7f,0,unsigned>;
        ///SBIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sbien{}; 
    }
    namespace Nonecr1A{    ///<SBI Control Register 1 (I2C Mode)
        using Addr = Register::Address<0x400e0004,0xffffff08,0,unsigned>;
        ///SWRMON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrmon{}; 
        ///SCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sck{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ack{}; 
        ///BC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> bc{}; 
    }
    namespace Nonecr1B{    ///<SBI Control Register 1 (SIO Mode)
        using Addr = Register::Address<0x400e0004,0xffffff08,0,unsigned>;
        ///SCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sck{}; 
        ///SIOM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> siom{}; 
        ///SIOINH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sioinh{}; 
        ///SIOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sios{}; 
    }
    namespace Nonedbr{    ///<SBI Data Buffer Register
        using Addr = Register::Address<0x400e0008,0xffffff00,0,unsigned>;
        ///DB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> db{}; 
    }
    namespace Nonei2car{    ///<SBI I2C Bus Address Register
        using Addr = Register::Address<0x400e000c,0xffffff00,0,unsigned>;
        ///ALS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> als{}; 
        ///SA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace Nonecr2{    ///<SBI Control Register 2 (I2C Mode)
        using Addr = Register::Address<0x400e0010,0xffffff00,0,unsigned>;
        ///SWRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///SBIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> sbim{}; 
        ///PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pin{}; 
        ///BB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bb{}; 
        ///TRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> trx{}; 
        ///MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mst{}; 
    }
    namespace Nonesr{    ///<SBI Status Register (I2C Mode)
        using Addr = Register::Address<0x400e0010,0xffffff00,0,unsigned>;
        ///LRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lrb{}; 
        ///ADO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ado{}; 
        ///AAS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aas{}; 
        ///AL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> al{}; 
        ///PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pin{}; 
        ///BB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bb{}; 
        ///TRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> trx{}; 
        ///MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mst{}; 
    }
    namespace Nonebr0{    ///<SBI Baud Rate Register 0
        using Addr = Register::Address<0x400e0014,0xffffffbf,0,unsigned>;
        ///I2SBI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> i2sbi{}; 
    }
}
