#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I2C compatible Two-Wire Interface 0
    namespace NonetasksStartrx{    ///<Start TWI receive sequence
        using Addr = Register::Address<0x40003000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStarttx{    ///<Start TWI transmit sequence
        using Addr = Register::Address<0x40003008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop TWI transaction
        using Addr = Register::Address<0x40003014,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSuspend{    ///<Suspend TWI transaction
        using Addr = Register::Address<0x4000301c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksResume{    ///<Resume TWI transaction
        using Addr = Register::Address<0x40003020,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsStopped{    ///<TWI stopped
        using Addr = Register::Address<0x40003104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRxdready{    ///<TWI RXD byte received
        using Addr = Register::Address<0x40003108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsTxdsent{    ///<TWI TXD byte sent
        using Addr = Register::Address<0x4000311c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsError{    ///<TWI error
        using Addr = Register::Address<0x40003124,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsBb{    ///<TWI byte boundary, generated before each byte that is sent or received
        using Addr = Register::Address<0x40003138,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsSuspended{    ///<TWI entered the suspended state
        using Addr = Register::Address<0x40003148,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x40003200,0xfffffffc,0,unsigned>;
        ///Shortcut between EVENTS_BB event and TASKS_SUSPEND task
        enum class BbsuspendVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BbsuspendVal> bbSuspend{}; 
        namespace BbsuspendValC{
            constexpr Register::FieldValue<decltype(bbSuspend),BbsuspendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bbSuspend),BbsuspendVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_BB event and TASKS_STOP task
        enum class BbstopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BbstopVal> bbStop{}; 
        namespace BbstopValC{
            constexpr Register::FieldValue<decltype(bbStop),BbstopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bbStop),BbstopVal::enabled> enabled{};
        }
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40003304,0xfffbbd79,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped),StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped),StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped),StoppedVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_RXDREADY event
        enum class RxdreadyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxdreadyVal> rxdready{}; 
        namespace RxdreadyValC{
            constexpr Register::FieldValue<decltype(rxdready),RxdreadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxdready),RxdreadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxdready),RxdreadyVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TXDSENT event
        enum class TxdsentVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TxdsentVal> txdsent{}; 
        namespace TxdsentValC{
            constexpr Register::FieldValue<decltype(txdsent),TxdsentVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txdsent),TxdsentVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txdsent),TxdsentVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_ERROR event
        enum class ErrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error),ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error),ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error),ErrorVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_BB event
        enum class BbVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,BbVal> bb{}; 
        namespace BbValC{
            constexpr Register::FieldValue<decltype(bb),BbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bb),BbVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(bb),BbVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_SUSPENDED event
        enum class SuspendedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,SuspendedVal> suspended{}; 
        namespace SuspendedValC{
            constexpr Register::FieldValue<decltype(suspended),SuspendedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(suspended),SuspendedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(suspended),SuspendedVal::set> set{};
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40003308,0xfffbbd79,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped),StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped),StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped),StoppedVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_RXDREADY event
        enum class RxdreadyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxdreadyVal> rxdready{}; 
        namespace RxdreadyValC{
            constexpr Register::FieldValue<decltype(rxdready),RxdreadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxdready),RxdreadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxdready),RxdreadyVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TXDSENT event
        enum class TxdsentVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TxdsentVal> txdsent{}; 
        namespace TxdsentValC{
            constexpr Register::FieldValue<decltype(txdsent),TxdsentVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txdsent),TxdsentVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txdsent),TxdsentVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_ERROR event
        enum class ErrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error),ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error),ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error),ErrorVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_BB event
        enum class BbVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,BbVal> bb{}; 
        namespace BbValC{
            constexpr Register::FieldValue<decltype(bb),BbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bb),BbVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(bb),BbVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_SUSPENDED event
        enum class SuspendedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,SuspendedVal> suspended{}; 
        namespace SuspendedValC{
            constexpr Register::FieldValue<decltype(suspended),SuspendedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(suspended),SuspendedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(suspended),SuspendedVal::clear> clear{};
        }
    }
    namespace Noneerrorsrc{    ///<Error source
        using Addr = Register::Address<0x400034c4,0xfffffff8,0,unsigned>;
        ///Overrun error
        enum class OverrunVal {
            notpresent=0x00000000,     ///<Read: no overrun occured
            present=0x00000001,     ///<Read: overrun occured
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OverrunVal> overrun{}; 
        namespace OverrunValC{
            constexpr Register::FieldValue<decltype(overrun),OverrunVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(overrun),OverrunVal::present> present{};
        }
        ///NACK received after sending the address (write '1' to clear)
        enum class AnackVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AnackVal> anack{}; 
        namespace AnackValC{
            constexpr Register::FieldValue<decltype(anack),AnackVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(anack),AnackVal::present> present{};
        }
        ///NACK received after sending a data byte (write '1' to clear)
        enum class DnackVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DnackVal> dnack{}; 
        namespace DnackValC{
            constexpr Register::FieldValue<decltype(dnack),DnackVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(dnack),DnackVal::present> present{};
        }
    }
    namespace Noneenable{    ///<Enable TWI
        using Addr = Register::Address<0x40003500,0xfffffff0,0,unsigned>;
        ///Enable or disable TWI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
    }
    namespace Nonepselscl{    ///<Pin select for SCL
        using Addr = Register::Address<0x40003508,0x00000000,0,unsigned>;
        ///Pin number configuration for TWI SCL signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pselscl{}; 
        namespace PselsclValC{
        }
    }
    namespace Nonepselsda{    ///<Pin select for SDA
        using Addr = Register::Address<0x4000350c,0x00000000,0,unsigned>;
        ///Pin number configuration for TWI SDA signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pselsda{}; 
        namespace PselsdaValC{
        }
    }
    namespace Nonerxd{    ///<RXD register
        using Addr = Register::Address<0x40003518,0xffffff00,0,unsigned>;
        ///RXD register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
        namespace RxdValC{
        }
    }
    namespace Nonetxd{    ///<TXD register
        using Addr = Register::Address<0x4000351c,0xffffff00,0,unsigned>;
        ///TXD register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
        namespace TxdValC{
        }
    }
    namespace Nonefrequency{    ///<TWI frequency
        using Addr = Register::Address<0x40003524,0x00000000,0,unsigned>;
        ///TWI master clock frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> frequency{}; 
        namespace FrequencyValC{
        }
    }
    namespace Noneaddress{    ///<Address used in the TWI transfer
        using Addr = Register::Address<0x40003588,0xffffff80,0,unsigned>;
        ///Address used in the TWI transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> address{}; 
        namespace AddressValC{
        }
    }
}
