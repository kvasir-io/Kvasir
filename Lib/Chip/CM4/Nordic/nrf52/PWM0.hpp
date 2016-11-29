#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Pulse Width Modulation Unit 0
    namespace Pwm0TasksStop{    ///<Stops PWM pulse generation on all channels at the end of current PWM period, and stops sequence playback
        using Addr = Register::Address<0x4001c004,0xffffffff,0x00000000,unsigned>;
    }
    namespace Pwm0TasksNextstep{    ///<Steps by one value in the current sequence on all enabled channels if DECODER.MODE=NextStep. Does not cause PWM generation to start it was not running.
        using Addr = Register::Address<0x4001c010,0xffffffff,0x00000000,unsigned>;
    }
    namespace Pwm0EventsStopped{    ///<Response to STOP task, emitted when PWM pulses are no longer generated
        using Addr = Register::Address<0x4001c104,0xffffffff,0x00000000,unsigned>;
    }
    namespace Pwm0EventsPwmperiodend{    ///<Emitted at the end of each PWM period
        using Addr = Register::Address<0x4001c118,0xffffffff,0x00000000,unsigned>;
    }
    namespace Pwm0EventsLoopsdone{    ///<Concatenated sequences have been played the amount of times defined in LOOP.CNT
        using Addr = Register::Address<0x4001c11c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Pwm0Shorts{    ///<Shortcut register
        using Addr = Register::Address<0x4001c200,0xffffffe0,0x00000000,unsigned>;
        ///Shortcut between EVENTS_SEQEND[0] event and TASKS_STOP task
        enum class Seqend0stopVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Seqend0stopVal> seqend0Stop{}; 
        namespace Seqend0stopValC{
            constexpr Register::FieldValue<decltype(seqend0Stop)::Type,Seqend0stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqend0Stop)::Type,Seqend0stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_SEQEND[1] event and TASKS_STOP task
        enum class Seqend1stopVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Seqend1stopVal> seqend1Stop{}; 
        namespace Seqend1stopValC{
            constexpr Register::FieldValue<decltype(seqend1Stop)::Type,Seqend1stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqend1Stop)::Type,Seqend1stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_LOOPSDONE event and TASKS_SEQSTART[0] task
        enum class Loopsdoneseqstart0Val : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Loopsdoneseqstart0Val> loopsdoneSeqstart0{}; 
        namespace Loopsdoneseqstart0ValC{
            constexpr Register::FieldValue<decltype(loopsdoneSeqstart0)::Type,Loopsdoneseqstart0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(loopsdoneSeqstart0)::Type,Loopsdoneseqstart0Val::enabled> enabled{};
        }
        ///Shortcut between EVENTS_LOOPSDONE event and TASKS_SEQSTART[1] task
        enum class Loopsdoneseqstart1Val : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Loopsdoneseqstart1Val> loopsdoneSeqstart1{}; 
        namespace Loopsdoneseqstart1ValC{
            constexpr Register::FieldValue<decltype(loopsdoneSeqstart1)::Type,Loopsdoneseqstart1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(loopsdoneSeqstart1)::Type,Loopsdoneseqstart1Val::enabled> enabled{};
        }
        ///Shortcut between EVENTS_LOOPSDONE event and TASKS_STOP task
        enum class LoopsdonestopVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LoopsdonestopVal> loopsdoneStop{}; 
        namespace LoopsdonestopValC{
            constexpr Register::FieldValue<decltype(loopsdoneStop)::Type,LoopsdonestopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(loopsdoneStop)::Type,LoopsdonestopVal::enabled> enabled{};
        }
    }
    namespace Pwm0Inten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x4001c300,0xffffff01,0x00000000,unsigned>;
        ///Enable or disable interrupt on EVENTS_STOPPED event
        enum class StoppedVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_SEQSTARTED[0] event
        enum class Seqstarted0Val : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Seqstarted0Val> seqstarted0{}; 
        namespace Seqstarted0ValC{
            constexpr Register::FieldValue<decltype(seqstarted0)::Type,Seqstarted0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqstarted0)::Type,Seqstarted0Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_SEQSTARTED[1] event
        enum class Seqstarted1Val : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Seqstarted1Val> seqstarted1{}; 
        namespace Seqstarted1ValC{
            constexpr Register::FieldValue<decltype(seqstarted1)::Type,Seqstarted1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqstarted1)::Type,Seqstarted1Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_SEQEND[0] event
        enum class Seqend0Val : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Seqend0Val> seqend0{}; 
        namespace Seqend0ValC{
            constexpr Register::FieldValue<decltype(seqend0)::Type,Seqend0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqend0)::Type,Seqend0Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_SEQEND[1] event
        enum class Seqend1Val : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Seqend1Val> seqend1{}; 
        namespace Seqend1ValC{
            constexpr Register::FieldValue<decltype(seqend1)::Type,Seqend1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqend1)::Type,Seqend1Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_PWMPERIODEND event
        enum class PwmperiodendVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PwmperiodendVal> pwmperiodend{}; 
        namespace PwmperiodendValC{
            constexpr Register::FieldValue<decltype(pwmperiodend)::Type,PwmperiodendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmperiodend)::Type,PwmperiodendVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_LOOPSDONE event
        enum class LoopsdoneVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LoopsdoneVal> loopsdone{}; 
        namespace LoopsdoneValC{
            constexpr Register::FieldValue<decltype(loopsdone)::Type,LoopsdoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(loopsdone)::Type,LoopsdoneVal::enabled> enabled{};
        }
    }
    namespace Pwm0Intenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4001c304,0xffffff01,0x00000000,unsigned>;
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
        ///Write '1' to Enable interrupt on EVENTS_SEQSTARTED[0] event
        enum class Seqstarted0Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Seqstarted0Val> seqstarted0{}; 
        namespace Seqstarted0ValC{
            constexpr Register::FieldValue<decltype(seqstarted0)::Type,Seqstarted0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqstarted0)::Type,Seqstarted0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(seqstarted0)::Type,Seqstarted0Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_SEQSTARTED[1] event
        enum class Seqstarted1Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Seqstarted1Val> seqstarted1{}; 
        namespace Seqstarted1ValC{
            constexpr Register::FieldValue<decltype(seqstarted1)::Type,Seqstarted1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqstarted1)::Type,Seqstarted1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(seqstarted1)::Type,Seqstarted1Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_SEQEND[0] event
        enum class Seqend0Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Seqend0Val> seqend0{}; 
        namespace Seqend0ValC{
            constexpr Register::FieldValue<decltype(seqend0)::Type,Seqend0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqend0)::Type,Seqend0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(seqend0)::Type,Seqend0Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_SEQEND[1] event
        enum class Seqend1Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Seqend1Val> seqend1{}; 
        namespace Seqend1ValC{
            constexpr Register::FieldValue<decltype(seqend1)::Type,Seqend1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqend1)::Type,Seqend1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(seqend1)::Type,Seqend1Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_PWMPERIODEND event
        enum class PwmperiodendVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PwmperiodendVal> pwmperiodend{}; 
        namespace PwmperiodendValC{
            constexpr Register::FieldValue<decltype(pwmperiodend)::Type,PwmperiodendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmperiodend)::Type,PwmperiodendVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pwmperiodend)::Type,PwmperiodendVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_LOOPSDONE event
        enum class LoopsdoneVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LoopsdoneVal> loopsdone{}; 
        namespace LoopsdoneValC{
            constexpr Register::FieldValue<decltype(loopsdone)::Type,LoopsdoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(loopsdone)::Type,LoopsdoneVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(loopsdone)::Type,LoopsdoneVal::set> set{};
        }
    }
    namespace Pwm0Intenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4001c308,0xffffff01,0x00000000,unsigned>;
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
        ///Write '1' to Clear interrupt on EVENTS_SEQSTARTED[0] event
        enum class Seqstarted0Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Seqstarted0Val> seqstarted0{}; 
        namespace Seqstarted0ValC{
            constexpr Register::FieldValue<decltype(seqstarted0)::Type,Seqstarted0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqstarted0)::Type,Seqstarted0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(seqstarted0)::Type,Seqstarted0Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_SEQSTARTED[1] event
        enum class Seqstarted1Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Seqstarted1Val> seqstarted1{}; 
        namespace Seqstarted1ValC{
            constexpr Register::FieldValue<decltype(seqstarted1)::Type,Seqstarted1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqstarted1)::Type,Seqstarted1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(seqstarted1)::Type,Seqstarted1Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_SEQEND[0] event
        enum class Seqend0Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Seqend0Val> seqend0{}; 
        namespace Seqend0ValC{
            constexpr Register::FieldValue<decltype(seqend0)::Type,Seqend0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqend0)::Type,Seqend0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(seqend0)::Type,Seqend0Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_SEQEND[1] event
        enum class Seqend1Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Seqend1Val> seqend1{}; 
        namespace Seqend1ValC{
            constexpr Register::FieldValue<decltype(seqend1)::Type,Seqend1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqend1)::Type,Seqend1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(seqend1)::Type,Seqend1Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_PWMPERIODEND event
        enum class PwmperiodendVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PwmperiodendVal> pwmperiodend{}; 
        namespace PwmperiodendValC{
            constexpr Register::FieldValue<decltype(pwmperiodend)::Type,PwmperiodendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmperiodend)::Type,PwmperiodendVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pwmperiodend)::Type,PwmperiodendVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_LOOPSDONE event
        enum class LoopsdoneVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LoopsdoneVal> loopsdone{}; 
        namespace LoopsdoneValC{
            constexpr Register::FieldValue<decltype(loopsdone)::Type,LoopsdoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(loopsdone)::Type,LoopsdoneVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(loopsdone)::Type,LoopsdoneVal::clear> clear{};
        }
    }
    namespace Pwm0Enable{    ///<PWM module enable register
        using Addr = Register::Address<0x4001c500,0xfffffffe,0x00000000,unsigned>;
        ///Enable or disable PWM module
        enum class EnableVal : unsigned {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabled> enabled{};
        }
    }
    namespace Pwm0Mode{    ///<Selects operating mode of the wave counter
        using Addr = Register::Address<0x4001c504,0xfffffffe,0x00000000,unsigned>;
        ///Selects up or up and down as wave counter mode
        enum class UpdownVal : unsigned {
            up=0x00000000,     ///<Up counter - edge aligned PWM duty-cycle
            upanddown=0x00000001,     ///<Up and down counter - center aligned PWM duty cycle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UpdownVal> updown{}; 
        namespace UpdownValC{
            constexpr Register::FieldValue<decltype(updown)::Type,UpdownVal::up> up{};
            constexpr Register::FieldValue<decltype(updown)::Type,UpdownVal::upanddown> upanddown{};
        }
    }
    namespace Pwm0Countertop{    ///<Value up to which the pulse generator counter counts
        using Addr = Register::Address<0x4001c508,0xffff8000,0x00000000,unsigned>;
        ///Value up to which the pulse generator counter counts. This register is ignored when DECODER.MODE=WaveForm and only values from RAM will be used.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> countertop{}; 
    }
    namespace Pwm0Prescaler{    ///<Configuration for PWM_CLK
        using Addr = Register::Address<0x4001c50c,0xfffffff8,0x00000000,unsigned>;
        ///Pre-scaler of PWM_CLK
        enum class PrescalerVal : unsigned {
            div1=0x00000000,     ///<Divide by   1 (16MHz)
            div2=0x00000001,     ///<Divide by   2 ( 8MHz)
            div4=0x00000002,     ///<Divide by   4 ( 4MHz)
            div8=0x00000003,     ///<Divide by   8 ( 2MHz)
            div16=0x00000004,     ///<Divide by  16 ( 1MHz)
            div32=0x00000005,     ///<Divide by  32 ( 500kHz)
            div64=0x00000006,     ///<Divide by  64 ( 250kHz)
            div128=0x00000007,     ///<Divide by 128 ( 125kHz)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1> div1{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div2> div2{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div4> div4{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div8> div8{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div16> div16{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div32> div32{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div64> div64{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div128> div128{};
        }
    }
    namespace Pwm0Decoder{    ///<Configuration of the decoder
        using Addr = Register::Address<0x4001c510,0xfffffef8,0x00000000,unsigned>;
        ///How a sequence is read from RAM and spread to the compare register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> load{}; 
        ///Selects source for advancing the active sequence
        enum class ModeVal : unsigned {
            refreshcount=0x00000000,     ///<SEQ[n].REFRESH is used to determine loading internal compare registers
            nextstep=0x00000001,     ///<NEXTSTEP task causes a new value to be loaded to internal compare registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::refreshcount> refreshcount{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::nextstep> nextstep{};
        }
    }
    namespace Pwm0Loop{    ///<Amount of playback of a loop
        using Addr = Register::Address<0x4001c514,0xffff0000,0x00000000,unsigned>;
        ///Amount of playback of pattern cycles
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Pwm0TasksSeqstart0{    ///<Description collection[0]:  Loads the first PWM value on all enabled channels from sequence 0, and starts playing that sequence at the rate defined in SEQ[0]REFRESH and/or DECODER.MODE. Causes PWM generation to start it was not running.
        using Addr = Register::Address<0x4001c008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Pwm0TasksSeqstart1{    ///<Description collection[0]:  Loads the first PWM value on all enabled channels from sequence 0, and starts playing that sequence at the rate defined in SEQ[0]REFRESH and/or DECODER.MODE. Causes PWM generation to start it was not running.
        using Addr = Register::Address<0x4001c00c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Pwm0EventsSeqstarted0{    ///<Description collection[0]:  First PWM period started on sequence 0
        using Addr = Register::Address<0x4001c108,0xffffffff,0x00000000,unsigned>;
    }
    namespace Pwm0EventsSeqstarted1{    ///<Description collection[0]:  First PWM period started on sequence 0
        using Addr = Register::Address<0x4001c10c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Pwm0EventsSeqend0{    ///<Description collection[0]:  Emitted at end of every sequence 0, when last value from RAM has been applied to wave counter
        using Addr = Register::Address<0x4001c110,0xffffffff,0x00000000,unsigned>;
    }
    namespace Pwm0EventsSeqend1{    ///<Description collection[0]:  Emitted at end of every sequence 0, when last value from RAM has been applied to wave counter
        using Addr = Register::Address<0x4001c114,0xffffffff,0x00000000,unsigned>;
    }
}
