#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I2C0
    namespace Nonei2c0Cr{    ///<I2C0_CR
        using Addr = Register::Address<0x40048000,0xffffe870,0,unsigned>;
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
        ///TXDMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txdmae{}; 
        namespace TxdmaeValC{
        }
        ///RXDMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxdmae{}; 
        namespace RxdmaeValC{
        }
        ///DMANACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dmanack{}; 
        namespace DmanackValC{
        }
        ///ENTOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> entout{}; 
        namespace EntoutValC{
        }
    }
    namespace Nonei2c0Ier{    ///<I2C0_IER
        using Addr = Register::Address<0x40048004,0xfff8f0f0,0,unsigned>;
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
        ///TOUTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> toutie{}; 
        namespace ToutieValC{
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
    namespace Nonei2c0Addr{    ///<I2C0_ADDR
        using Addr = Register::Address<0x40048008,0xfffffc00,0,unsigned>;
        ///ADDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Nonei2c0Sr{    ///<I2C0_SR
        using Addr = Register::Address<0x4004800c,0xffc0f0f0,0,unsigned>;
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
        ///TOUTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> toutf{}; 
        namespace ToutfValC{
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
    namespace Nonei2c0Shpgr{    ///<I2C0_SHPGR
        using Addr = Register::Address<0x40048010,0xffff0000,0,unsigned>;
        ///SHPG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> shpg{}; 
        namespace ShpgValC{
        }
    }
    namespace Nonei2c0Slpgr{    ///<I2C0_SLPGR
        using Addr = Register::Address<0x40048014,0xffff0000,0,unsigned>;
        ///SLPG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> slpg{}; 
        namespace SlpgValC{
        }
    }
    namespace Nonei2c0Dr{    ///<I2C0_DR
        using Addr = Register::Address<0x40048018,0xffffff00,0,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Nonei2c0Tar{    ///<I2C0_TAR
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
    namespace Nonei2c0Addmr{    ///<I2C0_ADDMR
        using Addr = Register::Address<0x40048020,0xfffffc00,0,unsigned>;
        ///ADDMR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> addmr{}; 
        namespace AddmrValC{
        }
    }
    namespace Nonei2c0Addsr{    ///<I2C0_ADDSR
        using Addr = Register::Address<0x40048024,0xfffffc00,0,unsigned>;
        ///ADDSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> addsr{}; 
        namespace AddsrValC{
        }
    }
    namespace Nonei2c0Tout{    ///<I2C0_TOUT
        using Addr = Register::Address<0x40048028,0xfff80000,0,unsigned>;
        ///TOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tout{}; 
        namespace ToutValC{
        }
        ///PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> psc{}; 
        namespace PscValC{
        }
    }
}
