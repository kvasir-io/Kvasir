#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Windowed Watchdog Timer (WWDT)
    namespace WwdtMod{    ///<Watchdog mode register. This register contains the basic mode and status of the Watchdog Timer.
        using Addr = Register::Address<0x40000000,0x00000000,0x00000000,unsigned>;
        ///Watchdog enable bit. Once this bit has been written with a 1, it cannot be rewritten with a 0.
        enum class WdenVal {
            stopped=0x00000000,     ///<The watchdog timer is stopped.
            running=0x00000001,     ///<The watchdog timer is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WdenVal> wden{}; 
        namespace WdenValC{
            constexpr Register::FieldValue<decltype(wden)::Type,WdenVal::stopped> stopped{};
            constexpr Register::FieldValue<decltype(wden)::Type,WdenVal::running> running{};
        }
        ///Watchdog reset enable bit. Once this bit has been written with a 1 it cannot be rewritten with a 0.
        enum class WdresetVal {
            noreset=0x00000000,     ///<A watchdog timeout will not cause a chip reset.
            reset=0x00000001,     ///<A watchdog timeout will cause a chip reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WdresetVal> wdreset{}; 
        namespace WdresetValC{
            constexpr Register::FieldValue<decltype(wdreset)::Type,WdresetVal::noreset> noreset{};
            constexpr Register::FieldValue<decltype(wdreset)::Type,WdresetVal::reset> reset{};
        }
        ///Watchdog time-out flag. Set when the watchdog timer times out, by a feed error, or by events associated with WDPROTECT. Cleared by software. Causes a chip reset if WDRESET = 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdtof{}; 
        ///Warning interrupt flag. Set when the timer reaches the value in WDWARNINT. Cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wdint{}; 
        ///Watchdog update mode. This bit can be set once by software and is only cleared by a reset.
        enum class WdprotectVal {
            theWatchdogTimeOu=0x00000000,     ///<The watchdog time-out value (TC) can be changed at any time.
            theWatchdogTimeOu=0x00000001,     ///<The watchdog time-out value (TC) can be changed only after the counter is below the value of WDWARNINT and WDWINDOW.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,WdprotectVal> wdprotect{}; 
        namespace WdprotectValC{
            constexpr Register::FieldValue<decltype(wdprotect)::Type,WdprotectVal::theWatchdogTimeOu> theWatchdogTimeOu{};
            constexpr Register::FieldValue<decltype(wdprotect)::Type,WdprotectVal::theWatchdogTimeOu> theWatchdogTimeOu{};
        }
        ///A 1 in this bit prevents disabling or powering down the watchdog oscillator. This bit can be set once by software and is only cleared by any reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lock{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace WwdtTc{    ///<Watchdog timer constant register. This 24-bit register determines the time-out value.
        using Addr = Register::Address<0x40000004,0x00000000,0x00000000,unsigned>;
        ///Watchdog time-out value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace WwdtFeed{    ///<Watchdog feed sequence register. Writing 0xAA followed by 0x55 to this register reloads the Watchdog timer with the value contained in WDTC.
        using Addr = Register::Address<0x40000008,0x00000000,0x00000000,unsigned>;
        ///Feed value should be 0xAA followed by 0x55.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> feed{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace WwdtTv{    ///<Watchdog timer value register. This 24-bit register reads out the current value of the Watchdog timer.
        using Addr = Register::Address<0x4000000c,0x00000000,0x00000000,unsigned>;
        ///Counter timer value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace WwdtWarnint{    ///<Watchdog Warning Interrupt compare value.
        using Addr = Register::Address<0x40000014,0x00000000,0x00000000,unsigned>;
        ///Watchdog warning interrupt compare value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> warnint{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace WwdtWindow{    ///<Watchdog Window compare value.
        using Addr = Register::Address<0x40000018,0x00000000,0x00000000,unsigned>;
        ///Watchdog window value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> window{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
