#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// Windowed Watchdog Timer (WWDT) 
    namespace Nonemod{    ///<Watchdog mode register. This register determines the basic mode and status of the Watchdog Timer.
        using Addr = Register::Address<0x40000000,0xffffffe0,0,unsigned>;
        ///Watchdog enable bit. This bit is Set Only. See Table 652.
        enum class wdenVal {
            stop=0x00000000,     ///<The watchdog timer is stopped.
            run=0x00000001,     ///<The watchdog timer is running.
        };
        namespace wdenValC{
            constexpr MPL::Value<wdenVal,wdenVal::stop> stop{};
            constexpr MPL::Value<wdenVal,wdenVal::run> run{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wdenVal> wden{}; 
        ///Watchdog reset enable bit. This bit is Set Only. See Table 652.
        enum class wdresetVal {
            noreset=0x00000000,     ///<A watchdog timeout will not cause a chip reset.
            reset=0x00000001,     ///<A watchdog timeout will cause a chip reset.
        };
        namespace wdresetValC{
            constexpr MPL::Value<wdresetVal,wdresetVal::noreset> noreset{};
            constexpr MPL::Value<wdresetVal,wdresetVal::reset> reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wdresetVal> wdreset{}; 
        ///Watchdog time-out flag. Set when the watchdog timer times out, by a feed error, or by events associated with WDPROTECT, cleared by software. Causes a chip reset if WDRESET = 1. See Section  WDTOF.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdtof{}; 
        ///Watchdog interrupt flag. Set when the timer reaches the value in WDWARNINT. Cleared by software. See Section  WDINT.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wdint{}; 
        ///Watchdog update mode. This bit is Set Only. See Section  WDPROTECT.
        enum class wdprotectVal {
            change=0x00000000,     ///<The watchdog reload value (WDTC) can be changed at any time.
            changeWCnt=0x00000001,     ///<The watchdog reload value (WDTC) can be changed only after the counter is below the value of WDWARNINT and WDWINDOW. Note: this mode is intended for use only when WDRESET =1.
        };
        namespace wdprotectValC{
            constexpr MPL::Value<wdprotectVal,wdprotectVal::change> change{};
            constexpr MPL::Value<wdprotectVal,wdprotectVal::changeWCnt> changeWCnt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,wdprotectVal> wdprotect{}; 
    }
    namespace Nonetc{    ///<Watchdog timer constant register. The value in this register determines the time-out value.
        using Addr = Register::Address<0x40000004,0xff000000,0,unsigned>;
        ///Watchdog time-out interval.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Nonefeed{    ///<Watchdog feed sequence register. Writing 0xAA followed by 0x55 to this register reloads the Watchdog timer with the value contained in WDTC.
        using Addr = Register::Address<0x40000008,0xffffff00,0,unsigned>;
        ///Feed value should be 0xAA followed by 0x55.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> feed{}; 
    }
    namespace Nonetv{    ///<Watchdog timer value register. This register reads out the current value of the Watchdog timer.
        using Addr = Register::Address<0x4000000c,0xff000000,0,unsigned>;
        ///Counter timer value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Nonewarnint{    ///<Watchdog Warning Interrupt compare value.
        using Addr = Register::Address<0x40000014,0xfffffc00,0,unsigned>;
        ///Watchdog warning interrupt compare value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> warnint{}; 
    }
    namespace Nonewindow{    ///<Watchdog Window compare value.
        using Addr = Register::Address<0x40000018,0xff000000,0,unsigned>;
        ///Watchdog window value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> window{}; 
    }
}
