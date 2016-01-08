#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10398 Chapter title=LPC111x/LPC11Cxx Windowed WatchDog Timer (WDT) Modification date=9/19/2011 Major revision=6 Minor revision=not available 
    namespace WwdtWdmod{    ///<Watchdog mode register. This register contains the basic mode and status of the Watchdog Timer.
        using Addr = Register::Address<0x40004000,0xffffffe0,0x00000000,unsigned>;
        ///Watchdog enable bit. This bit is Set Only. Setting this bit to one also locks the watchdog clock source. Once the watchdog timer is enabled, the watchdog timer clock source cannot be changed. If the watchdog timer is needed in Deep-sleep mode, the watchdog clock source must be changed to the watchdog oscillator before setting this bit to one.
        enum class WdenVal {
            stopped=0x00000000,     ///<The watchdog timer is stopped.
            run=0x00000001,     ///<The watchdog timer is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WdenVal> wden{}; 
        namespace WdenValC{
            constexpr Register::FieldValue<decltype(WwdtWdmod::wden)::Type,WdenVal::stopped> stopped{};
            constexpr Register::FieldValue<decltype(WwdtWdmod::wden)::Type,WdenVal::run> run{};
        }
        ///Watchdog reset enable bit. This bit is Set Only.
        enum class WdresetVal {
            noreset=0x00000000,     ///<A watchdog timeout will not cause a chip reset.
            reset=0x00000001,     ///<A watchdog timeout will cause a chip reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WdresetVal> wdreset{}; 
        namespace WdresetValC{
            constexpr Register::FieldValue<decltype(WwdtWdmod::wdreset)::Type,WdresetVal::noreset> noreset{};
            constexpr Register::FieldValue<decltype(WwdtWdmod::wdreset)::Type,WdresetVal::reset> reset{};
        }
        ///Watchdog time-out flag. Set when the watchdog timer times out, by a feed error, or by events associated with WDPROTECT, cleared by software. Causes a chip reset if WDRESET = 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdtof{}; 
        ///Watchdog interrupt flag. Set when the timer reaches the value in WDWARNINT. Cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wdint{}; 
        ///Watchdog update mode. This bit is Set Only.
        enum class WdprotectVal {
            anytime=0x00000000,     ///<The watchdog reload value (WDTC) can be changed at any time.
            lowcounter=0x00000001,     ///<The watchdog reload value (WDTC) can be changed only after the counter is below the value of WDWARNINT and WDWINDOW. Note: this mode is intended for use only when WDRESET =1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,WdprotectVal> wdprotect{}; 
        namespace WdprotectValC{
            constexpr Register::FieldValue<decltype(WwdtWdmod::wdprotect)::Type,WdprotectVal::anytime> anytime{};
            constexpr Register::FieldValue<decltype(WwdtWdmod::wdprotect)::Type,WdprotectVal::lowcounter> lowcounter{};
        }
    }
    namespace WwdtWdtc{    ///<Watchdog timer constant register. This register determines the time-out value.
        using Addr = Register::Address<0x40004004,0xff000000,0x00000000,unsigned>;
        ///Watchdog time-out interval.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace WwdtWdfeed{    ///<Watchdog feed sequence register. Writing 0xAA followed by 0x55 to this register reloads the Watchdog timer with the value contained in WDTC.
        using Addr = Register::Address<0x40004008,0xffffff00,0x00000000,unsigned>;
        ///Feed value should be 0xAA followed by 0x55.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> feed{}; 
    }
    namespace WwdtWdtv{    ///<Watchdog timer value register. This register reads out the current value of the Watchdog timer.
        using Addr = Register::Address<0x4000400c,0xff000000,0x00000000,unsigned>;
        ///Counter timer value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace WwdtWdwarnint{    ///<Watchdog Warning Interrupt compare value.
        using Addr = Register::Address<0x40004014,0xfffffc00,0x00000000,unsigned>;
        ///Watchdog warning interrupt compare value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> warnint{}; 
    }
    namespace WwdtWdwindow{    ///<Watchdog Window compare value.
        using Addr = Register::Address<0x40004018,0xff000000,0x00000000,unsigned>;
        ///Watchdog window value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> window{}; 
    }
}
