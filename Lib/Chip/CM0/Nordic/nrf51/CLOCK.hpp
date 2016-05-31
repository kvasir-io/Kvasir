#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Clock control.
    namespace ClockTasksHfclkstart{    ///<Start HFCLK clock source.
        using Addr = Register::Address<0x40000000,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockTasksHfclkstop{    ///<Stop HFCLK clock source.
        using Addr = Register::Address<0x40000004,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockTasksLfclkstart{    ///<Start LFCLK clock source.
        using Addr = Register::Address<0x40000008,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockTasksLfclkstop{    ///<Stop LFCLK clock source.
        using Addr = Register::Address<0x4000000c,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockTasksCal{    ///<Start calibration of LFCLK RC oscillator.
        using Addr = Register::Address<0x40000010,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockTasksCtstart{    ///<Start calibration timer.
        using Addr = Register::Address<0x40000014,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockTasksCtstop{    ///<Stop calibration timer.
        using Addr = Register::Address<0x40000018,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockEventsHfclkstarted{    ///<HFCLK oscillator started.
        using Addr = Register::Address<0x40000100,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockEventsLfclkstarted{    ///<LFCLK oscillator started.
        using Addr = Register::Address<0x40000104,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockEventsDone{    ///<Calibration of LFCLK RC oscillator completed.
        using Addr = Register::Address<0x4000010c,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockEventsCtto{    ///<Calibration timer timeout.
        using Addr = Register::Address<0x40000110,0xffffffff,0x00000000,unsigned>;
    }
    namespace ClockIntenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40000304,0xffffffe4,0x00000000,unsigned>;
        ///Enable interrupt on HFCLKSTARTED event.
        enum class HfclkstartedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HfclkstartedVal> hfclkstarted{}; 
        namespace HfclkstartedValC{
            constexpr Register::FieldValue<decltype(hfclkstarted)::Type,HfclkstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hfclkstarted)::Type,HfclkstartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(hfclkstarted)::Type,HfclkstartedVal::set> set{};
        }
        ///Enable interrupt on LFCLKSTARTED event.
        enum class LfclkstartedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LfclkstartedVal> lfclkstarted{}; 
        namespace LfclkstartedValC{
            constexpr Register::FieldValue<decltype(lfclkstarted)::Type,LfclkstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lfclkstarted)::Type,LfclkstartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(lfclkstarted)::Type,LfclkstartedVal::set> set{};
        }
        ///Enable interrupt on DONE event.
        enum class DoneVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DoneVal> done{}; 
        namespace DoneValC{
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::set> set{};
        }
        ///Enable interrupt on CTTO event.
        enum class CttoVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CttoVal> ctto{}; 
        namespace CttoValC{
            constexpr Register::FieldValue<decltype(ctto)::Type,CttoVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ctto)::Type,CttoVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ctto)::Type,CttoVal::set> set{};
        }
    }
    namespace ClockIntenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40000308,0xffffffe4,0x00000000,unsigned>;
        ///Disable interrupt on HFCLKSTARTED event.
        enum class HfclkstartedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HfclkstartedVal> hfclkstarted{}; 
        namespace HfclkstartedValC{
            constexpr Register::FieldValue<decltype(hfclkstarted)::Type,HfclkstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hfclkstarted)::Type,HfclkstartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(hfclkstarted)::Type,HfclkstartedVal::clear> clear{};
        }
        ///Disable interrupt on LFCLKSTARTED event.
        enum class LfclkstartedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LfclkstartedVal> lfclkstarted{}; 
        namespace LfclkstartedValC{
            constexpr Register::FieldValue<decltype(lfclkstarted)::Type,LfclkstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lfclkstarted)::Type,LfclkstartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(lfclkstarted)::Type,LfclkstartedVal::clear> clear{};
        }
        ///Disable interrupt on DONE event.
        enum class DoneVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DoneVal> done{}; 
        namespace DoneValC{
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::clear> clear{};
        }
        ///Disable interrupt on CTTO event.
        enum class CttoVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CttoVal> ctto{}; 
        namespace CttoValC{
            constexpr Register::FieldValue<decltype(ctto)::Type,CttoVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ctto)::Type,CttoVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ctto)::Type,CttoVal::clear> clear{};
        }
    }
    namespace ClockHfclkrun{    ///<Task HFCLKSTART trigger status.
        using Addr = Register::Address<0x40000408,0xfffffffe,0x00000000,unsigned>;
        ///Task HFCLKSTART trigger status.
        enum class StatusVal {
            nottriggered=0x00000000,     ///<Task HFCLKSTART has not been triggered.
            triggered=0x00000001,     ///<Task HFCLKSTART has been triggered.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StatusVal> status{}; 
        namespace StatusValC{
            constexpr Register::FieldValue<decltype(status)::Type,StatusVal::nottriggered> nottriggered{};
            constexpr Register::FieldValue<decltype(status)::Type,StatusVal::triggered> triggered{};
        }
    }
    namespace ClockHfclkstat{    ///<High frequency clock status.
        using Addr = Register::Address<0x4000040c,0xfffefffe,0x00000000,unsigned>;
        ///Active clock source for the HF clock.
        enum class SrcVal {
            rc=0x00000000,     ///<Internal 16MHz RC oscillator running and generating the HFCLK clock.
            xtal=0x00000001,     ///<External 16MHz/32MHz crystal oscillator running and generating the HFCLK clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::rc> rc{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xtal> xtal{};
        }
        ///State for the HFCLK.
        enum class StateVal {
            notrunning=0x00000000,     ///<HFCLK clock not running.
            running=0x00000001,     ///<HFCLK clock running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,StateVal> state{}; 
        namespace StateValC{
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::notrunning> notrunning{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::running> running{};
        }
    }
    namespace ClockLfclkrun{    ///<Task LFCLKSTART triggered status.
        using Addr = Register::Address<0x40000414,0xfffffffe,0x00000000,unsigned>;
        ///Task LFCLKSTART triggered status.
        enum class StatusVal {
            nottriggered=0x00000000,     ///<Task LFCLKSTART has not been triggered.
            triggered=0x00000001,     ///<Task LFCLKSTART has been triggered.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StatusVal> status{}; 
        namespace StatusValC{
            constexpr Register::FieldValue<decltype(status)::Type,StatusVal::nottriggered> nottriggered{};
            constexpr Register::FieldValue<decltype(status)::Type,StatusVal::triggered> triggered{};
        }
    }
    namespace ClockLfclkstat{    ///<Low frequency clock status.
        using Addr = Register::Address<0x40000418,0xfffefffc,0x00000000,unsigned>;
        ///Active clock source for the LF clock.
        enum class SrcVal {
            rc=0x00000000,     ///<Internal 32KiHz RC oscillator running and generating the LFCLK clock.
            xtal=0x00000001,     ///<External 32KiHz crystal oscillator running and generating the LFCLK clock.
            synth=0x00000002,     ///<Internal 32KiHz synthesizer from the HFCLK running and generating the LFCLK clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::rc> rc{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xtal> xtal{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::synth> synth{};
        }
        ///State for the LF clock.
        enum class StateVal {
            notrunning=0x00000000,     ///<LFCLK clock not running.
            running=0x00000001,     ///<LFCLK clock running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,StateVal> state{}; 
        namespace StateValC{
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::notrunning> notrunning{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::running> running{};
        }
    }
    namespace ClockLfclksrccopy{    ///<Clock source for the LFCLK clock, set when task LKCLKSTART is triggered.
        using Addr = Register::Address<0x4000041c,0xfffffffc,0x00000000,unsigned>;
        ///Clock source for the LFCLK clock, set when task LKCLKSTART is triggered.
        enum class SrcVal {
            rc=0x00000000,     ///<Internal 32KiHz RC oscillator.
            xtal=0x00000001,     ///<External 32KiHz crystal.
            synth=0x00000002,     ///<Internal 32KiHz synthesizer from HFCLK system clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::rc> rc{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xtal> xtal{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::synth> synth{};
        }
    }
    namespace ClockLfclksrc{    ///<Clock source for the LFCLK clock.
        using Addr = Register::Address<0x40000518,0xfffffffc,0x00000000,unsigned>;
        ///Clock source.
        enum class SrcVal {
            rc=0x00000000,     ///<Internal 32KiHz RC oscillator.
            xtal=0x00000001,     ///<External 32KiHz crystal.
            synth=0x00000002,     ///<Internal 32KiHz synthesizer from HFCLK system clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::rc> rc{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xtal> xtal{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::synth> synth{};
        }
    }
    namespace ClockCtiv{    ///<Calibration timer interval.
        using Addr = Register::Address<0x40000538,0xffffff80,0x00000000,unsigned>;
        ///Calibration timer interval in 0.25s resolution.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> ctiv{}; 
    }
    namespace ClockXtalfreq{    ///<Crystal frequency.
        using Addr = Register::Address<0x40000550,0xffffff00,0x00000000,unsigned>;
        ///External Xtal frequency selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xtalfreq{}; 
    }
}
