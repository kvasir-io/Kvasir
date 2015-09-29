#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<High and Low Timer Configuration
        using Addr = Register::Address<0x40014000,0x0004080c,0,unsigned>;
        ///Low Clock Source. 
        enum class lclkVal {
            apb=0x00000000,     ///<Select the APB clock as the timer source.
            extoscn=0x00000001,     ///<Select the external oscillator clock as the timer source. The external oscillator must run slower than one-half the APB clock.
            timerClkdiv=0x00000002,     ///<Select the dedicated 8-bit prescaler as the timer source.
            ctFallingEdge=0x00000003,     ///<Select falling edges of the CT signal as the timer clock source.
        };
        namespace lclkValC{
            constexpr MPL::Value<lclkVal,lclkVal::apb> apb{};
            constexpr MPL::Value<lclkVal,lclkVal::extoscn> extoscn{};
            constexpr MPL::Value<lclkVal,lclkVal::timerClkdiv> timerClkdiv{};
            constexpr MPL::Value<lclkVal,lclkVal::ctFallingEdge> ctFallingEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,lclkVal> lclk{}; 
        ///Low Run Master Enable. 
        enum class lmstrenVal {
            disabled=0x00000000,     ///<MSTRUN does not need to be set for the low timer to run.
            enabled=0x00000001,     ///<MSTRUN must be set for the low timer to run.
        };
        namespace lmstrenValC{
            constexpr MPL::Value<lmstrenVal,lmstrenVal::disabled> disabled{};
            constexpr MPL::Value<lmstrenVal,lmstrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lmstrenVal> lmstren{}; 
        ///Split Mode Enable. 
        enum class splitenVal {
            disabled=0x00000000,     ///<The timer operates as a single 32-bit timer controlled by the high timer fields.
            enabled=0x00000001,     ///<The timer operates as two independent 16-bit timers.
        };
        namespace splitenValC{
            constexpr MPL::Value<splitenVal,splitenVal::disabled> disabled{};
            constexpr MPL::Value<splitenVal,splitenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,splitenVal> spliten{}; 
        ///Low Timer Extra Interrupt Enable. 
        enum class lexienVal {
            disabled=0x00000000,     ///<The state of the LEXI flag does not affect the low timer interrupt.
            enabled=0x00000001,     ///<A low timer interrupt request is generated if LEXI is set to 1.
        };
        namespace lexienValC{
            constexpr MPL::Value<lexienVal,lexienVal::disabled> disabled{};
            constexpr MPL::Value<lexienVal,lexienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lexienVal> lexien{}; 
        ///Low Timer Overflow Interrupt Enable. 
        enum class lovfienVal {
            disabled=0x00000000,     ///<The state of LOVFI does not affect the low timer interrupt.
            enabled=0x00000001,     ///<A low timer interrupt request is generated if LOVFI = 1.
        };
        namespace lovfienValC{
            constexpr MPL::Value<lovfienVal,lovfienVal::disabled> disabled{};
            constexpr MPL::Value<lovfienVal,lovfienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lovfienVal> lovfien{}; 
        ///Low Timer Mode. 
        enum class lmdVal {
            autoReload=0x00000000,     ///<The low timer is in Auto-Reload Mode.
            upDown=0x00000001,     ///<The low timer is in Up/Down Count Mode.
            fallCapture=0x00000002,     ///<The low timer is in Falling Edge Capture Mode.
            riseCapture=0x00000003,     ///<The low timer is in Rising Edge Capture Mode.
            lowCapture=0x00000004,     ///<The low timer is in Low Time Capture Mode.
            highCapture=0x00000005,     ///<The low timer is in High Time Capture Mode.
            dcCapture=0x00000006,     ///<The low timer is in Duty Cycle Capture Mode.
            oneshot=0x00000007,     ///<The low timer is in Oneshot Mode.
        };
        namespace lmdValC{
            constexpr MPL::Value<lmdVal,lmdVal::autoReload> autoReload{};
            constexpr MPL::Value<lmdVal,lmdVal::upDown> upDown{};
            constexpr MPL::Value<lmdVal,lmdVal::fallCapture> fallCapture{};
            constexpr MPL::Value<lmdVal,lmdVal::riseCapture> riseCapture{};
            constexpr MPL::Value<lmdVal,lmdVal::lowCapture> lowCapture{};
            constexpr MPL::Value<lmdVal,lmdVal::highCapture> highCapture{};
            constexpr MPL::Value<lmdVal,lmdVal::dcCapture> dcCapture{};
            constexpr MPL::Value<lmdVal,lmdVal::oneshot> oneshot{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,lmdVal> lmd{}; 
        ///Low Multi Purpose State Indicator. 
        enum class lstateVal {
            notSet=0x00000000,     ///<None
            set=0x00000001,     ///<None
        };
        namespace lstateValC{
            constexpr MPL::Value<lstateVal,lstateVal::notSet> notSet{};
            constexpr MPL::Value<lstateVal,lstateVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,lstateVal> lstate{}; 
        ///Run Control Low. 
        enum class lrunVal {
            stop=0x00000000,     ///<Stop the low timer if split mode is enabled (SPLITEN = 1).
            start=0x00000001,     ///<The low timer runs if split mode is enabled (SPLITEN = 1) and (LMSTREN = 0 or MSTRUN = 1 in Timer 0).
        };
        namespace lrunValC{
            constexpr MPL::Value<lrunVal,lrunVal::stop> stop{};
            constexpr MPL::Value<lrunVal,lrunVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,lrunVal> lrun{}; 
        ///Low Timer Extra Interrupt Flag. 
        enum class lexiVal {
            notSet=0x00000000,     ///<Read: A low timer extra interrupt is not pending. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: Indicates the low 16-bit timer has been captured, reloaded with all 1's when counting down, or the timer matched the capture register in PWM mode. This interrupt flag can be set by hardware in all modes except Auto-Reload and Toggle. This flag is not set by hardware when split mode is disabled (SPLITEN = 0). Write: Force a low timer extra interrupt.
        };
        namespace lexiValC{
            constexpr MPL::Value<lexiVal,lexiVal::notSet> notSet{};
            constexpr MPL::Value<lexiVal,lexiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,lexiVal> lexi{}; 
        ///Low Timer Overflow Interrupt. 
        enum class lovfiVal {
            notSet=0x00000000,     ///<Read: A low timer overflow interrupt is not pending. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: The low 16-bit timer has wrapped or reloaded after reaching all 1's. This bit is set by the module regardless of the state of SPLITEN and can be set in all modes. Write: Force a low timer overflow interrupt.
        };
        namespace lovfiValC{
            constexpr MPL::Value<lovfiVal,lovfiVal::notSet> notSet{};
            constexpr MPL::Value<lovfiVal,lovfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lovfiVal> lovfi{}; 
        ///High Clock Source. 
        enum class hclkVal {
            apb=0x00000000,     ///<Select the APB clock as the timer source.
            extoscn=0x00000001,     ///<Select the external oscillator clock as the timer source. The external oscillator must run slower than one-half the APB clock.
            timerClkdiv=0x00000002,     ///<Select the dedicated 8-bit prescaler as the timer source.
            ctFallingEdge=0x00000003,     ///<Select falling edges of the CT signal as the timer clock source.
        };
        namespace hclkValC{
            constexpr MPL::Value<hclkVal,hclkVal::apb> apb{};
            constexpr MPL::Value<hclkVal,hclkVal::extoscn> extoscn{};
            constexpr MPL::Value<hclkVal,hclkVal::timerClkdiv> timerClkdiv{};
            constexpr MPL::Value<hclkVal,hclkVal::ctFallingEdge> ctFallingEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,hclkVal> hclk{}; 
        ///Master Run Control. 
        enum class mstrunVal {
            stop=0x00000000,     ///<Disable the master run control for all timers.
            start=0x00000001,     ///<Enable the master run control for all timers.
        };
        namespace mstrunValC{
            constexpr MPL::Value<mstrunVal,mstrunVal::stop> stop{};
            constexpr MPL::Value<mstrunVal,mstrunVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,mstrunVal> mstrun{}; 
        ///High Master Enable. 
        enum class hmstrenVal {
            disabled=0x00000000,     ///<MSTRUN does not need to be set for the timer to run.
            enabled=0x00000001,     ///<MSTRUN must be set for the timer to run.
        };
        namespace hmstrenValC{
            constexpr MPL::Value<hmstrenVal,hmstrenVal::disabled> disabled{};
            constexpr MPL::Value<hmstrenVal,hmstrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,hmstrenVal> hmstren{}; 
        ///Timer Debug Mode. 
        enum class dbgmdVal {
            run=0x00000000,     ///<The timer will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the Timer to halt.
        };
        namespace dbgmdValC{
            constexpr MPL::Value<dbgmdVal,dbgmdVal::run> run{};
            constexpr MPL::Value<dbgmdVal,dbgmdVal::halt> halt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,dbgmdVal> dbgmd{}; 
        ///High Timer Extra Interrupt Enable. 
        enum class hexienVal {
            disabled=0x00000000,     ///<The state of the HEXI flag does not affect the high timer interrupt.
            enabled=0x00000001,     ///<A high timer interrupt request is generated if HEXI is set to 1.
        };
        namespace hexienValC{
            constexpr MPL::Value<hexienVal,hexienVal::disabled> disabled{};
            constexpr MPL::Value<hexienVal,hexienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,hexienVal> hexien{}; 
        ///High Timer Overflow Interrupt Enable. 
        enum class hovfienVal {
            disabled=0x00000000,     ///<The state of HOVFI does not affect the high timer interrupt.
            enabled=0x00000001,     ///<A high timer interrupt request is generated if HOVFI is set to 1.
        };
        namespace hovfienValC{
            constexpr MPL::Value<hovfienVal,hovfienVal::disabled> disabled{};
            constexpr MPL::Value<hovfienVal,hovfienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,hovfienVal> hovfien{}; 
        ///High Timer Mode. 
        enum class hmdVal {
            autoReload=0x00000000,     ///<The high 16-bit timer or entire 32-bit timer is in Auto-Reload Mode.
            upDown=0x00000001,     ///<The high 16-bit timer or entire 32-bit timer is in Up/Down Count Mode.
            fallCapture=0x00000002,     ///<The high 16-bit timer or entire 32-bit timer is in Falling Edge Capture Mode.
            riseCapture=0x00000003,     ///<The high 16-bit timer or entire 32-bit timer is in Rising Edge Capture Mode.
            lowCapture=0x00000004,     ///<The high 16-bit timer or entire 32-bit timer is in Low Time Capture Mode.
            highCapture=0x00000005,     ///<The high 16-bit timer or entire 32-bit timer is in High Time Capture Mode.
            dcCapture=0x00000006,     ///<The high 16-bit timer or entire 32-bit timer is in Duty Cycle Capture Mode.
            oneshot=0x00000007,     ///<The high 16-bit timer or entire 32-bit timer is in Oneshot Mode.
            toggle=0x00000008,     ///<The high 16-bit timer or entire 32-bit timer is in Square Wave Output Mode.
            pwm=0x00000009,     ///<The high 16-bit timer or entire 32-bit timer is in PWM Mode.
        };
        namespace hmdValC{
            constexpr MPL::Value<hmdVal,hmdVal::autoReload> autoReload{};
            constexpr MPL::Value<hmdVal,hmdVal::upDown> upDown{};
            constexpr MPL::Value<hmdVal,hmdVal::fallCapture> fallCapture{};
            constexpr MPL::Value<hmdVal,hmdVal::riseCapture> riseCapture{};
            constexpr MPL::Value<hmdVal,hmdVal::lowCapture> lowCapture{};
            constexpr MPL::Value<hmdVal,hmdVal::highCapture> highCapture{};
            constexpr MPL::Value<hmdVal,hmdVal::dcCapture> dcCapture{};
            constexpr MPL::Value<hmdVal,hmdVal::oneshot> oneshot{};
            constexpr MPL::Value<hmdVal,hmdVal::toggle> toggle{};
            constexpr MPL::Value<hmdVal,hmdVal::pwm> pwm{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,hmdVal> hmd{}; 
        ///High Multi Purpose State Indicator. 
        enum class hstateVal {
            notSet=0x00000000,     ///<None
            set=0x00000001,     ///<None
        };
        namespace hstateValC{
            constexpr MPL::Value<hstateVal,hstateVal::notSet> notSet{};
            constexpr MPL::Value<hstateVal,hstateVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,hstateVal> hstate{}; 
        ///High Run Control. 
        enum class hrunVal {
            stop=0x00000000,     ///<Stop the high timer or entire 32-bit timer.
            start=0x00000001,     ///<The high timer runs if HMSTREN = 0 or MSTRUN (in Timer 0) = 1. The full 32-bit timer runs if split mode is disabled and (HMSTREN = 0 or MSTRUN = 1).
        };
        namespace hrunValC{
            constexpr MPL::Value<hrunVal,hrunVal::stop> stop{};
            constexpr MPL::Value<hrunVal,hrunVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,hrunVal> hrun{}; 
        ///High Timer Extra Interrupt Flag. 
        enum class hexiVal {
            notSet=0x00000000,     ///<Read: A high timer extra interrupt is not pending. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: Indicates the high 16-bit timer (or 32-bit timer if SPLITEN = 0) has been captured, reloaded with all 1's when counting down, or the timer matched the capture register in PWM mode. This interrupt flag can be set by the timer module in all modes except Auto-Reload and Toggle. Write: Force a high timer extra interrupt.
        };
        namespace hexiValC{
            constexpr MPL::Value<hexiVal,hexiVal::notSet> notSet{};
            constexpr MPL::Value<hexiVal,hexiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,hexiVal> hexi{}; 
        ///High Timer Overflow Interrupt Flag. 
        enum class hovfiVal {
            notSet=0x00000000,     ///<Read: A high timer overflow interrupt is not pending. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: If split mode is enabled (SPLITEN = 1), this value indicates the high 16-bit timer has wrapped or reloaded after reaching all 1's. If split mode is disabled (SPLITEN = 0), this value indicates the 32-bit timer has wrapped or reloaded after reaching all 1's. The timer module can set this bit in all modes. Write: Force a high timer overflow interrupt.
        };
        namespace hovfiValC{
            constexpr MPL::Value<hovfiVal,hovfiVal::notSet> notSet{};
            constexpr MPL::Value<hovfiVal,hovfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,hovfiVal> hovfi{}; 
    }
    namespace Noneclkdiv{    ///<Module Clock Divider Control
        using Addr = Register::Address<0x40014010,0xff00ff00,0,unsigned>;
        ///Clock Divider Reload Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdivrl{}; 
        ///Clock Divider Counter. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clkdivct{}; 
    }
    namespace Nonecount{    ///<Timer Value
        using Addr = Register::Address<0x40014020,0x00000000,0,unsigned>;
        ///Low Timer Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lcount{}; 
        ///High Timer Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> hcount{}; 
    }
    namespace Nonecapture{    ///<Timer Capture/Reload Value
        using Addr = Register::Address<0x40014030,0x00000000,0,unsigned>;
        ///Low Timer Capture/Reload. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lccr{}; 
        ///High Timer Capture/Reload. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> hccr{}; 
    }
}
