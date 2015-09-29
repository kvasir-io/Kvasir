#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal Asynchronous Receiver/Transmitter
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
    namespace NonetasksSuspend{    ///<Suspend UART
        using Addr = Register::Address<0x4000201c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCts{    ///<CTS is activated (set low). Clear To Send.
        using Addr = Register::Address<0x40002100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsNcts{    ///<CTS is deactivated (set high). Not Clear To Send.
        using Addr = Register::Address<0x40002104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRxdrdy{    ///<Data received in RXD
        using Addr = Register::Address<0x40002108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsTxdrdy{    ///<Data sent from TXD
        using Addr = Register::Address<0x4000211c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsError{    ///<Error detected
        using Addr = Register::Address<0x40002124,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRxto{    ///<Receiver timeout
        using Addr = Register::Address<0x40002144,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x40002200,0xffffffe7,0,unsigned>;
        ///Shortcut between EVENTS_CTS event and TASKS_STARTRX task
        enum class ctsStartrxVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace ctsStartrxValC{
            constexpr MPL::Value<ctsStartrxVal,ctsStartrxVal::disabled> disabled{};
            constexpr MPL::Value<ctsStartrxVal,ctsStartrxVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ctsStartrxVal> ctsStartrx{}; 
        ///Shortcut between EVENTS_NCTS event and TASKS_STOPRX task
        enum class nctsStoprxVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace nctsStoprxValC{
            constexpr MPL::Value<nctsStoprxVal,nctsStoprxVal::disabled> disabled{};
            constexpr MPL::Value<nctsStoprxVal,nctsStoprxVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,nctsStoprxVal> nctsStoprx{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40002304,0xfffdfd78,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_CTS event
        enum class ctsVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ctsValC{
            constexpr MPL::Value<ctsVal,ctsVal::disabled> disabled{};
            constexpr MPL::Value<ctsVal,ctsVal::enabled> enabled{};
            constexpr MPL::Value<ctsVal,ctsVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ctsVal> cts{}; 
        ///Write '1' to Enable interrupt on EVENTS_NCTS event
        enum class nctsVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace nctsValC{
            constexpr MPL::Value<nctsVal,nctsVal::disabled> disabled{};
            constexpr MPL::Value<nctsVal,nctsVal::enabled> enabled{};
            constexpr MPL::Value<nctsVal,nctsVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,nctsVal> ncts{}; 
        ///Write '1' to Enable interrupt on EVENTS_RXDRDY event
        enum class rxdrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace rxdrdyValC{
            constexpr MPL::Value<rxdrdyVal,rxdrdyVal::disabled> disabled{};
            constexpr MPL::Value<rxdrdyVal,rxdrdyVal::enabled> enabled{};
            constexpr MPL::Value<rxdrdyVal,rxdrdyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rxdrdyVal> rxdrdy{}; 
        ///Write '1' to Enable interrupt on EVENTS_TXDRDY event
        enum class txdrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace txdrdyValC{
            constexpr MPL::Value<txdrdyVal,txdrdyVal::disabled> disabled{};
            constexpr MPL::Value<txdrdyVal,txdrdyVal::enabled> enabled{};
            constexpr MPL::Value<txdrdyVal,txdrdyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,txdrdyVal> txdrdy{}; 
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
        ///Write '1' to Enable interrupt on EVENTS_RXTO event
        enum class rxtoVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace rxtoValC{
            constexpr MPL::Value<rxtoVal,rxtoVal::disabled> disabled{};
            constexpr MPL::Value<rxtoVal,rxtoVal::enabled> enabled{};
            constexpr MPL::Value<rxtoVal,rxtoVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,rxtoVal> rxto{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40002308,0xfffdfd78,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_CTS event
        enum class ctsVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ctsValC{
            constexpr MPL::Value<ctsVal,ctsVal::disabled> disabled{};
            constexpr MPL::Value<ctsVal,ctsVal::enabled> enabled{};
            constexpr MPL::Value<ctsVal,ctsVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ctsVal> cts{}; 
        ///Write '1' to Clear interrupt on EVENTS_NCTS event
        enum class nctsVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace nctsValC{
            constexpr MPL::Value<nctsVal,nctsVal::disabled> disabled{};
            constexpr MPL::Value<nctsVal,nctsVal::enabled> enabled{};
            constexpr MPL::Value<nctsVal,nctsVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,nctsVal> ncts{}; 
        ///Write '1' to Clear interrupt on EVENTS_RXDRDY event
        enum class rxdrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace rxdrdyValC{
            constexpr MPL::Value<rxdrdyVal,rxdrdyVal::disabled> disabled{};
            constexpr MPL::Value<rxdrdyVal,rxdrdyVal::enabled> enabled{};
            constexpr MPL::Value<rxdrdyVal,rxdrdyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rxdrdyVal> rxdrdy{}; 
        ///Write '1' to Clear interrupt on EVENTS_TXDRDY event
        enum class txdrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace txdrdyValC{
            constexpr MPL::Value<txdrdyVal,txdrdyVal::disabled> disabled{};
            constexpr MPL::Value<txdrdyVal,txdrdyVal::enabled> enabled{};
            constexpr MPL::Value<txdrdyVal,txdrdyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,txdrdyVal> txdrdy{}; 
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
        ///Write '1' to Clear interrupt on EVENTS_RXTO event
        enum class rxtoVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace rxtoValC{
            constexpr MPL::Value<rxtoVal,rxtoVal::disabled> disabled{};
            constexpr MPL::Value<rxtoVal,rxtoVal::enabled> enabled{};
            constexpr MPL::Value<rxtoVal,rxtoVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,rxtoVal> rxto{}; 
    }
    namespace Noneerrorsrc{    ///<Error source
        using Addr = Register::Address<0x40002480,0xfffffff0,0,unsigned>;
        ///Overrun error
        enum class overrunVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
        };
        namespace overrunValC{
            constexpr MPL::Value<overrunVal,overrunVal::notpresent> notpresent{};
            constexpr MPL::Value<overrunVal,overrunVal::present> present{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,overrunVal> overrun{}; 
        ///Parity error
        enum class parityVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
        };
        namespace parityValC{
            constexpr MPL::Value<parityVal,parityVal::notpresent> notpresent{};
            constexpr MPL::Value<parityVal,parityVal::present> present{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,parityVal> parity{}; 
        ///Framing error occurred
        enum class framingVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
        };
        namespace framingValC{
            constexpr MPL::Value<framingVal,framingVal::notpresent> notpresent{};
            constexpr MPL::Value<framingVal,framingVal::present> present{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,framingVal> framing{}; 
        ///Break condition
        enum class break_Val {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
        };
        namespace break_ValC{
            constexpr MPL::Value<break_Val,break_Val::notpresent> notpresent{};
            constexpr MPL::Value<break_Val,break_Val::present> present{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,break_Val> break_{}; 
    }
    namespace Noneenable{    ///<Enable UART
        using Addr = Register::Address<0x40002500,0xfffffff0,0,unsigned>;
        ///Enable or disable UART
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Nonepselrts{    ///<Pin select for RTS
        using Addr = Register::Address<0x40002508,0x00000000,0,unsigned>;
        ///Pin number configuration for UART RTS signal
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pselrts{}; 
    }
    namespace Nonepseltxd{    ///<Pin select for TXD
        using Addr = Register::Address<0x4000250c,0x00000000,0,unsigned>;
        ///Pin number configuration for UART TXD signal
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pseltxd{}; 
    }
    namespace Nonepselcts{    ///<Pin select for CTS
        using Addr = Register::Address<0x40002510,0x00000000,0,unsigned>;
        ///Pin number configuration for UART CTS signal
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pselcts{}; 
    }
    namespace Nonepselrxd{    ///<Pin select for RXD
        using Addr = Register::Address<0x40002514,0x00000000,0,unsigned>;
        ///Pin number configuration for UART RXD signal
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pselrxd{}; 
    }
    namespace Nonerxd{    ///<RXD register
        using Addr = Register::Address<0x40002518,0xffffff00,0,unsigned>;
        ///RX data received in previous transfers, double buffered
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
    }
    namespace Nonetxd{    ///<TXD register
        using Addr = Register::Address<0x4000251c,0xffffff00,0,unsigned>;
        ///TX data to be transferred
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace Nonebaudrate{    ///<Baud rate
        using Addr = Register::Address<0x40002524,0x00000000,0,unsigned>;
        ///Baud-rate
        enum class baudrateVal {
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
    namespace Noneconfig{    ///<Configuration of parity and hardware flow control
        using Addr = Register::Address<0x4000256c,0xfffffff0,0,unsigned>;
        ///Hardware flow control
        enum class hwfcVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace hwfcValC{
            constexpr MPL::Value<hwfcVal,hwfcVal::disabled> disabled{};
            constexpr MPL::Value<hwfcVal,hwfcVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,hwfcVal> hwfc{}; 
        ///Parity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> parity{}; 
    }
}
