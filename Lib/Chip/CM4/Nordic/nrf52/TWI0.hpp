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
        enum class bbSuspendVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace bbSuspendValC{
            constexpr MPL::Value<bbSuspendVal,bbSuspendVal::disabled> disabled{};
            constexpr MPL::Value<bbSuspendVal,bbSuspendVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bbSuspendVal> bbSuspend{}; 
        ///Shortcut between EVENTS_BB event and TASKS_STOP task
        enum class bbStopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace bbStopValC{
            constexpr MPL::Value<bbStopVal,bbStopVal::disabled> disabled{};
            constexpr MPL::Value<bbStopVal,bbStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bbStopVal> bbStop{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40003304,0xfffbbd79,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_STOPPED event
        enum class stoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Write '1' to Enable interrupt on EVENTS_RXDREADY event
        enum class rxdreadyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace rxdreadyValC{
            constexpr MPL::Value<rxdreadyVal,rxdreadyVal::disabled> disabled{};
            constexpr MPL::Value<rxdreadyVal,rxdreadyVal::enabled> enabled{};
            constexpr MPL::Value<rxdreadyVal,rxdreadyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rxdreadyVal> rxdready{}; 
        ///Write '1' to Enable interrupt on EVENTS_TXDSENT event
        enum class txdsentVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace txdsentValC{
            constexpr MPL::Value<txdsentVal,txdsentVal::disabled> disabled{};
            constexpr MPL::Value<txdsentVal,txdsentVal::enabled> enabled{};
            constexpr MPL::Value<txdsentVal,txdsentVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,txdsentVal> txdsent{}; 
        ///Write '1' to Enable interrupt on EVENTS_ERROR event
        enum class errorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::disabled> disabled{};
            constexpr MPL::Value<errorVal,errorVal::enabled> enabled{};
            constexpr MPL::Value<errorVal,errorVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,errorVal> error{}; 
        ///Write '1' to Enable interrupt on EVENTS_BB event
        enum class bbVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace bbValC{
            constexpr MPL::Value<bbVal,bbVal::disabled> disabled{};
            constexpr MPL::Value<bbVal,bbVal::enabled> enabled{};
            constexpr MPL::Value<bbVal,bbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,bbVal> bb{}; 
        ///Write '1' to Enable interrupt on EVENTS_SUSPENDED event
        enum class suspendedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace suspendedValC{
            constexpr MPL::Value<suspendedVal,suspendedVal::disabled> disabled{};
            constexpr MPL::Value<suspendedVal,suspendedVal::enabled> enabled{};
            constexpr MPL::Value<suspendedVal,suspendedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,suspendedVal> suspended{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40003308,0xfffbbd79,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_STOPPED event
        enum class stoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Write '1' to Clear interrupt on EVENTS_RXDREADY event
        enum class rxdreadyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace rxdreadyValC{
            constexpr MPL::Value<rxdreadyVal,rxdreadyVal::disabled> disabled{};
            constexpr MPL::Value<rxdreadyVal,rxdreadyVal::enabled> enabled{};
            constexpr MPL::Value<rxdreadyVal,rxdreadyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rxdreadyVal> rxdready{}; 
        ///Write '1' to Clear interrupt on EVENTS_TXDSENT event
        enum class txdsentVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace txdsentValC{
            constexpr MPL::Value<txdsentVal,txdsentVal::disabled> disabled{};
            constexpr MPL::Value<txdsentVal,txdsentVal::enabled> enabled{};
            constexpr MPL::Value<txdsentVal,txdsentVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,txdsentVal> txdsent{}; 
        ///Write '1' to Clear interrupt on EVENTS_ERROR event
        enum class errorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::disabled> disabled{};
            constexpr MPL::Value<errorVal,errorVal::enabled> enabled{};
            constexpr MPL::Value<errorVal,errorVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,errorVal> error{}; 
        ///Write '1' to Clear interrupt on EVENTS_BB event
        enum class bbVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace bbValC{
            constexpr MPL::Value<bbVal,bbVal::disabled> disabled{};
            constexpr MPL::Value<bbVal,bbVal::enabled> enabled{};
            constexpr MPL::Value<bbVal,bbVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,bbVal> bb{}; 
        ///Write '1' to Clear interrupt on EVENTS_SUSPENDED event
        enum class suspendedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace suspendedValC{
            constexpr MPL::Value<suspendedVal,suspendedVal::disabled> disabled{};
            constexpr MPL::Value<suspendedVal,suspendedVal::enabled> enabled{};
            constexpr MPL::Value<suspendedVal,suspendedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,suspendedVal> suspended{}; 
    }
    namespace Noneerrorsrc{    ///<Error source
        using Addr = Register::Address<0x400034c4,0xfffffff8,0,unsigned>;
        ///Overrun error
        enum class overrunVal {
            notpresent=0x00000000,     ///<Read: no overrun occured
            present=0x00000001,     ///<Read: overrun occured
        };
        namespace overrunValC{
            constexpr MPL::Value<overrunVal,overrunVal::notpresent> notpresent{};
            constexpr MPL::Value<overrunVal,overrunVal::present> present{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,overrunVal> overrun{}; 
        ///NACK received after sending the address (write '1' to clear)
        enum class anackVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
        };
        namespace anackValC{
            constexpr MPL::Value<anackVal,anackVal::notpresent> notpresent{};
            constexpr MPL::Value<anackVal,anackVal::present> present{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,anackVal> anack{}; 
        ///NACK received after sending a data byte (write '1' to clear)
        enum class dnackVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
        };
        namespace dnackValC{
            constexpr MPL::Value<dnackVal,dnackVal::notpresent> notpresent{};
            constexpr MPL::Value<dnackVal,dnackVal::present> present{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,dnackVal> dnack{}; 
    }
    namespace Noneenable{    ///<Enable TWI
        using Addr = Register::Address<0x40003500,0xfffffff0,0,unsigned>;
        ///Enable or disable TWI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Nonepselscl{    ///<Pin select for SCL
        using Addr = Register::Address<0x40003508,0x00000000,0,unsigned>;
        ///Pin number configuration for TWI SCL signal
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pselscl{}; 
    }
    namespace Nonepselsda{    ///<Pin select for SDA
        using Addr = Register::Address<0x4000350c,0x00000000,0,unsigned>;
        ///Pin number configuration for TWI SDA signal
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pselsda{}; 
    }
    namespace Nonerxd{    ///<RXD register
        using Addr = Register::Address<0x40003518,0xffffff00,0,unsigned>;
        ///RXD register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
    }
    namespace Nonetxd{    ///<TXD register
        using Addr = Register::Address<0x4000351c,0xffffff00,0,unsigned>;
        ///TXD register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace Nonefrequency{    ///<TWI frequency
        using Addr = Register::Address<0x40003524,0x00000000,0,unsigned>;
        ///TWI master clock frequency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> frequency{}; 
    }
    namespace Noneaddress{    ///<Address used in the TWI transfer
        using Addr = Register::Address<0x40003588,0xffffff80,0,unsigned>;
        ///Address used in the TWI transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
}
