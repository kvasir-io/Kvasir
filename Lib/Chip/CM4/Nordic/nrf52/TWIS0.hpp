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
        enum class writeSuspendVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace writeSuspendValC{
            constexpr MPL::Value<writeSuspendVal,writeSuspendVal::disabled> disabled{};
            constexpr MPL::Value<writeSuspendVal,writeSuspendVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,writeSuspendVal> writeSuspend{}; 
        ///Shortcut between EVENTS_READ event and TASKS_SUSPEND task
        enum class readSuspendVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace readSuspendValC{
            constexpr MPL::Value<readSuspendVal,readSuspendVal::disabled> disabled{};
            constexpr MPL::Value<readSuspendVal,readSuspendVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,readSuspendVal> readSuspend{}; 
    }
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40003300,0xf9e7fdfd,0,unsigned>;
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
        ///Enable or disable interrupt on EVENTS_WRITE event
        enum class writeVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace writeValC{
            constexpr MPL::Value<writeVal,writeVal::disabled> disabled{};
            constexpr MPL::Value<writeVal,writeVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,writeVal> write{}; 
        ///Enable or disable interrupt on EVENTS_READ event
        enum class readVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace readValC{
            constexpr MPL::Value<readVal,readVal::disabled> disabled{};
            constexpr MPL::Value<readVal,readVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,readVal> read{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40003304,0xf9e7fdfd,0,unsigned>;
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
        ///Write '1' to Enable interrupt on EVENTS_WRITE event
        enum class writeVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace writeValC{
            constexpr MPL::Value<writeVal,writeVal::disabled> disabled{};
            constexpr MPL::Value<writeVal,writeVal::enabled> enabled{};
            constexpr MPL::Value<writeVal,writeVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,writeVal> write{}; 
        ///Write '1' to Enable interrupt on EVENTS_READ event
        enum class readVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace readValC{
            constexpr MPL::Value<readVal,readVal::disabled> disabled{};
            constexpr MPL::Value<readVal,readVal::enabled> enabled{};
            constexpr MPL::Value<readVal,readVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,readVal> read{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40003308,0xf9e7fdfd,0,unsigned>;
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
        ///Write '1' to Clear interrupt on EVENTS_WRITE event
        enum class writeVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace writeValC{
            constexpr MPL::Value<writeVal,writeVal::disabled> disabled{};
            constexpr MPL::Value<writeVal,writeVal::enabled> enabled{};
            constexpr MPL::Value<writeVal,writeVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,writeVal> write{}; 
        ///Write '1' to Clear interrupt on EVENTS_READ event
        enum class readVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace readValC{
            constexpr MPL::Value<readVal,readVal::disabled> disabled{};
            constexpr MPL::Value<readVal,readVal::enabled> enabled{};
            constexpr MPL::Value<readVal,readVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,readVal> read{}; 
    }
    namespace Noneerrorsrc{    ///<Error source
        using Addr = Register::Address<0x400034d0,0xfffffff2,0,unsigned>;
        ///RX buffer overflow detected, and prevented
        enum class overflowVal {
            notdetected=0x00000000,     ///<Error did not occur
            detected=0x00000001,     ///<Error occurred
        };
        namespace overflowValC{
            constexpr MPL::Value<overflowVal,overflowVal::notdetected> notdetected{};
            constexpr MPL::Value<overflowVal,overflowVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,overflowVal> overflow{}; 
        ///NACK sent after receiving a data byte
        enum class dnackVal {
            notreceived=0x00000000,     ///<Error did not occur
            received=0x00000001,     ///<Error occurred
        };
        namespace dnackValC{
            constexpr MPL::Value<dnackVal,dnackVal::notreceived> notreceived{};
            constexpr MPL::Value<dnackVal,dnackVal::received> received{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,dnackVal> dnack{}; 
        ///TX buffer over-read detected, and prevented
        enum class overreadVal {
            notdetected=0x00000000,     ///<Error did not occur
            detected=0x00000001,     ///<Error occurred
        };
        namespace overreadValC{
            constexpr MPL::Value<overreadVal,overreadVal::notdetected> notdetected{};
            constexpr MPL::Value<overreadVal,overreadVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,overreadVal> overread{}; 
    }
    namespace Nonematch{    ///<Status register indicating which address had a match
        using Addr = Register::Address<0x400034d4,0xfffffffe,0,unsigned>;
        ///Which of the addresses in {ADDRESS} matched the incoming address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Noneenable{    ///<Enable TWIS
        using Addr = Register::Address<0x40003500,0xfffffff0,0,unsigned>;
        ///Enable or disable TWIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Noneaddress0{    ///<Description collection[0]:  TWI slave address 0
        using Addr = Register::Address<0x40003588,0xffffff80,0,unsigned>;
        ///TWI slave address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Noneaddress1{    ///<Description collection[0]:  TWI slave address 0
        using Addr = Register::Address<0x4000358c,0xffffff80,0,unsigned>;
        ///TWI slave address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Noneconfig{    ///<Configuration register for the address match mechanism
        using Addr = Register::Address<0x40003594,0xfffffffc,0,unsigned>;
        ///Enable or disable address matching on ADDRESS[0]
        enum class address0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace address0ValC{
            constexpr MPL::Value<address0Val,address0Val::disabled> disabled{};
            constexpr MPL::Value<address0Val,address0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,address0Val> address0{}; 
        ///Enable or disable address matching on ADDRESS[1]
        enum class address1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace address1ValC{
            constexpr MPL::Value<address1Val,address1Val::disabled> disabled{};
            constexpr MPL::Value<address1Val,address1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,address1Val> address1{}; 
    }
    namespace Noneorc{    ///<Over-read character. Character sent out in case of an over-read of the transmit buffer.
        using Addr = Register::Address<0x400035c0,0xffffff00,0,unsigned>;
        ///Over-read character. Character sent out in case of an over-read of the transmit buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> orc{}; 
    }
}
