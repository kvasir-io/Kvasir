#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal serial bus full-speed device
      interface
    namespace NoneusbEp0r{    ///<endpoint 0 register
        using Addr = Register::Address<0x40005c00,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for
              transmission
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
        ///Setup transaction
              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for
              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace NoneusbEp1r{    ///<endpoint 1 register
        using Addr = Register::Address<0x40005c04,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for
              transmission
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
        ///Setup transaction
              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for
              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace NoneusbEp2r{    ///<endpoint 2 register
        using Addr = Register::Address<0x40005c08,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for
              transmission
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
        ///Setup transaction
              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for
              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace NoneusbEp3r{    ///<endpoint 3 register
        using Addr = Register::Address<0x40005c0c,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for
              transmission
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
        ///Setup transaction
              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for
              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace NoneusbEp4r{    ///<endpoint 4 register
        using Addr = Register::Address<0x40005c10,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for
              transmission
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
        ///Setup transaction
              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for
              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace NoneusbEp5r{    ///<endpoint 5 register
        using Addr = Register::Address<0x40005c14,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for
              transmission
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
        ///Setup transaction
              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for
              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace NoneusbEp6r{    ///<endpoint 6 register
        using Addr = Register::Address<0x40005c18,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for
              transmission
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
        ///Setup transaction
              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for
              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace NoneusbEp7r{    ///<endpoint 7 register
        using Addr = Register::Address<0x40005c1c,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        namespace EaValC{
        }
        ///Status bits, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        namespace StattxValC{
        }
        ///Data Toggle, for transmission
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        namespace DtogtxValC{
        }
        ///Correct Transfer for
              transmission
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
        ///Setup transaction
              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        namespace SetupValC{
        }
        ///Status bits, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        namespace StatrxValC{
        }
        ///Data Toggle, for reception
              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        namespace DtogrxValC{
        }
        ///Correct transfer for
              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        namespace CtrrxValC{
        }
    }
    namespace NoneusbCntr{    ///<control register
        using Addr = Register::Address<0x40005c40,0xffff00e0,0,unsigned>;
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
        ///Expected start of frame interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> esofm{}; 
        namespace EsofmValC{
        }
        ///Start of frame interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sofm{}; 
        namespace SofmValC{
        }
        ///USB reset interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> resetm{}; 
        namespace ResetmValC{
        }
        ///Suspend mode interrupt
              mask
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
        ///Packet memory area over / underrun
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmaovrm{}; 
        namespace PmaovrmValC{
        }
        ///Correct transfer interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrm{}; 
        namespace CtrmValC{
        }
    }
    namespace Noneistr{    ///<interrupt status register
        using Addr = Register::Address<0x40005c44,0xffff00e0,0,unsigned>;
        ///Endpoint Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epId{}; 
        namespace EpidValC{
        }
        ///Direction of transaction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
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
        ///Packet memory area over /
              underrun
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
}
