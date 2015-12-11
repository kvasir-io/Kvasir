#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//UART with EasyDMA
    namespace NonetasksStartrx{    ///<Start UART receiver
        using Addr = Register::Address<0x40002000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStoprx{    ///<Stop UART receiver
        using Addr = Register::Address<0x40002004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStarttx{    ///<Start UART transmitter
        using Addr = Register::Address<0x40002008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStoptx{    ///<Stop UART transmitter
        using Addr = Register::Address<0x4000200c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksFlushrx{    ///<Flush RX FIFO into RX buffer
        using Addr = Register::Address<0x4000202c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCts{    ///<CTS is activated (set low). Clear To Send.
        using Addr = Register::Address<0x40002100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsNcts{    ///<CTS is deactivated (set high). Not Clear To Send.
        using Addr = Register::Address<0x40002104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEndrx{    ///<Receive buffer is filled up
        using Addr = Register::Address<0x40002110,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEndtx{    ///<Last TX byte transmitted
        using Addr = Register::Address<0x40002120,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsError{    ///<Error detected
        using Addr = Register::Address<0x40002124,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRxto{    ///<Receiver timeout
        using Addr = Register::Address<0x40002144,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRxstarted{    ///<UART receiver has started
        using Addr = Register::Address<0x4000214c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsTxstarted{    ///<UART transmitter has started
        using Addr = Register::Address<0x40002150,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsTxstopped{    ///<Transmitter stopped
        using Addr = Register::Address<0x40002158,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x40002200,0xffffff9f,0,unsigned>;
        ///Shortcut between EVENTS_ENDRX event and TASKS_STARTRX task
        enum class EndrxstartrxVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EndrxstartrxVal> endrxStartrx{}; 
        namespace EndrxstartrxValC{
            constexpr Register::FieldValue<decltype(endrxStartrx)::Type,EndrxstartrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endrxStartrx)::Type,EndrxstartrxVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_ENDRX event and TASKS_STOPRX task
        enum class EndrxstoprxVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EndrxstoprxVal> endrxStoprx{}; 
        namespace EndrxstoprxValC{
            constexpr Register::FieldValue<decltype(endrxStoprx)::Type,EndrxstoprxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endrxStoprx)::Type,EndrxstoprxVal::enabled> enabled{};
        }
        }
    }
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40002300,0xffa5fcec,0,unsigned>;
        ///Enable or disable interrupt on EVENTS_CTS event
        enum class CtsVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CtsVal> cts{}; 
        namespace CtsValC{
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_NCTS event
        enum class NctsVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,NctsVal> ncts{}; 
        namespace NctsValC{
            constexpr Register::FieldValue<decltype(ncts)::Type,NctsVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ncts)::Type,NctsVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_ENDRX event
        enum class EndrxVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EndrxVal> endrx{}; 
        namespace EndrxValC{
            constexpr Register::FieldValue<decltype(endrx)::Type,EndrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endrx)::Type,EndrxVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_ENDTX event
        enum class EndtxVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EndtxVal> endtx{}; 
        namespace EndtxValC{
            constexpr Register::FieldValue<decltype(endtx)::Type,EndtxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endtx)::Type,EndtxVal::enabled> enabled{};
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
        ///Enable or disable interrupt on EVENTS_RXTO event
        enum class RxtoVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RxtoVal> rxto{}; 
        namespace RxtoValC{
            constexpr Register::FieldValue<decltype(rxto)::Type,RxtoVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxto)::Type,RxtoVal::enabled> enabled{};
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
        ///Enable or disable interrupt on EVENTS_TXSTOPPED event
        enum class TxstoppedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,TxstoppedVal> txstopped{}; 
        namespace TxstoppedValC{
            constexpr Register::FieldValue<decltype(txstopped)::Type,TxstoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txstopped)::Type,TxstoppedVal::enabled> enabled{};
        }
        }
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40002304,0xffa5fcec,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_CTS event
        enum class CtsVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CtsVal> cts{}; 
        namespace CtsValC{
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_NCTS event
        enum class NctsVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,NctsVal> ncts{}; 
        namespace NctsValC{
            constexpr Register::FieldValue<decltype(ncts)::Type,NctsVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ncts)::Type,NctsVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ncts)::Type,NctsVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_ENDRX event
        enum class EndrxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EndrxVal> endrx{}; 
        namespace EndrxValC{
            constexpr Register::FieldValue<decltype(endrx)::Type,EndrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endrx)::Type,EndrxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endrx)::Type,EndrxVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_ENDTX event
        enum class EndtxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EndtxVal> endtx{}; 
        namespace EndtxValC{
            constexpr Register::FieldValue<decltype(endtx)::Type,EndtxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endtx)::Type,EndtxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endtx)::Type,EndtxVal::set> set{};
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
        ///Write '1' to Enable interrupt on EVENTS_RXTO event
        enum class RxtoVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RxtoVal> rxto{}; 
        namespace RxtoValC{
            constexpr Register::FieldValue<decltype(rxto)::Type,RxtoVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxto)::Type,RxtoVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxto)::Type,RxtoVal::set> set{};
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
        ///Write '1' to Enable interrupt on EVENTS_TXSTOPPED event
        enum class TxstoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,TxstoppedVal> txstopped{}; 
        namespace TxstoppedValC{
            constexpr Register::FieldValue<decltype(txstopped)::Type,TxstoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txstopped)::Type,TxstoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txstopped)::Type,TxstoppedVal::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40002308,0xffa5fcec,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_CTS event
        enum class CtsVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CtsVal> cts{}; 
        namespace CtsValC{
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_NCTS event
        enum class NctsVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,NctsVal> ncts{}; 
        namespace NctsValC{
            constexpr Register::FieldValue<decltype(ncts)::Type,NctsVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ncts)::Type,NctsVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ncts)::Type,NctsVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_ENDRX event
        enum class EndrxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EndrxVal> endrx{}; 
        namespace EndrxValC{
            constexpr Register::FieldValue<decltype(endrx)::Type,EndrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endrx)::Type,EndrxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endrx)::Type,EndrxVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_ENDTX event
        enum class EndtxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EndtxVal> endtx{}; 
        namespace EndtxValC{
            constexpr Register::FieldValue<decltype(endtx)::Type,EndtxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endtx)::Type,EndtxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endtx)::Type,EndtxVal::clear> clear{};
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
        ///Write '1' to Clear interrupt on EVENTS_RXTO event
        enum class RxtoVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RxtoVal> rxto{}; 
        namespace RxtoValC{
            constexpr Register::FieldValue<decltype(rxto)::Type,RxtoVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxto)::Type,RxtoVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxto)::Type,RxtoVal::clear> clear{};
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
        ///Write '1' to Clear interrupt on EVENTS_TXSTOPPED event
        enum class TxstoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,TxstoppedVal> txstopped{}; 
        namespace TxstoppedValC{
            constexpr Register::FieldValue<decltype(txstopped)::Type,TxstoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txstopped)::Type,TxstoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txstopped)::Type,TxstoppedVal::clear> clear{};
        }
        }
    }
    namespace Noneerrorsrc{    ///<Error source
        using Addr = Register::Address<0x40002480,0xfffffff0,0,unsigned>;
        ///Overrun error
        enum class OverrunVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OverrunVal> overrun{}; 
        namespace OverrunValC{
            constexpr Register::FieldValue<decltype(overrun)::Type,OverrunVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(overrun)::Type,OverrunVal::present> present{};
        }
        }
        ///Parity error
        enum class ParityVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ParityVal> parity{}; 
        namespace ParityValC{
            constexpr Register::FieldValue<decltype(parity)::Type,ParityVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(parity)::Type,ParityVal::present> present{};
        }
        }
        ///Framing error occurred
        enum class FramingVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FramingVal> framing{}; 
        namespace FramingValC{
            constexpr Register::FieldValue<decltype(framing)::Type,FramingVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(framing)::Type,FramingVal::present> present{};
        }
        }
        ///Break condition
        enum class Break_Val {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Break_Val> break_{}; 
        namespace Break_ValC{
            constexpr Register::FieldValue<decltype(break_)::Type,Break_Val::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(break_)::Type,Break_Val::present> present{};
        }
        }
    }
    namespace Noneenable{    ///<Enable UART
        using Addr = Register::Address<0x40002500,0xfffffff0,0,unsigned>;
        ///Enable or disable UARTE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Nonebaudrate{    ///<Baud rate
        using Addr = Register::Address<0x40002524,0x00000000,0,unsigned>;
        ///Baud-rate
        enum class BaudrateVal {
            baud1200=0x0004f000,     ///<1200 baud (actual rate: 1205)
            baud2400=0x0009d000,     ///<2400 baud (actual rate: 2396)
            baud4800=0x0013b000,     ///<4800 baud (actual rate: 4808)
            baud9600=0x00275000,     ///<9600 baud (actual rate: 9598)
            baud14400=0x003af000,     ///<14400 baud (actual rate: 14401)
            baud19200=0x004ea000,     ///<19200 baud (actual rate: 19208)
            baud28800=0x0075c000,     ///<28800 baud (actual rate: 28777)
            baud38400=0x009d0000,     ///<38400 baud (actual rate: 38369)
            baud57600=0x00eb0000,     ///<57600 baud (actual rate: 57554)
            baud76800=0x013a9000,     ///<76800 baud (actual rate: 76923)
            baud115200=0x01d60000,     ///<115200 baud (actual rate: 115108)
            baud230400=0x03b00000,     ///<230400 baud (actual rate: 231884)
            baud250000=0x04000000,     ///<250000 baud
            baud460800=0x07400000,     ///<460800 baud (actual rate: 457143)
            baud921600=0x0f000000,     ///<921600 baud (actual rate: 941176)
            baud1m=0x10000000,     ///<1Mega baud
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,BaudrateVal> baudrate{}; 
        namespace BaudrateValC{
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud1200> baud1200{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud2400> baud2400{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud4800> baud4800{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud9600> baud9600{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud14400> baud14400{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud19200> baud19200{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud28800> baud28800{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud38400> baud38400{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud57600> baud57600{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud76800> baud76800{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud115200> baud115200{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud230400> baud230400{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud250000> baud250000{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud460800> baud460800{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud921600> baud921600{};
            constexpr Register::FieldValue<decltype(baudrate)::Type,BaudrateVal::baud1m> baud1m{};
        }
        }
    }
    namespace Noneconfig{    ///<Configuration of parity and hardware flow control
        using Addr = Register::Address<0x4000256c,0xfffffff0,0,unsigned>;
        ///Hardware flow control
        enum class HwfcVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HwfcVal> hwfc{}; 
        namespace HwfcValC{
            constexpr Register::FieldValue<decltype(hwfc)::Type,HwfcVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwfc)::Type,HwfcVal::enabled> enabled{};
        }
        }
        ///Parity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> parity{}; 
    }
}
