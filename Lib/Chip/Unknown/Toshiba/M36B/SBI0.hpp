#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Bus Interface (SBI)
    namespace Nonecr0{    ///<SBI Control Register 0
        using Addr = Register::Address<0x400e0000,0xffffff7f,0,unsigned>;
        ///SBIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sbien{}; 
        namespace SbienValC{
        }
    }
    namespace Nonecr1A{    ///<SBI Control Register 1 (I2C Mode)
        using Addr = Register::Address<0x400e0004,0xffffff08,0,unsigned>;
        ///SWRMON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrmon{}; 
        namespace SwrmonValC{
        }
        ///SCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sck{}; 
        namespace SckValC{
        }
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///BC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> bc{}; 
        namespace BcValC{
        }
    }
    namespace Nonecr1B{    ///<SBI Control Register 1 (SIO Mode)
        using Addr = Register::Address<0x400e0004,0xffffff08,0,unsigned>;
        ///SCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sck{}; 
        namespace SckValC{
        }
        ///SIOM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> siom{}; 
        namespace SiomValC{
        }
        ///SIOINH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sioinh{}; 
        namespace SioinhValC{
        }
        ///SIOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sios{}; 
        namespace SiosValC{
        }
    }
    namespace Nonedbr{    ///<SBI Data Buffer Register
        using Addr = Register::Address<0x400e0008,0xffffff00,0,unsigned>;
        ///DB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> db{}; 
        namespace DbValC{
        }
    }
    namespace Nonei2car{    ///<SBI I2C Bus Address Register
        using Addr = Register::Address<0x400e000c,0xffffff00,0,unsigned>;
        ///ALS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> als{}; 
        namespace AlsValC{
        }
        ///SA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
    }
    namespace Nonecr2A{    ///<SBI Control Register 2 (I2C Mode)
        using Addr = Register::Address<0x400e0010,0xffffff00,0,unsigned>;
        ///SWRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///SBIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> sbim{}; 
        namespace SbimValC{
        }
        ///PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pin{}; 
        namespace PinValC{
        }
        ///BB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bb{}; 
        namespace BbValC{
        }
        ///TRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> trx{}; 
        namespace TrxValC{
        }
        ///MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mst{}; 
        namespace MstValC{
        }
    }
    namespace Nonecr2B{    ///<SBI Control Register 2 (SIO Mode)
        using Addr = Register::Address<0x400e0010,0xfffffff3,0,unsigned>;
        ///SBIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> sbim{}; 
        namespace SbimValC{
        }
    }
    namespace NonesrA{    ///<SBI Status Register (I2C Mode)
        using Addr = Register::Address<0x400e0010,0xffffff00,0,unsigned>;
        ///LRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lrb{}; 
        namespace LrbValC{
        }
        ///ADO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ado{}; 
        namespace AdoValC{
        }
        ///AAS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aas{}; 
        namespace AasValC{
        }
        ///AL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> al{}; 
        namespace AlValC{
        }
        ///PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pin{}; 
        namespace PinValC{
        }
        ///BB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bb{}; 
        namespace BbValC{
        }
        ///TRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> trx{}; 
        namespace TrxValC{
        }
        ///MST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mst{}; 
        namespace MstValC{
        }
    }
    namespace NonesrB{    ///<SBI Status Register (SIO Mode)
        using Addr = Register::Address<0x400e0010,0xfffffff3,0,unsigned>;
        ///SEF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sef{}; 
        namespace SefValC{
        }
        ///SIOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> siof{}; 
        namespace SiofValC{
        }
    }
    namespace Nonebr0{    ///<SBI Baud Rate Register 0
        using Addr = Register::Address<0x400e0014,0xffffffbf,0,unsigned>;
        ///I2SBI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> i2sbi{}; 
        namespace I2sbiValC{
        }
    }
}
