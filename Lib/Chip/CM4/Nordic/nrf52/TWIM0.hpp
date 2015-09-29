#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I2C compatible Two-Wire Master Interface with EasyDMA 0
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
    namespace NoneeventsError{    ///<TWI error
        using Addr = Register::Address<0x40003124,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRxstarted{    ///<Receive sequence started
        using Addr = Register::Address<0x4000314c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsTxstarted{    ///<Transmit sequence started
        using Addr = Register::Address<0x40003150,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsLastrx{    ///<Byte boundary, starting to receive the last byte
        using Addr = Register::Address<0x4000315c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsLasttx{    ///<Byte boundary, starting to transmit the last byte
        using Addr = Register::Address<0x40003160,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x40003200,0xffffe87f,0,unsigned>;
        ///Shortcut between EVENTS_LASTTX event and TASKS_STARTRX task
        enum class lasttxStartrxVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace lasttxStartrxValC{
            constexpr MPL::Value<lasttxStartrxVal,lasttxStartrxVal::disabled> disabled{};
            constexpr MPL::Value<lasttxStartrxVal,lasttxStartrxVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lasttxStartrxVal> lasttxStartrx{}; 
        ///Shortcut between EVENTS_LASTTX event and TASKS_SUSPEND task
        enum class lasttxSuspendVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace lasttxSuspendValC{
            constexpr MPL::Value<lasttxSuspendVal,lasttxSuspendVal::disabled> disabled{};
            constexpr MPL::Value<lasttxSuspendVal,lasttxSuspendVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,lasttxSuspendVal> lasttxSuspend{}; 
        ///Shortcut between EVENTS_LASTTX event and TASKS_STOP task
        enum class lasttxStopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace lasttxStopValC{
            constexpr MPL::Value<lasttxStopVal,lasttxStopVal::disabled> disabled{};
            constexpr MPL::Value<lasttxStopVal,lasttxStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,lasttxStopVal> lasttxStop{}; 
        ///Shortcut between EVENTS_LASTRX event and TASKS_STARTTX task
        enum class lastrxStarttxVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace lastrxStarttxValC{
            constexpr MPL::Value<lastrxStarttxVal,lastrxStarttxVal::disabled> disabled{};
            constexpr MPL::Value<lastrxStarttxVal,lastrxStarttxVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,lastrxStarttxVal> lastrxStarttx{}; 
        ///Shortcut between EVENTS_LASTRX event and TASKS_STOP task
        enum class lastrxStopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace lastrxStopValC{
            constexpr MPL::Value<lastrxStopVal,lastrxStopVal::disabled> disabled{};
            constexpr MPL::Value<lastrxStopVal,lastrxStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,lastrxStopVal> lastrxStop{}; 
    }
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40003300,0xfe67fdfd,0,unsigned>;
        ///Enable or disable interrupt on EVENTS_STOPPED event
        enum class stoppedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Enable or disable interrupt on EVENTS_ERROR event
        enum class errorVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::disabled> disabled{};
            constexpr MPL::Value<errorVal,errorVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,errorVal> error{}; 
        ///Enable or disable interrupt on EVENTS_RXSTARTED event
        enum class rxstartedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace rxstartedValC{
            constexpr MPL::Value<rxstartedVal,rxstartedVal::disabled> disabled{};
            constexpr MPL::Value<rxstartedVal,rxstartedVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,rxstartedVal> rxstarted{}; 
        ///Enable or disable interrupt on EVENTS_TXSTARTED event
        enum class txstartedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace txstartedValC{
            constexpr MPL::Value<txstartedVal,txstartedVal::disabled> disabled{};
            constexpr MPL::Value<txstartedVal,txstartedVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,txstartedVal> txstarted{}; 
        ///Enable or disable interrupt on EVENTS_LASTRX event
        enum class lastrxVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace lastrxValC{
            constexpr MPL::Value<lastrxVal,lastrxVal::disabled> disabled{};
            constexpr MPL::Value<lastrxVal,lastrxVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,lastrxVal> lastrx{}; 
        ///Enable or disable interrupt on EVENTS_LASTTX event
        enum class lasttxVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace lasttxValC{
            constexpr MPL::Value<lasttxVal,lasttxVal::disabled> disabled{};
            constexpr MPL::Value<lasttxVal,lasttxVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,lasttxVal> lasttx{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40003304,0xfe67fdfd,0,unsigned>;
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
        ///Write '1' to Enable interrupt on EVENTS_RXSTARTED event
        enum class rxstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace rxstartedValC{
            constexpr MPL::Value<rxstartedVal,rxstartedVal::disabled> disabled{};
            constexpr MPL::Value<rxstartedVal,rxstartedVal::enabled> enabled{};
            constexpr MPL::Value<rxstartedVal,rxstartedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,rxstartedVal> rxstarted{}; 
        ///Write '1' to Enable interrupt on EVENTS_TXSTARTED event
        enum class txstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace txstartedValC{
            constexpr MPL::Value<txstartedVal,txstartedVal::disabled> disabled{};
            constexpr MPL::Value<txstartedVal,txstartedVal::enabled> enabled{};
            constexpr MPL::Value<txstartedVal,txstartedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,txstartedVal> txstarted{}; 
        ///Write '1' to Enable interrupt on EVENTS_LASTRX event
        enum class lastrxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace lastrxValC{
            constexpr MPL::Value<lastrxVal,lastrxVal::disabled> disabled{};
            constexpr MPL::Value<lastrxVal,lastrxVal::enabled> enabled{};
            constexpr MPL::Value<lastrxVal,lastrxVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,lastrxVal> lastrx{}; 
        ///Write '1' to Enable interrupt on EVENTS_LASTTX event
        enum class lasttxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace lasttxValC{
            constexpr MPL::Value<lasttxVal,lasttxVal::disabled> disabled{};
            constexpr MPL::Value<lasttxVal,lasttxVal::enabled> enabled{};
            constexpr MPL::Value<lasttxVal,lasttxVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,lasttxVal> lasttx{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40003308,0xfe67fdfd,0,unsigned>;
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
        ///Write '1' to Clear interrupt on EVENTS_RXSTARTED event
        enum class rxstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace rxstartedValC{
            constexpr MPL::Value<rxstartedVal,rxstartedVal::disabled> disabled{};
            constexpr MPL::Value<rxstartedVal,rxstartedVal::enabled> enabled{};
            constexpr MPL::Value<rxstartedVal,rxstartedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,rxstartedVal> rxstarted{}; 
        ///Write '1' to Clear interrupt on EVENTS_TXSTARTED event
        enum class txstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace txstartedValC{
            constexpr MPL::Value<txstartedVal,txstartedVal::disabled> disabled{};
            constexpr MPL::Value<txstartedVal,txstartedVal::enabled> enabled{};
            constexpr MPL::Value<txstartedVal,txstartedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,txstartedVal> txstarted{}; 
        ///Write '1' to Clear interrupt on EVENTS_LASTRX event
        enum class lastrxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace lastrxValC{
            constexpr MPL::Value<lastrxVal,lastrxVal::disabled> disabled{};
            constexpr MPL::Value<lastrxVal,lastrxVal::enabled> enabled{};
            constexpr MPL::Value<lastrxVal,lastrxVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,lastrxVal> lastrx{}; 
        ///Write '1' to Clear interrupt on EVENTS_LASTTX event
        enum class lasttxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace lasttxValC{
            constexpr MPL::Value<lasttxVal,lasttxVal::disabled> disabled{};
            constexpr MPL::Value<lasttxVal,lasttxVal::enabled> enabled{};
            constexpr MPL::Value<lasttxVal,lasttxVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,lasttxVal> lasttx{}; 
    }
    namespace Noneerrorsrc{    ///<Error source
        using Addr = Register::Address<0x400034c4,0xfffffff9,0,unsigned>;
        ///NACK received after sending the address (write '1' to clear)
        enum class anackVal {
            notreceived=0x00000000,     ///<Error did not occur
            received=0x00000001,     ///<Error occurred
        };
        namespace anackValC{
            constexpr MPL::Value<anackVal,anackVal::notreceived> notreceived{};
            constexpr MPL::Value<anackVal,anackVal::received> received{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,anackVal> anack{}; 
        ///NACK received after sending a data byte (write '1' to clear)
        enum class dnackVal {
            notreceived=0x00000000,     ///<Error did not occur
            received=0x00000001,     ///<Error occurred
        };
        namespace dnackValC{
            constexpr MPL::Value<dnackVal,dnackVal::notreceived> notreceived{};
            constexpr MPL::Value<dnackVal,dnackVal::received> received{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,dnackVal> dnack{}; 
    }
    namespace Noneenable{    ///<Enable TWIM
        using Addr = Register::Address<0x40003500,0xfffffff0,0,unsigned>;
        ///Enable or disable TWIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
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
