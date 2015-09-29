#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Windowed Watchdog Timer
    namespace Nonemod{    ///<Watchdog mode register. This register contains the basic mode and
						status of the Watchdog Timer.
        using Addr = Register::Address<0x40038000,0xffffffc0,0,unsigned>;
        ///Watchdog enable bit. Once this bit is set to one and a
								watchdog feed is performed, the watchdog timer will run
								permanently.
        enum class wdenVal {
            stop=0x00000000,     ///<Stop. The watchdog timer is stopped.
            run=0x00000001,     ///<Run. The watchdog timer is running.
        };
        namespace wdenValC{
            constexpr MPL::Value<wdenVal,wdenVal::stop> stop{};
            constexpr MPL::Value<wdenVal,wdenVal::run> run{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wdenVal> wden{}; 
        ///Watchdog reset enable bit. Once this bit has been written
								with a 1 it cannot be re-written with a 0.
        enum class wdresetVal {
            interrupt=0x00000000,     ///<Interrupt. A watchdog time-out will not cause a
										chip reset.
            reset=0x00000001,     ///<Reset. A watchdog time-out will cause a chip
										reset.
        };
        namespace wdresetValC{
            constexpr MPL::Value<wdresetVal,wdresetVal::interrupt> interrupt{};
            constexpr MPL::Value<wdresetVal,wdresetVal::reset> reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wdresetVal> wdreset{}; 
        ///Watchdog time-out flag. Set when the watchdog timer times
								out, by a feed error, or by events associated with WDPROTECT.
								Cleared by software. Causes a chip reset if WDRESET =
								1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdtof{}; 
        ///Warning interrupt flag. Set when the timer reaches the
								value in WDWARNINT. Cleared by software.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wdint{}; 
        ///Watchdog update mode. This bit can be set once by software
								and is only cleared by a reset.
        enum class wdprotectVal {
            flexible=0x00000000,     ///<Flexible. The watchdog time-out value (TC) can be
										changed at any time.
            threshold=0x00000001,     ///<Threshold. The watchdog time-out value (TC) can be
										changed only after the counter is below the value of
										WDWARNINT and WDWINDOW.
        };
        namespace wdprotectValC{
            constexpr MPL::Value<wdprotectVal,wdprotectVal::flexible> flexible{};
            constexpr MPL::Value<wdprotectVal,wdprotectVal::threshold> threshold{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,wdprotectVal> wdprotect{}; 
        ///Once this bit is set to one and a watchdog feed is
								performed, disabling or powering down the watchdog oscillator is
								prevented by hardware. This bit can be set once by software and is
								only cleared by any reset.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace Nonetc{    ///<Watchdog timer constant register. This 24-bit register determines
						the time-out value.
        using Addr = Register::Address<0x40038004,0xff000000,0,unsigned>;
        ///Watchdog time-out value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Nonefeed{    ///<Watchdog feed sequence register. Writing 0xAA followed by 0x55 to
						this register reloads the Watchdog timer with the value contained in
						WDTC.
        using Addr = Register::Address<0x40038008,0xffffff00,0,unsigned>;
        ///Feed value should be 0xAA followed by 0x55.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> feed{}; 
    }
    namespace Nonetv{    ///<Watchdog timer value register. This 24-bit register reads out the
						current value of the Watchdog timer.
        using Addr = Register::Address<0x4003800c,0xff000000,0,unsigned>;
        ///Counter timer value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Nonewarnint{    ///<Watchdog Warning Interrupt compare value.
        using Addr = Register::Address<0x40038014,0xfffffc00,0,unsigned>;
        ///Watchdog warning interrupt compare value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> warnint{}; 
    }
    namespace Nonewindow{    ///<Watchdog Window compare value.
        using Addr = Register::Address<0x40038018,0xff000000,0,unsigned>;
        ///Watchdog window value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> window{}; 
    }
}
