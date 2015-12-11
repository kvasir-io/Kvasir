#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Real-Time Clock (RTC) Modification date=1/20/2011 Major revision=0 Minor revision=7 
    namespace Noneilr{    ///<Interrupt Location Register
        using Addr = Register::Address<0x40046000,0xfffffffc,0,unsigned>;
        ///When one, the Counter Increment Interrupt block generated an interrupt. Writing a one to this bit location clears the counter increment interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtccif{}; 
        ///When one, the alarm registers generated an interrupt. Writing a one to this bit location clears the alarm interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtcalf{}; 
    }
    namespace Noneccr{    ///<Clock Control Register
        using Addr = Register::Address<0x40046008,0xffffffec,0,unsigned>;
        ///Clock Enable.
        enum class ClkenVal {
            disabled=0x00000000,     ///<The time counters are disabled so that they may be initialized.
            enabled=0x00000001,     ///<The time counters are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ClkenVal> clken{}; 
        namespace ClkenValC{
            constexpr Register::FieldValue<decltype(clken)::Type,ClkenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(clken)::Type,ClkenVal::enabled> enabled{};
        }
        ///CTC Reset.
        enum class CtcrstVal {
            noEffect=0x00000000,     ///<No effect.
            resetvalue=0x00000001,     ///<When one, the elements in the internal oscillator divider are reset, and remain reset until CCR[1] is changed to zero. This is the divider that generates the 1 Hz clock from the 32.768 kHz crystal. The state of the divider is not visible to software.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CtcrstVal> ctcrst{}; 
        namespace CtcrstValC{
            constexpr Register::FieldValue<decltype(ctcrst)::Type,CtcrstVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(ctcrst)::Type,CtcrstVal::resetvalue> resetvalue{};
        }
        ///Calibration counter enable.
        enum class CcalenVal {
            enabled=0x00000000,     ///<The calibration counter is enabled and counting, using the 1 Hz clock. When the calibration counter is equal to the value of the CALIBRATION register, the counter resets and repeats counting up to the value of the CALIBRATION register. See Section 29.6.6.2 and  Section 29.7.1.
            disabled=0x00000001,     ///<The calibration counter is disabled and reset to zero.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CcalenVal> ccalen{}; 
        namespace CcalenValC{
            constexpr Register::FieldValue<decltype(ccalen)::Type,CcalenVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ccalen)::Type,CcalenVal::disabled> disabled{};
        }
    }
    namespace Noneciir{    ///<Counter Increment Interrupt Register
        using Addr = Register::Address<0x4004600c,0xffffff00,0,unsigned>;
        ///When 1, an increment of the Second value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> imsec{}; 
        ///When 1, an increment of the Minute value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> immin{}; 
        ///When 1, an increment of the Hour value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> imhour{}; 
        ///When 1, an increment of the Day of Month value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> imdom{}; 
        ///When 1, an increment of the Day of Week value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> imdow{}; 
        ///When 1, an increment of the Day of Year value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> imdoy{}; 
        ///When 1, an increment of the Month value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> immon{}; 
        ///When 1, an increment of the Year value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> imyear{}; 
    }
    namespace Noneamr{    ///<Alarm Mask Register
        using Addr = Register::Address<0x40046010,0xffffff00,0,unsigned>;
        ///When 1, the Second value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> amrsec{}; 
        ///When 1, the Minutes value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> amrmin{}; 
        ///When 1, the Hour value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> amrhour{}; 
        ///When 1, the Day of Month value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> amrdom{}; 
        ///When 1, the Day of Week value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> amrdow{}; 
        ///When 1, the Day of Year value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> amrdoy{}; 
        ///When 1, the Month value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> amrmon{}; 
        ///When 1, the Year value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> amryear{}; 
    }
    namespace Nonectime0{    ///<Consolidated Time Register 0
        using Addr = Register::Address<0x40046014,0xf8e0c0c0,0,unsigned>;
        ///Seconds value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> seconds{}; 
        ///Minutes value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> minutes{}; 
        ///Hours value in the range of 0 to 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> hours{}; 
        ///Day of week value in the range of 0 to 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> dow{}; 
    }
    namespace Nonectime1{    ///<Consolidated Time Register 1
        using Addr = Register::Address<0x40046018,0xf000f0e0,0,unsigned>;
        ///Day of month value in the range of 1 to 28, 29, 30, or 31 (depending on the month and whether it is a leap year).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dom{}; 
        ///Month value in the range of 1 to 12.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> month{}; 
        ///Year value in the range of 0 to 4095.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> year{}; 
    }
    namespace Nonectime2{    ///<Consolidated Time Register 2
        using Addr = Register::Address<0x4004601c,0xfffff000,0,unsigned>;
        ///Day of year value in the range of 1 to 365 (366 for leap years).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> doy{}; 
    }
    namespace Nonesec{    ///<Seconds Register
        using Addr = Register::Address<0x40046020,0xffffffc0,0,unsigned>;
        ///Seconds value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> seconds{}; 
    }
    namespace Nonemin{    ///<Minutes Register
        using Addr = Register::Address<0x40046024,0xffffffc0,0,unsigned>;
        ///Minutes value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> minutes{}; 
    }
    namespace Nonehrs{    ///<Hours Register
        using Addr = Register::Address<0x40046028,0xffffffe0,0,unsigned>;
        ///Hours value in the range of 0 to 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> hours{}; 
    }
    namespace Nonedom{    ///<Day of Month Register
        using Addr = Register::Address<0x4004602c,0xffffffe0,0,unsigned>;
        ///Day of month value in the range of 1 to 28, 29, 30, or 31 (depending on the month and whether it is a leap year).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dom{}; 
    }
    namespace Nonedow{    ///<Day of Week Register
        using Addr = Register::Address<0x40046030,0xfffffff8,0,unsigned>;
        ///Day of week value in the range of 0 to 6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dow{}; 
    }
    namespace Nonedoy{    ///<Day of Year Register
        using Addr = Register::Address<0x40046034,0xfffffe00,0,unsigned>;
        ///Day of year value in the range of 1 to 365 (366 for leap years).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> doy{}; 
    }
    namespace Nonemonth{    ///<Months Register
        using Addr = Register::Address<0x40046038,0xfffffff0,0,unsigned>;
        ///Month value in the range of 1 to 12.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> month{}; 
    }
    namespace Noneyear{    ///<Years Register
        using Addr = Register::Address<0x4004603c,0xfffff000,0,unsigned>;
        ///Year value in the range of 0 to 4095.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> year{}; 
    }
    namespace Nonecalibration{    ///<Calibration Value Register
        using Addr = Register::Address<0x40046040,0xfffc0000,0,unsigned>;
        ///If enabled, the calibration counter counts up to this value. The maximum value is 131 072 corresponding to about 36.4 hours. Calibration is disabled if CALVAL = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> calval{}; 
        ///Calibration direction
        enum class CaldirVal {
            forwardCalibration=0x00000000,     ///<Forward calibration. When CALVAL is equal to the calibration counter, the RTC timers will jump by 2 seconds.
            backwardCalibration=0x00000001,     ///<Backward calibration. When CALVAL is equal to the calibration counter, the RTC timers will stop incrementing for 1 second.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CaldirVal> caldir{}; 
        namespace CaldirValC{
            constexpr Register::FieldValue<decltype(caldir)::Type,CaldirVal::forwardCalibration> forwardCalibration{};
            constexpr Register::FieldValue<decltype(caldir)::Type,CaldirVal::backwardCalibration> backwardCalibration{};
        }
    }
    namespace Noneasec{    ///<Alarm value for Seconds
        using Addr = Register::Address<0x40046060,0xffffffc0,0,unsigned>;
        ///Seconds value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> seconds{}; 
    }
    namespace Noneamin{    ///<Alarm value for Minutes
        using Addr = Register::Address<0x40046064,0xffffffc0,0,unsigned>;
        ///Minutes value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> minutes{}; 
    }
    namespace Noneahrs{    ///<Alarm value for Hours
        using Addr = Register::Address<0x40046068,0xffffffe0,0,unsigned>;
        ///Hours value in the range of 0 to 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> hours{}; 
    }
    namespace Noneadom{    ///<Alarm value for Day of Month
        using Addr = Register::Address<0x4004606c,0xffffffe0,0,unsigned>;
        ///Day of month value in the range of 1 to 28, 29, 30, or 31 (depending on the month and whether it is a leap year).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dom{}; 
    }
    namespace Noneadow{    ///<Alarm value for Day of Week
        using Addr = Register::Address<0x40046070,0xfffffff8,0,unsigned>;
        ///Day of week value in the range of 0 to 6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dow{}; 
    }
    namespace Noneadoy{    ///<Alarm value for Day of Year
        using Addr = Register::Address<0x40046074,0xfffffe00,0,unsigned>;
        ///Day of year value in the range of 1 to 365 (366 for leap years).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> doy{}; 
    }
    namespace Noneamon{    ///<Alarm value for Months
        using Addr = Register::Address<0x40046078,0xfffffff0,0,unsigned>;
        ///Month value in the range of 1 to 12.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> month{}; 
    }
    namespace Noneayrs{    ///<Alarm value for Year
        using Addr = Register::Address<0x4004607c,0xfffff000,0,unsigned>;
        ///Year value in the range of 0 to 4095.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> year{}; 
    }
}
