#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// Real Time Clock (RTC)  
    namespace RtcIlr{    ///<Interrupt Location Register
        using Addr = Register::Address<0x40024000,0x001ffffc,0x00000000,unsigned>;
        ///When one, the Counter Increment Interrupt block generated an interrupt. Writing a one to this bit location clears the counter increment interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtccif{}; 
        ///When one, the alarm registers generated an interrupt. Writing a one to this bit location clears the alarm interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtcalf{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcCcr{    ///<Clock Control Register
        using Addr = Register::Address<0x40024008,0x00000000,0x00000000,unsigned>;
        ///Clock Enable.
        enum class ClkenVal {
            theTimeCountersAr=0x00000001,     ///<The time counters are enabled.
            theTimeCountersAr=0x00000000,     ///<The time counters are disabled so that they may be initialized.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ClkenVal> clken{}; 
        namespace ClkenValC{
            constexpr Register::FieldValue<decltype(clken)::Type,ClkenVal::theTimeCountersAr> theTimeCountersAr{};
            constexpr Register::FieldValue<decltype(clken)::Type,ClkenVal::theTimeCountersAr> theTimeCountersAr{};
        }
        ///CTC Reset.
        enum class CtcrstVal {
            reset=0x00000001,     ///<When one, the elements in the internal oscillator divider are reset, and remain reset until CCR[1] is changed to zero. This is the divider that generates the 1 Hz clock from the 32.768 kHz crystal. The state of the divider is not visible to software.
            noEffect=0x00000000,     ///<No effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CtcrstVal> ctcrst{}; 
        namespace CtcrstValC{
            constexpr Register::FieldValue<decltype(ctcrst)::Type,CtcrstVal::reset> reset{};
            constexpr Register::FieldValue<decltype(ctcrst)::Type,CtcrstVal::noEffect> noEffect{};
        }
        ///Internal test mode controls. These bits must be 0 for normal RTC operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Calibration counter enable.
        enum class CcalenVal {
            theCalibrationCoun=0x00000001,     ///<The calibration counter is disabled and reset to zero.
            theCalibrationCoun=0x00000000,     ///<The calibration counter is enabled and counting, using the 1 Hz clock. When the calibration counter is equal to the value of the CALIBRATION register, the counter resets and repeats counting up to the value of the CALIBRATION register. See Section 30.6.4.2 and  Section 30.6.5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CcalenVal> ccalen{}; 
        namespace CcalenValC{
            constexpr Register::FieldValue<decltype(ccalen)::Type,CcalenVal::theCalibrationCoun> theCalibrationCoun{};
            constexpr Register::FieldValue<decltype(ccalen)::Type,CcalenVal::theCalibrationCoun> theCalibrationCoun{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcCiir{    ///<Counter Increment Interrupt Register
        using Addr = Register::Address<0x4002400c,0x00000000,0x00000000,unsigned>;
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
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcAmr{    ///<Alarm Mask Register
        using Addr = Register::Address<0x40024010,0x00000000,0x00000000,unsigned>;
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
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcCtime0{    ///<Consolidated Time Register 0
        using Addr = Register::Address<0x40024014,0x00000000,0x00000000,unsigned>;
        ///Seconds value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> seconds{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Minutes value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> minutes{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Hours value in the range of 0 to 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> hours{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Day of week value in the range of 0 to 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> dow{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcCtime1{    ///<Consolidated Time Register 1
        using Addr = Register::Address<0x40024018,0x00000000,0x00000000,unsigned>;
        ///Day of month value in the range of 1 to 28, 29, 30, or 31 (depending on the month and whether it is a leap year).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dom{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Month value in the range of 1 to 12.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> month{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Year value in the range of 0 to 4095.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> year{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcCtime2{    ///<Consolidated Time Register 2
        using Addr = Register::Address<0x4002401c,0x00000000,0x00000000,unsigned>;
        ///Day of year value in the range of 1 to 365 (366 for leap years).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> doy{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcSec{    ///<Seconds Counter
        using Addr = Register::Address<0x40024020,0x00000000,0x00000000,unsigned>;
        ///Seconds value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> seconds{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcMin{    ///<Minutes Register
        using Addr = Register::Address<0x40024024,0x00000000,0x00000000,unsigned>;
        ///Minutes value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> minutes{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcHrs{    ///<Hours Register
        using Addr = Register::Address<0x40024028,0x00000000,0x00000000,unsigned>;
        ///Hours value in the range of 0 to 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> hours{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcDom{    ///<Day of Month Register
        using Addr = Register::Address<0x4002402c,0x00000000,0x00000000,unsigned>;
        ///Day of month value in the range of 1 to 28, 29, 30, or 31 (depending on the month and whether it is a leap year).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dom{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcDow{    ///<Day of Week Register
        using Addr = Register::Address<0x40024030,0x00000000,0x00000000,unsigned>;
        ///Day of week value in the range of 0 to 6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dow{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcDoy{    ///<Day of Year Register
        using Addr = Register::Address<0x40024034,0x00000000,0x00000000,unsigned>;
        ///Day of year value in the range of 1 to 365 (366 for leap years).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> doy{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcMonth{    ///<Months Register
        using Addr = Register::Address<0x40024038,0x00000000,0x00000000,unsigned>;
        ///Month value in the range of 1 to 12.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> month{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcYear{    ///<Years Register
        using Addr = Register::Address<0x4002403c,0x00000000,0x00000000,unsigned>;
        ///Year value in the range of 0 to 4095.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> year{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcCalibration{    ///<Calibration Value Register
        using Addr = Register::Address<0x40024040,0xfffc0000,0x00000000,unsigned>;
        ///If enabled, the calibration counter counts up to this value. The maximum value is 131, 072 corresponding to about 36.4 hours. Calibration is disabled if CALVAL = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> calval{}; 
        ///Calibration direction
        enum class CaldirVal {
            backwardCalibration=0x00000001,     ///<Backward calibration. When CALVAL is equal to the calibration counter, the RTC timers will stop incrementing for 1 second.
            forwardCalibration=0x00000000,     ///<Forward calibration. When CALVAL is equal to the calibration counter, the RTC timers will jump by 2 seconds.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CaldirVal> caldir{}; 
        namespace CaldirValC{
            constexpr Register::FieldValue<decltype(caldir)::Type,CaldirVal::backwardCalibration> backwardCalibration{};
            constexpr Register::FieldValue<decltype(caldir)::Type,CaldirVal::forwardCalibration> forwardCalibration{};
        }
    }
    namespace RtcRtcAux{    ///<RTC Auxiliary control register
        using Addr = Register::Address<0x4002405c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///RTC Oscillator Fail detect flag. Read: this bit is set if the RTC oscillator stops, and when RTC power is first turned on. An interrupt will occur when this bit is set, the RTC_OSCFEN bit in RTC_AUXEN is a 1, and the RTC interrupt is enabled in the NVIC. Write: writing a 1 to this bit clears the flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rtcOscf{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When 0: the RTC_ALARM pin reflects the RTC alarm status. When 1: the RTC_ALARM pin indicates Deep Power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtcPdout{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcRtcAuxen{    ///<RTC Auxiliary Enable register
        using Addr = Register::Address<0x40024058,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Oscillator Fail Detect interrupt enable. When 0: the RTC Oscillator Fail detect interrupt is disabled. When 1: the RTC Oscillator Fail detect interrupt is enabled. See Section 30.6.2.5.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rtcOscfen{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcAsec{    ///<Alarm value for Seconds
        using Addr = Register::Address<0x40024060,0x00000000,0x00000000,unsigned>;
        ///Seconds value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> seconds{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcAmin{    ///<Alarm value for Minutes
        using Addr = Register::Address<0x40024064,0x00000000,0x00000000,unsigned>;
        ///Minutes value in the range of 0 to 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> minutes{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcAhrs{    ///<Alarm value for Hours
        using Addr = Register::Address<0x40024068,0x00000000,0x00000000,unsigned>;
        ///Hours value in the range of 0 to 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> hours{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcAdom{    ///<Alarm value for Day of Month
        using Addr = Register::Address<0x4002406c,0x00000000,0x00000000,unsigned>;
        ///Day of month value in the range of 1 to 28, 29, 30, or 31 (depending on the month and whether it is a leap year).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dom{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcAdow{    ///<Alarm value for Day of Week
        using Addr = Register::Address<0x40024070,0x00000000,0x00000000,unsigned>;
        ///Day of week value in the range of 0 to 6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dow{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcAdoy{    ///<Alarm value for Day of Year
        using Addr = Register::Address<0x40024074,0x00000000,0x00000000,unsigned>;
        ///Day of year value in the range of 1 to 365 (366 for leap years).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> doy{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcAmon{    ///<Alarm value for Months
        using Addr = Register::Address<0x40024078,0x00000000,0x00000000,unsigned>;
        ///Month value in the range of 1 to 12.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> month{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcAyrs{    ///<Alarm value for Year
        using Addr = Register::Address<0x4002407c,0x00000000,0x00000000,unsigned>;
        ///Year value in the range of 0 to 4095.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> year{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcGpreg0{    ///<General Purpose Register 0
        using Addr = Register::Address<0x40024044,0x00000000,0x00000000,unsigned>;
        ///General purpose storage.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
    }
    namespace RtcGpreg1{    ///<General Purpose Register 0
        using Addr = Register::Address<0x40024048,0x00000000,0x00000000,unsigned>;
        ///General purpose storage.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
    }
    namespace RtcGpreg2{    ///<General Purpose Register 0
        using Addr = Register::Address<0x4002404c,0x00000000,0x00000000,unsigned>;
        ///General purpose storage.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
    }
    namespace RtcGpreg3{    ///<General Purpose Register 0
        using Addr = Register::Address<0x40024050,0x00000000,0x00000000,unsigned>;
        ///General purpose storage.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
    }
    namespace RtcGpreg4{    ///<General Purpose Register 0
        using Addr = Register::Address<0x40024054,0x00000000,0x00000000,unsigned>;
        ///General purpose storage.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
    }
}
