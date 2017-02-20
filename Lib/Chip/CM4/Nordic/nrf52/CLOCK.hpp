#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Clock control
    namespace ClockTasksHfclkstart{    ///<Start HFCLK crystal oscillator
        using Addr = Register::Address<0x40000000,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockTasksHfclkstop{    ///<Stop HFCLK crystal oscillator
        using Addr = Register::Address<0x40000004,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockTasksLfclkstart{    ///<Start LFCLK source
        using Addr = Register::Address<0x40000008,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockTasksLfclkstop{    ///<Stop LFCLK source
        using Addr = Register::Address<0x4000000c,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockTasksCal{    ///<Start calibration of LFRC or LFULP oscillator
        using Addr = Register::Address<0x40000010,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockTasksCtstart{    ///<Start calibration timer
        using Addr = Register::Address<0x40000014,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockTasksCtstop{    ///<Stop calibration timer
        using Addr = Register::Address<0x40000018,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockEventsHfclkstarted{    ///<HFCLK oscillator started
        using Addr = Register::Address<0x40000100,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockEventsLfclkstarted{    ///<LFCLK started
        using Addr = Register::Address<0x40000104,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockEventsDone{    ///<Calibration of LFCLK RC oscillator complete event
        using Addr = Register::Address<0x4000010c,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockEventsCtto{    ///<Calibration timer timeout
        using Addr = Register::Address<0x40000110,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockIntenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40000304,0xffffffe4,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_HFCLKSTARTED event
        enum class HfclkstartedVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HfclkstartedVal> hfclkstarted{}; 
        namespace HfclkstartedValC{
            constexpr Register::FieldValue<decltype(hfclkstarted)::Type,HfclkstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hfclkstarted)::Type,HfclkstartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(hfclkstarted)::Type,HfclkstartedVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_LFCLKSTARTED event
        enum class LfclkstartedVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LfclkstartedVal> lfclkstarted{}; 
        namespace LfclkstartedValC{
            constexpr Register::FieldValue<decltype(lfclkstarted)::Type,LfclkstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lfclkstarted)::Type,LfclkstartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(lfclkstarted)::Type,LfclkstartedVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_DONE event
        enum class DoneVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DoneVal> done{}; 
        namespace DoneValC{
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_CTTO event
        enum class CttoVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CttoVal> ctto{}; 
        namespace CttoValC{
            constexpr Register::FieldValue<decltype(ctto)::Type,CttoVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ctto)::Type,CttoVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ctto)::Type,CttoVal::set> set{};
        }
    }
    namespace ClockIntenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40000308,0xffffffe4,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_HFCLKSTARTED event
        enum class HfclkstartedVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HfclkstartedVal> hfclkstarted{}; 
        namespace HfclkstartedValC{
            constexpr Register::FieldValue<decltype(hfclkstarted)::Type,HfclkstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hfclkstarted)::Type,HfclkstartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(hfclkstarted)::Type,HfclkstartedVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_LFCLKSTARTED event
        enum class LfclkstartedVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LfclkstartedVal> lfclkstarted{}; 
        namespace LfclkstartedValC{
            constexpr Register::FieldValue<decltype(lfclkstarted)::Type,LfclkstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lfclkstarted)::Type,LfclkstartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(lfclkstarted)::Type,LfclkstartedVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_DONE event
        enum class DoneVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DoneVal> done{}; 
        namespace DoneValC{
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_CTTO event
        enum class CttoVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CttoVal> ctto{}; 
        namespace CttoValC{
            constexpr Register::FieldValue<decltype(ctto)::Type,CttoVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ctto)::Type,CttoVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ctto)::Type,CttoVal::clear> clear{};
        }
    }
    namespace ClockHfclkrun{    ///<Status indicating that HFCLKSTART task has been triggered
        using Addr = Register::Address<0x40000408,0xfffffffe,0x00000000,unsigned>;
        ///HFCLKSTART task triggered or not
        enum class StatusVal : unsigned {
            nottriggered=0x00000000,     ///<Task not triggered
            triggered=0x00000001,     ///<Task triggered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StatusVal> status{}; 
        namespace StatusValC{
            constexpr Register::FieldValue<decltype(status)::Type,StatusVal::nottriggered> nottriggered{};
            constexpr Register::FieldValue<decltype(status)::Type,StatusVal::triggered> triggered{};
        }
    }
    namespace ClockHfclkstat{    ///<Which HFCLK source is running
        using Addr = Register::Address<0x4000040c,0xfffefffe,0x00000000,unsigned>;
        ///Active clock source
        enum class SrcVal : unsigned {
            rc=0x00000000,     ///<Internal oscillator (HFINT)
            xtal=0x00000001,     ///<32 MHz crystal oscillator (HFXO)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::rc> rc{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xtal> xtal{};
        }
        ///HFCLK state
        enum class StateVal : unsigned {
            notrunning=0x00000000,     ///<HFCLK not running
            running=0x00000001,     ///<HFCLK running
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,StateVal> state{}; 
        namespace StateValC{
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::notrunning> notrunning{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::running> running{};
        }
    }
    namespace ClockLfclkrun{    ///<Status indicating that LFCLKSTART task has been triggered
        using Addr = Register::Address<0x40000414,0xfffffffe,0x00000000,unsigned>;
        ///LFCLKSTART task triggered or not
        enum class StatusVal : unsigned {
            nottriggered=0x00000000,     ///<Task not triggered
            triggered=0x00000001,     ///<Task triggered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StatusVal> status{}; 
        namespace StatusValC{
            constexpr Register::FieldValue<decltype(status)::Type,StatusVal::nottriggered> nottriggered{};
            constexpr Register::FieldValue<decltype(status)::Type,StatusVal::triggered> triggered{};
        }
    }
    namespace ClockLfclkstat{    ///<Which LFCLK source is running
        using Addr = Register::Address<0x40000418,0xfffefffc,0x00000000,unsigned>;
        ///Active clock source
        enum class SrcVal : unsigned {
            rc=0x00000000,     ///<32.768 kHz RC oscillator
            xtal=0x00000001,     ///<32.768 kHz crystal oscillator
            synth=0x00000002,     ///<32.768 kHz synthesized from HFCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::rc> rc{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xtal> xtal{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::synth> synth{};
        }
        ///LFCLK state
        enum class StateVal : unsigned {
            notrunning=0x00000000,     ///<LFCLK not running
            running=0x00000001,     ///<LFCLK running
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,StateVal> state{}; 
        namespace StateValC{
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::notrunning> notrunning{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::running> running{};
        }
    }
    namespace ClockLfclksrccopy{    ///<Copy of LFCLKSRC register, set when LFCLKSTART task was triggered
        using Addr = Register::Address<0x4000041c,0xfffffffc,0x00000000,unsigned>;
        ///Clock source
        enum class SrcVal : unsigned {
            rc=0x00000000,     ///<32.768 kHz RC oscillator
            xtal=0x00000001,     ///<32.768 kHz crystal oscillator
            synth=0x00000002,     ///<32.768 kHz synthesized from HFCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::rc> rc{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xtal> xtal{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::synth> synth{};
        }
    }
    namespace ClockLfclksrc{    ///<Clock source for the LFCLK
        using Addr = Register::Address<0x40000518,0xfffffffc,0x00000000,unsigned>;
        ///Clock source
        enum class SrcVal : unsigned {
            rc=0x00000000,     ///<32.768 kHz RC oscillator
            xtal=0x00000001,     ///<32.768 kHz crystal oscillator
            synth=0x00000002,     ///<32.768 kHz synthesized from HFCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::rc> rc{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xtal> xtal{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::synth> synth{};
        }
    }
    namespace ClockCtiv{    ///<Calibration timer interval (retained register, same reset behaviour as RESETREAS)
        using Addr = Register::Address<0x40000538,0xffffff80,0x00000000,unsigned>;
        ///Calibration timer interval in multiple of 0.25 seconds. Range: 0.25 seconds to 31.75 seconds.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> ctiv{}; 
    }
    namespace ClockTraceconfig{    ///<Clocking options for the Trace Port debug interface
        using Addr = Register::Address<0x4000055c,0xfffcfffc,0x00000000,unsigned>;
        ///Speed of Trace Port clock. Note that the TRACECLK pin will output this clock divided by two.
        enum class TraceportspeedVal : unsigned {
            v32mhz=0x00000000,     ///<32 MHz Trace Port clock (TRACECLK = 16 MHz)
            v16mhz=0x00000001,     ///<16 MHz Trace Port clock (TRACECLK = 8 MHz)
            v8mhz=0x00000002,     ///<8 MHz Trace Port clock (TRACECLK = 4 MHz)
            v4mhz=0x00000003,     ///<4 MHz Trace Port clock (TRACECLK = 2 MHz)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,TraceportspeedVal> traceportspeed{}; 
        namespace TraceportspeedValC{
            constexpr Register::FieldValue<decltype(traceportspeed)::Type,TraceportspeedVal::v32mhz> v32mhz{};
            constexpr Register::FieldValue<decltype(traceportspeed)::Type,TraceportspeedVal::v16mhz> v16mhz{};
            constexpr Register::FieldValue<decltype(traceportspeed)::Type,TraceportspeedVal::v8mhz> v8mhz{};
            constexpr Register::FieldValue<decltype(traceportspeed)::Type,TraceportspeedVal::v4mhz> v4mhz{};
        }
        ///Pin multiplexing of trace signals.
        enum class TracemuxVal : unsigned {
            gpio=0x00000000,     ///<GPIOs multiplexed onto all trace-pins
            serial=0x00000001,     ///<SWO multiplexed onto P0.18, GPIO multiplexed onto other trace pins
            parallel=0x00000002,     ///<TRACECLK and TRACEDATA multiplexed onto P0.20, P0.18, P0.16, P0.15 and P0.14.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,TracemuxVal> tracemux{}; 
        namespace TracemuxValC{
            constexpr Register::FieldValue<decltype(tracemux)::Type,TracemuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(tracemux)::Type,TracemuxVal::serial> serial{};
            constexpr Register::FieldValue<decltype(tracemux)::Type,TracemuxVal::parallel> parallel{};
        }
    }
}
