#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Two-wire interface master 0.
    namespace Twi0TasksStartrx{    ///<Start 2-Wire master receive sequence.
        using Addr = Register::Address<0x40003000,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0TasksStarttx{    ///<Start 2-Wire master transmit sequence.
        using Addr = Register::Address<0x40003008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0TasksStop{    ///<Stop 2-Wire transaction.
        using Addr = Register::Address<0x40003014,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0TasksSuspend{    ///<Suspend 2-Wire transaction.
        using Addr = Register::Address<0x4000301c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0TasksResume{    ///<Resume 2-Wire transaction.
        using Addr = Register::Address<0x40003020,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0EventsStopped{    ///<Two-wire stopped.
        using Addr = Register::Address<0x40003104,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0EventsRxdready{    ///<Two-wire ready to deliver new RXD byte received.
        using Addr = Register::Address<0x40003108,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0EventsTxdsent{    ///<Two-wire finished sending last TXD byte.
        using Addr = Register::Address<0x4000311c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0EventsError{    ///<Two-wire error detected.
        using Addr = Register::Address<0x40003124,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0EventsBb{    ///<Two-wire byte boundary.
        using Addr = Register::Address<0x40003138,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0EventsSuspended{    ///<Two-wire suspended.
        using Addr = Register::Address<0x40003148,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0Shorts{    ///<Shortcuts for TWI.
        using Addr = Register::Address<0x40003200,0xfffffffc,0x00000000,unsigned>;
        ///Shortcut between BB event and the SUSPEND task.
        enum class BbsuspendVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BbsuspendVal> bbSuspend{}; 
        namespace BbsuspendValC{
            constexpr Register::FieldValue<decltype(bbSuspend)::Type,BbsuspendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bbSuspend)::Type,BbsuspendVal::enabled> enabled{};
        }
        ///Shortcut between BB event and the STOP task.
        enum class BbstopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BbstopVal> bbStop{}; 
        namespace BbstopValC{
            constexpr Register::FieldValue<decltype(bbStop)::Type,BbstopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bbStop)::Type,BbstopVal::enabled> enabled{};
        }
    }
    namespace Twi0Intenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40003304,0xfffbbd79,0x00000000,unsigned>;
        ///Enable interrupt on STOPPED event.
        enum class StoppedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::set> set{};
        }
        ///Enable interrupt on READY event.
        enum class RxdreadyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxdreadyVal> rxdready{}; 
        namespace RxdreadyValC{
            constexpr Register::FieldValue<decltype(rxdready)::Type,RxdreadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxdready)::Type,RxdreadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxdready)::Type,RxdreadyVal::set> set{};
        }
        ///Enable interrupt on TXDSENT event.
        enum class TxdsentVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TxdsentVal> txdsent{}; 
        namespace TxdsentValC{
            constexpr Register::FieldValue<decltype(txdsent)::Type,TxdsentVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txdsent)::Type,TxdsentVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txdsent)::Type,TxdsentVal::set> set{};
        }
        ///Enable interrupt on ERROR event.
        enum class ErrorVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::set> set{};
        }
        ///Enable interrupt on BB event.
        enum class BbVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,BbVal> bb{}; 
        namespace BbValC{
            constexpr Register::FieldValue<decltype(bb)::Type,BbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bb)::Type,BbVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(bb)::Type,BbVal::set> set{};
        }
        ///Enable interrupt on SUSPENDED event.
        enum class SuspendedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,SuspendedVal> suspended{}; 
        namespace SuspendedValC{
            constexpr Register::FieldValue<decltype(suspended)::Type,SuspendedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(suspended)::Type,SuspendedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(suspended)::Type,SuspendedVal::set> set{};
        }
    }
    namespace Twi0Intenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40003308,0xfffbbd79,0x00000000,unsigned>;
        ///Disable interrupt on STOPPED event.
        enum class StoppedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::clear> clear{};
        }
        ///Disable interrupt on RXDREADY event.
        enum class RxdreadyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxdreadyVal> rxdready{}; 
        namespace RxdreadyValC{
            constexpr Register::FieldValue<decltype(rxdready)::Type,RxdreadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxdready)::Type,RxdreadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxdready)::Type,RxdreadyVal::clear> clear{};
        }
        ///Disable interrupt on TXDSENT event.
        enum class TxdsentVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TxdsentVal> txdsent{}; 
        namespace TxdsentValC{
            constexpr Register::FieldValue<decltype(txdsent)::Type,TxdsentVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txdsent)::Type,TxdsentVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txdsent)::Type,TxdsentVal::clear> clear{};
        }
        ///Disable interrupt on ERROR event.
        enum class ErrorVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::clear> clear{};
        }
        ///Disable interrupt on BB event.
        enum class BbVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,BbVal> bb{}; 
        namespace BbValC{
            constexpr Register::FieldValue<decltype(bb)::Type,BbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bb)::Type,BbVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(bb)::Type,BbVal::clear> clear{};
        }
        ///Disable interrupt on SUSPENDED event.
        enum class SuspendedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,SuspendedVal> suspended{}; 
        namespace SuspendedValC{
            constexpr Register::FieldValue<decltype(suspended)::Type,SuspendedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(suspended)::Type,SuspendedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(suspended)::Type,SuspendedVal::clear> clear{};
        }
    }
    namespace Twi0Errorsrc{    ///<Two-wire error source. Write error field to 1 to clear error.
        using Addr = Register::Address<0x400034c4,0xfffffff8,0x00000000,unsigned>;
        ///Byte received in RXD register before read of the last received byte (data loss).
        enum class OverrunVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear error on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OverrunVal> overrun{}; 
        namespace OverrunValC{
            constexpr Register::FieldValue<decltype(overrun)::Type,OverrunVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(overrun)::Type,OverrunVal::present> present{};
            constexpr Register::FieldValue<decltype(overrun)::Type,OverrunVal::clear> clear{};
        }
        ///NACK received after sending the address.
        enum class AnackVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear error on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AnackVal> anack{}; 
        namespace AnackValC{
            constexpr Register::FieldValue<decltype(anack)::Type,AnackVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(anack)::Type,AnackVal::present> present{};
            constexpr Register::FieldValue<decltype(anack)::Type,AnackVal::clear> clear{};
        }
        ///NACK received after sending a data byte.
        enum class DnackVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear error on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DnackVal> dnack{}; 
        namespace DnackValC{
            constexpr Register::FieldValue<decltype(dnack)::Type,DnackVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(dnack)::Type,DnackVal::present> present{};
            constexpr Register::FieldValue<decltype(dnack)::Type,DnackVal::clear> clear{};
        }
    }
    namespace Twi0Enable{    ///<Enable two-wire master.
        using Addr = Register::Address<0x40003500,0xfffffff8,0x00000000,unsigned>;
        ///Enable or disable W2M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Twi0Pselscl{    ///<Pin select for SCL.
        using Addr = Register::Address<0x40003508,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0Pselsda{    ///<Pin select for SDA.
        using Addr = Register::Address<0x4000350c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0Rxd{    ///<RX data register.
        using Addr = Register::Address<0x40003518,0xffffff00,0x00000000,unsigned>;
        ///RX data from last transfer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
    }
    namespace Twi0Txd{    ///<TX data register.
        using Addr = Register::Address<0x4000351c,0xffffff00,0x00000000,unsigned>;
        ///TX data for next transfer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace Twi0Frequency{    ///<Two-wire frequency.
        using Addr = Register::Address<0x40003524,0x00000000,0x00000000,unsigned>;
        ///Two-wire master clock frequency.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> frequency{}; 
    }
    namespace Twi0Address{    ///<Address used in the two-wire transfer.
        using Addr = Register::Address<0x40003588,0xffffff80,0x00000000,unsigned>;
        ///Two-wire address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Twi0Power{    ///<Peripheral power control.
        using Addr = Register::Address<0x40003ffc,0xfffffffe,0x00000000,unsigned>;
        ///Peripheral power control.
        enum class PowerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PowerVal> power{}; 
        namespace PowerValC{
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::enabled> enabled{};
        }
    }
}
