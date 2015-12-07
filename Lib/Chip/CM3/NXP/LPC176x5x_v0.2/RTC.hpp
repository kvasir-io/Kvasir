#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// Real Time Clock (RTC)  
    namespace Noneilr{    ///<Interrupt Location Register
        using Addr = Register::Address<0x40024000,0xfffffffc,0,unsigned>;
        ///When one, the Counter Increment Interrupt block generated an interrupt. Writing a one to this bit location clears the counter increment interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtccif{}; 
        namespace RtccifValC{
        }
        ///When one, the alarm registers generated an interrupt. Writing a one to this bit location clears the alarm interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtcalf{}; 
        namespace RtcalfValC{
        }
    }
    namespace Noneccr{    ///<Clock Control Register
        using Addr = Register::Address<0x40024008,0xffffffec,0,unsigned>;
        ///Clock Enable.
        enum class ClkenVal {
            theTimeCountersAr=0x00000001,     ///<The time counters are enabled.
            theTimeCountersAr=0x00000000,     ///<The time counters are disabled so that they may be initialized.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ClkenVal> clken{}; 
        namespace ClkenValC{
            constexpr Register::FieldValue<decltype(clken),ClkenVal::theTimeCountersAr> theTimeCountersAr{};
            constexpr Register::FieldValue<decltype(clken),ClkenVal::theTimeCountersAr> theTimeCountersAr{};
        }
        ///CTC Reset.
        enum class CtcrstVal {
            reset=0x00000001,     ///<When one, the elements in the internal oscillator divider are reset, and remain reset until CCR[1] is changed to zero. This is the divider that generates the 1 Hz clock from the 32.768 kHz crystal. The state of the divider is not visible to software.
            noEffect=0x00000000,     ///<No effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CtcrstVal> ctcrst{}; 
        namespace CtcrstValC{
            constexpr Register::FieldValue<decltype(ctcrst),CtcrstVal::reset> reset{};
            constexpr Register::FieldValue<decltype(ctcrst),CtcrstVal::noEffect> noEffect{};
        }
        ///Calibration counter enable.
        enum class CcalenVal {
            theCalibrationCoun=0x00000001,     ///<The calibration counter is disabled and reset to zero.
            theCalibrationCoun=0x00000000,     ///<The calibration counter is enabled and counting, using the 1 Hz clock. When the calibration counter is equal to the value of the CALIBRATION register, the counter resets and repeats counting up to the value of the CALIBRATION register. See Section 30.6.4.2 and  Section 30.6.5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CcalenVal> ccalen{}; 
        namespace CcalenValC{
            constexpr Register::FieldValue<decltype(ccalen),CcalenVal::theCalibrationCoun> theCalibrationCoun{};
            constexpr Register::FieldValue<decltype(ccalen),CcalenVal::theCalibrationCoun> theCalibrationCoun{};
        }
    }
    namespace Noneciir{    ///<Counter Increment Interrupt Register
        using Addr = Register::Address<0x4002400c,0xffffff00,0,unsigned>;
        ///When 1, an increment of the Second value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> imsec{}; 
        namespace ImsecValC{
        }
        ///When 1, an increment of the Minute value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> immin{}; 
        namespace ImminValC{
        }
        ///When 1, an increment of the Hour value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> imhour{}; 
        namespace ImhourValC{
        }
        ///When 1, an increment of the Day of Month value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> imdom{}; 
        namespace ImdomValC{
        }
        ///When 1, an increment of the Day of Week value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> imdow{}; 
        namespace ImdowValC{
        }
        ///When 1, an increment of the Day of Year value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> imdoy{}; 
        namespace ImdoyValC{
        }
        ///When 1, an increment of the Month value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> immon{}; 
        namespace ImmonValC{
        }
        ///When 1, an increment of the Year value generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> imyear{}; 
        namespace ImyearValC{
        }
    }
    namespace Noneamr{    ///<Alarm Mask Register
        using Addr = Register::Address<0x40024010,0xffffff00,0,unsigned>;
        ///When 1, the Second value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> amrsec{}; 
        namespace AmrsecValC{
        }
        ///When 1, the Minutes value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> amrmin{}; 
        namespace AmrminValC{
        }
        ///When 1, the Hour value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> amrhour{}; 
        namespace AmrhourValC{
        }
        ///When 1, the Day of Month value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> amrdom{}; 
        namespace AmrdomValC{
        }
        ///When 1, the Day of Week value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> amrdow{}; 
        namespace AmrdowValC{
        }
        ///When 1, the Day of Year value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> amrdoy{}; 
        namespace AmrdoyValC{
        }
        ///When 1, the Month value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> amrmon{}; 
        namespace AmrmonValC{
        }
        ///When 1, the Year value is not compared for the alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> amryear{}; 
        namespace AmryearValC{
        }
    }
    namespace Nonectime0{    ///<Consolidated Time Register 0
        using Addr = Register::Address<0x40024014,0xf8e0c0c0,0,unsigned>;
        ///Seconds value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> seconds{}; 
        namespace SecondsValC{
        }
        ///Minutes value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> minutes{}; 
        namespace MinutesValC{
        }
        ///Hours value in the range of 0 to 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> hours{}; 
        namespace HoursValC{
        }
        ///Day of week value in the range of 0 to 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> dow{}; 
        namespace DowValC{
        }
    }
    namespace Nonectime1{    ///<Consolidated Time Register 1
        using Addr = Register::Address<0x40024018,0xf000f0e0,0,unsigned>;
        ///Day of month value in the range of 1 to 28, 29, 30, or 31 (depending on the month and whether it is a leap year).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dom{}; 
        namespace DomValC{
        }
        ///Month value in the range of 1 to 12.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> month{}; 
        namespace MonthValC{
        }
        ///Year value in the range of 0 to 4095.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> year{}; 
        namespace YearValC{
        }
    }
    namespace Nonectime2{    ///<Consolidated Time Register 2
        using Addr = Register::Address<0x4002401c,0xfffff000,0,unsigned>;
        ///Day of year value in the range of 1 to 365 (366 for leap years).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> doy{}; 
        namespace DoyValC{
        }
    }
    namespace Nonesec{    ///<Seconds Counter
        using Addr = Register::Address<0x40024020,0xffffffc0,0,unsigned>;
        ///Seconds value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> seconds{}; 
        namespace SecondsValC{
        }
    }
    namespace Nonemin{    ///<Minutes Register
        using Addr = Register::Address<0x40024024,0xffffffc0,0,unsigned>;
        ///Minutes value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> minutes{}; 
        namespace MinutesValC{
        }
    }
    namespace Nonehrs{    ///<Hours Register
        using Addr = Register::Address<0x40024028,0xffffffe0,0,unsigned>;
        ///Hours value in the range of 0 to 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> hours{}; 
        namespace HoursValC{
        }
    }
    namespace Nonedom{    ///<Day of Month Register
        using Addr = Register::Address<0x4002402c,0xffffffe0,0,unsigned>;
        ///Day of month value in the range of 1 to 28, 29, 30, or 31 (depending on the month and whether it is a leap year).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dom{}; 
        namespace DomValC{
        }
    }
    namespace Nonedow{    ///<Day of Week Register
        using Addr = Register::Address<0x40024030,0xfffffff8,0,unsigned>;
        ///Day of week value in the range of 0 to 6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dow{}; 
        namespace DowValC{
        }
    }
    namespace Nonedoy{    ///<Day of Year Register
        using Addr = Register::Address<0x40024034,0xfffffe00,0,unsigned>;
        ///Day of year value in the range of 1 to 365 (366 for leap years).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> doy{}; 
        namespace DoyValC{
        }
    }
    namespace Nonemonth{    ///<Months Register
        using Addr = Register::Address<0x40024038,0xfffffff0,0,unsigned>;
        ///Month value in the range of 1 to 12.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> month{}; 
        namespace MonthValC{
        }
    }
    namespace Noneyear{    ///<Years Register
        using Addr = Register::Address<0x4002403c,0xfffff000,0,unsigned>;
        ///Year value in the range of 0 to 4095.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> year{}; 
        namespace YearValC{
        }
    }
    namespace Nonecalibration{    ///<Calibration Value Register
        using Addr = Register::Address<0x40024040,0xfffc0000,0,unsigned>;
        ///If enabled, the calibration counter counts up to this value. The maximum value is 131, 072 corresponding to about 36.4 hours. Calibration is disabled if CALVAL = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> calval{}; 
        namespace CalvalValC{
        }
        ///Calibration direction
        enum class CaldirVal {
            backwardCalibration=0x00000001,     ///<Backward calibration. When CALVAL is equal to the calibration counter, the RTC timers will stop incrementing for 1 second.
            forwardCalibration=0x00000000,     ///<Forward calibration. When CALVAL is equal to the calibration counter, the RTC timers will jump by 2 seconds.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CaldirVal> caldir{}; 
        namespace CaldirValC{
            constexpr Register::FieldValue<decltype(caldir),CaldirVal::backwardCalibration> backwardCalibration{};
            constexpr Register::FieldValue<decltype(caldir),CaldirVal::forwardCalibration> forwardCalibration{};
        }
    }
    namespace Nonegpreg0{    ///<General Purpose Register 0
        using Addr = Register::Address<0x40024044,0x00000000,0,unsigned>;
        ///General purpose storage.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
        namespace GpValC{
        }
    }
    namespace Nonegpreg1{    ///<General Purpose Register 0
        using Addr = Register::Address<0x40024048,0x00000000,0,unsigned>;
        ///General purpose storage.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
        namespace GpValC{
        }
    }
    namespace Nonegpreg2{    ///<General Purpose Register 0
        using Addr = Register::Address<0x4002404c,0x00000000,0,unsigned>;
        ///General purpose storage.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
        namespace GpValC{
        }
    }
    namespace Nonegpreg3{    ///<General Purpose Register 0
        using Addr = Register::Address<0x40024050,0x00000000,0,unsigned>;
        ///General purpose storage.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
        namespace GpValC{
        }
    }
    namespace Nonegpreg4{    ///<General Purpose Register 0
        using Addr = Register::Address<0x40024054,0x00000000,0,unsigned>;
        ///General purpose storage.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
        namespace GpValC{
        }
    }
    namespace NonertcAux{    ///<RTC Auxiliary control register
        using Addr = Register::Address<0x4002405c,0xffffffaf,0,unsigned>;
        ///RTC Oscillator Fail detect flag. Read: this bit is set if the RTC oscillator stops, and when RTC power is first turned on. An interrupt will occur when this bit is set, the RTC_OSCFEN bit in RTC_AUXEN is a 1, and the RTC interrupt is enabled in the NVIC. Write: writing a 1 to this bit clears the flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rtcOscf{}; 
        namespace RtcoscfValC{
        }
        ///When 0: the RTC_ALARM pin reflects the RTC alarm status. When 1: the RTC_ALARM pin indicates Deep Power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtcPdout{}; 
        namespace RtcpdoutValC{
        }
    }
    namespace NonertcAuxen{    ///<RTC Auxiliary Enable register
        using Addr = Register::Address<0x40024058,0xffffffef,0,unsigned>;
        ///Oscillator Fail Detect interrupt enable. When 0: the RTC Oscillator Fail detect interrupt is disabled. When 1: the RTC Oscillator Fail detect interrupt is enabled. See Section 30.6.2.5.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rtcOscfen{}; 
        namespace RtcoscfenValC{
        }
    }
    namespace Noneasec{    ///<Alarm value for Seconds
        using Addr = Register::Address<0x40024060,0xffffffc0,0,unsigned>;
        ///Seconds value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> seconds{}; 
        namespace SecondsValC{
        }
    }
    namespace Noneamin{    ///<Alarm value for Minutes
        using Addr = Register::Address<0x40024064,0xffffffc0,0,unsigned>;
        ///Minutes value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> minutes{}; 
        namespace MinutesValC{
        }
    }
    namespace Noneahrs{    ///<Alarm value for Hours
        using Addr = Register::Address<0x40024068,0xffffffe0,0,unsigned>;
        ///Hours value in the range of 0 to 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> hours{}; 
        namespace HoursValC{
        }
    }
    namespace Noneadom{    ///<Alarm value for Day of Month
        using Addr = Register::Address<0x4002406c,0xffffffe0,0,unsigned>;
        ///Day of month value in the range of 1 to 28, 29, 30, or 31 (depending on the month and whether it is a leap year).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dom{}; 
        namespace DomValC{
        }
    }
    namespace Noneadow{    ///<Alarm value for Day of Week
        using Addr = Register::Address<0x40024070,0xfffffff8,0,unsigned>;
        ///Day of week value in the range of 0 to 6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dow{}; 
        namespace DowValC{
        }
    }
    namespace Noneadoy{    ///<Alarm value for Day of Year
        using Addr = Register::Address<0x40024074,0xfffffe00,0,unsigned>;
        ///Day of year value in the range of 1 to 365 (366 for leap years).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> doy{}; 
        namespace DoyValC{
        }
    }
    namespace Noneamon{    ///<Alarm value for Months
        using Addr = Register::Address<0x40024078,0xfffffff0,0,unsigned>;
        ///Month value in the range of 1 to 12.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> month{}; 
        namespace MonthValC{
        }
    }
    namespace Noneayrs{    ///<Alarm value for Year
        using Addr = Register::Address<0x4002407c,0xfffff000,0,unsigned>;
        ///Year value in the range of 0 to 4095.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> year{}; 
        namespace YearValC{
        }
    }
}
