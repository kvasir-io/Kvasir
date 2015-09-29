#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Peripheral Interface Master with EasyDMA 0
    namespace NonetasksStart{    ///<Start SPI transaction
        using Addr = Register::Address<0x40003010,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop SPI transaction
        using Addr = Register::Address<0x40003014,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSuspend{    ///<Suspend SPI transaction
        using Addr = Register::Address<0x4000301c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksResume{    ///<Resume SPI transaction
        using Addr = Register::Address<0x40003020,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsStopped{    ///<SPI transaction has stopped
        using Addr = Register::Address<0x40003104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEndrx{    ///<End of RXD buffer reached
        using Addr = Register::Address<0x40003110,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEnd{    ///<End of RXD buffer and TXD buffer reached
        using Addr = Register::Address<0x40003118,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEndtx{    ///<End of TXD buffer reached
        using Addr = Register::Address<0x40003120,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsStarted{    ///<Transaction started
        using Addr = Register::Address<0x4000314c,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x40003200,0xfffdffff,0,unsigned>;
        ///Shortcut between EVENTS_END event and TASKS_START task
        enum class endStartVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace endStartValC{
            constexpr MPL::Value<endStartVal,endStartVal::disabled> disabled{};
            constexpr MPL::Value<endStartVal,endStartVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,endStartVal> endStart{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40003304,0xfff7fead,0,unsigned>;
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
        ///Write '1' to Enable interrupt on EVENTS_END event
        enum class endVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
            constexpr MPL::Value<endVal,endVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,endVal> end{}; 
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
        ///Write '1' to Enable interrupt on EVENTS_STARTED event
        enum class startedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace startedValC{
            constexpr MPL::Value<startedVal,startedVal::disabled> disabled{};
            constexpr MPL::Value<startedVal,startedVal::enabled> enabled{};
            constexpr MPL::Value<startedVal,startedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,startedVal> started{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40003308,0xfff7fead,0,unsigned>;
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
        ///Write '1' to Clear interrupt on EVENTS_END event
        enum class endVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
            constexpr MPL::Value<endVal,endVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,endVal> end{}; 
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
        ///Write '1' to Clear interrupt on EVENTS_STARTED event
        enum class startedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace startedValC{
            constexpr MPL::Value<startedVal,startedVal::disabled> disabled{};
            constexpr MPL::Value<startedVal,startedVal::enabled> enabled{};
            constexpr MPL::Value<startedVal,startedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,startedVal> started{}; 
    }
    namespace Noneenable{    ///<Enable SPIM
        using Addr = Register::Address<0x40003500,0xfffffff0,0,unsigned>;
        ///Enable or disable SPIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Nonefrequency{    ///<SPI frequency
        using Addr = Register::Address<0x40003524,0x00000000,0,unsigned>;
        ///SPI master data rate
        enum class frequencyVal {
            k125=0x02000000,     ///<125 kbps
            k250=0x04000000,     ///<250 kbps
            k500=0x08000000,     ///<500 kbps
            m1=0x10000000,     ///<1 Mbps
            m2=0x20000000,     ///<2 Mbps
            m4=0x40000000,     ///<4 Mbps
            m8=0x80000000,     ///<8 Mbps
        };
        namespace frequencyValC{
            constexpr MPL::Value<frequencyVal,frequencyVal::k125> k125{};
            constexpr MPL::Value<frequencyVal,frequencyVal::k250> k250{};
            constexpr MPL::Value<frequencyVal,frequencyVal::k500> k500{};
            constexpr MPL::Value<frequencyVal,frequencyVal::m1> m1{};
            constexpr MPL::Value<frequencyVal,frequencyVal::m2> m2{};
            constexpr MPL::Value<frequencyVal,frequencyVal::m4> m4{};
            constexpr MPL::Value<frequencyVal,frequencyVal::m8> m8{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,frequencyVal> frequency{}; 
    }
    namespace Noneconfig{    ///<Configuration register
        using Addr = Register::Address<0x40003554,0xfffffff8,0,unsigned>;
        ///Bit order
        enum class orderVal {
            msbfirst=0x00000000,     ///<Most significant bit shifted out first
            lsbfirst=0x00000001,     ///<Least significant bit shifted out first
        };
        namespace orderValC{
            constexpr MPL::Value<orderVal,orderVal::msbfirst> msbfirst{};
            constexpr MPL::Value<orderVal,orderVal::lsbfirst> lsbfirst{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,orderVal> order{}; 
        ///Serial clock (SCK) phase
        enum class cphaVal {
            leading=0x00000000,     ///<Sample on leading edge of clock, shift serial data on trailing edge
            trailing=0x00000001,     ///<Sample on trailing edge of clock, shift serial data on leading edge
        };
        namespace cphaValC{
            constexpr MPL::Value<cphaVal,cphaVal::leading> leading{};
            constexpr MPL::Value<cphaVal,cphaVal::trailing> trailing{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cphaVal> cpha{}; 
        ///Serial clock (SCK) polarity
        enum class cpolVal {
            activehigh=0x00000000,     ///<Active high
            activelow=0x00000001,     ///<Active low
        };
        namespace cpolValC{
            constexpr MPL::Value<cpolVal,cpolVal::activehigh> activehigh{};
            constexpr MPL::Value<cpolVal,cpolVal::activelow> activelow{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cpolVal> cpol{}; 
    }
    namespace Noneorc{    ///<Over-read character. Character clocked out in case and over-read of the TXD buffer.
        using Addr = Register::Address<0x400035c0,0xffffff00,0,unsigned>;
        ///Over-read character. Character clocked out in case and over-read of the TXD buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> orc{}; 
    }
}
