#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//I2C1
    namespace I2c1I2c1Cr{    ///<I2C1_CR
        using Addr = Register::Address<0x40049000,0x00000870,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,13),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2c1I2c1Ier{    ///<I2C1_IER
        using Addr = Register::Address<0x40049004,0x0000f0f0,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2c1I2c1Addr{    ///<I2C1_ADDR
        using Addr = Register::Address<0x40049008,0x00000000,0x00000000,unsigned>;
        ///ADDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> addr{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2c1I2c1Sr{    ///<I2C1_SR
        using Addr = Register::Address<0x4004900c,0x0000f0f0,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,22),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2c1I2c1Shpgr{    ///<I2C1_SHPGR
        using Addr = Register::Address<0x40049010,0x00000000,0x00000000,unsigned>;
        ///SHPG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> shpg{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2c1I2c1Slpgr{    ///<I2C1_SLPGR
        using Addr = Register::Address<0x40049014,0x00000000,0x00000000,unsigned>;
        ///SLPG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> slpg{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2c1I2c1Dr{    ///<I2C1_DR
        using Addr = Register::Address<0x40049018,0x00000000,0x00000000,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2c1I2c1Tar{    ///<I2C1_TAR
        using Addr = Register::Address<0x4004901c,0x00000000,0x00000000,unsigned>;
        ///TAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tar{}; 
        ///RWD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rwd{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2c1I2c1Addmr{    ///<I2C1_ADDMR
        using Addr = Register::Address<0x40049020,0x00000000,0x00000000,unsigned>;
        ///ADDMR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> addmr{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2c1I2c1Addsr{    ///<I2C1_ADDSR
        using Addr = Register::Address<0x40049024,0x00000000,0x00000000,unsigned>;
        ///ADDSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> addsr{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2c1I2c1Tout{    ///<I2C1_TOUT
        using Addr = Register::Address<0x40049028,0x00000000,0x00000000,unsigned>;
        ///TOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tout{}; 
        ///PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> psc{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
