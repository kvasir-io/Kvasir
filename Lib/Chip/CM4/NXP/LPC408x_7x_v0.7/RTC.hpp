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
    namespace RtcErcontrol{    ///<Event Monitor/Recorder Control register. Contains bits that control actions for the event channels as well as for Event Monitor/Recorder setup.
        using Addr = Register::Address<0x40024084,0x00000000,0x00000000,unsigned>;
        ///Interrupt and wakeup enable for channel 0.
        enum class Intwakeen0Val {
            noInterruptOrWake=0x00000000,     ///<No interrupt or wakeup will be generated by event channel 0.
            anEventInChannel=0x00000001,     ///<An event in channel 0 will trigger an (RTC) interrupt and a wake-up request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Intwakeen0Val> intwakeEn0{}; 
        namespace Intwakeen0ValC{
            constexpr Register::FieldValue<decltype(intwakeEn0)::Type,Intwakeen0Val::noInterruptOrWake> noInterruptOrWake{};
            constexpr Register::FieldValue<decltype(intwakeEn0)::Type,Intwakeen0Val::anEventInChannel> anEventInChannel{};
        }
        ///Enables automatically clearing the RTC general purpose registers when an event occurs on channel 0.
        enum class Gpclearen0Val {
            nogpreg=0x00000000,     ///<Channel 0 has no influence on the general purpose registers.
            clrgpreg=0x00000001,     ///<An event in channel 0 will clear the general purpose registers asynchronously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Gpclearen0Val> gpclearEn0{}; 
        namespace Gpclearen0ValC{
            constexpr Register::FieldValue<decltype(gpclearEn0)::Type,Gpclearen0Val::nogpreg> nogpreg{};
            constexpr Register::FieldValue<decltype(gpclearEn0)::Type,Gpclearen0Val::clrgpreg> clrgpreg{};
        }
        ///Selects the polarity of an event on input pin RTC_EV0.
        enum class Pol0Val {
            neg=0x00000000,     ///<A channel 0 event is defined as a negative edge on RTC_EV0.
            pos=0x00000001,     ///<A channel 0 event is defined as a positive edge on RTC_EV0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pol0Val> pol0{}; 
        namespace Pol0ValC{
            constexpr Register::FieldValue<decltype(pol0)::Type,Pol0Val::neg> neg{};
            constexpr Register::FieldValue<decltype(pol0)::Type,Pol0Val::pos> pos{};
        }
        ///Event enable control for channel 0.[1]
        enum class Ev0inputenVal {
            disabled=0x00000000,     ///<Event 0 input is disabled and forced high internally.
            enabled=0x00000001,     ///<Event 0 input is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ev0inputenVal> ev0InputEn{}; 
        namespace Ev0inputenValC{
            constexpr Register::FieldValue<decltype(ev0InputEn)::Type,Ev0inputenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ev0InputEn)::Type,Ev0inputenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Interrupt and wakeup enable for channel 1.
        enum class Intwakeen1Val {
            noInterruptOrWake=0x00000000,     ///<No interrupt or wakeup will be generated by event channel 1.
            wakeup=0x00000001,     ///<An event in channel 1 will trigger an (RTC) interrupt and a wake-up request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Intwakeen1Val> intwakeEn1{}; 
        namespace Intwakeen1ValC{
            constexpr Register::FieldValue<decltype(intwakeEn1)::Type,Intwakeen1Val::noInterruptOrWake> noInterruptOrWake{};
            constexpr Register::FieldValue<decltype(intwakeEn1)::Type,Intwakeen1Val::wakeup> wakeup{};
        }
        ///Enables automatically clearing the RTC general purpose registers when an event occurs on channel 1.
        enum class Gpclearen1Val {
            nogpreg=0x00000000,     ///<Channel 1 has no influence on the general purpose registers.
            clrgpreg=0x00000001,     ///<A n event in channel 1 will clear the general purpose registers asynchronously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Gpclearen1Val> gpclearEn1{}; 
        namespace Gpclearen1ValC{
            constexpr Register::FieldValue<decltype(gpclearEn1)::Type,Gpclearen1Val::nogpreg> nogpreg{};
            constexpr Register::FieldValue<decltype(gpclearEn1)::Type,Gpclearen1Val::clrgpreg> clrgpreg{};
        }
        ///Selects the polarity of an event on input pin RTC_EV1.
        enum class Pol1Val {
            neg=0x00000000,     ///<A channel 1 event is defined as a negative edge on RTC_EV1.
            pos=0x00000001,     ///<A channel 1 event is defined as a positive edge on RTC_EV1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pol1Val> pol1{}; 
        namespace Pol1ValC{
            constexpr Register::FieldValue<decltype(pol1)::Type,Pol1Val::neg> neg{};
            constexpr Register::FieldValue<decltype(pol1)::Type,Pol1Val::pos> pos{};
        }
        ///Event enable control for channel 1.[1]
        enum class Ev1inputenVal {
            disabled=0x00000000,     ///<Event 1 input is disabled and forced high internally.
            enabled=0x00000001,     ///<Event 1 input is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ev1inputenVal> ev1InputEn{}; 
        namespace Ev1inputenValC{
            constexpr Register::FieldValue<decltype(ev1InputEn)::Type,Ev1inputenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ev1InputEn)::Type,Ev1inputenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,14),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Interrupt and wakeup enable for channel 2.
        enum class Intwakeen2Val {
            noInterruptOrWake=0x00000000,     ///<No interrupt or wakeup will be generated by event channel 2.
            wakeup=0x00000001,     ///<An event in channel 2 will trigger an (RTC) interrupt and a wake-up request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Intwakeen2Val> intwakeEn2{}; 
        namespace Intwakeen2ValC{
            constexpr Register::FieldValue<decltype(intwakeEn2)::Type,Intwakeen2Val::noInterruptOrWake> noInterruptOrWake{};
            constexpr Register::FieldValue<decltype(intwakeEn2)::Type,Intwakeen2Val::wakeup> wakeup{};
        }
        ///Enables automatically clearing the RTC general purpose registers when an event occurs on channel 2.
        enum class Gpclearen2Val {
            nogpreg=0x00000000,     ///<Channel 2 has no influence on the general purpose registers.
            clrgpreg=0x00000001,     ///<An event in channel 2 will clear the general purpose registers asynchronously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Gpclearen2Val> gpclearEn2{}; 
        namespace Gpclearen2ValC{
            constexpr Register::FieldValue<decltype(gpclearEn2)::Type,Gpclearen2Val::nogpreg> nogpreg{};
            constexpr Register::FieldValue<decltype(gpclearEn2)::Type,Gpclearen2Val::clrgpreg> clrgpreg{};
        }
        ///Selects the polarity of an event on input pin RTC_EV2.
        enum class Pol2Val {
            neg=0x00000000,     ///<A channel 2 event is defined as a negative edge on RTC_EV2.
            pos=0x00000001,     ///<A channel 2 event is defined as a positive edge on RTC_EV2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Pol2Val> pol2{}; 
        namespace Pol2ValC{
            constexpr Register::FieldValue<decltype(pol2)::Type,Pol2Val::neg> neg{};
            constexpr Register::FieldValue<decltype(pol2)::Type,Pol2Val::pos> pos{};
        }
        ///Event enable control for channel 2.[1]
        enum class Ev2inputenVal {
            disabled=0x00000000,     ///<Event 2 input is disabled and forced high internally.
            enabled=0x00000001,     ///<Event 2 input is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ev2inputenVal> ev2InputEn{}; 
        namespace Ev2inputenValC{
            constexpr Register::FieldValue<decltype(ev2InputEn)::Type,Ev2inputenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ev2InputEn)::Type,Ev2inputenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Controls enabling the Event Monitor/Recorder and selecting its operating frequency.[2]
        enum class ErmodeVal {
            disabled=0x00000000,     ///<Event Monitor/Recorder clocks are disabled. Operation of the Event Monitor/Recorder is disabled except for asynchronous clearing of GP registers if selected.
            enableEventMonitor16hz=0x00000001,     ///<Enable Event Monitor/Recorder and select a 16 Hz sample clock for event input edge detection and glitch suppression. Pulses (in either direction) shorter than 62.5 ms to 125 ms will be filtered out.
            enableEventMonitor64hz=0x00000002,     ///<Enable Event Monitor/Recorder and select a 64 Hz sample clock for event input edge detection and glitch suppression. Pulses (in either direction) shorter than 15.6 ms to 31.2 ms will be filtered out.
            enableEventMonitor1khz=0x00000003,     ///<Enable Event Monitor/Recorder and select a 1 kHz sample clock for event input edge detection and glitch suppression. Pulses (in either direction) shorter than 1 ms to 2 ms will be filtered out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,ErmodeVal> ermode{}; 
        namespace ErmodeValC{
            constexpr Register::FieldValue<decltype(ermode)::Type,ErmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ermode)::Type,ErmodeVal::enableEventMonitor16hz> enableEventMonitor16hz{};
            constexpr Register::FieldValue<decltype(ermode)::Type,ErmodeVal::enableEventMonitor64hz> enableEventMonitor64hz{};
            constexpr Register::FieldValue<decltype(ermode)::Type,ErmodeVal::enableEventMonitor1khz> enableEventMonitor1khz{};
        }
    }
    namespace RtcErstatus{    ///<Event Monitor/Recorder Status register. Contains status flags for event channels and other Event Monitor/Recorder conditions.
        using Addr = Register::Address<0x40024080,0x00000000,0x00000000,unsigned>;
        ///Event flag for channel 0 (RTC_EV0 pin). Set at the end of any second if there has been an event during the preceding second. This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class Ev0Val {
            noEventChangeOnC=0x00000000,     ///<No event change on channel 0.
            atLeastOneEventH=0x00000001,     ///<At least one event has occurred on channel 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ev0Val> ev0{}; 
        namespace Ev0ValC{
            constexpr Register::FieldValue<decltype(ev0)::Type,Ev0Val::noEventChangeOnC> noEventChangeOnC{};
            constexpr Register::FieldValue<decltype(ev0)::Type,Ev0Val::atLeastOneEventH> atLeastOneEventH{};
        }
        ///Event flag for channel 1 (RTC_EV1 pin). Set at the end of any second if there has been an event during the preceding second. This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class Ev1Val {
            noEventChangeOnC=0x00000000,     ///<No event change on channel 1.
            atLeastOneEventH=0x00000001,     ///<At least one event has occurred on channel 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ev1Val> ev1{}; 
        namespace Ev1ValC{
            constexpr Register::FieldValue<decltype(ev1)::Type,Ev1Val::noEventChangeOnC> noEventChangeOnC{};
            constexpr Register::FieldValue<decltype(ev1)::Type,Ev1Val::atLeastOneEventH> atLeastOneEventH{};
        }
        ///Event flag for channel 2 (RTC_EV2 pin). Set at the end of any second if there has been an event during the preceding second. This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class Ev2Val {
            noEventChangeOnC=0x00000000,     ///<No event change on channel 2.
            atLeastOneEventH=0x00000001,     ///<At least one event has occurred on channel 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ev2Val> ev2{}; 
        namespace Ev2ValC{
            constexpr Register::FieldValue<decltype(ev2)::Type,Ev2Val::noEventChangeOnC> noEventChangeOnC{};
            constexpr Register::FieldValue<decltype(ev2)::Type,Ev2Val::atLeastOneEventH> atLeastOneEventH{};
        }
        ///General purpose register asynchronous clear flag. This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class GpclearedVal {
            nogpclr=0x00000000,     ///<General purpose registers have not been asynchronous cleared.
            gpclr=0x00000001,     ///<General purpose registers have been asynchronous cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,GpclearedVal> gpCleared{}; 
        namespace GpclearedValC{
            constexpr Register::FieldValue<decltype(gpCleared)::Type,GpclearedVal::nogpclr> nogpclr{};
            constexpr Register::FieldValue<decltype(gpCleared)::Type,GpclearedVal::gpclr> gpclr{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Interrupt/wakeup request flag (Read-only). This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class WakeupVal {
            noInterruptwakeup=0x00000000,     ///<No interrupt/wakeup request is pending
            intwakeupPend=0x00000001,     ///<An interrupt/wakeup request is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::noInterruptwakeup> noInterruptwakeup{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::intwakeupPend> intwakeupPend{};
        }
    }
    namespace RtcErcounters{    ///<Event Monitor/Recorder Counters register. Allows reading the counters associated with the event channels.
        using Addr = Register::Address<0x40024088,0x00000000,0x00000000,unsigned>;
        ///Value of the counter for event 0. If the counter reaches full count (the value 7), it remains there if additional events occur. This counter is cleared when the corresponding EVx bit in the ERSTATUS register is cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> counter0{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Value of the counter for event 1. See description for COUNTER0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> counter1{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Value of the counter for event 2. See description for COUNTER0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> counter2{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
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
    namespace RtcErfirststamp0{    ///<Event Monitor/Recorder First Stamp register for channel 0. Retains the time stamp for the first event on channel 0.
        using Addr = Register::Address<0x40024090,0x00000000,0x00000000,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Minutes value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        ///Hours value in the range of 0 to 23.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcErfirststamp1{    ///<Event Monitor/Recorder First Stamp register for channel 0. Retains the time stamp for the first event on channel 0.
        using Addr = Register::Address<0x40024094,0x00000000,0x00000000,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Minutes value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        ///Hours value in the range of 0 to 23.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcErfirststamp2{    ///<Event Monitor/Recorder First Stamp register for channel 0. Retains the time stamp for the first event on channel 0.
        using Addr = Register::Address<0x40024098,0x00000000,0x00000000,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Minutes value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        ///Hours value in the range of 0 to 23.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcErlaststamp0{    ///<Event Monitor/Recorder Last Stamp register for channel 0. Retains the time stamp for the last (i.e. most recent) event on channel 0.
        using Addr = Register::Address<0x400240a0,0x00000000,0x00000000,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Minutes value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        ///Hours value in the range of 0 to 23.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcErlaststamp1{    ///<Event Monitor/Recorder Last Stamp register for channel 0. Retains the time stamp for the last (i.e. most recent) event on channel 0.
        using Addr = Register::Address<0x400240a4,0x00000000,0x00000000,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Minutes value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        ///Hours value in the range of 0 to 23.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcErlaststamp2{    ///<Event Monitor/Recorder Last Stamp register for channel 0. Retains the time stamp for the last (i.e. most recent) event on channel 0.
        using Addr = Register::Address<0x400240a8,0x00000000,0x00000000,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Minutes value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        ///Hours value in the range of 0 to 23.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
