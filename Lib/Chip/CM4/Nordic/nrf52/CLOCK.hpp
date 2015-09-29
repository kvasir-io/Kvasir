#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Clock control
    namespace NonetasksHfclkstart{    ///<Start HFCLK crystal oscillator
        using Addr = Register::Address<0x40000000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksHfclkstop{    ///<Stop HFCLK crystal oscillator
        using Addr = Register::Address<0x40000004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksLfclkstart{    ///<Start LFCLK source
        using Addr = Register::Address<0x40000008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksLfclkstop{    ///<Stop LFCLK source
        using Addr = Register::Address<0x4000000c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCal{    ///<Start calibration of LFRC or LFULP oscillator
        using Addr = Register::Address<0x40000010,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCtstart{    ///<Start calibration timer
        using Addr = Register::Address<0x40000014,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCtstop{    ///<Stop calibration timer
        using Addr = Register::Address<0x40000018,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsHfclkstarted{    ///<HFCLK oscillator started
        using Addr = Register::Address<0x40000100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsLfclkstarted{    ///<LFCLK started
        using Addr = Register::Address<0x40000104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsDone{    ///<Calibration of LFCLK RC oscillator complete event
        using Addr = Register::Address<0x4000010c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCtto{    ///<Calibration timer timeout
        using Addr = Register::Address<0x40000110,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40000304,0xffffffe4,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_HFCLKSTARTED event
        enum class hfclkstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace hfclkstartedValC{
            constexpr MPL::Value<hfclkstartedVal,hfclkstartedVal::disabled> disabled{};
            constexpr MPL::Value<hfclkstartedVal,hfclkstartedVal::enabled> enabled{};
            constexpr MPL::Value<hfclkstartedVal,hfclkstartedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,hfclkstartedVal> hfclkstarted{}; 
        ///Write '1' to Enable interrupt on EVENTS_LFCLKSTARTED event
        enum class lfclkstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace lfclkstartedValC{
            constexpr MPL::Value<lfclkstartedVal,lfclkstartedVal::disabled> disabled{};
            constexpr MPL::Value<lfclkstartedVal,lfclkstartedVal::enabled> enabled{};
            constexpr MPL::Value<lfclkstartedVal,lfclkstartedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lfclkstartedVal> lfclkstarted{}; 
        ///Write '1' to Enable interrupt on EVENTS_DONE event
        enum class doneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace doneValC{
            constexpr MPL::Value<doneVal,doneVal::disabled> disabled{};
            constexpr MPL::Value<doneVal,doneVal::enabled> enabled{};
            constexpr MPL::Value<doneVal,doneVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,doneVal> done{}; 
        ///Write '1' to Enable interrupt on EVENTS_CTTO event
        enum class cttoVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace cttoValC{
            constexpr MPL::Value<cttoVal,cttoVal::disabled> disabled{};
            constexpr MPL::Value<cttoVal,cttoVal::enabled> enabled{};
            constexpr MPL::Value<cttoVal,cttoVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,cttoVal> ctto{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40000308,0xffffffe4,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_HFCLKSTARTED event
        enum class hfclkstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace hfclkstartedValC{
            constexpr MPL::Value<hfclkstartedVal,hfclkstartedVal::disabled> disabled{};
            constexpr MPL::Value<hfclkstartedVal,hfclkstartedVal::enabled> enabled{};
            constexpr MPL::Value<hfclkstartedVal,hfclkstartedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,hfclkstartedVal> hfclkstarted{}; 
        ///Write '1' to Clear interrupt on EVENTS_LFCLKSTARTED event
        enum class lfclkstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace lfclkstartedValC{
            constexpr MPL::Value<lfclkstartedVal,lfclkstartedVal::disabled> disabled{};
            constexpr MPL::Value<lfclkstartedVal,lfclkstartedVal::enabled> enabled{};
            constexpr MPL::Value<lfclkstartedVal,lfclkstartedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lfclkstartedVal> lfclkstarted{}; 
        ///Write '1' to Clear interrupt on EVENTS_DONE event
        enum class doneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace doneValC{
            constexpr MPL::Value<doneVal,doneVal::disabled> disabled{};
            constexpr MPL::Value<doneVal,doneVal::enabled> enabled{};
            constexpr MPL::Value<doneVal,doneVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,doneVal> done{}; 
        ///Write '1' to Clear interrupt on EVENTS_CTTO event
        enum class cttoVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace cttoValC{
            constexpr MPL::Value<cttoVal,cttoVal::disabled> disabled{};
            constexpr MPL::Value<cttoVal,cttoVal::enabled> enabled{};
            constexpr MPL::Value<cttoVal,cttoVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,cttoVal> ctto{}; 
    }
    namespace Nonehfclkrun{    ///<Status indicating that HFCLKSTART task has been triggered
        using Addr = Register::Address<0x40000408,0xfffffffe,0,unsigned>;
        ///HFCLKSTART task triggered or not
        enum class statusVal {
            nottriggered=0x00000000,     ///<Task not triggered
            triggered=0x00000001,     ///<Task triggered
        };
        namespace statusValC{
            constexpr MPL::Value<statusVal,statusVal::nottriggered> nottriggered{};
            constexpr MPL::Value<statusVal,statusVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,statusVal> status{}; 
    }
    namespace Nonehfclkstat{    ///<Which HFCLK source is running
        using Addr = Register::Address<0x4000040c,0xfffefffe,0,unsigned>;
        ///Active clock source
        enum class srcVal {
            rc=0x00000000,     ///<Internal oscillator (HFINT)
            xtal=0x00000001,     ///<32 MHz crystal oscillator (HFXO)
        };
        namespace srcValC{
            constexpr MPL::Value<srcVal,srcVal::rc> rc{};
            constexpr MPL::Value<srcVal,srcVal::xtal> xtal{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,srcVal> src{}; 
        ///HFCLK state
        enum class stateVal {
            notrunning=0x00000000,     ///<HFCLK not running
            running=0x00000001,     ///<HFCLK running
        };
        namespace stateValC{
            constexpr MPL::Value<stateVal,stateVal::notrunning> notrunning{};
            constexpr MPL::Value<stateVal,stateVal::running> running{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,stateVal> state{}; 
    }
    namespace Nonelfclkrun{    ///<Status indicating that LFCLKSTART task has been triggered
        using Addr = Register::Address<0x40000414,0xfffffffe,0,unsigned>;
        ///LFCLKSTART task triggered or not
        enum class statusVal {
            nottriggered=0x00000000,     ///<Task not triggered
            triggered=0x00000001,     ///<Task triggered
        };
        namespace statusValC{
            constexpr MPL::Value<statusVal,statusVal::nottriggered> nottriggered{};
            constexpr MPL::Value<statusVal,statusVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,statusVal> status{}; 
    }
    namespace Nonelfclkstat{    ///<Which LFCLK source is running
        using Addr = Register::Address<0x40000418,0xfffefffc,0,unsigned>;
        ///Active clock source
        enum class srcVal {
            rc=0x00000000,     ///<32.768 kHz RC oscillator
            xtal=0x00000001,     ///<32.768 kHz crystal oscillator
            synth=0x00000002,     ///<32.768 kHz synthesized from HFCLK
        };
        namespace srcValC{
            constexpr MPL::Value<srcVal,srcVal::rc> rc{};
            constexpr MPL::Value<srcVal,srcVal::xtal> xtal{};
            constexpr MPL::Value<srcVal,srcVal::synth> synth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,srcVal> src{}; 
        ///LFCLK state
        enum class stateVal {
            notrunning=0x00000000,     ///<LFCLK not running
            running=0x00000001,     ///<LFCLK running
        };
        namespace stateValC{
            constexpr MPL::Value<stateVal,stateVal::notrunning> notrunning{};
            constexpr MPL::Value<stateVal,stateVal::running> running{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,stateVal> state{}; 
    }
    namespace Nonelfclksrccopy{    ///<Copy of LFCLKSRC register, set when LFCLKSTART task was triggered
        using Addr = Register::Address<0x4000041c,0xfffffffc,0,unsigned>;
        ///Clock source
        enum class srcVal {
            rc=0x00000000,     ///<32.768 kHz RC oscillator
            xtal=0x00000001,     ///<32.768 kHz crystal oscillator
            synth=0x00000002,     ///<32.768 kHz synthesized from HFCLK
        };
        namespace srcValC{
            constexpr MPL::Value<srcVal,srcVal::rc> rc{};
            constexpr MPL::Value<srcVal,srcVal::xtal> xtal{};
            constexpr MPL::Value<srcVal,srcVal::synth> synth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,srcVal> src{}; 
    }
    namespace Nonelfclksrc{    ///<Clock source for the LFCLK
        using Addr = Register::Address<0x40000518,0xfffffffc,0,unsigned>;
        ///Clock source
        enum class srcVal {
            rc=0x00000000,     ///<32.768 kHz RC oscillator
            xtal=0x00000001,     ///<32.768 kHz crystal oscillator
            synth=0x00000002,     ///<32.768 kHz synthesized from HFCLK
        };
        namespace srcValC{
            constexpr MPL::Value<srcVal,srcVal::rc> rc{};
            constexpr MPL::Value<srcVal,srcVal::xtal> xtal{};
            constexpr MPL::Value<srcVal,srcVal::synth> synth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,srcVal> src{}; 
    }
    namespace Nonectiv{    ///<Calibration timer interval (retained register, same reset behaviour as RESETREAS)
        using Addr = Register::Address<0x40000538,0xffffff80,0,unsigned>;
        ///Calibration timer interval in multiple of 0.25 seconds. Range: 0.25 seconds to 31.75 seconds.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> ctiv{}; 
    }
    namespace Nonetraceconfig{    ///<Clocking options for the Trace Port debug interface
        using Addr = Register::Address<0x4000055c,0xfffcfffc,0,unsigned>;
        ///Speed of Trace Port clock. Note that the TRACECLK pin will output this clock divided by two.
        enum class traceportspeedVal {
            v32mhz=0x00000000,     ///<32 MHz Trace Port clock (TRACECLK = 16 MHz)
            v16mhz=0x00000001,     ///<16 MHz Trace Port clock (TRACECLK = 8 MHz)
            v8mhz=0x00000002,     ///<8 MHz Trace Port clock (TRACECLK = 4 MHz)
            v4mhz=0x00000003,     ///<4 MHz Trace Port clock (TRACECLK = 2 MHz)
        };
        namespace traceportspeedValC{
            constexpr MPL::Value<traceportspeedVal,traceportspeedVal::v32mhz> v32mhz{};
            constexpr MPL::Value<traceportspeedVal,traceportspeedVal::v16mhz> v16mhz{};
            constexpr MPL::Value<traceportspeedVal,traceportspeedVal::v8mhz> v8mhz{};
            constexpr MPL::Value<traceportspeedVal,traceportspeedVal::v4mhz> v4mhz{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,traceportspeedVal> traceportspeed{}; 
        ///Pin multiplexing of trace signals.
        enum class tracemuxVal {
            gpio=0x00000000,     ///<GPIOs multiplexed onto all trace-pins
            serial=0x00000001,     ///<SWO multiplexed onto P0.18, GPIO multiplexed onto other trace pins
            parallel=0x00000002,     ///<TRACECLK and TRACEDATA multiplexed onto P0.20, P0.18, P0.16, P0.15 and P0.14.
        };
        namespace tracemuxValC{
            constexpr MPL::Value<tracemuxVal,tracemuxVal::gpio> gpio{};
            constexpr MPL::Value<tracemuxVal,tracemuxVal::serial> serial{};
            constexpr MPL::Value<tracemuxVal,tracemuxVal::parallel> parallel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,tracemuxVal> tracemux{}; 
    }
}
