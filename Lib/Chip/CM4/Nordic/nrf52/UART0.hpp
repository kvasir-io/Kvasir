#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Universal Asynchronous Receiver/Transmitter
    namespace Uart0TasksStartrx{    ///<Start UART receiver
        using Addr = Register::Address<0x40002000,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0TasksStoprx{    ///<Stop UART receiver
        using Addr = Register::Address<0x40002004,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0TasksStarttx{    ///<Start UART transmitter
        using Addr = Register::Address<0x40002008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0TasksStoptx{    ///<Stop UART transmitter
        using Addr = Register::Address<0x4000200c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0TasksSuspend{    ///<Suspend UART
        using Addr = Register::Address<0x4000201c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0EventsCts{    ///<CTS is activated (set low). Clear To Send.
        using Addr = Register::Address<0x40002100,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0EventsNcts{    ///<CTS is deactivated (set high). Not Clear To Send.
        using Addr = Register::Address<0x40002104,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0EventsRxdrdy{    ///<Data received in RXD
        using Addr = Register::Address<0x40002108,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0EventsTxdrdy{    ///<Data sent from TXD
        using Addr = Register::Address<0x4000211c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0EventsError{    ///<Error detected
        using Addr = Register::Address<0x40002124,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0EventsRxto{    ///<Receiver timeout
        using Addr = Register::Address<0x40002144,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0Shorts{    ///<Shortcut register
        using Addr = Register::Address<0x40002200,0xffffffe7,0x00000000,unsigned>;
        ///Shortcut between EVENTS_CTS event and TASKS_STARTRX task
        enum class CtsstartrxVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CtsstartrxVal> ctsStartrx{}; 
        namespace CtsstartrxValC{
            constexpr Register::FieldValue<decltype(ctsStartrx)::Type,CtsstartrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ctsStartrx)::Type,CtsstartrxVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_NCTS event and TASKS_STOPRX task
        enum class NctsstoprxVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,NctsstoprxVal> nctsStoprx{}; 
        namespace NctsstoprxValC{
            constexpr Register::FieldValue<decltype(nctsStoprx)::Type,NctsstoprxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(nctsStoprx)::Type,NctsstoprxVal::enabled> enabled{};
        }
    }
    namespace Uart0Intenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40002304,0xfffdfd78,0x00000000,unsigned>;
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
        ///Write '1' to Enable interrupt on EVENTS_RXDRDY event
        enum class RxdrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxdrdyVal> rxdrdy{}; 
        namespace RxdrdyValC{
            constexpr Register::FieldValue<decltype(rxdrdy)::Type,RxdrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxdrdy)::Type,RxdrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxdrdy)::Type,RxdrdyVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TXDRDY event
        enum class TxdrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TxdrdyVal> txdrdy{}; 
        namespace TxdrdyValC{
            constexpr Register::FieldValue<decltype(txdrdy)::Type,TxdrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txdrdy)::Type,TxdrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txdrdy)::Type,TxdrdyVal::set> set{};
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
    namespace Uart0Intenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40002308,0xfffdfd78,0x00000000,unsigned>;
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
        ///Write '1' to Clear interrupt on EVENTS_RXDRDY event
        enum class RxdrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxdrdyVal> rxdrdy{}; 
        namespace RxdrdyValC{
            constexpr Register::FieldValue<decltype(rxdrdy)::Type,RxdrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxdrdy)::Type,RxdrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxdrdy)::Type,RxdrdyVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TXDRDY event
        enum class TxdrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TxdrdyVal> txdrdy{}; 
        namespace TxdrdyValC{
            constexpr Register::FieldValue<decltype(txdrdy)::Type,TxdrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txdrdy)::Type,TxdrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txdrdy)::Type,TxdrdyVal::clear> clear{};
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
    namespace Uart0Errorsrc{    ///<Error source
        using Addr = Register::Address<0x40002480,0xfffffff0,0x00000000,unsigned>;
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
    namespace Uart0Enable{    ///<Enable UART
        using Addr = Register::Address<0x40002500,0xfffffff0,0x00000000,unsigned>;
        ///Enable or disable UART
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Uart0Pselrts{    ///<Pin select for RTS
        using Addr = Register::Address<0x40002508,0x00000000,0x00000000,unsigned>;
        ///Pin number configuration for UART RTS signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pselrts{}; 
    }
    namespace Uart0Pseltxd{    ///<Pin select for TXD
        using Addr = Register::Address<0x4000250c,0x00000000,0x00000000,unsigned>;
        ///Pin number configuration for UART TXD signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pseltxd{}; 
    }
    namespace Uart0Pselcts{    ///<Pin select for CTS
        using Addr = Register::Address<0x40002510,0x00000000,0x00000000,unsigned>;
        ///Pin number configuration for UART CTS signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pselcts{}; 
    }
    namespace Uart0Pselrxd{    ///<Pin select for RXD
        using Addr = Register::Address<0x40002514,0x00000000,0x00000000,unsigned>;
        ///Pin number configuration for UART RXD signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pselrxd{}; 
    }
    namespace Uart0Rxd{    ///<RXD register
        using Addr = Register::Address<0x40002518,0xffffff00,0x00000000,unsigned>;
        ///RX data received in previous transfers, double buffered
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
    }
    namespace Uart0Txd{    ///<TXD register
        using Addr = Register::Address<0x4000251c,0xffffff00,0x00000000,unsigned>;
        ///TX data to be transferred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace Uart0Baudrate{    ///<Baud rate
        using Addr = Register::Address<0x40002524,0x00000000,0x00000000,unsigned>;
        ///Baud-rate
        enum class BaudrateVal {
            baud1200=0x0004f000,     ///<1200 baud (actual rate: 1205)
            baud2400=0x0009d000,     ///<2400 baud (actual rate: 2396)
            baud4800=0x0013b000,     ///<4800 baud (actual rate: 4808)
            baud9600=0x00275000,     ///<9600 baud (actual rate: 9598)
            baud14400=0x003b0000,     ///<14400 baud (actual rate: 14414)
            baud19200=0x004ea000,     ///<19200 baud (actual rate: 19208)
            baud28800=0x0075f000,     ///<28800 baud (actual rate: 28829)
            baud38400=0x009d5000,     ///<38400 baud (actual rate: 38462)
            baud57600=0x00ebf000,     ///<57600 baud (actual rate: 57762)
            baud76800=0x013a9000,     ///<76800 baud (actual rate: 76923)
            baud115200=0x01d7e000,     ///<115200 baud (actual rate: 115942)
            baud230400=0x03afb000,     ///<230400 baud (actual rate: 231884)
            baud250000=0x04000000,     ///<250000 baud
            baud460800=0x075f7000,     ///<460800 baud (actual rate: 470588)
            baud921600=0x0ebed000,     ///<921600 baud (actual rate: 941176)
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
    namespace Uart0Config{    ///<Configuration of parity and hardware flow control
        using Addr = Register::Address<0x4000256c,0xfffffff0,0x00000000,unsigned>;
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
        ///Parity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> parity{}; 
    }
}
