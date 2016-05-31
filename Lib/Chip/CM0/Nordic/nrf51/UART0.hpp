#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Universal Asynchronous Receiver/Transmitter.
    namespace Uart0TasksStartrx{    ///<Start UART receiver.
        using Addr = Register::Address<0x40002000,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0TasksStoprx{    ///<Stop UART receiver.
        using Addr = Register::Address<0x40002004,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0TasksStarttx{    ///<Start UART transmitter.
        using Addr = Register::Address<0x40002008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0TasksStoptx{    ///<Stop UART transmitter.
        using Addr = Register::Address<0x4000200c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0TasksSuspend{    ///<Suspend UART.
        using Addr = Register::Address<0x4000201c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0EventsCts{    ///<CTS activated.
        using Addr = Register::Address<0x40002100,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0EventsNcts{    ///<CTS deactivated.
        using Addr = Register::Address<0x40002104,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0EventsRxdrdy{    ///<Data received in RXD.
        using Addr = Register::Address<0x40002108,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0EventsTxdrdy{    ///<Data sent from TXD.
        using Addr = Register::Address<0x4000211c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0EventsError{    ///<Error detected.
        using Addr = Register::Address<0x40002124,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0EventsRxto{    ///<Receiver timeout.
        using Addr = Register::Address<0x40002144,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0Shorts{    ///<Shortcuts for UART.
        using Addr = Register::Address<0x40002200,0xffffffe7,0x00000000,unsigned>;
        ///Shortcut between CTS event and STARTRX task.
        enum class CtsstartrxVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CtsstartrxVal> ctsStartrx{}; 
        namespace CtsstartrxValC{
            constexpr Register::FieldValue<decltype(ctsStartrx)::Type,CtsstartrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ctsStartrx)::Type,CtsstartrxVal::enabled> enabled{};
        }
        ///Shortcut between NCTS event and STOPRX task.
        enum class NctsstoprxVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,NctsstoprxVal> nctsStoprx{}; 
        namespace NctsstoprxValC{
            constexpr Register::FieldValue<decltype(nctsStoprx)::Type,NctsstoprxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(nctsStoprx)::Type,NctsstoprxVal::enabled> enabled{};
        }
    }
    namespace Uart0Intenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40002304,0xfffdfd78,0x00000000,unsigned>;
        ///Enable interrupt on CTS event.
        enum class CtsVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CtsVal> cts{}; 
        namespace CtsValC{
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::set> set{};
        }
        ///Enable interrupt on NCTS event.
        enum class NctsVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,NctsVal> ncts{}; 
        namespace NctsValC{
            constexpr Register::FieldValue<decltype(ncts)::Type,NctsVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ncts)::Type,NctsVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ncts)::Type,NctsVal::set> set{};
        }
        ///Enable interrupt on RXRDY event.
        enum class RxdrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxdrdyVal> rxdrdy{}; 
        namespace RxdrdyValC{
            constexpr Register::FieldValue<decltype(rxdrdy)::Type,RxdrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxdrdy)::Type,RxdrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxdrdy)::Type,RxdrdyVal::set> set{};
        }
        ///Enable interrupt on TXRDY event.
        enum class TxdrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TxdrdyVal> txdrdy{}; 
        namespace TxdrdyValC{
            constexpr Register::FieldValue<decltype(txdrdy)::Type,TxdrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txdrdy)::Type,TxdrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txdrdy)::Type,TxdrdyVal::set> set{};
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
        ///Enable interrupt on RXTO event.
        enum class RxtoVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RxtoVal> rxto{}; 
        namespace RxtoValC{
            constexpr Register::FieldValue<decltype(rxto)::Type,RxtoVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxto)::Type,RxtoVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxto)::Type,RxtoVal::set> set{};
        }
    }
    namespace Uart0Intenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40002308,0xfffdfd78,0x00000000,unsigned>;
        ///Disable interrupt on CTS event.
        enum class CtsVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CtsVal> cts{}; 
        namespace CtsValC{
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::clear> clear{};
        }
        ///Disable interrupt on NCTS event.
        enum class NctsVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,NctsVal> ncts{}; 
        namespace NctsValC{
            constexpr Register::FieldValue<decltype(ncts)::Type,NctsVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ncts)::Type,NctsVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ncts)::Type,NctsVal::clear> clear{};
        }
        ///Disable interrupt on RXRDY event.
        enum class RxdrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxdrdyVal> rxdrdy{}; 
        namespace RxdrdyValC{
            constexpr Register::FieldValue<decltype(rxdrdy)::Type,RxdrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxdrdy)::Type,RxdrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxdrdy)::Type,RxdrdyVal::clear> clear{};
        }
        ///Disable interrupt on TXRDY event.
        enum class TxdrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TxdrdyVal> txdrdy{}; 
        namespace TxdrdyValC{
            constexpr Register::FieldValue<decltype(txdrdy)::Type,TxdrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txdrdy)::Type,TxdrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txdrdy)::Type,TxdrdyVal::clear> clear{};
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
        ///Disable interrupt on RXTO event.
        enum class RxtoVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RxtoVal> rxto{}; 
        namespace RxtoValC{
            constexpr Register::FieldValue<decltype(rxto)::Type,RxtoVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxto)::Type,RxtoVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxto)::Type,RxtoVal::clear> clear{};
        }
    }
    namespace Uart0Errorsrc{    ///<Error source. Write error field to 1 to clear error.
        using Addr = Register::Address<0x40002480,0xfffffff0,0x00000000,unsigned>;
        ///A start bit is received while the previous data still lies in RXD. (Data loss).
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
        ///A character with bad parity is received. Only checked if HW parity control is enabled.
        enum class ParityVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear error on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ParityVal> parity{}; 
        namespace ParityValC{
            constexpr Register::FieldValue<decltype(parity)::Type,ParityVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(parity)::Type,ParityVal::present> present{};
            constexpr Register::FieldValue<decltype(parity)::Type,ParityVal::clear> clear{};
        }
        ///A valid stop bit is not detected on the serial data input after all bits in a character have been received.
        enum class FramingVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear error on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FramingVal> framing{}; 
        namespace FramingValC{
            constexpr Register::FieldValue<decltype(framing)::Type,FramingVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(framing)::Type,FramingVal::present> present{};
            constexpr Register::FieldValue<decltype(framing)::Type,FramingVal::clear> clear{};
        }
        ///The serial data input is '0' for longer than the length of a data frame.
        enum class Break_Val {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear error on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Break_Val> break_{}; 
        namespace Break_ValC{
            constexpr Register::FieldValue<decltype(break_)::Type,Break_Val::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(break_)::Type,Break_Val::present> present{};
            constexpr Register::FieldValue<decltype(break_)::Type,Break_Val::clear> clear{};
        }
    }
    namespace Uart0Enable{    ///<Enable UART and acquire IOs.
        using Addr = Register::Address<0x40002500,0xfffffff8,0x00000000,unsigned>;
        ///Enable or disable UART and acquire IOs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Uart0Pselrts{    ///<Pin select for RTS.
        using Addr = Register::Address<0x40002508,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0Pseltxd{    ///<Pin select for TXD.
        using Addr = Register::Address<0x4000250c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0Pselcts{    ///<Pin select for CTS.
        using Addr = Register::Address<0x40002510,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0Pselrxd{    ///<Pin select for RXD.
        using Addr = Register::Address<0x40002514,0xffffffff,0x00000000,unsigned>;
    }
    namespace Uart0Rxd{    ///<RXD register. On read action the buffer pointer is displaced. Once read the character is consumed. If read when no character available, the UART will stop working.
        using Addr = Register::Address<0x40002518,0xffffff00,0x00000000,unsigned>;
        ///RX data from previous transfer. Double buffered.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
    }
    namespace Uart0Txd{    ///<TXD register.
        using Addr = Register::Address<0x4000251c,0xffffff00,0x00000000,unsigned>;
        ///TX data for transfer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace Uart0Baudrate{    ///<UART Baudrate.
        using Addr = Register::Address<0x40002524,0x00000000,0x00000000,unsigned>;
        ///UART baudrate.
        enum class BaudrateVal {
            baud1200=0x0004f000,     ///<1200 baud.
            baud2400=0x0009d000,     ///<2400 baud.
            baud4800=0x0013b000,     ///<4800 baud.
            baud9600=0x00275000,     ///<9600 baud.
            baud14400=0x003b0000,     ///<14400 baud.
            baud19200=0x004ea000,     ///<19200 baud.
            baud28800=0x0075f000,     ///<28800 baud.
            baud38400=0x009d5000,     ///<38400 baud.
            baud57600=0x00ebf000,     ///<57600 baud.
            baud76800=0x013a9000,     ///<76800 baud.
            baud115200=0x01d7e000,     ///<115200 baud.
            baud230400=0x03afb000,     ///<230400 baud.
            baud250000=0x04000000,     ///<250000 baud.
            baud460800=0x075f7000,     ///<460800 baud.
            baud921600=0x0ebed000,     ///<921600 baud.
            baud1m=0x10000000,     ///<1M baud.
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
    namespace Uart0Config{    ///<Configuration of parity and hardware flow control register.
        using Addr = Register::Address<0x4000256c,0xfffffff0,0x00000000,unsigned>;
        ///Hardware flow control.
        enum class HwfcVal {
            disabled=0x00000000,     ///<Hardware flow control disabled.
            enabled=0x00000001,     ///<Hardware flow control enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HwfcVal> hwfc{}; 
        namespace HwfcValC{
            constexpr Register::FieldValue<decltype(hwfc)::Type,HwfcVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwfc)::Type,HwfcVal::enabled> enabled{};
        }
        ///Include parity bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> parity{}; 
    }
    namespace Uart0Power{    ///<Peripheral power control.
        using Addr = Register::Address<0x40002ffc,0xfffffffe,0x00000000,unsigned>;
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
