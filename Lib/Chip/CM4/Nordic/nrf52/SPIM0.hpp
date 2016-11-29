#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial Peripheral Interface Master with EasyDMA 0
    namespace Spim0TasksStart{    ///<Start SPI transaction
        using Addr = Register::Address<0x40003010,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spim0TasksStop{    ///<Stop SPI transaction
        using Addr = Register::Address<0x40003014,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spim0TasksSuspend{    ///<Suspend SPI transaction
        using Addr = Register::Address<0x4000301c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spim0TasksResume{    ///<Resume SPI transaction
        using Addr = Register::Address<0x40003020,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spim0EventsStopped{    ///<SPI transaction has stopped
        using Addr = Register::Address<0x40003104,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spim0EventsEndrx{    ///<End of RXD buffer reached
        using Addr = Register::Address<0x40003110,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spim0EventsEnd{    ///<End of RXD buffer and TXD buffer reached
        using Addr = Register::Address<0x40003118,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spim0EventsEndtx{    ///<End of TXD buffer reached
        using Addr = Register::Address<0x40003120,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spim0EventsStarted{    ///<Transaction started
        using Addr = Register::Address<0x4000314c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spim0Shorts{    ///<Shortcut register
        using Addr = Register::Address<0x40003200,0xfffdffff,0x00000000,unsigned>;
        ///Shortcut between EVENTS_END event and TASKS_START task
        enum class EndstartVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,EndstartVal> endStart{}; 
        namespace EndstartValC{
            constexpr Register::FieldValue<decltype(endStart)::Type,EndstartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endStart)::Type,EndstartVal::enabled> enabled{};
        }
    }
    namespace Spim0Intenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40003304,0xfff7fead,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_STOPPED event
        enum class StoppedVal : unsigned {
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
        ///Write '1' to Enable interrupt on EVENTS_ENDRX event
        enum class EndrxVal : unsigned {
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
        ///Write '1' to Enable interrupt on EVENTS_END event
        enum class EndVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_ENDTX event
        enum class EndtxVal : unsigned {
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
        ///Write '1' to Enable interrupt on EVENTS_STARTED event
        enum class StartedVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,StartedVal> started{}; 
        namespace StartedValC{
            constexpr Register::FieldValue<decltype(started)::Type,StartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(started)::Type,StartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(started)::Type,StartedVal::set> set{};
        }
    }
    namespace Spim0Intenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40003308,0xfff7fead,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_STOPPED event
        enum class StoppedVal : unsigned {
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
        ///Write '1' to Clear interrupt on EVENTS_ENDRX event
        enum class EndrxVal : unsigned {
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
        ///Write '1' to Clear interrupt on EVENTS_END event
        enum class EndVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_ENDTX event
        enum class EndtxVal : unsigned {
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
        ///Write '1' to Clear interrupt on EVENTS_STARTED event
        enum class StartedVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,StartedVal> started{}; 
        namespace StartedValC{
            constexpr Register::FieldValue<decltype(started)::Type,StartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(started)::Type,StartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(started)::Type,StartedVal::clear> clear{};
        }
    }
    namespace Spim0Enable{    ///<Enable SPIM
        using Addr = Register::Address<0x40003500,0xfffffff0,0x00000000,unsigned>;
        ///Enable or disable SPIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Spim0Frequency{    ///<SPI frequency
        using Addr = Register::Address<0x40003524,0x00000000,0x00000000,unsigned>;
        ///SPI master data rate
        enum class FrequencyVal : unsigned {
            k125=0x02000000,     ///<125 kbps
            k250=0x04000000,     ///<250 kbps
            k500=0x08000000,     ///<500 kbps
            m1=0x10000000,     ///<1 Mbps
            m2=0x20000000,     ///<2 Mbps
            m4=0x40000000,     ///<4 Mbps
            m8=0x80000000,     ///<8 Mbps
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,FrequencyVal> frequency{}; 
        namespace FrequencyValC{
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::k125> k125{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::k250> k250{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::k500> k500{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::m1> m1{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::m2> m2{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::m4> m4{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::m8> m8{};
        }
    }
    namespace Spim0Config{    ///<Configuration register
        using Addr = Register::Address<0x40003554,0xfffffff8,0x00000000,unsigned>;
        ///Bit order
        enum class OrderVal : unsigned {
            msbfirst=0x00000000,     ///<Most significant bit shifted out first
            lsbfirst=0x00000001,     ///<Least significant bit shifted out first
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OrderVal> order{}; 
        namespace OrderValC{
            constexpr Register::FieldValue<decltype(order)::Type,OrderVal::msbfirst> msbfirst{};
            constexpr Register::FieldValue<decltype(order)::Type,OrderVal::lsbfirst> lsbfirst{};
        }
        ///Serial clock (SCK) phase
        enum class CphaVal : unsigned {
            leading=0x00000000,     ///<Sample on leading edge of clock, shift serial data on trailing edge
            trailing=0x00000001,     ///<Sample on trailing edge of clock, shift serial data on leading edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CphaVal> cpha{}; 
        namespace CphaValC{
            constexpr Register::FieldValue<decltype(cpha)::Type,CphaVal::leading> leading{};
            constexpr Register::FieldValue<decltype(cpha)::Type,CphaVal::trailing> trailing{};
        }
        ///Serial clock (SCK) polarity
        enum class CpolVal : unsigned {
            activehigh=0x00000000,     ///<Active high
            activelow=0x00000001,     ///<Active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CpolVal> cpol{}; 
        namespace CpolValC{
            constexpr Register::FieldValue<decltype(cpol)::Type,CpolVal::activehigh> activehigh{};
            constexpr Register::FieldValue<decltype(cpol)::Type,CpolVal::activelow> activelow{};
        }
    }
    namespace Spim0Orc{    ///<Over-read character. Character clocked out in case and over-read of the TXD buffer.
        using Addr = Register::Address<0x400035c0,0xffffff00,0x00000000,unsigned>;
        ///Over-read character. Character clocked out in case and over-read of the TXD buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> orc{}; 
    }
}
