#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CKCU
    namespace NoneckcuGcfgr{    ///<CKCU_GCFGR
        using Addr = Register::Address<0x40088000,0x000ffef0,0,unsigned>;
        ///CKOUTSRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ckoutsrc{}; 
        ///WDTSRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wdtsrc{}; 
        ///PLLSRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pllsrc{}; 
        ///URPRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> urpre{}; 
        ///USBPRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> usbpre{}; 
        ///CSIFMPRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> csifmpre{}; 
        ///LPMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> lpmod{}; 
    }
    namespace NoneckcuGccr{    ///<CKCU_GCCR
        using Addr = Register::Address<0x40088004,0xfffcf1fc,0,unsigned>;
        ///SW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sw{}; 
        ///PLLEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pllen{}; 
        ///HSEEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hseen{}; 
        ///HSIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hsien{}; 
        ///CKMEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ckmen{}; 
        ///PSRCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> psrcen{}; 
    }
    namespace NoneckcuGcsr{    ///<CKCU_GCSR
        using Addr = Register::Address<0x40088008,0xffffffc1,0,unsigned>;
        ///PLLRDY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pllrdy{}; 
        ///HSERDY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hserdy{}; 
        ///HSIRDY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hsirdy{}; 
        ///LSERDY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lserdy{}; 
        ///LSIRDY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lsirdy{}; 
    }
    namespace NoneckcuGcir{    ///<CKCU_GCIR
        using Addr = Register::Address<0x4008800c,0xff82ff82,0,unsigned>;
        ///CKSF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cksf{}; 
        ///PLLRDYF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pllrdyf{}; 
        ///HSERDYF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyf{}; 
        ///HSIRDYF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hsirdyf{}; 
        ///LSERDYF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lserdyf{}; 
        ///LSIRDYF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lsirdyf{}; 
        ///CKSIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cksie{}; 
        ///PLLRDYIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pllrdyie{}; 
        ///HSERDYIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> hserdyie{}; 
        ///HSIRDYIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> hsirdyie{}; 
        ///LSERDYIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lserdyie{}; 
        ///LSIRDYIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lsirdyie{}; 
    }
    namespace NoneckcuPllcfgr{    ///<CKCU_PLLCFGR
        using Addr = Register::Address<0x40088018,0xe01fffff,0,unsigned>;
        ///POTD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> potd{}; 
        ///PFBD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,23),Register::ReadWriteAccess,unsigned> pfbd{}; 
    }
    namespace NoneckcuPllcr{    ///<CKCU_PLLCR
        using Addr = Register::Address<0x4008801c,0x7fffffff,0,unsigned>;
        ///PLLBPS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pllbps{}; 
    }
    namespace NoneckcuAhbcfgr{    ///<CKCU_AHBCFGR
        using Addr = Register::Address<0x40088020,0xfffffffc,0,unsigned>;
        ///AHBPRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ahbpre{}; 
    }
    namespace NoneckcuAhbccr{    ///<CKCU_AHBCCR
        using Addr = Register::Address<0x40088024,0xfffffc0a,0,unsigned>;
        ///FMCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fmcen{}; 
        ///SRAMEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sramen{}; 
        ///PDMAEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdmaen{}; 
        ///BMEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bmen{}; 
        ///APB0EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> apb0en{}; 
        ///APB1EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apb1en{}; 
        ///CSIFEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csifen{}; 
        ///CSIFMEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> csifmen{}; 
    }
    namespace NoneckcuApbcfgr{    ///<CKCU_APBCFGR
        using Addr = Register::Address<0x40088028,0xfff8ffff,0,unsigned>;
        ///ADCDIV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> adcdiv{}; 
    }
    namespace NoneckcuApbccr0{    ///<CKCU_APBCCR0
        using Addr = Register::Address<0x4008802c,0xfee03ccc,0,unsigned>;
        ///I2C0EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> i2c0en{}; 
        ///I2C1EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> i2c1en{}; 
        ///SPI0EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spi0en{}; 
        ///SPI1EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi1en{}; 
        ///UR0EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ur0en{}; 
        ///UR1EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ur1en{}; 
        ///AFIOEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> afioen{}; 
        ///EXTIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extien{}; 
        ///PAEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> paen{}; 
        ///PBEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pben{}; 
        ///PCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pcen{}; 
        ///PDEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pden{}; 
        ///PEEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> peen{}; 
        ///SCIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> scien{}; 
    }
    namespace NoneckcuApbccr1{    ///<CKCU_APBCCR1
        using Addr = Register::Address<0x40088030,0xfe3cbcae,0,unsigned>;
        ///MCTMEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mctmen{}; 
        ///WDTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wdten{}; 
        ///RTCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtcen{}; 
        ///GPTM0EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gptm0en{}; 
        ///GPTM1EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gptm1en{}; 
        ///USBEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usben{}; 
        ///BFTM0EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bftm0en{}; 
        ///BFTM1EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> bftm1en{}; 
        ///OPA0EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> opa0en{}; 
        ///OPA1EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> opa1en{}; 
        ///ADCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adcen{}; 
    }
    namespace NoneckcuCkst{    ///<CKCU_CKST
        using Addr = Register::Address<0x40088034,0x38fcf0ff,0,unsigned>;
        ///PLLST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> pllst{}; 
        ///HSEST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> hsest{}; 
        ///HSIST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> hsist{}; 
        ///CKSWST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> ckswst{}; 
    }
    namespace NoneckcuLpcr{    ///<CKCU_LPCR
        using Addr = Register::Address<0x40088300,0xfffffefe,0,unsigned>;
        ///BKISO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bkiso{}; 
        ///USBSLEEP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> usbsleep{}; 
    }
    namespace NoneckcuMcudbgcr{    ///<CKCU_MCUDBGCR
        using Addr = Register::Address<0x40088304,0xfffc0020,0,unsigned>;
        ///DBSLP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbslp{}; 
        ///DBDSLP1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbdslp1{}; 
        ///DBPD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbpd{}; 
        ///DBWDT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dbwdt{}; 
        ///DBMCTM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbmctm{}; 
        ///DBGPTM0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dbgptm0{}; 
        ///DBGPTM1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dbgptm1{}; 
        ///DBUR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbur0{}; 
        ///DBUR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dbur1{}; 
        ///DBSPI0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbspi0{}; 
        ///DBSPI1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dbspi1{}; 
        ///DBI2C0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dbi2c0{}; 
        ///DBI2C1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dbi2c1{}; 
        ///DBDSLP2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dbdslp2{}; 
        ///DBDSCI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dbdsci{}; 
        ///DBBFTM0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dbbftm0{}; 
        ///DBBFTM1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbbftm1{}; 
    }
}
