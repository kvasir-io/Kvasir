#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I2C compatible Two-Wire Slave Interface with EasyDMA 0
    namespace NonetasksStop{    ///<Stop TWI transaction
        using Addr = Register::Address<0x40003014,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSuspend{    ///<Suspend TWI transaction
        using Addr = Register::Address<0x4000301c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksResume{    ///<Resume TWI transaction
        using Addr = Register::Address<0x40003020,0xffffffff,0,unsigned>;
    }
    namespace NonetasksPreparerx{    ///<Prepare the TWI slave to respond to a write command
        using Addr = Register::Address<0x40003030,0xffffffff,0,unsigned>;
    }
    namespace NonetasksPreparetx{    ///<Prepare the TWI slave to respond to a read command
        using Addr = Register::Address<0x40003034,0xffffffff,0,unsigned>;
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
    namespace NoneeventsWrite{    ///<Write command received
        using Addr = Register::Address<0x40003164,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRead{    ///<Read command received
        using Addr = Register::Address<0x40003168,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x40003200,0xffff9fff,0,unsigned>;
        ///Shortcut between EVENTS_WRITE event and TASKS_SUSPEND task
        enum class WritesuspendVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,WritesuspendVal> writeSuspend{}; 
        namespace WritesuspendValC{
            constexpr Register::FieldValue<decltype(writeSuspend)::Type,WritesuspendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(writeSuspend)::Type,WritesuspendVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_READ event and TASKS_SUSPEND task
        enum class ReadsuspendVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ReadsuspendVal> readSuspend{}; 
        namespace ReadsuspendValC{
            constexpr Register::FieldValue<decltype(readSuspend)::Type,ReadsuspendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(readSuspend)::Type,ReadsuspendVal::enabled> enabled{};
        }
        }
    }
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40003300,0xf9e7fdfd,0,unsigned>;
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
        }
        ///Enable or disable interrupt on EVENTS_WRITE event
        enum class WriteVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,WriteVal> write{}; 
        namespace WriteValC{
            constexpr Register::FieldValue<decltype(write)::Type,WriteVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(write)::Type,WriteVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_READ event
        enum class ReadVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ReadVal> read{}; 
        namespace ReadValC{
            constexpr Register::FieldValue<decltype(read)::Type,ReadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(read)::Type,ReadVal::enabled> enabled{};
        }
        }
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40003304,0xf9e7fdfd,0,unsigned>;
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
        }
        ///Write '1' to Enable interrupt on EVENTS_WRITE event
        enum class WriteVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,WriteVal> write{}; 
        namespace WriteValC{
            constexpr Register::FieldValue<decltype(write)::Type,WriteVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(write)::Type,WriteVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(write)::Type,WriteVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_READ event
        enum class ReadVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ReadVal> read{}; 
        namespace ReadValC{
            constexpr Register::FieldValue<decltype(read)::Type,ReadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(read)::Type,ReadVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(read)::Type,ReadVal::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40003308,0xf9e7fdfd,0,unsigned>;
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
        }
        ///Write '1' to Clear interrupt on EVENTS_WRITE event
        enum class WriteVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,WriteVal> write{}; 
        namespace WriteValC{
            constexpr Register::FieldValue<decltype(write)::Type,WriteVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(write)::Type,WriteVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(write)::Type,WriteVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_READ event
        enum class ReadVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ReadVal> read{}; 
        namespace ReadValC{
            constexpr Register::FieldValue<decltype(read)::Type,ReadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(read)::Type,ReadVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(read)::Type,ReadVal::clear> clear{};
        }
        }
    }
    namespace Noneerrorsrc{    ///<Error source
        using Addr = Register::Address<0x400034d0,0xfffffff2,0,unsigned>;
        ///RX buffer overflow detected, and prevented
        enum class OverflowVal {
            notdetected=0x00000000,     ///<Error did not occur
            detected=0x00000001,     ///<Error occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OverflowVal> overflow{}; 
        namespace OverflowValC{
            constexpr Register::FieldValue<decltype(overflow)::Type,OverflowVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(overflow)::Type,OverflowVal::detected> detected{};
        }
        }
        ///NACK sent after receiving a data byte
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
        ///TX buffer over-read detected, and prevented
        enum class OverreadVal {
            notdetected=0x00000000,     ///<Error did not occur
            detected=0x00000001,     ///<Error occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,OverreadVal> overread{}; 
        namespace OverreadValC{
            constexpr Register::FieldValue<decltype(overread)::Type,OverreadVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(overread)::Type,OverreadVal::detected> detected{};
        }
        }
    }
    namespace Nonematch{    ///<Status register indicating which address had a match
        using Addr = Register::Address<0x400034d4,0xfffffffe,0,unsigned>;
        ///Which of the addresses in {ADDRESS} matched the incoming address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Noneenable{    ///<Enable TWIS
        using Addr = Register::Address<0x40003500,0xfffffff0,0,unsigned>;
        ///Enable or disable TWIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Noneaddress0{    ///<Description collection[0]:  TWI slave address 0
        using Addr = Register::Address<0x40003588,0xffffff80,0,unsigned>;
        ///TWI slave address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Noneaddress1{    ///<Description collection[0]:  TWI slave address 0
        using Addr = Register::Address<0x4000358c,0xffffff80,0,unsigned>;
        ///TWI slave address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Noneconfig{    ///<Configuration register for the address match mechanism
        using Addr = Register::Address<0x40003594,0xfffffffc,0,unsigned>;
        ///Enable or disable address matching on ADDRESS[0]
        enum class Address0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Address0Val> address0{}; 
        namespace Address0ValC{
            constexpr Register::FieldValue<decltype(address0)::Type,Address0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(address0)::Type,Address0Val::enabled> enabled{};
        }
        }
        ///Enable or disable address matching on ADDRESS[1]
        enum class Address1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Address1Val> address1{}; 
        namespace Address1ValC{
            constexpr Register::FieldValue<decltype(address1)::Type,Address1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(address1)::Type,Address1Val::enabled> enabled{};
        }
        }
    }
    namespace Noneorc{    ///<Over-read character. Character sent out in case of an over-read of the transmit buffer.
        using Addr = Register::Address<0x400035c0,0xffffff00,0,unsigned>;
        ///Over-read character. Character sent out in case of an over-read of the transmit buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> orc{}; 
    }
}
