#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal serial bus full-speed device       interface
    namespace NoneusbEp0r{    ///<endpoint 0 register
        using Addr = Register::Address<0x40005c00,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for               transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction               completed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for               reception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace NoneusbEp1r{    ///<endpoint 1 register
        using Addr = Register::Address<0x40005c04,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for               transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction               completed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for               reception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace NoneusbEp2r{    ///<endpoint 2 register
        using Addr = Register::Address<0x40005c08,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for               transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction               completed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for               reception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace NoneusbEp3r{    ///<endpoint 3 register
        using Addr = Register::Address<0x40005c0c,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for               transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction               completed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for               reception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace NoneusbEp4r{    ///<endpoint 4 register
        using Addr = Register::Address<0x40005c10,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for               transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction               completed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for               reception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace NoneusbEp5r{    ///<endpoint 5 register
        using Addr = Register::Address<0x40005c14,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for               transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction               completed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for               reception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace NoneusbEp6r{    ///<endpoint 6 register
        using Addr = Register::Address<0x40005c18,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for               transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction               completed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for               reception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace NoneusbEp7r{    ///<endpoint 7 register
        using Addr = Register::Address<0x40005c1c,0xffff0000,0,unsigned>;
        ///Endpoint address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for               transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction               completed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception               transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for               reception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace NoneusbCntr{    ///<control register
        using Addr = Register::Address<0x40005c40,0xffff00e0,0,unsigned>;
        ///Force USB Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fres{}; 
        ///Power down
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdwn{}; 
        ///Low-power mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lpmode{}; 
        ///Force suspend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fsusp{}; 
        ///Resume request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> resume{}; 
        ///Expected start of frame interrupt               mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> esofm{}; 
        ///Start of frame interrupt               mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sofm{}; 
        ///USB reset interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> resetm{}; 
        ///Suspend mode interrupt               mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> suspm{}; 
        ///Wakeup interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wkupm{}; 
        ///Error interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errm{}; 
        ///Packet memory area over / underrun               interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmaovrm{}; 
        ///Correct transfer interrupt               mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrm{}; 
    }
    namespace Noneistr{    ///<interrupt status register
        using Addr = Register::Address<0x40005c44,0xffff00e0,0,unsigned>;
        ///Endpoint Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epId{}; 
        ///Direction of transaction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Expected start frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> esof{}; 
        ///start of frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sof{}; 
        ///reset request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reset{}; 
        ///Suspend mode request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp{}; 
        ///Wakeup
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wkup{}; 
        ///Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> err{}; 
        ///Packet memory area over /               underrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmaovr{}; 
        ///Correct transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctr{}; 
    }
    namespace Nonefnr{    ///<frame number register
        using Addr = Register::Address<0x40005c48,0xffff0000,0,unsigned>;
        ///Frame number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> fn{}; 
        ///Lost SOF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> lsof{}; 
        ///Locked
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lck{}; 
        ///Receive data - line status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxdm{}; 
        ///Receive data + line status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxdp{}; 
    }
    namespace Nonedaddr{    ///<device address
        using Addr = Register::Address<0x40005c4c,0xffffff00,0,unsigned>;
        ///Device address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> add{}; 
        ///Device address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> add1{}; 
        ///Device address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> add2{}; 
        ///Device address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> add3{}; 
        ///Device address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add4{}; 
        ///Device address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> add5{}; 
        ///Device address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> add6{}; 
        ///Enable function
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ef{}; 
    }
    namespace Nonebtable{    ///<Buffer table address
        using Addr = Register::Address<0x40005c50,0xffff0007,0,unsigned>;
        ///Buffer table
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,3),Register::ReadWriteAccess,unsigned> btable{}; 
    }
}
