#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral CRG 
    namespace CrgScmCtl{    ///< register SCM_CTL 
        using Addr = Register::Address<0x40010000,0xffffff05,0x00000000,unsigned char>;
        /// bitfield RCS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rcs{}; 
        /// bitfield PLLE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> plle{}; 
        /// bitfield SOSCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sosce{}; 
        /// bitfield MOSCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mosce{}; 
    }
    namespace CrgScmStr{    ///< register SCM_STR 
        using Addr = Register::Address<0x40010004,0xffffff05,0x00000000,unsigned char>;
        /// bitfield RCM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcm{}; 
        /// bitfield PLRDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> plrdy{}; 
        /// bitfield SORDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sordy{}; 
        /// bitfield MORDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mordy{}; 
    }
    namespace CrgBscPsr{    ///< register BSC_PSR 
        using Addr = Register::Address<0x40010010,0xfffffff8,0x00000000,unsigned char>;
        /// bitfield BSR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bsr{}; 
    }
    namespace CrgApbc0Psr{    ///< register APBC0_PSR 
        using Addr = Register::Address<0x40010014,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield APBC0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc0{}; 
    }
    namespace CrgApbc1Psr{    ///< register APBC1_PSR 
        using Addr = Register::Address<0x40010018,0xffffff6c,0x00000000,unsigned char>;
        /// bitfield APBC1EN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apbc1en{}; 
        /// bitfield APBC1RST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> apbc1rst{}; 
        /// bitfield APBC1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc1{}; 
    }
    namespace CrgApbc2Psr{    ///< register APBC2_PSR 
        using Addr = Register::Address<0x4001001c,0xffffff6c,0x00000000,unsigned char>;
        /// bitfield APBC2EN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apbc2en{}; 
        /// bitfield APBC2RST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> apbc2rst{}; 
        /// bitfield APBC2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc2{}; 
    }
    namespace CrgSwcPsr{    ///< register SWC_PSR 
        using Addr = Register::Address<0x40010020,0xffffff7c,0x00000000,unsigned char>;
        /// bitfield TESTB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> testb{}; 
        /// bitfield SWDS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> swds{}; 
    }
    namespace CrgTtcPsr{    ///< register TTC_PSR 
        using Addr = Register::Address<0x40010028,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield TTC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ttc{}; 
    }
    namespace CrgCswTmr{    ///< register CSW_TMR 
        using Addr = Register::Address<0x40010030,0xffffff80,0x00000000,unsigned char>;
        /// bitfield SOWT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> sowt{}; 
        /// bitfield MOWT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mowt{}; 
    }
    namespace CrgPswTmr{    ///< register PSW_TMR 
        using Addr = Register::Address<0x40010034,0xffffffe8,0x00000000,unsigned char>;
        /// bitfield PINC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinc{}; 
        /// bitfield POWT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> powt{}; 
    }
    namespace CrgPllCtl1{    ///< register PLL_CTL1 
        using Addr = Register::Address<0x40010038,0xffffff00,0x00000000,unsigned char>;
        /// bitfield PLLK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pllk{}; 
        /// bitfield PLLM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pllm{}; 
    }
    namespace CrgPllCtl2{    ///< register PLL_CTL2 
        using Addr = Register::Address<0x4001003c,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield PLLN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> plln{}; 
    }
    namespace CrgDbwdtCtl{    ///< register DBWDT_CTL 
        using Addr = Register::Address<0x40010054,0xffffff5f,0x00000000,unsigned char>;
        /// bitfield DPHWBE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dphwbe{}; 
        /// bitfield DPSWBE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dpswbe{}; 
    }
    namespace CrgIntEnr{    ///< register INT_ENR 
        using Addr = Register::Address<0x40010060,0xffffffd8,0x00000000,unsigned char>;
        /// bitfield FCSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcse{}; 
        /// bitfield PCSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcse{}; 
        /// bitfield SCSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scse{}; 
        /// bitfield MCSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcse{}; 
    }
    namespace CrgIntStr{    ///< register INT_STR 
        using Addr = Register::Address<0x40010064,0xffffffd8,0x00000000,unsigned char>;
        /// bitfield FCSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fcsi{}; 
        /// bitfield PCSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pcsi{}; 
        /// bitfield SCSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> scsi{}; 
        /// bitfield MCSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mcsi{}; 
    }
    namespace CrgIntClr{    ///< register INT_CLR 
        using Addr = Register::Address<0x40010068,0xffffffd8,0x00000000,unsigned char>;
        /// bitfield FCSC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fcsc{}; 
        /// bitfield PCSC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pcsc{}; 
        /// bitfield SCSC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> scsc{}; 
        /// bitfield MCSC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mcsc{}; 
    }
    namespace CrgRstStr{    ///< register RST_STR 
        using Addr = Register::Address<0x4001000c,0xfffffe0c,0x00000000,unsigned>;
        /// bitfield SRST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> srst{}; 
        /// bitfield FCSR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fcsr{}; 
        /// bitfield CSVR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csvr{}; 
        /// bitfield HWDT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwdt{}; 
        /// bitfield SWDT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swdt{}; 
        /// bitfield INITX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> initx{}; 
        /// bitfield PONR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ponr{}; 
    }
    namespace CrgStbCtl{    ///< register STB_CTL 
        using Addr = Register::Address<0x40010008,0x0000ffec,0x00000000,unsigned>;
        /// bitfield KEY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> key{}; 
        /// bitfield SPL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spl{}; 
        /// bitfield STM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> stm{}; 
    }
    namespace CrgCsvCtl{    ///< register CSV_CTL 
        using Addr = Register::Address<0x40010040,0xffff8cfc,0x00000000,unsigned>;
        /// bitfield FCD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> fcd{}; 
        /// bitfield FCSRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fcsre{}; 
        /// bitfield FCSDE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fcsde{}; 
        /// bitfield SCSVE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scsve{}; 
        /// bitfield MCSVE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcsve{}; 
    }
    namespace CrgCsvStr{    ///< register CSV_STR 
        using Addr = Register::Address<0x40010044,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield SCMF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> scmf{}; 
        /// bitfield MCMF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mcmf{}; 
    }
    namespace CrgFcswhCtl{    ///< register FCSWH_CTL 
        using Addr = Register::Address<0x40010048,0xffffffff,0x00000000,unsigned>;
    }
    namespace CrgFcswlCtl{    ///< register FCSWL_CTL 
        using Addr = Register::Address<0x4001004c,0xffffffff,0x00000000,unsigned>;
    }
    namespace CrgFcswdCtl{    ///< register FCSWD_CTL 
        using Addr = Register::Address<0x40010050,0xffffffff,0x00000000,unsigned>;
    }
}
