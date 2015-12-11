#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I2C0
    namespace Nonei2c0Cr{    ///<I2C0_CR
        using Addr = Register::Address<0x40048000,0xffffe870,0,unsigned>;
        ///AA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aa{}; 
        ///STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop{}; 
        ///GCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gcen{}; 
        ///I2CEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> i2cen{}; 
        ///ADRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adrm{}; 
        ///TXDMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txdmae{}; 
        ///RXDMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxdmae{}; 
        ///DMANACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dmanack{}; 
        ///ENTOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> entout{}; 
    }
    namespace Nonei2c0Ier{    ///<I2C0_IER
        using Addr = Register::Address<0x40048004,0xfff8f0f0,0,unsigned>;
        ///STAIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> staie{}; 
        ///STOIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stoie{}; 
        ///ADRSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adrsie{}; 
        ///GCSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gcsie{}; 
        ///ARBLOSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> arblosie{}; 
        ///RXNACKIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxnackie{}; 
        ///BUSERRIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> buserrie{}; 
        ///TOUTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> toutie{}; 
        ///RXDNEIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxdneie{}; 
        ///TXDEIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txdeie{}; 
        ///RXBFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rxbfie{}; 
    }
    namespace Nonei2c0Addr{    ///<I2C0_ADDR
        using Addr = Register::Address<0x40048008,0xfffffc00,0,unsigned>;
        ///ADDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace Nonei2c0Sr{    ///<I2C0_SR
        using Addr = Register::Address<0x4004800c,0xffc0f0f0,0,unsigned>;
        ///STA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sta{}; 
        ///STO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sto{}; 
        ///ADRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adrs{}; 
        ///GCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gcs{}; 
        ///ARBLOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> arblos{}; 
        ///RXNACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxnack{}; 
        ///BUSERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///TOUTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> toutf{}; 
        ///RXDNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxdne{}; 
        ///TXDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txde{}; 
        ///RXBF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rxbf{}; 
        ///BUSBUSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> busbusy{}; 
        ///MASTER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> master{}; 
        ///TXNRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> txnrx{}; 
    }
    namespace Nonei2c0Shpgr{    ///<I2C0_SHPGR
        using Addr = Register::Address<0x40048010,0xffff0000,0,unsigned>;
        ///SHPG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> shpg{}; 
    }
    namespace Nonei2c0Slpgr{    ///<I2C0_SLPGR
        using Addr = Register::Address<0x40048014,0xffff0000,0,unsigned>;
        ///SLPG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> slpg{}; 
    }
    namespace Nonei2c0Dr{    ///<I2C0_DR
        using Addr = Register::Address<0x40048018,0xffffff00,0,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonei2c0Tar{    ///<I2C0_TAR
        using Addr = Register::Address<0x4004801c,0xfffff800,0,unsigned>;
        ///TAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tar{}; 
        ///RWD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rwd{}; 
    }
    namespace Nonei2c0Addmr{    ///<I2C0_ADDMR
        using Addr = Register::Address<0x40048020,0xfffffc00,0,unsigned>;
        ///ADDMR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> addmr{}; 
    }
    namespace Nonei2c0Addsr{    ///<I2C0_ADDSR
        using Addr = Register::Address<0x40048024,0xfffffc00,0,unsigned>;
        ///ADDSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> addsr{}; 
    }
    namespace Nonei2c0Tout{    ///<I2C0_TOUT
        using Addr = Register::Address<0x40048028,0xfff80000,0,unsigned>;
        ///TOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tout{}; 
        ///PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> psc{}; 
    }
}
