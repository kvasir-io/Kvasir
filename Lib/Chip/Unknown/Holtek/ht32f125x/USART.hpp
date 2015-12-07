#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USART
    namespace NoneusartRbr{    ///<USART_RBR
        using Addr = Register::Address<0x40000000,0xfffffe00,0,unsigned>;
        ///RD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rd{}; 
        namespace RdValC{
        }
    }
    namespace NoneusartTbr{    ///<USART_TBR
        using Addr = Register::Address<0x40000000,0xfffffe00,0,unsigned>;
        ///TD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> td{}; 
        namespace TdValC{
        }
    }
    namespace NoneusartIer{    ///<USART_IER
        using Addr = Register::Address<0x40000004,0xfffffff0,0,unsigned>;
        ///RFTLI_RTOIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rftliRtoie{}; 
        namespace RftlirtoieValC{
        }
        ///TFTLIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tftlie{}; 
        namespace TftlieValC{
        }
        ///RLSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rlsie{}; 
        namespace RlsieValC{
        }
        ///MODSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> modsie{}; 
        namespace ModsieValC{
        }
    }
    namespace NoneusartIir{    ///<USART_IIR
        using Addr = Register::Address<0x40000008,0xfffffff0,0,unsigned>;
        ///NIP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nip{}; 
        namespace NipValC{
        }
        ///IID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> iid{}; 
        namespace IidValC{
        }
    }
    namespace NoneusartFcr{    ///<USART_FCR
        using Addr = Register::Address<0x4000000c,0xffffff08,0,unsigned>;
        ///FME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fme{}; 
        namespace FmeValC{
        }
        ///RFR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rfr{}; 
        namespace RfrValC{
        }
        ///TFR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tfr{}; 
        namespace TfrValC{
        }
        ///TFTL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tftl{}; 
        namespace TftlValC{
        }
        ///RFTL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rftl{}; 
        namespace RftlValC{
        }
    }
    namespace NoneusartLcr{    ///<USART_LCR
        using Addr = Register::Address<0x40000010,0xffffff80,0,unsigned>;
        ///WLS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wls{}; 
        namespace WlsValC{
        }
        ///NSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nsb{}; 
        namespace NsbValC{
        }
        ///PBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pbe{}; 
        namespace PbeValC{
        }
        ///EPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epe{}; 
        namespace EpeValC{
        }
        ///SPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spe{}; 
        namespace SpeValC{
        }
        ///BCB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bcb{}; 
        namespace BcbValC{
        }
    }
    namespace NoneusartModcr{    ///<USART_MODCR
        using Addr = Register::Address<0x40000014,0xfffffffc,0,unsigned>;
        ///DTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtr{}; 
        namespace DtrValC{
        }
        ///RTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rts{}; 
        namespace RtsValC{
        }
    }
    namespace NoneusartLsr{    ///<USART_LSR
        using Addr = Register::Address<0x40000018,0xffffff00,0,unsigned>;
        ///RFDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rfdr{}; 
        namespace RfdrValC{
        }
        ///OEI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oei{}; 
        namespace OeiValC{
        }
        ///PEI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pei{}; 
        namespace PeiValC{
        }
        ///FEI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fei{}; 
        namespace FeiValC{
        }
        ///BII
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bii{}; 
        namespace BiiValC{
        }
        ///TXFEMPT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txfempt{}; 
        namespace TxfemptValC{
        }
        ///TXEMPT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txempt{}; 
        namespace TxemptValC{
        }
        ///ERRRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> errrx{}; 
        namespace ErrrxValC{
        }
    }
    namespace NoneusartModsr{    ///<USART_MODSR
        using Addr = Register::Address<0x4000001c,0xffffff00,0,unsigned>;
        ///DCTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dcts{}; 
        namespace DctsValC{
        }
        ///DDSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ddsr{}; 
        namespace DdsrValC{
        }
        ///DRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dri{}; 
        namespace DriValC{
        }
        ///DDCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ddcd{}; 
        namespace DdcdValC{
        }
        ///CTSS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctss{}; 
        namespace CtssValC{
        }
        ///DSRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dsrs{}; 
        namespace DsrsValC{
        }
        ///RIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ris{}; 
        namespace RisValC{
        }
        ///DCDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcds{}; 
        namespace DcdsValC{
        }
    }
    namespace NoneusartTpr{    ///<USART_TPR
        using Addr = Register::Address<0x40000020,0xffff0000,0,unsigned>;
        ///RTOIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rtoic{}; 
        namespace RtoicValC{
        }
        ///RTOIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rtoie{}; 
        namespace RtoieValC{
        }
        ///TG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tg{}; 
        namespace TgValC{
        }
    }
    namespace NoneusartMdr{    ///<USART_MDR
        using Addr = Register::Address<0x40000024,0xfffffff8,0,unsigned>;
        ///MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
        ///TRSM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trsm{}; 
        namespace TrsmValC{
        }
    }
    namespace NoneusartIrdacr{    ///<USART_IrDACR
        using Addr = Register::Address<0x40000028,0xffff00f0,0,unsigned>;
        ///IrDAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irdaen{}; 
        namespace IrdaenValC{
        }
        ///IrDALP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irdalp{}; 
        namespace IrdalpValC{
        }
        ///TXSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txsel{}; 
        namespace TxselValC{
        }
        ///LB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lb{}; 
        namespace LbValC{
        }
        ///IrDAPSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> irdapsc{}; 
        namespace IrdapscValC{
        }
    }
    namespace NoneusartRs485cr{    ///<USART_RS485CR
        using Addr = Register::Address<0x4000002c,0xfffffffe,0,unsigned>;
        ///TXENP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txenp{}; 
        namespace TxenpValC{
        }
    }
    namespace NoneusartSyncr{    ///<USART_SYNCR
        using Addr = Register::Address<0x40000030,0xfffffff2,0,unsigned>;
        ///CLKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
        ///CPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cps{}; 
        namespace CpsValC{
        }
        ///CPO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpo{}; 
        namespace CpoValC{
        }
    }
    namespace NoneusartDegtstr{    ///<USART_DEGTSTR
        using Addr = Register::Address<0x40000034,0xfffffffc,0,unsigned>;
        ///LBM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> lbm{}; 
        namespace LbmValC{
        }
    }
    namespace NoneusartDlr{    ///<USART_DLR
        using Addr = Register::Address<0x40000038,0xffff0000,0,unsigned>;
        ///BRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> brd{}; 
        namespace BrdValC{
        }
    }
}
