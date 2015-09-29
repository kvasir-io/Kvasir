#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I2C1
    namespace Nonei2c1Cr{    ///<I2C1_CR
        using Addr = Register::Address<0x40049000,0xffffe870,0,unsigned>;
        ///AA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aa{}; 
        ///STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop{}; 
        ///GCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gcen{}; 
        ///I2CEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> i2cen{}; 
        ///ADRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adrm{}; 
        ///TXDMAE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txdmae{}; 
        ///RXDMAE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxdmae{}; 
        ///DMANACK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dmanack{}; 
        ///ENTOUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> entout{}; 
    }
    namespace Nonei2c1Ier{    ///<I2C1_IER
        using Addr = Register::Address<0x40049004,0xfff8f0f0,0,unsigned>;
        ///STAIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> staie{}; 
        ///STOIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stoie{}; 
        ///ADRSIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adrsie{}; 
        ///GCSIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gcsie{}; 
        ///ARBLOSIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> arblosie{}; 
        ///RXNACKIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxnackie{}; 
        ///BUSERRIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> buserrie{}; 
        ///TOUTIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> toutie{}; 
        ///RXDNEIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxdneie{}; 
        ///TXDEIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txdeie{}; 
        ///RXBFIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rxbfie{}; 
    }
    namespace Nonei2c1Addr{    ///<I2C1_ADDR
        using Addr = Register::Address<0x40049008,0xfffffc00,0,unsigned>;
        ///ADDR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace Nonei2c1Sr{    ///<I2C1_SR
        using Addr = Register::Address<0x4004900c,0xffc0f0f0,0,unsigned>;
        ///STA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sta{}; 
        ///STO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sto{}; 
        ///ADRS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adrs{}; 
        ///GCS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gcs{}; 
        ///ARBLOS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> arblos{}; 
        ///RXNACK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxnack{}; 
        ///BUSERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///TOUTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> toutf{}; 
        ///RXDNE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxdne{}; 
        ///TXDE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txde{}; 
        ///RXBF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rxbf{}; 
        ///BUSBUSY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> busbusy{}; 
        ///MASTER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> master{}; 
        ///TXNRX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> txnrx{}; 
    }
    namespace Nonei2c1Shpgr{    ///<I2C1_SHPGR
        using Addr = Register::Address<0x40049010,0xffff0000,0,unsigned>;
        ///SHPG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> shpg{}; 
    }
    namespace Nonei2c1Slpgr{    ///<I2C1_SLPGR
        using Addr = Register::Address<0x40049014,0xffff0000,0,unsigned>;
        ///SLPG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> slpg{}; 
    }
    namespace Nonei2c1Dr{    ///<I2C1_DR
        using Addr = Register::Address<0x40049018,0xffffff00,0,unsigned>;
        ///DATA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonei2c1Tar{    ///<I2C1_TAR
        using Addr = Register::Address<0x4004901c,0xfffff800,0,unsigned>;
        ///TAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tar{}; 
        ///RWD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rwd{}; 
    }
    namespace Nonei2c1Addmr{    ///<I2C1_ADDMR
        using Addr = Register::Address<0x40049020,0xfffffc00,0,unsigned>;
        ///ADDMR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> addmr{}; 
    }
    namespace Nonei2c1Addsr{    ///<I2C1_ADDSR
        using Addr = Register::Address<0x40049024,0xfffffc00,0,unsigned>;
        ///ADDSR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> addsr{}; 
    }
    namespace Nonei2c1Tout{    ///<I2C1_TOUT
        using Addr = Register::Address<0x40049028,0xfff80000,0,unsigned>;
        ///TOUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tout{}; 
        ///PSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> psc{}; 
    }
}
