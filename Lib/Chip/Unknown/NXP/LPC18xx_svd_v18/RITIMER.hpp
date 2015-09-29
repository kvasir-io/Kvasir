#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Repetitive Interrupt Timer (RIT) Modification date=1/14/2011 Major revision=0 Minor revision=7 
    namespace Nonecompval{    ///<Compare register
        using Addr = Register::Address<0x400c0000,0x00000000,0,unsigned>;
        ///Compare register. Holds the compare value which is compared to the counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ricomp{}; 
    }
    namespace Nonemask{    ///<Mask register. This register holds the 32-bit mask value. A 1 written to any bit will force a compare on the corresponding bit of the counter and compare register.
        using Addr = Register::Address<0x400c0004,0x00000000,0,unsigned>;
        ///Mask register. This register holds the 32-bit mask value. A one written to any bit overrides the result of the comparison for the corresponding bit of the counter and compare register (causes the comparison of the register bits to be always true).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rimask{}; 
    }
    namespace Nonectrl{    ///<Control register.
        using Addr = Register::Address<0x400c0008,0xfffffff0,0,unsigned>;
        ///Interrupt flag
        enum class ritintVal {
            thisBitIsSetTo1=0x00000001,     ///<This bit is set to 1 by hardware whenever the counter value equals the masked compare value specified by the contents of RICOMPVAL and RIMASK registers. Writing a 1 to this bit will clear it to 0. Writing a 0 has no effect.
            theCounterValueDo=0x00000000,     ///<The counter value does not equal the masked compare value.
        };
        namespace ritintValC{
            constexpr MPL::Value<ritintVal,ritintVal::thisBitIsSetTo1> thisBitIsSetTo1{};
            constexpr MPL::Value<ritintVal,ritintVal::theCounterValueDo> theCounterValueDo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ritintVal> ritint{}; 
        ///Timer enable clear
        enum class ritenclrVal {
            theTimerWillBeCl=0x00000001,     ///<The timer will be cleared to 0 whenever the counter value equals the masked compare value specified by the contents of RICOMPVAL and RIMASK registers. This will occur on the same clock that sets the interrupt flag.
            theTimerWillNotB=0x00000000,     ///<The timer will not be cleared to 0.
        };
        namespace ritenclrValC{
            constexpr MPL::Value<ritenclrVal,ritenclrVal::theTimerWillBeCl> theTimerWillBeCl{};
            constexpr MPL::Value<ritenclrVal,ritenclrVal::theTimerWillNotB> theTimerWillNotB{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ritenclrVal> ritenclr{}; 
        ///Timer enable for debug
        enum class ritenbrVal {
            theTimerIsHalted=0x00000001,     ///<The timer is halted when the processor is halted for debugging.
            debugHasNoEffect=0x00000000,     ///<Debug has no effect on the timer operation.
        };
        namespace ritenbrValC{
            constexpr MPL::Value<ritenbrVal,ritenbrVal::theTimerIsHalted> theTimerIsHalted{};
            constexpr MPL::Value<ritenbrVal,ritenbrVal::debugHasNoEffect> debugHasNoEffect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ritenbrVal> ritenbr{}; 
        ///Timer enable.
        enum class ritenVal {
            timerEnabledThis=0x00000001,     ///<Timer enabled. This can be overruled by a debug halt if enabled in bit 2.
            timerDisabled=0x00000000,     ///<Timer disabled.
        };
        namespace ritenValC{
            constexpr MPL::Value<ritenVal,ritenVal::timerEnabledThis> timerEnabledThis{};
            constexpr MPL::Value<ritenVal,ritenVal::timerDisabled> timerDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ritenVal> riten{}; 
    }
    namespace Nonecounter{    ///<32-bit counter
        using Addr = Register::Address<0x400c000c,0x00000000,0,unsigned>;
        ///32-bit up counter. Counts continuously unless RITEN bit in RICTRL register is cleared or debug mode is entered (if enabled by the RITNEBR bit in RICTRL). Can be loaded to any value in software.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ricounter{}; 
    }
}
