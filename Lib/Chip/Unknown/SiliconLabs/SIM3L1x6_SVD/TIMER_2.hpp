#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<High and Low Timer Configuration
        using Addr = Register::Address<0x40016000,0x0004080c,0,unsigned>;
        ///Low Clock Source. 
        enum class LclkVal {
            apb=0x00000000,     ///<Select the APB clock as the timer source.
            extoscn=0x00000001,     ///<Select the external oscillator clock as the timer source. The external oscillator must run slower than one-half the APB clock.
            timerClkdiv=0x00000002,     ///<Select the dedicated 8-bit prescaler as the timer source.
            ctFallingEdge=0x00000003,     ///<Select falling edges of the CT signal as the timer clock source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,LclkVal> lclk{}; 
        namespace LclkValC{
            constexpr Register::FieldValue<decltype(lclk)::Type,LclkVal::apb> apb{};
            constexpr Register::FieldValue<decltype(lclk)::Type,LclkVal::extoscn> extoscn{};
            constexpr Register::FieldValue<decltype(lclk)::Type,LclkVal::timerClkdiv> timerClkdiv{};
            constexpr Register::FieldValue<decltype(lclk)::Type,LclkVal::ctFallingEdge> ctFallingEdge{};
        }
        }
        ///Low Run Master Enable. 
        enum class LmstrenVal {
            disabled=0x00000000,     ///<MSTRUN does not need to be set for the low timer to run.
            enabled=0x00000001,     ///<MSTRUN must be set for the low timer to run.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LmstrenVal> lmstren{}; 
        namespace LmstrenValC{
            constexpr Register::FieldValue<decltype(lmstren)::Type,LmstrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lmstren)::Type,LmstrenVal::enabled> enabled{};
        }
        }
        ///Split Mode Enable. 
        enum class SplitenVal {
            disabled=0x00000000,     ///<The timer operates as a single 32-bit timer controlled by the high timer fields.
            enabled=0x00000001,     ///<The timer operates as two independent 16-bit timers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SplitenVal> spliten{}; 
        namespace SplitenValC{
            constexpr Register::FieldValue<decltype(spliten)::Type,SplitenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spliten)::Type,SplitenVal::enabled> enabled{};
        }
        }
        ///Low Timer Extra Interrupt Enable. 
        enum class LexienVal {
            disabled=0x00000000,     ///<The state of the LEXI flag does not affect the low timer interrupt.
            enabled=0x00000001,     ///<A low timer interrupt request is generated if LEXI is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,LexienVal> lexien{}; 
        namespace LexienValC{
            constexpr Register::FieldValue<decltype(lexien)::Type,LexienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lexien)::Type,LexienVal::enabled> enabled{};
        }
        }
        ///Low Timer Overflow Interrupt Enable. 
        enum class LovfienVal {
            disabled=0x00000000,     ///<The state of LOVFI does not affect the low timer interrupt.
            enabled=0x00000001,     ///<A low timer interrupt request is generated if LOVFI = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LovfienVal> lovfien{}; 
        namespace LovfienValC{
            constexpr Register::FieldValue<decltype(lovfien)::Type,LovfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lovfien)::Type,LovfienVal::enabled> enabled{};
        }
        }
        ///Low Timer Mode. 
        enum class LmdVal {
            autoReload=0x00000000,     ///<The low timer is in Auto-Reload Mode.
            upDown=0x00000001,     ///<The low timer is in Up/Down Count Mode.
            fallCapture=0x00000002,     ///<The low timer is in Falling Edge Capture Mode.
            riseCapture=0x00000003,     ///<The low timer is in Rising Edge Capture Mode.
            lowCapture=0x00000004,     ///<The low timer is in Low Time Capture Mode.
            highCapture=0x00000005,     ///<The low timer is in High Time Capture Mode.
            dcCapture=0x00000006,     ///<The low timer is in Duty Cycle Capture Mode.
            oneshot=0x00000007,     ///<The low timer is in Oneshot Mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,LmdVal> lmd{}; 
        namespace LmdValC{
            constexpr Register::FieldValue<decltype(lmd)::Type,LmdVal::autoReload> autoReload{};
            constexpr Register::FieldValue<decltype(lmd)::Type,LmdVal::upDown> upDown{};
            constexpr Register::FieldValue<decltype(lmd)::Type,LmdVal::fallCapture> fallCapture{};
            constexpr Register::FieldValue<decltype(lmd)::Type,LmdVal::riseCapture> riseCapture{};
            constexpr Register::FieldValue<decltype(lmd)::Type,LmdVal::lowCapture> lowCapture{};
            constexpr Register::FieldValue<decltype(lmd)::Type,LmdVal::highCapture> highCapture{};
            constexpr Register::FieldValue<decltype(lmd)::Type,LmdVal::dcCapture> dcCapture{};
            constexpr Register::FieldValue<decltype(lmd)::Type,LmdVal::oneshot> oneshot{};
        }
        }
        ///Low Multi Purpose State Indicator. 
        enum class LstateVal {
            notSet=0x00000000,     ///<None
            set=0x00000001,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,LstateVal> lstate{}; 
        namespace LstateValC{
            constexpr Register::FieldValue<decltype(lstate)::Type,LstateVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(lstate)::Type,LstateVal::set> set{};
        }
        }
        ///Run Control Low. 
        enum class LrunVal {
            stop=0x00000000,     ///<Stop the low timer if split mode is enabled (SPLITEN = 1).
            start=0x00000001,     ///<The low timer runs if split mode is enabled (SPLITEN = 1) and (LMSTREN = 0 or MSTRUN = 1 in Timer 0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,LrunVal> lrun{}; 
        namespace LrunValC{
            constexpr Register::FieldValue<decltype(lrun)::Type,LrunVal::stop> stop{};
            constexpr Register::FieldValue<decltype(lrun)::Type,LrunVal::start> start{};
        }
        }
        ///Low Timer Extra Interrupt Flag. 
        enum class LexiVal {
            notSet=0x00000000,     ///<Read: A low timer extra interrupt is not pending. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: Indicates the low 16-bit timer has been captured, reloaded with all 1's when counting down, or the timer matched the capture register in PWM mode. This interrupt flag can be set by hardware in all modes except Auto-Reload and Toggle. This flag is not set by hardware when split mode is disabled (SPLITEN = 0). Write: Force a low timer extra interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,LexiVal> lexi{}; 
        namespace LexiValC{
            constexpr Register::FieldValue<decltype(lexi)::Type,LexiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(lexi)::Type,LexiVal::set> set{};
        }
        }
        ///Low Timer Overflow Interrupt. 
        enum class LovfiVal {
            notSet=0x00000000,     ///<Read: A low timer overflow interrupt is not pending. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: The low 16-bit timer has wrapped or reloaded after reaching all 1's. This bit is set by the module regardless of the state of SPLITEN and can be set in all modes. Write: Force a low timer overflow interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LovfiVal> lovfi{}; 
        namespace LovfiValC{
            constexpr Register::FieldValue<decltype(lovfi)::Type,LovfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(lovfi)::Type,LovfiVal::set> set{};
        }
        }
        ///High Clock Source. 
        enum class HclkVal {
            apb=0x00000000,     ///<Select the APB clock as the timer source.
            extoscn=0x00000001,     ///<Select the external oscillator clock as the timer source. The external oscillator must run slower than one-half the APB clock.
            timerClkdiv=0x00000002,     ///<Select the dedicated 8-bit prescaler as the timer source.
            ctFallingEdge=0x00000003,     ///<Select falling edges of the CT signal as the timer clock source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,HclkVal> hclk{}; 
        namespace HclkValC{
            constexpr Register::FieldValue<decltype(hclk)::Type,HclkVal::apb> apb{};
            constexpr Register::FieldValue<decltype(hclk)::Type,HclkVal::extoscn> extoscn{};
            constexpr Register::FieldValue<decltype(hclk)::Type,HclkVal::timerClkdiv> timerClkdiv{};
            constexpr Register::FieldValue<decltype(hclk)::Type,HclkVal::ctFallingEdge> ctFallingEdge{};
        }
        }
        ///Master Run Control. 
        enum class MstrunVal {
            stop=0x00000000,     ///<Disable the master run control for all timers.
            start=0x00000001,     ///<Enable the master run control for all timers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,MstrunVal> mstrun{}; 
        namespace MstrunValC{
            constexpr Register::FieldValue<decltype(mstrun)::Type,MstrunVal::stop> stop{};
            constexpr Register::FieldValue<decltype(mstrun)::Type,MstrunVal::start> start{};
        }
        }
        ///High Master Enable. 
        enum class HmstrenVal {
            disabled=0x00000000,     ///<MSTRUN does not need to be set for the timer to run.
            enabled=0x00000001,     ///<MSTRUN must be set for the timer to run.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,HmstrenVal> hmstren{}; 
        namespace HmstrenValC{
            constexpr Register::FieldValue<decltype(hmstren)::Type,HmstrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hmstren)::Type,HmstrenVal::enabled> enabled{};
        }
        }
        ///Timer Debug Mode. 
        enum class DbgmdVal {
            run=0x00000000,     ///<The timer will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the Timer to halt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,DbgmdVal> dbgmd{}; 
        namespace DbgmdValC{
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::run> run{};
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::halt> halt{};
        }
        }
        ///High Timer Extra Interrupt Enable. 
        enum class HexienVal {
            disabled=0x00000000,     ///<The state of the HEXI flag does not affect the high timer interrupt.
            enabled=0x00000001,     ///<A high timer interrupt request is generated if HEXI is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,HexienVal> hexien{}; 
        namespace HexienValC{
            constexpr Register::FieldValue<decltype(hexien)::Type,HexienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hexien)::Type,HexienVal::enabled> enabled{};
        }
        }
        ///High Timer Overflow Interrupt Enable. 
        enum class HovfienVal {
            disabled=0x00000000,     ///<The state of HOVFI does not affect the high timer interrupt.
            enabled=0x00000001,     ///<A high timer interrupt request is generated if HOVFI is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,HovfienVal> hovfien{}; 
        namespace HovfienValC{
            constexpr Register::FieldValue<decltype(hovfien)::Type,HovfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hovfien)::Type,HovfienVal::enabled> enabled{};
        }
        }
        ///High Timer Mode. 
        enum class HmdVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,HmdVal> hmd{}; 
        namespace HmdValC{
            constexpr Register::FieldValue<decltype(hmd)::Type,HmdVal::autoReload> autoReload{};
            constexpr Register::FieldValue<decltype(hmd)::Type,HmdVal::upDown> upDown{};
            constexpr Register::FieldValue<decltype(hmd)::Type,HmdVal::fallCapture> fallCapture{};
            constexpr Register::FieldValue<decltype(hmd)::Type,HmdVal::riseCapture> riseCapture{};
            constexpr Register::FieldValue<decltype(hmd)::Type,HmdVal::lowCapture> lowCapture{};
            constexpr Register::FieldValue<decltype(hmd)::Type,HmdVal::highCapture> highCapture{};
            constexpr Register::FieldValue<decltype(hmd)::Type,HmdVal::dcCapture> dcCapture{};
            constexpr Register::FieldValue<decltype(hmd)::Type,HmdVal::oneshot> oneshot{};
            constexpr Register::FieldValue<decltype(hmd)::Type,HmdVal::toggle> toggle{};
            constexpr Register::FieldValue<decltype(hmd)::Type,HmdVal::pwm> pwm{};
        }
        }
        ///High Multi Purpose State Indicator. 
        enum class HstateVal {
            notSet=0x00000000,     ///<None
            set=0x00000001,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,HstateVal> hstate{}; 
        namespace HstateValC{
            constexpr Register::FieldValue<decltype(hstate)::Type,HstateVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(hstate)::Type,HstateVal::set> set{};
        }
        }
        ///High Run Control. 
        enum class HrunVal {
            stop=0x00000000,     ///<Stop the high timer or entire 32-bit timer.
            start=0x00000001,     ///<The high timer runs if HMSTREN = 0 or MSTRUN (in Timer 0) = 1. The full 32-bit timer runs if split mode is disabled and (HMSTREN = 0 or MSTRUN = 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,HrunVal> hrun{}; 
        namespace HrunValC{
            constexpr Register::FieldValue<decltype(hrun)::Type,HrunVal::stop> stop{};
            constexpr Register::FieldValue<decltype(hrun)::Type,HrunVal::start> start{};
        }
        }
        ///High Timer Extra Interrupt Flag. 
        enum class HexiVal {
            notSet=0x00000000,     ///<Read: A high timer extra interrupt is not pending. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: Indicates the high 16-bit timer (or 32-bit timer if SPLITEN = 0) has been captured, reloaded with all 1's when counting down, or the timer matched the capture register in PWM mode. This interrupt flag can be set by the timer module in all modes except Auto-Reload and Toggle. Write: Force a high timer extra interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,HexiVal> hexi{}; 
        namespace HexiValC{
            constexpr Register::FieldValue<decltype(hexi)::Type,HexiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(hexi)::Type,HexiVal::set> set{};
        }
        }
        ///High Timer Overflow Interrupt Flag. 
        enum class HovfiVal {
            notSet=0x00000000,     ///<Read: A high timer overflow interrupt is not pending. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: If split mode is enabled (SPLITEN = 1), this value indicates the high 16-bit timer has wrapped or reloaded after reaching all 1's. If split mode is disabled (SPLITEN = 0), this value indicates the 32-bit timer has wrapped or reloaded after reaching all 1's. The timer module can set this bit in all modes. Write: Force a high timer overflow interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,HovfiVal> hovfi{}; 
        namespace HovfiValC{
            constexpr Register::FieldValue<decltype(hovfi)::Type,HovfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(hovfi)::Type,HovfiVal::set> set{};
        }
        }
    }
    namespace Noneclkdiv{    ///<Module Clock Divider Control
        using Addr = Register::Address<0x40016010,0xff00ff00,0,unsigned>;
        ///Clock Divider Reload Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdivrl{}; 
        ///Clock Divider Counter. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clkdivct{}; 
    }
    namespace Nonecount{    ///<Timer Value
        using Addr = Register::Address<0x40016020,0x00000000,0,unsigned>;
        ///Low Timer Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lcount{}; 
        ///High Timer Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> hcount{}; 
    }
    namespace Nonecapture{    ///<Timer Capture/Reload Value
        using Addr = Register::Address<0x40016030,0x00000000,0,unsigned>;
        ///Low Timer Capture/Reload. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lccr{}; 
        ///High Timer Capture/Reload. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> hccr{}; 
    }
}
