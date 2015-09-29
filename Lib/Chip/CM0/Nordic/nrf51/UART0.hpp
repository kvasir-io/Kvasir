#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal Asynchronous Receiver/Transmitter.
    namespace NonetasksStartrx{    ///<Start UART receiver.
        using Addr = Register::Address<0x40002000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStoprx{    ///<Stop UART receiver.
        using Addr = Register::Address<0x40002004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStarttx{    ///<Start UART transmitter.
        using Addr = Register::Address<0x40002008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStoptx{    ///<Stop UART transmitter.
        using Addr = Register::Address<0x4000200c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSuspend{    ///<Suspend UART.
        using Addr = Register::Address<0x4000201c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCts{    ///<CTS activated.
        using Addr = Register::Address<0x40002100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsNcts{    ///<CTS deactivated.
        using Addr = Register::Address<0x40002104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRxdrdy{    ///<Data received in RXD.
        using Addr = Register::Address<0x40002108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsTxdrdy{    ///<Data sent from TXD.
        using Addr = Register::Address<0x4000211c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsError{    ///<Error detected.
        using Addr = Register::Address<0x40002124,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRxto{    ///<Receiver timeout.
        using Addr = Register::Address<0x40002144,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcuts for UART.
        using Addr = Register::Address<0x40002200,0xffffffe7,0,unsigned>;
        ///Shortcut between CTS event and STARTRX task.
        enum class ctsStartrxVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace ctsStartrxValC{
            constexpr MPL::Value<ctsStartrxVal,ctsStartrxVal::disabled> disabled{};
            constexpr MPL::Value<ctsStartrxVal,ctsStartrxVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ctsStartrxVal> ctsStartrx{}; 
        ///Shortcut between NCTS event and STOPRX task.
        enum class nctsStoprxVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace nctsStoprxValC{
            constexpr MPL::Value<nctsStoprxVal,nctsStoprxVal::disabled> disabled{};
            constexpr MPL::Value<nctsStoprxVal,nctsStoprxVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,nctsStoprxVal> nctsStoprx{}; 
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40002304,0xfffdfd78,0,unsigned>;
        ///Enable interrupt on CTS event.
        enum class ctsVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace ctsValC{
            constexpr MPL::Value<ctsVal,ctsVal::disabled> disabled{};
            constexpr MPL::Value<ctsVal,ctsVal::enabled> enabled{};
            constexpr MPL::Value<ctsVal,ctsVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ctsVal> cts{}; 
        ///Enable interrupt on NCTS event.
        enum class nctsVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace nctsValC{
            constexpr MPL::Value<nctsVal,nctsVal::disabled> disabled{};
            constexpr MPL::Value<nctsVal,nctsVal::enabled> enabled{};
            constexpr MPL::Value<nctsVal,nctsVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,nctsVal> ncts{}; 
        ///Enable interrupt on RXRDY event.
        enum class rxdrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace rxdrdyValC{
            constexpr MPL::Value<rxdrdyVal,rxdrdyVal::disabled> disabled{};
            constexpr MPL::Value<rxdrdyVal,rxdrdyVal::enabled> enabled{};
            constexpr MPL::Value<rxdrdyVal,rxdrdyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rxdrdyVal> rxdrdy{}; 
        ///Enable interrupt on TXRDY event.
        enum class txdrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace txdrdyValC{
            constexpr MPL::Value<txdrdyVal,txdrdyVal::disabled> disabled{};
            constexpr MPL::Value<txdrdyVal,txdrdyVal::enabled> enabled{};
            constexpr MPL::Value<txdrdyVal,txdrdyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,txdrdyVal> txdrdy{}; 
        ///Enable interrupt on ERROR event.
        enum class errorVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::disabled> disabled{};
            constexpr MPL::Value<errorVal,errorVal::enabled> enabled{};
            constexpr MPL::Value<errorVal,errorVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,errorVal> error{}; 
        ///Enable interrupt on RXTO event.
        enum class rxtoVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace rxtoValC{
            constexpr MPL::Value<rxtoVal,rxtoVal::disabled> disabled{};
            constexpr MPL::Value<rxtoVal,rxtoVal::enabled> enabled{};
            constexpr MPL::Value<rxtoVal,rxtoVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,rxtoVal> rxto{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40002308,0xfffdfd78,0,unsigned>;
        ///Disable interrupt on CTS event.
        enum class ctsVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace ctsValC{
            constexpr MPL::Value<ctsVal,ctsVal::disabled> disabled{};
            constexpr MPL::Value<ctsVal,ctsVal::enabled> enabled{};
            constexpr MPL::Value<ctsVal,ctsVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ctsVal> cts{}; 
        ///Disable interrupt on NCTS event.
        enum class nctsVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace nctsValC{
            constexpr MPL::Value<nctsVal,nctsVal::disabled> disabled{};
            constexpr MPL::Value<nctsVal,nctsVal::enabled> enabled{};
            constexpr MPL::Value<nctsVal,nctsVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,nctsVal> ncts{}; 
        ///Disable interrupt on RXRDY event.
        enum class rxdrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace rxdrdyValC{
            constexpr MPL::Value<rxdrdyVal,rxdrdyVal::disabled> disabled{};
            constexpr MPL::Value<rxdrdyVal,rxdrdyVal::enabled> enabled{};
            constexpr MPL::Value<rxdrdyVal,rxdrdyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rxdrdyVal> rxdrdy{}; 
        ///Disable interrupt on TXRDY event.
        enum class txdrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace txdrdyValC{
            constexpr MPL::Value<txdrdyVal,txdrdyVal::disabled> disabled{};
            constexpr MPL::Value<txdrdyVal,txdrdyVal::enabled> enabled{};
            constexpr MPL::Value<txdrdyVal,txdrdyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,txdrdyVal> txdrdy{}; 
        ///Disable interrupt on ERROR event.
        enum class errorVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::disabled> disabled{};
            constexpr MPL::Value<errorVal,errorVal::enabled> enabled{};
            constexpr MPL::Value<errorVal,errorVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,errorVal> error{}; 
        ///Disable interrupt on RXTO event.
        enum class rxtoVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace rxtoValC{
            constexpr MPL::Value<rxtoVal,rxtoVal::disabled> disabled{};
            constexpr MPL::Value<rxtoVal,rxtoVal::enabled> enabled{};
            constexpr MPL::Value<rxtoVal,rxtoVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,rxtoVal> rxto{}; 
    }
    namespace Noneerrorsrc{    ///<Error source. Write error field to 1 to clear error.
        using Addr = Register::Address<0x40002480,0xfffffff0,0,unsigned>;
        ///A start bit is received while the previous data still lies in RXD. (Data loss).
        enum class overrunVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear error on write.
        };
        namespace overrunValC{
            constexpr MPL::Value<overrunVal,overrunVal::notpresent> notpresent{};
            constexpr MPL::Value<overrunVal,overrunVal::present> present{};
            constexpr MPL::Value<overrunVal,overrunVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,overrunVal> overrun{}; 
        ///A character with bad parity is received. Only checked if HW parity control is enabled.
        enum class parityVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear error on write.
        };
        namespace parityValC{
            constexpr MPL::Value<parityVal,parityVal::notpresent> notpresent{};
            constexpr MPL::Value<parityVal,parityVal::present> present{};
            constexpr MPL::Value<parityVal,parityVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,parityVal> parity{}; 
        ///A valid stop bit is not detected on the serial data input after all bits in a character have been received.
        enum class framingVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear error on write.
        };
        namespace framingValC{
            constexpr MPL::Value<framingVal,framingVal::notpresent> notpresent{};
            constexpr MPL::Value<framingVal,framingVal::present> present{};
            constexpr MPL::Value<framingVal,framingVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,framingVal> framing{}; 
        ///The serial data input is '0' for longer than the length of a data frame.
        enum class break_Val {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear error on write.
        };
        namespace break_ValC{
            constexpr MPL::Value<break_Val,break_Val::notpresent> notpresent{};
            constexpr MPL::Value<break_Val,break_Val::present> present{};
            constexpr MPL::Value<break_Val,break_Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,break_Val> break_{}; 
    }
    namespace Noneenable{    ///<Enable UART and acquire IOs.
        using Addr = Register::Address<0x40002500,0xfffffff8,0,unsigned>;
        ///Enable or disable UART and acquire IOs.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Nonepselrts{    ///<Pin select for RTS.
        using Addr = Register::Address<0x40002508,0xffffffff,0,unsigned>;
    }
    namespace Nonepseltxd{    ///<Pin select for TXD.
        using Addr = Register::Address<0x4000250c,0xffffffff,0,unsigned>;
    }
    namespace Nonepselcts{    ///<Pin select for CTS.
        using Addr = Register::Address<0x40002510,0xffffffff,0,unsigned>;
    }
    namespace Nonepselrxd{    ///<Pin select for RXD.
        using Addr = Register::Address<0x40002514,0xffffffff,0,unsigned>;
    }
    namespace Nonerxd{    ///<RXD register. On read action the buffer pointer is displaced. Once read the character is consumed. If read when no character available, the UART will stop working.
        using Addr = Register::Address<0x40002518,0xffffff00,0,unsigned>;
        ///RX data from previous transfer. Double buffered.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
    }
    namespace Nonetxd{    ///<TXD register.
        using Addr = Register::Address<0x4000251c,0xffffff00,0,unsigned>;
        ///TX data for transfer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace Nonebaudrate{    ///<UART Baudrate.
        using Addr = Register::Address<0x40002524,0x00000000,0,unsigned>;
        ///UART baudrate.
        enum class baudrateVal {
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
        namespace baudrateValC{
            constexpr MPL::Value<baudrateVal,baudrateVal::baud1200> baud1200{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud2400> baud2400{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud4800> baud4800{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud9600> baud9600{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud14400> baud14400{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud19200> baud19200{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud28800> baud28800{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud38400> baud38400{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud57600> baud57600{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud76800> baud76800{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud115200> baud115200{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud230400> baud230400{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud250000> baud250000{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud460800> baud460800{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud921600> baud921600{};
            constexpr MPL::Value<baudrateVal,baudrateVal::baud1m> baud1m{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,baudrateVal> baudrate{}; 
    }
    namespace Noneconfig{    ///<Configuration of parity and hardware flow control register.
        using Addr = Register::Address<0x4000256c,0xfffffff0,0,unsigned>;
        ///Hardware flow control.
        enum class hwfcVal {
            disabled=0x00000000,     ///<Hardware flow control disabled.
            enabled=0x00000001,     ///<Hardware flow control enabled.
        };
        namespace hwfcValC{
            constexpr MPL::Value<hwfcVal,hwfcVal::disabled> disabled{};
            constexpr MPL::Value<hwfcVal,hwfcVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,hwfcVal> hwfc{}; 
        ///Include parity bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> parity{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40002ffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class powerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        namespace powerValC{
            constexpr MPL::Value<powerVal,powerVal::disabled> disabled{};
            constexpr MPL::Value<powerVal,powerVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,powerVal> power{}; 
    }
}
