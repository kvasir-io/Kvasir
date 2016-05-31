#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//I2C compatible Two-Wire Master Interface with EasyDMA 0
    namespace Twim0TasksStartrx{    ///<Start TWI receive sequence
        using Addr = Register::Address<0x40003000,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twim0TasksStarttx{    ///<Start TWI transmit sequence
        using Addr = Register::Address<0x40003008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twim0TasksStop{    ///<Stop TWI transaction
        using Addr = Register::Address<0x40003014,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twim0TasksSuspend{    ///<Suspend TWI transaction
        using Addr = Register::Address<0x4000301c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twim0TasksResume{    ///<Resume TWI transaction
        using Addr = Register::Address<0x40003020,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twim0EventsStopped{    ///<TWI stopped
        using Addr = Register::Address<0x40003104,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twim0EventsError{    ///<TWI error
        using Addr = Register::Address<0x40003124,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twim0EventsRxstarted{    ///<Receive sequence started
        using Addr = Register::Address<0x4000314c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twim0EventsTxstarted{    ///<Transmit sequence started
        using Addr = Register::Address<0x40003150,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twim0EventsLastrx{    ///<Byte boundary, starting to receive the last byte
        using Addr = Register::Address<0x4000315c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twim0EventsLasttx{    ///<Byte boundary, starting to transmit the last byte
        using Addr = Register::Address<0x40003160,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twim0Shorts{    ///<Shortcut register
        using Addr = Register::Address<0x40003200,0xffffe87f,0x00000000,unsigned>;
        ///Shortcut between EVENTS_LASTTX event and TASKS_STARTRX task
        enum class LasttxstartrxVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LasttxstartrxVal> lasttxStartrx{}; 
        namespace LasttxstartrxValC{
            constexpr Register::FieldValue<decltype(lasttxStartrx)::Type,LasttxstartrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lasttxStartrx)::Type,LasttxstartrxVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_LASTTX event and TASKS_SUSPEND task
        enum class LasttxsuspendVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,LasttxsuspendVal> lasttxSuspend{}; 
        namespace LasttxsuspendValC{
            constexpr Register::FieldValue<decltype(lasttxSuspend)::Type,LasttxsuspendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lasttxSuspend)::Type,LasttxsuspendVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_LASTTX event and TASKS_STOP task
        enum class LasttxstopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,LasttxstopVal> lasttxStop{}; 
        namespace LasttxstopValC{
            constexpr Register::FieldValue<decltype(lasttxStop)::Type,LasttxstopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lasttxStop)::Type,LasttxstopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_LASTRX event and TASKS_STARTTX task
        enum class LastrxstarttxVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,LastrxstarttxVal> lastrxStarttx{}; 
        namespace LastrxstarttxValC{
            constexpr Register::FieldValue<decltype(lastrxStarttx)::Type,LastrxstarttxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lastrxStarttx)::Type,LastrxstarttxVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_LASTRX event and TASKS_STOP task
        enum class LastrxstopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,LastrxstopVal> lastrxStop{}; 
        namespace LastrxstopValC{
            constexpr Register::FieldValue<decltype(lastrxStop)::Type,LastrxstopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lastrxStop)::Type,LastrxstopVal::enabled> enabled{};
        }
    }
    namespace Twim0Inten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40003300,0xfe67fdfd,0x00000000,unsigned>;
        ///Enable or disable interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_ERROR event
        enum class ErrorVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_RXSTARTED event
        enum class RxstartedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,RxstartedVal> rxstarted{}; 
        namespace RxstartedValC{
            constexpr Register::FieldValue<decltype(rxstarted)::Type,RxstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxstarted)::Type,RxstartedVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TXSTARTED event
        enum class TxstartedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,TxstartedVal> txstarted{}; 
        namespace TxstartedValC{
            constexpr Register::FieldValue<decltype(txstarted)::Type,TxstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txstarted)::Type,TxstartedVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_LASTRX event
        enum class LastrxVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,LastrxVal> lastrx{}; 
        namespace LastrxValC{
            constexpr Register::FieldValue<decltype(lastrx)::Type,LastrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lastrx)::Type,LastrxVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_LASTTX event
        enum class LasttxVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,LasttxVal> lasttx{}; 
        namespace LasttxValC{
            constexpr Register::FieldValue<decltype(lasttx)::Type,LasttxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lasttx)::Type,LasttxVal::enabled> enabled{};
        }
    }
    namespace Twim0Intenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40003304,0xfe67fdfd,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_ERROR event
        enum class ErrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_RXSTARTED event
        enum class RxstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,RxstartedVal> rxstarted{}; 
        namespace RxstartedValC{
            constexpr Register::FieldValue<decltype(rxstarted)::Type,RxstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxstarted)::Type,RxstartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxstarted)::Type,RxstartedVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TXSTARTED event
        enum class TxstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,TxstartedVal> txstarted{}; 
        namespace TxstartedValC{
            constexpr Register::FieldValue<decltype(txstarted)::Type,TxstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txstarted)::Type,TxstartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txstarted)::Type,TxstartedVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_LASTRX event
        enum class LastrxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,LastrxVal> lastrx{}; 
        namespace LastrxValC{
            constexpr Register::FieldValue<decltype(lastrx)::Type,LastrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lastrx)::Type,LastrxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(lastrx)::Type,LastrxVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_LASTTX event
        enum class LasttxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,LasttxVal> lasttx{}; 
        namespace LasttxValC{
            constexpr Register::FieldValue<decltype(lasttx)::Type,LasttxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lasttx)::Type,LasttxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(lasttx)::Type,LasttxVal::set> set{};
        }
    }
    namespace Twim0Intenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40003308,0xfe67fdfd,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_ERROR event
        enum class ErrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_RXSTARTED event
        enum class RxstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,RxstartedVal> rxstarted{}; 
        namespace RxstartedValC{
            constexpr Register::FieldValue<decltype(rxstarted)::Type,RxstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxstarted)::Type,RxstartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxstarted)::Type,RxstartedVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TXSTARTED event
        enum class TxstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,TxstartedVal> txstarted{}; 
        namespace TxstartedValC{
            constexpr Register::FieldValue<decltype(txstarted)::Type,TxstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txstarted)::Type,TxstartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txstarted)::Type,TxstartedVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_LASTRX event
        enum class LastrxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,LastrxVal> lastrx{}; 
        namespace LastrxValC{
            constexpr Register::FieldValue<decltype(lastrx)::Type,LastrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lastrx)::Type,LastrxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(lastrx)::Type,LastrxVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_LASTTX event
        enum class LasttxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,LasttxVal> lasttx{}; 
        namespace LasttxValC{
            constexpr Register::FieldValue<decltype(lasttx)::Type,LasttxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lasttx)::Type,LasttxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(lasttx)::Type,LasttxVal::clear> clear{};
        }
    }
    namespace Twim0Errorsrc{    ///<Error source
        using Addr = Register::Address<0x400034c4,0xfffffff9,0x00000000,unsigned>;
        ///NACK received after sending the address (write '1' to clear)
        enum class AnackVal {
            notreceived=0x00000000,     ///<Error did not occur
            received=0x00000001,     ///<Error occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AnackVal> anack{}; 
        namespace AnackValC{
            constexpr Register::FieldValue<decltype(anack)::Type,AnackVal::notreceived> notreceived{};
            constexpr Register::FieldValue<decltype(anack)::Type,AnackVal::received> received{};
        }
        ///NACK received after sending a data byte (write '1' to clear)
        enum class DnackVal {
            notreceived=0x00000000,     ///<Error did not occur
            received=0x00000001,     ///<Error occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DnackVal> dnack{}; 
        namespace DnackValC{
            constexpr Register::FieldValue<decltype(dnack)::Type,DnackVal::notreceived> notreceived{};
            constexpr Register::FieldValue<decltype(dnack)::Type,DnackVal::received> received{};
        }
    }
    namespace Twim0Enable{    ///<Enable TWIM
        using Addr = Register::Address<0x40003500,0xfffffff0,0x00000000,unsigned>;
        ///Enable or disable TWIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Twim0Frequency{    ///<TWI frequency
        using Addr = Register::Address<0x40003524,0x00000000,0x00000000,unsigned>;
        ///TWI master clock frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> frequency{}; 
    }
    namespace Twim0Address{    ///<Address used in the TWI transfer
        using Addr = Register::Address<0x40003588,0xffffff80,0x00000000,unsigned>;
        ///Address used in the TWI transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
}
