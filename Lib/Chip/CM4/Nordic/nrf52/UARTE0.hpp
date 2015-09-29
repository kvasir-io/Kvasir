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
        enum class endrxStartrxVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace endrxStartrxValC{
            constexpr MPL::Value<endrxStartrxVal,endrxStartrxVal::disabled> disabled{};
            constexpr MPL::Value<endrxStartrxVal,endrxStartrxVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,endrxStartrxVal> endrxStartrx{}; 
        ///Shortcut between EVENTS_ENDRX event and TASKS_STOPRX task
        enum class endrxStoprxVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace endrxStoprxValC{
            constexpr MPL::Value<endrxStoprxVal,endrxStoprxVal::disabled> disabled{};
            constexpr MPL::Value<endrxStoprxVal,endrxStoprxVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,endrxStoprxVal> endrxStoprx{}; 
    }
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40002300,0xffa5fcec,0,unsigned>;
        ///Enable or disable interrupt on EVENTS_CTS event
        enum class ctsVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ctsValC{
            constexpr MPL::Value<ctsVal,ctsVal::disabled> disabled{};
            constexpr MPL::Value<ctsVal,ctsVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ctsVal> cts{}; 
        ///Enable or disable interrupt on EVENTS_NCTS event
        enum class nctsVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace nctsValC{
            constexpr MPL::Value<nctsVal,nctsVal::disabled> disabled{};
            constexpr MPL::Value<nctsVal,nctsVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,nctsVal> ncts{}; 
        ///Enable or disable interrupt on EVENTS_ENDRX event
        enum class endrxVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace endrxValC{
            constexpr MPL::Value<endrxVal,endrxVal::disabled> disabled{};
            constexpr MPL::Value<endrxVal,endrxVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,endrxVal> endrx{}; 
        ///Enable or disable interrupt on EVENTS_ENDTX event
        enum class endtxVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace endtxValC{
            constexpr MPL::Value<endtxVal,endtxVal::disabled> disabled{};
            constexpr MPL::Value<endtxVal,endtxVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,endtxVal> endtx{}; 
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
        ///Enable or disable interrupt on EVENTS_RXTO event
        enum class rxtoVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace rxtoValC{
            constexpr MPL::Value<rxtoVal,rxtoVal::disabled> disabled{};
            constexpr MPL::Value<rxtoVal,rxtoVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,rxtoVal> rxto{}; 
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
        ///Enable or disable interrupt on EVENTS_TXSTOPPED event
        enum class txstoppedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace txstoppedValC{
            constexpr MPL::Value<txstoppedVal,txstoppedVal::disabled> disabled{};
            constexpr MPL::Value<txstoppedVal,txstoppedVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,txstoppedVal> txstopped{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40002304,0xffa5fcec,0,unsigned>;
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
        ///Write '1' to Enable interrupt on EVENTS_ENDRX event
        enum class endrxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace endrxValC{
            constexpr MPL::Value<endrxVal,endrxVal::disabled> disabled{};
            constexpr MPL::Value<endrxVal,endrxVal::enabled> enabled{};
            constexpr MPL::Value<endrxVal,endrxVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,endrxVal> endrx{}; 
        ///Write '1' to Enable interrupt on EVENTS_ENDTX event
        enum class endtxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace endtxValC{
            constexpr MPL::Value<endtxVal,endtxVal::disabled> disabled{};
            constexpr MPL::Value<endtxVal,endtxVal::enabled> enabled{};
            constexpr MPL::Value<endtxVal,endtxVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,endtxVal> endtx{}; 
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
        ///Write '1' to Enable interrupt on EVENTS_TXSTOPPED event
        enum class txstoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace txstoppedValC{
            constexpr MPL::Value<txstoppedVal,txstoppedVal::disabled> disabled{};
            constexpr MPL::Value<txstoppedVal,txstoppedVal::enabled> enabled{};
            constexpr MPL::Value<txstoppedVal,txstoppedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,txstoppedVal> txstopped{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40002308,0xffa5fcec,0,unsigned>;
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
        ///Write '1' to Clear interrupt on EVENTS_ENDRX event
        enum class endrxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace endrxValC{
            constexpr MPL::Value<endrxVal,endrxVal::disabled> disabled{};
            constexpr MPL::Value<endrxVal,endrxVal::enabled> enabled{};
            constexpr MPL::Value<endrxVal,endrxVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,endrxVal> endrx{}; 
        ///Write '1' to Clear interrupt on EVENTS_ENDTX event
        enum class endtxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace endtxValC{
            constexpr MPL::Value<endtxVal,endtxVal::disabled> disabled{};
            constexpr MPL::Value<endtxVal,endtxVal::enabled> enabled{};
            constexpr MPL::Value<endtxVal,endtxVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,endtxVal> endtx{}; 
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
        ///Write '1' to Clear interrupt on EVENTS_TXSTOPPED event
        enum class txstoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace txstoppedValC{
            constexpr MPL::Value<txstoppedVal,txstoppedVal::disabled> disabled{};
            constexpr MPL::Value<txstoppedVal,txstoppedVal::enabled> enabled{};
            constexpr MPL::Value<txstoppedVal,txstoppedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,txstoppedVal> txstopped{}; 
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
        ///Enable or disable UARTE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Nonebaudrate{    ///<Baud rate
        using Addr = Register::Address<0x40002524,0x00000000,0,unsigned>;
        ///Baud-rate
        enum class baudrateVal {
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
