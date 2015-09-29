#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pulse Width Modulation Unit 0
    namespace NonetasksStop{    ///<Stops PWM pulse generation on all channels at the end of current PWM period, and stops sequence playback
        using Addr = Register::Address<0x4001c004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSeqstart0{    ///<Description collection[0]:  Loads the first PWM value on all enabled channels from sequence 0, and starts playing that sequence at the rate defined in SEQ[0]REFRESH and/or DECODER.MODE. Causes PWM generation to start it was not running.
        using Addr = Register::Address<0x4001c008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSeqstart1{    ///<Description collection[0]:  Loads the first PWM value on all enabled channels from sequence 0, and starts playing that sequence at the rate defined in SEQ[0]REFRESH and/or DECODER.MODE. Causes PWM generation to start it was not running.
        using Addr = Register::Address<0x4001c00c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksNextstep{    ///<Steps by one value in the current sequence on all enabled channels if DECODER.MODE=NextStep. Does not cause PWM generation to start it was not running.
        using Addr = Register::Address<0x4001c010,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsStopped{    ///<Response to STOP task, emitted when PWM pulses are no longer generated
        using Addr = Register::Address<0x4001c104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsSeqstarted0{    ///<Description collection[0]:  First PWM period started on sequence 0
        using Addr = Register::Address<0x4001c108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsSeqstarted1{    ///<Description collection[0]:  First PWM period started on sequence 0
        using Addr = Register::Address<0x4001c10c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsSeqend0{    ///<Description collection[0]:  Emitted at end of every sequence 0, when last value from RAM has been applied to wave counter
        using Addr = Register::Address<0x4001c110,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsSeqend1{    ///<Description collection[0]:  Emitted at end of every sequence 0, when last value from RAM has been applied to wave counter
        using Addr = Register::Address<0x4001c114,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsPwmperiodend{    ///<Emitted at the end of each PWM period
        using Addr = Register::Address<0x4001c118,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsLoopsdone{    ///<Concatenated sequences have been played the amount of times defined in LOOP.CNT
        using Addr = Register::Address<0x4001c11c,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x4001c200,0xffffffe0,0,unsigned>;
        ///Shortcut between EVENTS_SEQEND[0] event and TASKS_STOP task
        enum class seqend0StopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace seqend0StopValC{
            constexpr MPL::Value<seqend0StopVal,seqend0StopVal::disabled> disabled{};
            constexpr MPL::Value<seqend0StopVal,seqend0StopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,seqend0StopVal> seqend0Stop{}; 
        ///Shortcut between EVENTS_SEQEND[1] event and TASKS_STOP task
        enum class seqend1StopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace seqend1StopValC{
            constexpr MPL::Value<seqend1StopVal,seqend1StopVal::disabled> disabled{};
            constexpr MPL::Value<seqend1StopVal,seqend1StopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,seqend1StopVal> seqend1Stop{}; 
        ///Shortcut between EVENTS_LOOPSDONE event and TASKS_SEQSTART[0] task
        enum class loopsdoneSeqstart0Val {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace loopsdoneSeqstart0ValC{
            constexpr MPL::Value<loopsdoneSeqstart0Val,loopsdoneSeqstart0Val::disabled> disabled{};
            constexpr MPL::Value<loopsdoneSeqstart0Val,loopsdoneSeqstart0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,loopsdoneSeqstart0Val> loopsdoneSeqstart0{}; 
        ///Shortcut between EVENTS_LOOPSDONE event and TASKS_SEQSTART[1] task
        enum class loopsdoneSeqstart1Val {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace loopsdoneSeqstart1ValC{
            constexpr MPL::Value<loopsdoneSeqstart1Val,loopsdoneSeqstart1Val::disabled> disabled{};
            constexpr MPL::Value<loopsdoneSeqstart1Val,loopsdoneSeqstart1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,loopsdoneSeqstart1Val> loopsdoneSeqstart1{}; 
        ///Shortcut between EVENTS_LOOPSDONE event and TASKS_STOP task
        enum class loopsdoneStopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace loopsdoneStopValC{
            constexpr MPL::Value<loopsdoneStopVal,loopsdoneStopVal::disabled> disabled{};
            constexpr MPL::Value<loopsdoneStopVal,loopsdoneStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,loopsdoneStopVal> loopsdoneStop{}; 
    }
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x4001c300,0xffffff01,0,unsigned>;
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
        ///Enable or disable interrupt on EVENTS_SEQSTARTED[0] event
        enum class seqstarted0Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace seqstarted0ValC{
            constexpr MPL::Value<seqstarted0Val,seqstarted0Val::disabled> disabled{};
            constexpr MPL::Value<seqstarted0Val,seqstarted0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,seqstarted0Val> seqstarted0{}; 
        ///Enable or disable interrupt on EVENTS_SEQSTARTED[1] event
        enum class seqstarted1Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace seqstarted1ValC{
            constexpr MPL::Value<seqstarted1Val,seqstarted1Val::disabled> disabled{};
            constexpr MPL::Value<seqstarted1Val,seqstarted1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,seqstarted1Val> seqstarted1{}; 
        ///Enable or disable interrupt on EVENTS_SEQEND[0] event
        enum class seqend0Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace seqend0ValC{
            constexpr MPL::Value<seqend0Val,seqend0Val::disabled> disabled{};
            constexpr MPL::Value<seqend0Val,seqend0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,seqend0Val> seqend0{}; 
        ///Enable or disable interrupt on EVENTS_SEQEND[1] event
        enum class seqend1Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace seqend1ValC{
            constexpr MPL::Value<seqend1Val,seqend1Val::disabled> disabled{};
            constexpr MPL::Value<seqend1Val,seqend1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,seqend1Val> seqend1{}; 
        ///Enable or disable interrupt on EVENTS_PWMPERIODEND event
        enum class pwmperiodendVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace pwmperiodendValC{
            constexpr MPL::Value<pwmperiodendVal,pwmperiodendVal::disabled> disabled{};
            constexpr MPL::Value<pwmperiodendVal,pwmperiodendVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pwmperiodendVal> pwmperiodend{}; 
        ///Enable or disable interrupt on EVENTS_LOOPSDONE event
        enum class loopsdoneVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace loopsdoneValC{
            constexpr MPL::Value<loopsdoneVal,loopsdoneVal::disabled> disabled{};
            constexpr MPL::Value<loopsdoneVal,loopsdoneVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,loopsdoneVal> loopsdone{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4001c304,0xffffff01,0,unsigned>;
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
        ///Write '1' to Enable interrupt on EVENTS_SEQSTARTED[0] event
        enum class seqstarted0Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace seqstarted0ValC{
            constexpr MPL::Value<seqstarted0Val,seqstarted0Val::disabled> disabled{};
            constexpr MPL::Value<seqstarted0Val,seqstarted0Val::enabled> enabled{};
            constexpr MPL::Value<seqstarted0Val,seqstarted0Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,seqstarted0Val> seqstarted0{}; 
        ///Write '1' to Enable interrupt on EVENTS_SEQSTARTED[1] event
        enum class seqstarted1Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace seqstarted1ValC{
            constexpr MPL::Value<seqstarted1Val,seqstarted1Val::disabled> disabled{};
            constexpr MPL::Value<seqstarted1Val,seqstarted1Val::enabled> enabled{};
            constexpr MPL::Value<seqstarted1Val,seqstarted1Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,seqstarted1Val> seqstarted1{}; 
        ///Write '1' to Enable interrupt on EVENTS_SEQEND[0] event
        enum class seqend0Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace seqend0ValC{
            constexpr MPL::Value<seqend0Val,seqend0Val::disabled> disabled{};
            constexpr MPL::Value<seqend0Val,seqend0Val::enabled> enabled{};
            constexpr MPL::Value<seqend0Val,seqend0Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,seqend0Val> seqend0{}; 
        ///Write '1' to Enable interrupt on EVENTS_SEQEND[1] event
        enum class seqend1Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace seqend1ValC{
            constexpr MPL::Value<seqend1Val,seqend1Val::disabled> disabled{};
            constexpr MPL::Value<seqend1Val,seqend1Val::enabled> enabled{};
            constexpr MPL::Value<seqend1Val,seqend1Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,seqend1Val> seqend1{}; 
        ///Write '1' to Enable interrupt on EVENTS_PWMPERIODEND event
        enum class pwmperiodendVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace pwmperiodendValC{
            constexpr MPL::Value<pwmperiodendVal,pwmperiodendVal::disabled> disabled{};
            constexpr MPL::Value<pwmperiodendVal,pwmperiodendVal::enabled> enabled{};
            constexpr MPL::Value<pwmperiodendVal,pwmperiodendVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pwmperiodendVal> pwmperiodend{}; 
        ///Write '1' to Enable interrupt on EVENTS_LOOPSDONE event
        enum class loopsdoneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace loopsdoneValC{
            constexpr MPL::Value<loopsdoneVal,loopsdoneVal::disabled> disabled{};
            constexpr MPL::Value<loopsdoneVal,loopsdoneVal::enabled> enabled{};
            constexpr MPL::Value<loopsdoneVal,loopsdoneVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,loopsdoneVal> loopsdone{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4001c308,0xffffff01,0,unsigned>;
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
        ///Write '1' to Clear interrupt on EVENTS_SEQSTARTED[0] event
        enum class seqstarted0Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace seqstarted0ValC{
            constexpr MPL::Value<seqstarted0Val,seqstarted0Val::disabled> disabled{};
            constexpr MPL::Value<seqstarted0Val,seqstarted0Val::enabled> enabled{};
            constexpr MPL::Value<seqstarted0Val,seqstarted0Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,seqstarted0Val> seqstarted0{}; 
        ///Write '1' to Clear interrupt on EVENTS_SEQSTARTED[1] event
        enum class seqstarted1Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace seqstarted1ValC{
            constexpr MPL::Value<seqstarted1Val,seqstarted1Val::disabled> disabled{};
            constexpr MPL::Value<seqstarted1Val,seqstarted1Val::enabled> enabled{};
            constexpr MPL::Value<seqstarted1Val,seqstarted1Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,seqstarted1Val> seqstarted1{}; 
        ///Write '1' to Clear interrupt on EVENTS_SEQEND[0] event
        enum class seqend0Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace seqend0ValC{
            constexpr MPL::Value<seqend0Val,seqend0Val::disabled> disabled{};
            constexpr MPL::Value<seqend0Val,seqend0Val::enabled> enabled{};
            constexpr MPL::Value<seqend0Val,seqend0Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,seqend0Val> seqend0{}; 
        ///Write '1' to Clear interrupt on EVENTS_SEQEND[1] event
        enum class seqend1Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace seqend1ValC{
            constexpr MPL::Value<seqend1Val,seqend1Val::disabled> disabled{};
            constexpr MPL::Value<seqend1Val,seqend1Val::enabled> enabled{};
            constexpr MPL::Value<seqend1Val,seqend1Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,seqend1Val> seqend1{}; 
        ///Write '1' to Clear interrupt on EVENTS_PWMPERIODEND event
        enum class pwmperiodendVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace pwmperiodendValC{
            constexpr MPL::Value<pwmperiodendVal,pwmperiodendVal::disabled> disabled{};
            constexpr MPL::Value<pwmperiodendVal,pwmperiodendVal::enabled> enabled{};
            constexpr MPL::Value<pwmperiodendVal,pwmperiodendVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pwmperiodendVal> pwmperiodend{}; 
        ///Write '1' to Clear interrupt on EVENTS_LOOPSDONE event
        enum class loopsdoneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace loopsdoneValC{
            constexpr MPL::Value<loopsdoneVal,loopsdoneVal::disabled> disabled{};
            constexpr MPL::Value<loopsdoneVal,loopsdoneVal::enabled> enabled{};
            constexpr MPL::Value<loopsdoneVal,loopsdoneVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,loopsdoneVal> loopsdone{}; 
    }
    namespace Noneenable{    ///<PWM module enable register
        using Addr = Register::Address<0x4001c500,0xfffffffe,0,unsigned>;
        ///Enable or disable PWM module
        enum class enableVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enable
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enableVal> enable{}; 
    }
    namespace Nonemode{    ///<Selects operating mode of the wave counter
        using Addr = Register::Address<0x4001c504,0xfffffffe,0,unsigned>;
        ///Selects up or up and down as wave counter mode
        enum class updownVal {
            up=0x00000000,     ///<Up counter - edge aligned PWM duty-cycle
            upanddown=0x00000001,     ///<Up and down counter - center aligned PWM duty cycle
        };
        namespace updownValC{
            constexpr MPL::Value<updownVal,updownVal::up> up{};
            constexpr MPL::Value<updownVal,updownVal::upanddown> upanddown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,updownVal> updown{}; 
    }
    namespace Nonecountertop{    ///<Value up to which the pulse generator counter counts
        using Addr = Register::Address<0x4001c508,0xffff8000,0,unsigned>;
        ///Value up to which the pulse generator counter counts. This register is ignored when DECODER.MODE=WaveForm and only values from RAM will be used.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> countertop{}; 
    }
    namespace Noneprescaler{    ///<Configuration for PWM_CLK
        using Addr = Register::Address<0x4001c50c,0xfffffff8,0,unsigned>;
        ///Pre-scaler of PWM_CLK
        enum class prescalerVal {
            div1=0x00000000,     ///<Divide by   1 (16MHz)
            div2=0x00000001,     ///<Divide by   2 ( 8MHz)
            div4=0x00000002,     ///<Divide by   4 ( 4MHz)
            div8=0x00000003,     ///<Divide by   8 ( 2MHz)
            div16=0x00000004,     ///<Divide by  16 ( 1MHz)
            div32=0x00000005,     ///<Divide by  32 ( 500kHz)
            div64=0x00000006,     ///<Divide by  64 ( 250kHz)
            div128=0x00000007,     ///<Divide by 128 ( 125kHz)
        };
        namespace prescalerValC{
            constexpr MPL::Value<prescalerVal,prescalerVal::div1> div1{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div2> div2{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div4> div4{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div8> div8{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div16> div16{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div32> div32{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div64> div64{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div128> div128{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,prescalerVal> prescaler{}; 
    }
    namespace Nonedecoder{    ///<Configuration of the decoder
        using Addr = Register::Address<0x4001c510,0xfffffef8,0,unsigned>;
        ///How a sequence is read from RAM and spread to the compare register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> load{}; 
        ///Selects source for advancing the active sequence
        enum class modeVal {
            refreshcount=0x00000000,     ///<SEQ[n].REFRESH is used to determine loading internal compare registers
            nextstep=0x00000001,     ///<NEXTSTEP task causes a new value to be loaded to internal compare registers
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::refreshcount> refreshcount{};
            constexpr MPL::Value<modeVal,modeVal::nextstep> nextstep{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,modeVal> mode{}; 
    }
    namespace Noneloop{    ///<Amount of playback of a loop
        using Addr = Register::Address<0x4001c514,0xffff0000,0,unsigned>;
        ///Amount of playback of pattern cycles
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
}
