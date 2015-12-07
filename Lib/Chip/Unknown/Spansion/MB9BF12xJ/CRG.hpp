#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral CRG 
    namespace NonescmCtl{    ///< register SCM_CTL 
        using Addr = Register::Address<0x40010000,0xffffff05,0,unsigned char>;
        /// bitfield RCS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rcs{}; 
        namespace RcsValC{
        }
        /// bitfield PLLE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> plle{}; 
        namespace PlleValC{
        }
        /// bitfield SOSCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sosce{}; 
        namespace SosceValC{
        }
        /// bitfield MOSCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mosce{}; 
        namespace MosceValC{
        }
    }
    namespace NonescmStr{    ///< register SCM_STR 
        using Addr = Register::Address<0x40010004,0xffffff05,0,unsigned char>;
        /// bitfield RCM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rcm{}; 
        namespace RcmValC{
        }
        /// bitfield PLRDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> plrdy{}; 
        namespace PlrdyValC{
        }
        /// bitfield SORDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sordy{}; 
        namespace SordyValC{
        }
        /// bitfield MORDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mordy{}; 
        namespace MordyValC{
        }
    }
    namespace NonebscPsr{    ///< register BSC_PSR 
        using Addr = Register::Address<0x40010010,0xfffffff8,0,unsigned char>;
        /// bitfield BSR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bsr{}; 
        namespace BsrValC{
        }
    }
    namespace Noneapbc0Psr{    ///< register APBC0_PSR 
        using Addr = Register::Address<0x40010014,0xfffffffc,0,unsigned char>;
        /// bitfield APBC0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc0{}; 
        namespace Apbc0ValC{
        }
    }
    namespace Noneapbc1Psr{    ///< register APBC1_PSR 
        using Addr = Register::Address<0x40010018,0xffffff6c,0,unsigned char>;
        /// bitfield APBC1EN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apbc1en{}; 
        namespace Apbc1enValC{
        }
        /// bitfield APBC1RST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> apbc1rst{}; 
        namespace Apbc1rstValC{
        }
        /// bitfield APBC1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc1{}; 
        namespace Apbc1ValC{
        }
    }
    namespace Noneapbc2Psr{    ///< register APBC2_PSR 
        using Addr = Register::Address<0x4001001c,0xffffff6c,0,unsigned char>;
        /// bitfield APBC2EN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apbc2en{}; 
        namespace Apbc2enValC{
        }
        /// bitfield APBC2RST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> apbc2rst{}; 
        namespace Apbc2rstValC{
        }
        /// bitfield APBC2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc2{}; 
        namespace Apbc2ValC{
        }
    }
    namespace NoneswcPsr{    ///< register SWC_PSR 
        using Addr = Register::Address<0x40010020,0xffffff7c,0,unsigned char>;
        /// bitfield TESTB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> testb{}; 
        namespace TestbValC{
        }
        /// bitfield SWDS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> swds{}; 
        namespace SwdsValC{
        }
    }
    namespace NonettcPsr{    ///< register TTC_PSR 
        using Addr = Register::Address<0x40010028,0xfffffffc,0,unsigned char>;
        /// bitfield TTC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ttc{}; 
        namespace TtcValC{
        }
    }
    namespace NonecswTmr{    ///< register CSW_TMR 
        using Addr = Register::Address<0x40010030,0xffffff80,0,unsigned char>;
        /// bitfield SOWT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> sowt{}; 
        namespace SowtValC{
        }
        /// bitfield MOWT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mowt{}; 
        namespace MowtValC{
        }
    }
    namespace NonepswTmr{    ///< register PSW_TMR 
        using Addr = Register::Address<0x40010034,0xffffffe8,0,unsigned char>;
        /// bitfield PINC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        /// bitfield POWT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> powt{}; 
        namespace PowtValC{
        }
    }
    namespace NonepllCtl1{    ///< register PLL_CTL1 
        using Addr = Register::Address<0x40010038,0xffffff00,0,unsigned char>;
        /// bitfield PLLK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pllk{}; 
        namespace PllkValC{
        }
        /// bitfield PLLM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pllm{}; 
        namespace PllmValC{
        }
    }
    namespace NonepllCtl2{    ///< register PLL_CTL2 
        using Addr = Register::Address<0x4001003c,0xffffffc0,0,unsigned char>;
        /// bitfield PLLN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> plln{}; 
        namespace PllnValC{
        }
    }
    namespace NonedbwdtCtl{    ///< register DBWDT_CTL 
        using Addr = Register::Address<0x40010054,0xffffff5f,0,unsigned char>;
        /// bitfield DPHWBE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dphwbe{}; 
        namespace DphwbeValC{
        }
        /// bitfield DPSWBE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dpswbe{}; 
        namespace DpswbeValC{
        }
    }
    namespace NoneintEnr{    ///< register INT_ENR 
        using Addr = Register::Address<0x40010060,0xffffffd8,0,unsigned char>;
        /// bitfield FCSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcse{}; 
        namespace FcseValC{
        }
        /// bitfield PCSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcse{}; 
        namespace PcseValC{
        }
        /// bitfield SCSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scse{}; 
        namespace ScseValC{
        }
        /// bitfield MCSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcse{}; 
        namespace McseValC{
        }
    }
    namespace NoneintStr{    ///< register INT_STR 
        using Addr = Register::Address<0x40010064,0xffffffd8,0,unsigned char>;
        /// bitfield FCSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcsi{}; 
        namespace FcsiValC{
        }
        /// bitfield PCSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcsi{}; 
        namespace PcsiValC{
        }
        /// bitfield SCSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scsi{}; 
        namespace ScsiValC{
        }
        /// bitfield MCSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcsi{}; 
        namespace McsiValC{
        }
    }
    namespace NoneintClr{    ///< register INT_CLR 
        using Addr = Register::Address<0x40010068,0xffffffd8,0,unsigned char>;
        /// bitfield FCSC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcsc{}; 
        namespace FcscValC{
        }
        /// bitfield PCSC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcsc{}; 
        namespace PcscValC{
        }
        /// bitfield SCSC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scsc{}; 
        namespace ScscValC{
        }
        /// bitfield MCSC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcsc{}; 
        namespace McscValC{
        }
    }
    namespace NonerstStr{    ///< register RST_STR 
        using Addr = Register::Address<0x4001000c,0xfffffe0c,0,unsigned>;
        /// bitfield SRST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srst{}; 
        namespace SrstValC{
        }
        /// bitfield FCSR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fcsr{}; 
        namespace FcsrValC{
        }
        /// bitfield CSVR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> csvr{}; 
        namespace CsvrValC{
        }
        /// bitfield HWDT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hwdt{}; 
        namespace HwdtValC{
        }
        /// bitfield SWDT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> swdt{}; 
        namespace SwdtValC{
        }
        /// bitfield INITX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> initx{}; 
        namespace InitxValC{
        }
        /// bitfield PONR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ponr{}; 
        namespace PonrValC{
        }
    }
    namespace NonestbCtl{    ///< register STB_CTL 
        using Addr = Register::Address<0x40010008,0x0000ffec,0,unsigned>;
        /// bitfield KEY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
        /// bitfield SPL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spl{}; 
        namespace SplValC{
        }
        /// bitfield STM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> stm{}; 
        namespace StmValC{
        }
    }
    namespace NonecsvCtl{    ///< register CSV_CTL 
        using Addr = Register::Address<0x40010040,0xffff8cfc,0,unsigned>;
        /// bitfield FCD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> fcd{}; 
        namespace FcdValC{
        }
        /// bitfield FCSRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fcsre{}; 
        namespace FcsreValC{
        }
        /// bitfield FCSDE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fcsde{}; 
        namespace FcsdeValC{
        }
        /// bitfield SCSVE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scsve{}; 
        namespace ScsveValC{
        }
        /// bitfield MCSVE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcsve{}; 
        namespace McsveValC{
        }
    }
    namespace NonecsvStr{    ///< register CSV_STR 
        using Addr = Register::Address<0x40010044,0xfffffffc,0,unsigned char>;
        /// bitfield SCMF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scmf{}; 
        namespace ScmfValC{
        }
        /// bitfield MCMF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcmf{}; 
        namespace McmfValC{
        }
    }
    namespace NonefcswhCtl{    ///< register FCSWH_CTL 
        using Addr = Register::Address<0x40010048,0xffffffff,0,unsigned>;
    }
    namespace NonefcswlCtl{    ///< register FCSWL_CTL 
        using Addr = Register::Address<0x4001004c,0xffffffff,0,unsigned>;
    }
    namespace NonefcswdCtl{    ///< register FCSWD_CTL 
        using Addr = Register::Address<0x40010050,0xffffffff,0,unsigned>;
    }
}
