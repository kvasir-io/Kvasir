#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Windowed Watchdog timer (WWDT) Modification date=1/14/2011 Major revision=0 Minor revision=7 
    namespace Nonemod{    ///<Watchdog mode register. This register contains the basic mode and status of the Watchdog Timer.
        using Addr = Register::Address<0x40080000,0xffffffe0,0,unsigned>;
        ///Watchdog enable bit. This bit is Set Only.
        enum class wdenVal {
            wwdtstopped=0x00000000,     ///<The watchdog timer is stopped.
            wwdtrun=0x00000001,     ///<The watchdog timer is running.
        };
        namespace wdenValC{
            constexpr MPL::Value<wdenVal,wdenVal::wwdtstopped> wwdtstopped{};
            constexpr MPL::Value<wdenVal,wdenVal::wwdtrun> wwdtrun{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wdenVal> wden{}; 
        ///Watchdog reset enable bit. This bit is Set Only.
        enum class wdresetVal {
            wwdtint=0x00000000,     ///<A watchdog time-out will not cause a chip reset.
            wwdtreset=0x00000001,     ///<A watchdog time-out will cause a chip reset.
        };
        namespace wdresetValC{
            constexpr MPL::Value<wdresetVal,wdresetVal::wwdtint> wwdtint{};
            constexpr MPL::Value<wdresetVal,wdresetVal::wwdtreset> wwdtreset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wdresetVal> wdreset{}; 
        ///Watchdog time-out flag. Set when the watchdog timer times out, by a feed error, or by events associated with WDPROTECT, cleared by software. Causes a chip reset if WDRESET = 1. This flag is cleared by software writing a 0 to this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdtof{}; 
        ///Watchdog interrupt flag. Set when the timer reaches the value in the WARNINT register. Cleared by software by writing a 1 to this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wdint{}; 
        ///Watchdog update mode. This bit is Set Only.
        enum class wdprotectVal {
            noLock=0x00000000,     ///<The watchdog time-out value (WDTC) can be changed at any time.
            lock=0x00000001,     ///<The watchdog time-out value (WDTC) can be changed only after the counter is below the value of WDWARNINT and WDWINDOW.
        };
        namespace wdprotectValC{
            constexpr MPL::Value<wdprotectVal,wdprotectVal::noLock> noLock{};
            constexpr MPL::Value<wdprotectVal,wdprotectVal::lock> lock{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,wdprotectVal> wdprotect{}; 
    }
    namespace Nonetc{    ///<Watchdog timer constant register. This register determines the time-out value.
        using Addr = Register::Address<0x40080004,0xff000000,0,unsigned>;
        ///Watchdog time-out value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> wdtc{}; 
    }
    namespace Nonefeed{    ///<Watchdog feed sequence register. Writing 0xAA followed by 0x55 to this register reloads the Watchdog timer with the value contained in WDTC.
        using Addr = Register::Address<0x40080008,0xffffff00,0,unsigned>;
        ///Feed value should be 0xAA followed by 0x55.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> feed{}; 
    }
    namespace Nonetv{    ///<Watchdog timer value register. This register reads out the current value of the Watchdog timer.
        using Addr = Register::Address<0x4008000c,0xff000000,0,unsigned>;
        ///Counter timer value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Nonewarnint{    ///<Watchdog warning interrupt register. This register contains the Watchdog warning interrupt compare value.
        using Addr = Register::Address<0x40080014,0xfffffc00,0,unsigned>;
        ///Watchdog warning interrupt compare value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> wdwarnint{}; 
    }
    namespace Nonewindow{    ///<Watchdog timer window register. This register contains the Watchdog window value.
        using Addr = Register::Address<0x40080018,0xff000000,0,unsigned>;
        ///Watchdog window value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> wdwindow{}; 
    }
}
