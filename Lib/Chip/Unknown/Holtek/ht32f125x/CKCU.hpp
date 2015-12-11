#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CKCU
    namespace NoneckcuGcfgr{    ///<CKCU_GCFGR
        using Addr = Register::Address<0x40088000,0x1fcffef0,0,unsigned>;
        ///CKOUTSRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ckoutsrc{}; 
        ///WDTSRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wdtsrc{}; 
        ///PLLSRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pllsrc{}; 
        ///URPRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> urpre{}; 
        ///LPMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> lpmod{}; 
    }
    namespace NoneckcuGccr{    ///<CKCU_GCCR
        using Addr = Register::Address<0x40088004,0xfffcf1fc,0,unsigned>;
        ///SW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sw{}; 
        ///PLLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pllen{}; 
        ///HSEEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hseen{}; 
        ///HSIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hsien{}; 
        ///CKMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ckmen{}; 
        ///PSRCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> psrcen{}; 
    }
    namespace NoneckcuGcsr{    ///<CKCU_GCSR
        using Addr = Register::Address<0x40088008,0xffffffc1,0,unsigned>;
        ///PLLRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pllrdy{}; 
        ///HSERDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hserdy{}; 
        ///HSIRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hsirdy{}; 
        ///LSERDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lserdy{}; 
        ///LSIRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lsirdy{}; 
    }
    namespace NoneckcuGcir{    ///<CKCU_GCIR
        using Addr = Register::Address<0x4008800c,0xff82ff82,0,unsigned>;
        ///CKSF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cksf{}; 
        ///PLLRDYF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pllrdyf{}; 
        ///HSERDYF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyf{}; 
        ///HSIRDYF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hsirdyf{}; 
        ///LSERDYF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lserdyf{}; 
        ///LSIRDYF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lsirdyf{}; 
        ///CKSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cksie{}; 
        ///PLLRDYIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pllrdyie{}; 
        ///HSERDYIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> hserdyie{}; 
        ///HSIRDYIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> hsirdyie{}; 
        ///LSERDYIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lserdyie{}; 
        ///LSIRDYIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lsirdyie{}; 
    }
    namespace NoneckcuPllcfgr{    ///<CKCU_PLLCFGR
        using Addr = Register::Address<0x40088018,0xe01fffff,0,unsigned>;
        ///POTD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> potd{}; 
        ///PFBD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,23),Register::ReadWriteAccess,unsigned> pfbd{}; 
    }
    namespace NoneckcuPllcr{    ///<CKCU_PLLCR
        using Addr = Register::Address<0x4008801c,0x7fffffff,0,unsigned>;
        ///PLLBPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pllbps{}; 
    }
    namespace NoneckcuAhbcfgr{    ///<CKCU_AHBCFGR
        using Addr = Register::Address<0x40088020,0xfffffffc,0,unsigned>;
        ///AHBPRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ahbpre{}; 
    }
    namespace NoneckcuAhbccr{    ///<CKCU_AHBCCR
        using Addr = Register::Address<0x40088024,0xfffffffa,0,unsigned>;
        ///FMCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fmcen{}; 
        ///SRAMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sramen{}; 
    }
    namespace NoneckcuApbcfgr{    ///<CKCU_APBCFGR
        using Addr = Register::Address<0x40088028,0xfff8ffff,0,unsigned>;
        ///ADCDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> adcdiv{}; 
    }
    namespace NoneckcuApbccr0{    ///<CKCU_APBCCR0
        using Addr = Register::Address<0x4008802c,0xfffc3eee,0,unsigned>;
        ///I2CEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> i2cen{}; 
        ///SPIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spien{}; 
        ///UREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uren{}; 
        ///AFIOEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> afioen{}; 
        ///EXTIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extien{}; 
        ///PAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> paen{}; 
        ///PBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pben{}; 
    }
    namespace NoneckcuApbccr1{    ///<CKCU_APBCCR1
        using Addr = Register::Address<0x40088030,0xfe3ffcaf,0,unsigned>;
        ///WDTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wdten{}; 
        ///RTCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtcen{}; 
        ///GPTM0EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gptm0en{}; 
        ///GPTM1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gptm1en{}; 
        ///OPA0EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> opa0en{}; 
        ///OPA1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> opa1en{}; 
        ///ADCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adcen{}; 
    }
    namespace NoneckcuCkst{    ///<CKCU_CKST
        using Addr = Register::Address<0x40088034,0xf8fcfeff,0,unsigned>;
        ///PLLST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pllst{}; 
        ///HSEST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> hsest{}; 
        ///HSIST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> hsist{}; 
    }
    namespace NoneckcuLpcr{    ///<CKCU_LPCR
        using Addr = Register::Address<0x40088300,0xfffffffe,0,unsigned>;
        ///BKISO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bkiso{}; 
    }
    namespace NoneckcuMcudbgcr{    ///<CKCU_MCUDBGCR
        using Addr = Register::Address<0x40088304,0xffffba30,0,unsigned>;
        ///DBSLP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbslp{}; 
        ///DBDSLP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbdslp1{}; 
        ///DBPD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbpd{}; 
        ///DBWDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dbwdt{}; 
        ///DBGPTM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dbgptm0{}; 
        ///DBGPTM1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dbgptm1{}; 
        ///DBUSART
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbusart{}; 
        ///DBSPI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbspi{}; 
        ///DBDSLP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dbdslp2{}; 
    }
}
