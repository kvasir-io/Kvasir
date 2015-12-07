#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I2C
    namespace Nonei2cCr{    ///<I2C_CR
        using Addr = Register::Address<0x40048000,0xffffff70,0,unsigned>;
        ///AA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aa{}; 
        namespace AaValC{
        }
        ///STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop{}; 
        namespace StopValC{
        }
        ///GCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gcen{}; 
        namespace GcenValC{
        }
        ///I2CEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> i2cen{}; 
        namespace I2cenValC{
        }
        ///ADRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adrm{}; 
        namespace AdrmValC{
        }
    }
    namespace Nonei2cIer{    ///<I2C_IER
        using Addr = Register::Address<0x40048004,0xfff8f8f0,0,unsigned>;
        ///STAIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> staie{}; 
        namespace StaieValC{
        }
        ///STOIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stoie{}; 
        namespace StoieValC{
        }
        ///ADRSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adrsie{}; 
        namespace AdrsieValC{
        }
        ///GCSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gcsie{}; 
        namespace GcsieValC{
        }
        ///ARBLOSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> arblosie{}; 
        namespace ArblosieValC{
        }
        ///RXNACKIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxnackie{}; 
        namespace RxnackieValC{
        }
        ///BUSERRIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> buserrie{}; 
        namespace BuserrieValC{
        }
        ///RXDNEIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxdneie{}; 
        namespace RxdneieValC{
        }
        ///TXDEIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txdeie{}; 
        namespace TxdeieValC{
        }
        ///RXBFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rxbfie{}; 
        namespace RxbfieValC{
        }
    }
    namespace Nonei2cAddr{    ///<I2C_ADDR
        using Addr = Register::Address<0x40048008,0xfffffc00,0,unsigned>;
        ///ADDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Nonei2cSr{    ///<I2C_SR
        using Addr = Register::Address<0x4004800c,0xffc0f8f0,0,unsigned>;
        ///STA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sta{}; 
        namespace StaValC{
        }
        ///STO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sto{}; 
        namespace StoValC{
        }
        ///ADRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adrs{}; 
        namespace AdrsValC{
        }
        ///GCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gcs{}; 
        namespace GcsValC{
        }
        ///ARBLOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> arblos{}; 
        namespace ArblosValC{
        }
        ///RXNACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxnack{}; 
        namespace RxnackValC{
        }
        ///BUSERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> buserr{}; 
        namespace BuserrValC{
        }
        ///RXDNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxdne{}; 
        namespace RxdneValC{
        }
        ///TXDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txde{}; 
        namespace TxdeValC{
        }
        ///RXBF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rxbf{}; 
        namespace RxbfValC{
        }
        ///BUSBUSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> busbusy{}; 
        namespace BusbusyValC{
        }
        ///MASTER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> master{}; 
        namespace MasterValC{
        }
        ///TXNRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> txnrx{}; 
        namespace TxnrxValC{
        }
    }
    namespace Nonei2cShpgr{    ///<I2C_SHPGR
        using Addr = Register::Address<0x40048010,0xffff0000,0,unsigned>;
        ///SHPG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> shpg{}; 
        namespace ShpgValC{
        }
    }
    namespace Nonei2cSlpgr{    ///<I2C_SLPGR
        using Addr = Register::Address<0x40048014,0xffff0000,0,unsigned>;
        ///SLPG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> slpg{}; 
        namespace SlpgValC{
        }
    }
    namespace Nonei2cDr{    ///<I2C_DR
        using Addr = Register::Address<0x40048018,0xffffff00,0,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Nonei2cTar{    ///<I2C_TAR
        using Addr = Register::Address<0x4004801c,0xfffff800,0,unsigned>;
        ///TAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tar{}; 
        namespace TarValC{
        }
        ///RWD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rwd{}; 
        namespace RwdValC{
        }
    }
}
