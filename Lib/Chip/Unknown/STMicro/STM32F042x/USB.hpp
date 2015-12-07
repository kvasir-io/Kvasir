#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal serial bus full-speed device       interface
    namespace Noneep0r{    ///<endpoint 0 register
        using Addr = Register::Address<0x40005c00,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for               transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        namespace EptypeValC{
        }
        ///Setup transaction               completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for               reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace Noneep1r{    ///<endpoint 1 register
        using Addr = Register::Address<0x40005c04,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for               transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        namespace EptypeValC{
        }
        ///Setup transaction               completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for               reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace Noneep2r{    ///<endpoint 2 register
        using Addr = Register::Address<0x40005c08,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for               transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        namespace EptypeValC{
        }
        ///Setup transaction               completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for               reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace Noneep3r{    ///<endpoint 3 register
        using Addr = Register::Address<0x40005c0c,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for               transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        namespace EptypeValC{
        }
        ///Setup transaction               completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for               reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace Noneep4r{    ///<endpoint 4 register
        using Addr = Register::Address<0x40005c10,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for               transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        namespace EptypeValC{
        }
        ///Setup transaction               completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for               reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace Noneep5r{    ///<endpoint 5 register
        using Addr = Register::Address<0x40005c14,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for               transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        namespace EptypeValC{
        }
        ///Setup transaction               completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for               reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace Noneep6r{    ///<endpoint 6 register
        using Addr = Register::Address<0x40005c18,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for               transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        namespace EptypeValC{
        }
        ///Setup transaction               completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for               reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace Noneep7r{    ///<endpoint 7 register
        using Addr = Register::Address<0x40005c1c,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for               transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        namespace CtrtxValC{
        }
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        namespace EpkindValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        namespace EptypeValC{
        }
        ///Setup transaction               completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception               transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for               reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace Nonecntr{    ///<control register
        using Addr = Register::Address<0x40005c40,0xffff0040,0,unsigned>;
        ///Force USB Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fres{}; 
        namespace FresValC{
        }
        ///Power down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdwn{}; 
        namespace PdwnValC{
        }
        ///Low-power mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lpmode{}; 
        namespace LpmodeValC{
        }
        ///Force suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fsusp{}; 
        namespace FsuspValC{
        }
        ///Resume request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> resume{}; 
        namespace ResumeValC{
        }
        ///LPM L1 Resume request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> l1resume{}; 
        namespace L1resumeValC{
        }
        ///LPM L1 state request interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> l1reqm{}; 
        namespace L1reqmValC{
        }
        ///Expected start of frame interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> esofm{}; 
        namespace EsofmValC{
        }
        ///Start of frame interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sofm{}; 
        namespace SofmValC{
        }
        ///USB reset interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> resetm{}; 
        namespace ResetmValC{
        }
        ///Suspend mode interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> suspm{}; 
        namespace SuspmValC{
        }
        ///Wakeup interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wkupm{}; 
        namespace WkupmValC{
        }
        ///Error interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errm{}; 
        namespace ErrmValC{
        }
        ///Packet memory area over / underrun               interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmaovrm{}; 
        namespace PmaovrmValC{
        }
        ///Correct transfer interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrm{}; 
        namespace CtrmValC{
        }
    }
    namespace Noneistr{    ///<interrupt status register
        using Addr = Register::Address<0x40005c44,0xffff0060,0,unsigned>;
        ///Endpoint Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epId{}; 
        namespace EpidValC{
        }
        ///Direction of transaction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///LPM L1 state request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> l1req{}; 
        namespace L1reqValC{
        }
        ///Expected start frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> esof{}; 
        namespace EsofValC{
        }
        ///start of frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///reset request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reset{}; 
        namespace ResetValC{
        }
        ///Suspend mode request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp{}; 
        namespace SuspValC{
        }
        ///Wakeup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wkup{}; 
        namespace WkupValC{
        }
        ///Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> err{}; 
        namespace ErrValC{
        }
        ///Packet memory area over /               underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmaovr{}; 
        namespace PmaovrValC{
        }
        ///Correct transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctr{}; 
        namespace CtrValC{
        }
    }
    namespace Nonefnr{    ///<frame number register
        using Addr = Register::Address<0x40005c48,0xffff0000,0,unsigned>;
        ///Frame number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> fn{}; 
        namespace FnValC{
        }
        ///Lost SOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> lsof{}; 
        namespace LsofValC{
        }
        ///Locked
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lck{}; 
        namespace LckValC{
        }
        ///Receive data - line status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxdm{}; 
        namespace RxdmValC{
        }
        ///Receive data + line status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxdp{}; 
        namespace RxdpValC{
        }
    }
    namespace Nonedaddr{    ///<device address
        using Addr = Register::Address<0x40005c4c,0xffffff00,0,unsigned>;
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
        ///Enable function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ef{}; 
        namespace EfValC{
        }
    }
    namespace Nonebtable{    ///<Buffer table address
        using Addr = Register::Address<0x40005c50,0xffff0007,0,unsigned>;
        ///Buffer table
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,3),Register::ReadWriteAccess,unsigned> btable{}; 
        namespace BtableValC{
        }
    }
    namespace Nonelpmcsr{    ///<LPM control and status           register
        using Addr = Register::Address<0x40005c54,0xffffff04,0,unsigned>;
        ///LPM support enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpmen{}; 
        namespace LpmenValC{
        }
        ///LPM Token acknowledge               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lpmack{}; 
        namespace LpmackValC{
        }
        ///bRemoteWake value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> remwake{}; 
        namespace RemwakeValC{
        }
        ///BESL value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> besl{}; 
        namespace BeslValC{
        }
    }
    namespace Nonebcdr{    ///<Battery charging detector
        using Addr = Register::Address<0x40005c58,0xffff7f00,0,unsigned>;
        ///Battery charging detector (BCD)               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bcden{}; 
        namespace BcdenValC{
        }
        ///Data contact detection (DCD) mode               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcden{}; 
        namespace DcdenValC{
        }
        ///Primary detection (PD) mode               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pden{}; 
        namespace PdenValC{
        }
        ///Secondary detection (SD) mode               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sden{}; 
        namespace SdenValC{
        }
        ///Data contact detection (DCD)               status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dcdet{}; 
        namespace DcdetValC{
        }
        ///Primary detection (PD)               status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdet{}; 
        namespace PdetValC{
        }
        ///Secondary detection (SD)               status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sdet{}; 
        namespace SdetValC{
        }
        ///DM pull-up detection               status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ps2det{}; 
        namespace Ps2detValC{
        }
        ///DP pull-up control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dppu{}; 
        namespace DppuValC{
        }
    }
}
