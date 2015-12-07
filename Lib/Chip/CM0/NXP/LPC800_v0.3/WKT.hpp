#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Self wake-up timer (WKT)
    namespace Nonectrl{    ///<Self wake-up timer control register.
        using Addr = Register::Address<0x40008000,0xfffffff8,0,unsigned>;
        ///Select the self wake-up timer clock source.
        enum class ClkselVal {
            dividedIrcClockT=0x00000000,     ///<Divided IRC clock. This clock runs at 750 kHz and provides time-out periods of up to approximately 95 minutes in 1.33 us increments. This clock is not available in most low-power modes and must not be selected if the timer is to be used to wake up from one of these modes.
            lowPowerClockThi=0x00000001,     ///<Low power clock. This is the (nominally) 10 kHz clock and provides time-out periods of up to approximately 119 hours in 100 CTS can be from the input pin, or fs increments. The accuracy of this clock is limited to +/- 45 % over temperature and processing. This clock is available in all power modes. Prior to use, the low-power oscillator must be enabled. The oscillator must also be set to remain active in Deep power-down if needed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ClkselVal> clksel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clksel),ClkselVal::dividedIrcClockT> dividedIrcClockT{};
            constexpr Register::FieldValue<decltype(clksel),ClkselVal::lowPowerClockThi> lowPowerClockThi{};
        }
        ///Wake-up or alarm timer flag.
        enum class AlarmflagVal {
            noTimeOutTheSel=0x00000000,     ///<No time-out. The self wake-up timer has not timed out. Writing a 0 to has no effect.
            timeOutTheSelfW=0x00000001,     ///<Time-out. The self wake-up timer has timed out. This flag generates an interrupt request which can wake up the part from any low power mode not deep power-down. Writing a 1 clears this status bit and the interrupt too?
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AlarmflagVal> alarmflag{}; 
        namespace AlarmflagValC{
            constexpr Register::FieldValue<decltype(alarmflag),AlarmflagVal::noTimeOutTheSel> noTimeOutTheSel{};
            constexpr Register::FieldValue<decltype(alarmflag),AlarmflagVal::timeOutTheSelfW> timeOutTheSelfW{};
        }
        ///Clears the self wake-up timer.
        enum class ClearctrVal {
            noEffectReadingT=0x00000000,     ///<No effect. Reading this bit always returns 0.
            clearTheCounterC=0x00000001,     ///<Clear the counter. Counting is halted until a new count value is loaded.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClearctrVal> clearctr{}; 
        namespace ClearctrValC{
            constexpr Register::FieldValue<decltype(clearctr),ClearctrVal::noEffectReadingT> noEffectReadingT{};
            constexpr Register::FieldValue<decltype(clearctr),ClearctrVal::clearTheCounterC> clearTheCounterC{};
        }
    }
    namespace Nonecount{    ///<Counter register.
        using Addr = Register::Address<0x4000800c,0x00000000,0,unsigned>;
        ///A write to this register pre-loads start count value into the timer and starts the count-down sequence. A read reflects the current value of the timer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> value{}; 
        namespace ValueValC{
        }
    }
}
