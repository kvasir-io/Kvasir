#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal serial bus full-speed device
      interface
    namespace Noneep0r{    ///<endpoint register
        using Addr = Register::Address<0x40005c00,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
        ///DTOG_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///STAT_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EP_KIND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///CTR_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///DTOG_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///STAT_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///EA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
    }
    namespace Noneep1r{    ///<endpoint register
        using Addr = Register::Address<0x40005c04,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
        ///DTOG_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///STAT_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EP_KIND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///CTR_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///DTOG_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///STAT_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///EA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
    }
    namespace Noneep2r{    ///<endpoint register
        using Addr = Register::Address<0x40005c08,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
        ///DTOG_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///STAT_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EP_KIND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///CTR_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///DTOG_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///STAT_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///EA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
    }
    namespace Noneep3r{    ///<endpoint register
        using Addr = Register::Address<0x40005c0c,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
        ///DTOG_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///STAT_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EP_KIND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///CTR_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///DTOG_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///STAT_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///EA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
    }
    namespace Noneep4r{    ///<endpoint register
        using Addr = Register::Address<0x40005c10,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
        ///DTOG_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///STAT_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EP_KIND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///CTR_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///DTOG_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///STAT_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///EA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
    }
    namespace Noneep5r{    ///<endpoint register
        using Addr = Register::Address<0x40005c14,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
        ///DTOG_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///STAT_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EP_KIND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///CTR_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///DTOG_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///STAT_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///EA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
    }
    namespace Noneep6r{    ///<endpoint register
        using Addr = Register::Address<0x40005c18,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
        ///DTOG_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///STAT_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EP_KIND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///CTR_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///DTOG_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///STAT_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///EA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
    }
    namespace Noneep7r{    ///<endpoint register
        using Addr = Register::Address<0x40005c1c,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
        ///DTOG_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///STAT_RX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EP_KIND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///CTR_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///DTOG_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///STAT_TX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///EA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
    }
    namespace Nonecntr{    ///<control register
        using Addr = Register::Address<0x40005c40,0xffff0040,0,unsigned>;
        ///CTRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrm{}; 
        namespace CtrmValC{
        }
        ///PMAOVRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmaovrm{}; 
        namespace PmaovrmValC{
        }
        ///ERRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errm{}; 
        namespace ErrmValC{
        }
        ///WKUPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wkupm{}; 
        namespace WkupmValC{
        }
        ///SUSPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> suspm{}; 
        namespace SuspmValC{
        }
        ///RESETM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> resetm{}; 
        namespace ResetmValC{
        }
        ///SOFM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sofm{}; 
        namespace SofmValC{
        }
        ///ESOFM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> esofm{}; 
        namespace EsofmValC{
        }
        ///L1REQM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> l1reqm{}; 
        namespace L1reqmValC{
        }
        ///L1RESUME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> l1resume{}; 
        namespace L1resumeValC{
        }
        ///RESUME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> resume{}; 
        namespace ResumeValC{
        }
        ///FSUSP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fsusp{}; 
        namespace FsuspValC{
        }
        ///LPMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lpmode{}; 
        namespace LpmodeValC{
        }
        ///PDWN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdwn{}; 
        namespace PdwnValC{
        }
        ///FRES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fres{}; 
        namespace FresValC{
        }
    }
    namespace Noneistr{    ///<interrupt status register
        using Addr = Register::Address<0x40005c44,0xffff0060,0,unsigned>;
        ///CTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctr{}; 
        namespace CtrValC{
        }
        ///PMAOVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmaovr{}; 
        namespace PmaovrValC{
        }
        ///ERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> err{}; 
        namespace ErrValC{
        }
        ///WKUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wkup{}; 
        namespace WkupValC{
        }
        ///SUSP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp{}; 
        namespace SuspValC{
        }
        ///RESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reset{}; 
        namespace ResetValC{
        }
        ///SOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///ESOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> esof{}; 
        namespace EsofValC{
        }
        ///L1REQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> l1req{}; 
        namespace L1reqValC{
        }
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///EP_ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epId{}; 
        namespace EpidValC{
        }
    }
    namespace Nonefnr{    ///<frame number register
        using Addr = Register::Address<0x40005c48,0xffff0000,0,unsigned>;
        ///RXDP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxdp{}; 
        namespace RxdpValC{
        }
        ///RXDM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxdm{}; 
        namespace RxdmValC{
        }
        ///LCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lck{}; 
        namespace LckValC{
        }
        ///LSOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> lsof{}; 
        namespace LsofValC{
        }
        ///FN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> fn{}; 
        namespace FnValC{
        }
    }
    namespace Nonedaddr{    ///<device address
        using Addr = Register::Address<0x40005c4c,0xffffff00,0,unsigned>;
        ///EF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ef{}; 
        namespace EfValC{
        }
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonebtable{    ///<Buffer table address
        using Addr = Register::Address<0x40005c50,0xffff0007,0,unsigned>;
        ///BTABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,3),Register::ReadWriteAccess,unsigned> btable{}; 
        namespace BtableValC{
        }
    }
    namespace Nonelpmcsr{    ///<LPM control and status
          register
        using Addr = Register::Address<0x40005c54,0xffffff04,0,unsigned>;
        ///BESL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> besl{}; 
        namespace BeslValC{
        }
        ///REMWAKE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> remwake{}; 
        namespace RemwakeValC{
        }
        ///LPMACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lpmack{}; 
        namespace LpmackValC{
        }
        ///LPMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpmen{}; 
        namespace LpmenValC{
        }
    }
    namespace Nonebcdr{    ///<Battery charging detector
        using Addr = Register::Address<0x40005c58,0xffff7f00,0,unsigned>;
        ///DPPU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dppu{}; 
        namespace DppuValC{
        }
        ///PS2DET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ps2det{}; 
        namespace Ps2detValC{
        }
        ///SDET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sdet{}; 
        namespace SdetValC{
        }
        ///PDET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdet{}; 
        namespace PdetValC{
        }
        ///DCDET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dcdet{}; 
        namespace DcdetValC{
        }
        ///SDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sden{}; 
        namespace SdenValC{
        }
        ///PDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pden{}; 
        namespace PdenValC{
        }
        ///DCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcden{}; 
        namespace DcdenValC{
        }
        ///BCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bcden{}; 
        namespace BcdenValC{
        }
    }
}
