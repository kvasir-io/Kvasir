#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Clock control.
    namespace NonetasksHfclkstart{    ///<Start HFCLK clock source.
        using Addr = Register::Address<0x40000000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksHfclkstop{    ///<Stop HFCLK clock source.
        using Addr = Register::Address<0x40000004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksLfclkstart{    ///<Start LFCLK clock source.
        using Addr = Register::Address<0x40000008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksLfclkstop{    ///<Stop LFCLK clock source.
        using Addr = Register::Address<0x4000000c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCal{    ///<Start calibration of LFCLK RC oscillator.
        using Addr = Register::Address<0x40000010,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCtstart{    ///<Start calibration timer.
        using Addr = Register::Address<0x40000014,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCtstop{    ///<Stop calibration timer.
        using Addr = Register::Address<0x40000018,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsHfclkstarted{    ///<HFCLK oscillator started.
        using Addr = Register::Address<0x40000100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsLfclkstarted{    ///<LFCLK oscillator started.
        using Addr = Register::Address<0x40000104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsDone{    ///<Calibration of LFCLK RC oscillator completed.
        using Addr = Register::Address<0x4000010c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCtto{    ///<Calibration timer timeout.
        using Addr = Register::Address<0x40000110,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40000304,0xffffffe4,0,unsigned>;
        ///Enable interrupt on HFCLKSTARTED event.
        enum class hfclkstartedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace hfclkstartedValC{
            constexpr MPL::Value<hfclkstartedVal,hfclkstartedVal::disabled> disabled{};
            constexpr MPL::Value<hfclkstartedVal,hfclkstartedVal::enabled> enabled{};
            constexpr MPL::Value<hfclkstartedVal,hfclkstartedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,hfclkstartedVal> hfclkstarted{}; 
        ///Enable interrupt on LFCLKSTARTED event.
        enum class lfclkstartedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace lfclkstartedValC{
            constexpr MPL::Value<lfclkstartedVal,lfclkstartedVal::disabled> disabled{};
            constexpr MPL::Value<lfclkstartedVal,lfclkstartedVal::enabled> enabled{};
            constexpr MPL::Value<lfclkstartedVal,lfclkstartedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lfclkstartedVal> lfclkstarted{}; 
        ///Enable interrupt on DONE event.
        enum class doneVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace doneValC{
            constexpr MPL::Value<doneVal,doneVal::disabled> disabled{};
            constexpr MPL::Value<doneVal,doneVal::enabled> enabled{};
            constexpr MPL::Value<doneVal,doneVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,doneVal> done{}; 
        ///Enable interrupt on CTTO event.
        enum class cttoVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace cttoValC{
            constexpr MPL::Value<cttoVal,cttoVal::disabled> disabled{};
            constexpr MPL::Value<cttoVal,cttoVal::enabled> enabled{};
            constexpr MPL::Value<cttoVal,cttoVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,cttoVal> ctto{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40000308,0xffffffe4,0,unsigned>;
        ///Disable interrupt on HFCLKSTARTED event.
        enum class hfclkstartedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace hfclkstartedValC{
            constexpr MPL::Value<hfclkstartedVal,hfclkstartedVal::disabled> disabled{};
            constexpr MPL::Value<hfclkstartedVal,hfclkstartedVal::enabled> enabled{};
            constexpr MPL::Value<hfclkstartedVal,hfclkstartedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,hfclkstartedVal> hfclkstarted{}; 
        ///Disable interrupt on LFCLKSTARTED event.
        enum class lfclkstartedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace lfclkstartedValC{
            constexpr MPL::Value<lfclkstartedVal,lfclkstartedVal::disabled> disabled{};
            constexpr MPL::Value<lfclkstartedVal,lfclkstartedVal::enabled> enabled{};
            constexpr MPL::Value<lfclkstartedVal,lfclkstartedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lfclkstartedVal> lfclkstarted{}; 
        ///Disable interrupt on DONE event.
        enum class doneVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace doneValC{
            constexpr MPL::Value<doneVal,doneVal::disabled> disabled{};
            constexpr MPL::Value<doneVal,doneVal::enabled> enabled{};
            constexpr MPL::Value<doneVal,doneVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,doneVal> done{}; 
        ///Disable interrupt on CTTO event.
        enum class cttoVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace cttoValC{
            constexpr MPL::Value<cttoVal,cttoVal::disabled> disabled{};
            constexpr MPL::Value<cttoVal,cttoVal::enabled> enabled{};
            constexpr MPL::Value<cttoVal,cttoVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,cttoVal> ctto{}; 
    }
    namespace Nonehfclkrun{    ///<Task HFCLKSTART trigger status.
        using Addr = Register::Address<0x40000408,0xfffffffe,0,unsigned>;
        ///Task HFCLKSTART trigger status.
        enum class statusVal {
            nottriggered=0x00000000,     ///<Task HFCLKSTART has not been triggered.
            triggered=0x00000001,     ///<Task HFCLKSTART has been triggered.
        };
        namespace statusValC{
            constexpr MPL::Value<statusVal,statusVal::nottriggered> nottriggered{};
            constexpr MPL::Value<statusVal,statusVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,statusVal> status{}; 
    }
    namespace Nonehfclkstat{    ///<High frequency clock status.
        using Addr = Register::Address<0x4000040c,0xfffefffe,0,unsigned>;
        ///Active clock source for the HF clock.
        enum class srcVal {
            rc=0x00000000,     ///<Internal 16MHz RC oscillator running and generating the HFCLK clock.
            xtal=0x00000001,     ///<External 16MHz/32MHz crystal oscillator running and generating the HFCLK clock.
        };
        namespace srcValC{
            constexpr MPL::Value<srcVal,srcVal::rc> rc{};
            constexpr MPL::Value<srcVal,srcVal::xtal> xtal{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,srcVal> src{}; 
        ///State for the HFCLK.
        enum class stateVal {
            notrunning=0x00000000,     ///<HFCLK clock not running.
            running=0x00000001,     ///<HFCLK clock running.
        };
        namespace stateValC{
            constexpr MPL::Value<stateVal,stateVal::notrunning> notrunning{};
            constexpr MPL::Value<stateVal,stateVal::running> running{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,stateVal> state{}; 
    }
    namespace Nonelfclkrun{    ///<Task LFCLKSTART triggered status.
        using Addr = Register::Address<0x40000414,0xfffffffe,0,unsigned>;
        ///Task LFCLKSTART triggered status.
        enum class statusVal {
            nottriggered=0x00000000,     ///<Task LFCLKSTART has not been triggered.
            triggered=0x00000001,     ///<Task LFCLKSTART has been triggered.
        };
        namespace statusValC{
            constexpr MPL::Value<statusVal,statusVal::nottriggered> nottriggered{};
            constexpr MPL::Value<statusVal,statusVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,statusVal> status{}; 
    }
    namespace Nonelfclkstat{    ///<Low frequency clock status.
        using Addr = Register::Address<0x40000418,0xfffefffc,0,unsigned>;
        ///Active clock source for the LF clock.
        enum class srcVal {
            rc=0x00000000,     ///<Internal 32KiHz RC oscillator running and generating the LFCLK clock.
            xtal=0x00000001,     ///<External 32KiHz crystal oscillator running and generating the LFCLK clock.
            synth=0x00000002,     ///<Internal 32KiHz synthesizer from the HFCLK running and generating the LFCLK clock.
        };
        namespace srcValC{
            constexpr MPL::Value<srcVal,srcVal::rc> rc{};
            constexpr MPL::Value<srcVal,srcVal::xtal> xtal{};
            constexpr MPL::Value<srcVal,srcVal::synth> synth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,srcVal> src{}; 
        ///State for the LF clock.
        enum class stateVal {
            notrunning=0x00000000,     ///<LFCLK clock not running.
            running=0x00000001,     ///<LFCLK clock running.
        };
        namespace stateValC{
            constexpr MPL::Value<stateVal,stateVal::notrunning> notrunning{};
            constexpr MPL::Value<stateVal,stateVal::running> running{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,stateVal> state{}; 
    }
    namespace Nonelfclksrccopy{    ///<Clock source for the LFCLK clock, set when task LKCLKSTART is triggered.
        using Addr = Register::Address<0x4000041c,0xfffffffc,0,unsigned>;
        ///Clock source for the LFCLK clock, set when task LKCLKSTART is triggered.
        enum class srcVal {
            rc=0x00000000,     ///<Internal 32KiHz RC oscillator.
            xtal=0x00000001,     ///<External 32KiHz crystal.
            synth=0x00000002,     ///<Internal 32KiHz synthesizer from HFCLK system clock.
        };
        namespace srcValC{
            constexpr MPL::Value<srcVal,srcVal::rc> rc{};
            constexpr MPL::Value<srcVal,srcVal::xtal> xtal{};
            constexpr MPL::Value<srcVal,srcVal::synth> synth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,srcVal> src{}; 
    }
    namespace Nonelfclksrc{    ///<Clock source for the LFCLK clock.
        using Addr = Register::Address<0x40000518,0xfffffffc,0,unsigned>;
        ///Clock source.
        enum class srcVal {
            rc=0x00000000,     ///<Internal 32KiHz RC oscillator.
            xtal=0x00000001,     ///<External 32KiHz crystal.
            synth=0x00000002,     ///<Internal 32KiHz synthesizer from HFCLK system clock.
        };
        namespace srcValC{
            constexpr MPL::Value<srcVal,srcVal::rc> rc{};
            constexpr MPL::Value<srcVal,srcVal::xtal> xtal{};
            constexpr MPL::Value<srcVal,srcVal::synth> synth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,srcVal> src{}; 
    }
    namespace Nonectiv{    ///<Calibration timer interval.
        using Addr = Register::Address<0x40000538,0xffffff80,0,unsigned>;
        ///Calibration timer interval in 0.25s resolution.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> ctiv{}; 
    }
    namespace Nonextalfreq{    ///<Crystal frequency.
        using Addr = Register::Address<0x40000550,0xffffff00,0,unsigned>;
        ///External Xtal frequency selection.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xtalfreq{}; 
    }
}
