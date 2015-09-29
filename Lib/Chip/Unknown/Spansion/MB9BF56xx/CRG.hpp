#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral CRG 
    namespace NonescmCtl{    ///< register SCM_CTL 
        using Addr = Register::Address<0x40010000,0xffffff05,0,unsigned char>;
        /// bitfield RCS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rcs{}; 
        /// bitfield PLLE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> plle{}; 
        /// bitfield SOSCE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sosce{}; 
        /// bitfield MOSCE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mosce{}; 
    }
    namespace NonescmStr{    ///< register SCM_STR 
        using Addr = Register::Address<0x40010004,0xffffff05,0,unsigned char>;
        /// bitfield RCM 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rcm{}; 
        /// bitfield PLRDY 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> plrdy{}; 
        /// bitfield SORDY 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sordy{}; 
        /// bitfield MORDY 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mordy{}; 
    }
    namespace NonebscPsr{    ///< register BSC_PSR 
        using Addr = Register::Address<0x40010010,0xfffffff8,0,unsigned char>;
        /// bitfield BSR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bsr{}; 
    }
    namespace Noneapbc0Psr{    ///< register APBC0_PSR 
        using Addr = Register::Address<0x40010014,0xfffffffc,0,unsigned char>;
        /// bitfield APBC0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc0{}; 
    }
    namespace Noneapbc1Psr{    ///< register APBC1_PSR 
        using Addr = Register::Address<0x40010018,0xffffff6c,0,unsigned char>;
        /// bitfield APBC1EN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apbc1en{}; 
        /// bitfield APBC1RST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> apbc1rst{}; 
        /// bitfield APBC1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc1{}; 
    }
    namespace Noneapbc2Psr{    ///< register APBC2_PSR 
        using Addr = Register::Address<0x4001001c,0xffffff6c,0,unsigned char>;
        /// bitfield APBC2EN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apbc2en{}; 
        /// bitfield APBC2RST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> apbc2rst{}; 
        /// bitfield APBC2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc2{}; 
    }
    namespace NoneswcPsr{    ///< register SWC_PSR 
        using Addr = Register::Address<0x40010020,0xffffff7c,0,unsigned char>;
        /// bitfield TESTB 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> testb{}; 
        /// bitfield SWDS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> swds{}; 
    }
    namespace NonettcPsr{    ///< register TTC_PSR 
        using Addr = Register::Address<0x40010028,0xfffffffc,0,unsigned char>;
        /// bitfield TTC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ttc{}; 
    }
    namespace NonecswTmr{    ///< register CSW_TMR 
        using Addr = Register::Address<0x40010030,0xffffff00,0,unsigned char>;
        /// bitfield SOWT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> sowt{}; 
        /// bitfield MOWT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mowt{}; 
    }
    namespace NonepswTmr{    ///< register PSW_TMR 
        using Addr = Register::Address<0x40010034,0xffffffe8,0,unsigned char>;
        /// bitfield PINC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinc{}; 
        /// bitfield POWT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> powt{}; 
    }
    namespace NonepllCtl1{    ///< register PLL_CTL1 
        using Addr = Register::Address<0x40010038,0xffffff00,0,unsigned char>;
        /// bitfield PLLK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pllk{}; 
        /// bitfield PLLM 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pllm{}; 
    }
    namespace NonepllCtl2{    ///< register PLL_CTL2 
        using Addr = Register::Address<0x4001003c,0xffffffc0,0,unsigned char>;
        /// bitfield PLLN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> plln{}; 
    }
    namespace NonedbwdtCtl{    ///< register DBWDT_CTL 
        using Addr = Register::Address<0x40010054,0xffffff5f,0,unsigned char>;
        /// bitfield DPHWBE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dphwbe{}; 
        /// bitfield DPSWBE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dpswbe{}; 
    }
    namespace NoneintEnr{    ///< register INT_ENR 
        using Addr = Register::Address<0x40010060,0xffffffd8,0,unsigned char>;
        /// bitfield FCSE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcse{}; 
        /// bitfield PCSE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcse{}; 
        /// bitfield SCSE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scse{}; 
        /// bitfield MCSE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcse{}; 
    }
    namespace NoneintStr{    ///< register INT_STR 
        using Addr = Register::Address<0x40010064,0xffffffd8,0,unsigned char>;
        /// bitfield FCSI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcsi{}; 
        /// bitfield PCSI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcsi{}; 
        /// bitfield SCSI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scsi{}; 
        /// bitfield MCSI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcsi{}; 
    }
    namespace NoneintClr{    ///< register INT_CLR 
        using Addr = Register::Address<0x40010068,0xffffffd8,0,unsigned char>;
        /// bitfield FCSC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcsc{}; 
        /// bitfield PCSC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcsc{}; 
        /// bitfield SCSC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scsc{}; 
        /// bitfield MCSC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcsc{}; 
    }
    namespace NonestbCtl{    ///< register STB_CTL 
        using Addr = Register::Address<0x40010008,0x0000ffe8,0,unsigned>;
        /// bitfield KEY 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> key{}; 
        /// bitfield SPL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spl{}; 
        /// bitfield DSTM 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dstm{}; 
        /// bitfield STM 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> stm{}; 
    }
    namespace NonerstStr{    ///< register RST_STR 
        using Addr = Register::Address<0x4001000c,0xfffffe0c,0,unsigned>;
        /// bitfield SRST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srst{}; 
        /// bitfield FCSR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fcsr{}; 
        /// bitfield CSVR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> csvr{}; 
        /// bitfield HWDT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hwdt{}; 
        /// bitfield SWDT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> swdt{}; 
        /// bitfield INITX 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> initx{}; 
        /// bitfield PONR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ponr{}; 
    }
    namespace NonecsvCtl{    ///< register CSV_CTL 
        using Addr = Register::Address<0x40010040,0xffff8cfc,0,unsigned>;
        /// bitfield FCD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> fcd{}; 
        /// bitfield FCSRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fcsre{}; 
        /// bitfield FCSDE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fcsde{}; 
        /// bitfield SCSVE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scsve{}; 
        /// bitfield MCSVE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcsve{}; 
    }
    namespace NonecsvStr{    ///< register CSV_STR 
        using Addr = Register::Address<0x40010044,0xfffffffc,0,unsigned char>;
        /// bitfield SCMF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scmf{}; 
        /// bitfield MCMF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcmf{}; 
    }
    namespace NonefcswhCtl{    ///< register FCSWH_CTL 
        using Addr = Register::Address<0x40010048,0xffff0000,0,unsigned>;
        /// bitfield FWH 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fwh{}; 
    }
    namespace NonefcswlCtl{    ///< register FCSWL_CTL 
        using Addr = Register::Address<0x4001004c,0xffff0000,0,unsigned>;
        /// bitfield FWL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fwl{}; 
    }
    namespace NonefcswdCtl{    ///< register FCSWD_CTL 
        using Addr = Register::Address<0x40010050,0xffff0000,0,unsigned>;
        /// bitfield FWD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fwd{}; 
    }
}
