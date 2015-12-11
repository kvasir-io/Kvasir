#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Windowed Watchdog Timer (WWDT) 
    namespace Nonemod{    ///<Watchdog mode register. This register determines the basic mode and status of the Watchdog Timer.
        using Addr = Register::Address<0x40000000,0xffffffe0,0,unsigned>;
        ///Watchdog enable bit. This bit is Set Only. See Table 652.
        enum class WdenVal {
            stop=0x00000000,     ///<The watchdog timer is stopped.
            run=0x00000001,     ///<The watchdog timer is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WdenVal> wden{}; 
        namespace WdenValC{
            constexpr Register::FieldValue<decltype(wden)::Type,WdenVal::stop> stop{};
            constexpr Register::FieldValue<decltype(wden)::Type,WdenVal::run> run{};
        }
        ///Watchdog reset enable bit. This bit is Set Only. See Table 652.
        enum class WdresetVal {
            noreset=0x00000000,     ///<A watchdog timeout will not cause a chip reset.
            reset=0x00000001,     ///<A watchdog timeout will cause a chip reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WdresetVal> wdreset{}; 
        namespace WdresetValC{
            constexpr Register::FieldValue<decltype(wdreset)::Type,WdresetVal::noreset> noreset{};
            constexpr Register::FieldValue<decltype(wdreset)::Type,WdresetVal::reset> reset{};
        }
        ///Watchdog time-out flag. Set when the watchdog timer times out, by a feed error, or by events associated with WDPROTECT, cleared by software. Causes a chip reset if WDRESET = 1. See Section  WDTOF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdtof{}; 
        ///Watchdog interrupt flag. Set when the timer reaches the value in WDWARNINT. Cleared by software. See Section  WDINT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wdint{}; 
        ///Watchdog update mode. This bit is Set Only. See Section  WDPROTECT.
        enum class WdprotectVal {
            change=0x00000000,     ///<The watchdog reload value (WDTC) can be changed at any time.
            changeWCnt=0x00000001,     ///<The watchdog reload value (WDTC) can be changed only after the counter is below the value of WDWARNINT and WDWINDOW. Note: this mode is intended for use only when WDRESET =1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,WdprotectVal> wdprotect{}; 
        namespace WdprotectValC{
            constexpr Register::FieldValue<decltype(wdprotect)::Type,WdprotectVal::change> change{};
            constexpr Register::FieldValue<decltype(wdprotect)::Type,WdprotectVal::changeWCnt> changeWCnt{};
        }
    }
    namespace Nonetc{    ///<Watchdog timer constant register. The value in this register determines the time-out value.
        using Addr = Register::Address<0x40000004,0xff000000,0,unsigned>;
        ///Watchdog time-out interval.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Nonefeed{    ///<Watchdog feed sequence register. Writing 0xAA followed by 0x55 to this register reloads the Watchdog timer with the value contained in WDTC.
        using Addr = Register::Address<0x40000008,0xffffff00,0,unsigned>;
        ///Feed value should be 0xAA followed by 0x55.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> feed{}; 
    }
    namespace Nonetv{    ///<Watchdog timer value register. This register reads out the current value of the Watchdog timer.
        using Addr = Register::Address<0x4000000c,0xff000000,0,unsigned>;
        ///Counter timer value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Nonewarnint{    ///<Watchdog Warning Interrupt compare value.
        using Addr = Register::Address<0x40000014,0xfffffc00,0,unsigned>;
        ///Watchdog warning interrupt compare value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> warnint{}; 
    }
    namespace Nonewindow{    ///<Watchdog Window compare value.
        using Addr = Register::Address<0x40000018,0xff000000,0,unsigned>;
        ///Watchdog window value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> window{}; 
    }
}
