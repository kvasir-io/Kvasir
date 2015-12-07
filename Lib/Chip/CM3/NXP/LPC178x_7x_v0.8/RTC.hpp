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
    namespace Noneercontrol{    ///<Event Monitor/Recorder Control register. Contains bits that control actions for the event channels as well as for Event Monitor/Recorder setup.
        using Addr = Register::Address<0x40024084,0x3f0fc3f0,0,unsigned>;
        ///Interrupt and wakeup enable for channel 0.
        enum class Intwakeen0Val {
            noInterruptOrWake=0x00000000,     ///<No interrupt or wakeup will be generated by event channel 0.
            anEventInChannel=0x00000001,     ///<An event in channel 0 will trigger an (RTC) interrupt and a wake-up request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Intwakeen0Val> intwakeEn0{}; 
        namespace Intwakeen0ValC{
            constexpr Register::FieldValue<decltype(intwakeEn0),Intwakeen0Val::noInterruptOrWake> noInterruptOrWake{};
            constexpr Register::FieldValue<decltype(intwakeEn0),Intwakeen0Val::anEventInChannel> anEventInChannel{};
        }
        ///Enables automatically clearing the RTC general purpose registers when an event occurs on channel 0.
        enum class Gpclearen0Val {
            nogpreg=0x00000000,     ///<Channel 0 has no influence on the general purpose registers.
            clrgpreg=0x00000001,     ///<An event in channel 0 will clear the general purpose registers asynchronously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Gpclearen0Val> gpclearEn0{}; 
        namespace Gpclearen0ValC{
            constexpr Register::FieldValue<decltype(gpclearEn0),Gpclearen0Val::nogpreg> nogpreg{};
            constexpr Register::FieldValue<decltype(gpclearEn0),Gpclearen0Val::clrgpreg> clrgpreg{};
        }
        ///Selects the polarity of an event on input pin RTC_EV0.
        enum class Pol0Val {
            neg=0x00000000,     ///<A channel 0 event is defined as a negative edge on RTC_EV0.
            pos=0x00000001,     ///<A channel 0 event is defined as a positive edge on RTC_EV0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pol0Val> pol0{}; 
        namespace Pol0ValC{
            constexpr Register::FieldValue<decltype(pol0),Pol0Val::neg> neg{};
            constexpr Register::FieldValue<decltype(pol0),Pol0Val::pos> pos{};
        }
        ///Event enable control for channel 0.[1]
        enum class Ev0inputenVal {
            disabled=0x00000000,     ///<Event 0 input is disabled and forced high internally.
            enabled=0x00000001,     ///<Event 0 input is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ev0inputenVal> ev0InputEn{}; 
        namespace Ev0inputenValC{
            constexpr Register::FieldValue<decltype(ev0InputEn),Ev0inputenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ev0InputEn),Ev0inputenVal::enabled> enabled{};
        }
        ///Interrupt and wakeup enable for channel 1.
        enum class Intwakeen1Val {
            noInterruptOrWake=0x00000000,     ///<No interrupt or wakeup will be generated by event channel 1.
            wakeup=0x00000001,     ///<An event in channel 1 will trigger an (RTC) interrupt and a wake-up request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Intwakeen1Val> intwakeEn1{}; 
        namespace Intwakeen1ValC{
            constexpr Register::FieldValue<decltype(intwakeEn1),Intwakeen1Val::noInterruptOrWake> noInterruptOrWake{};
            constexpr Register::FieldValue<decltype(intwakeEn1),Intwakeen1Val::wakeup> wakeup{};
        }
        ///Enables automatically clearing the RTC general purpose registers when an event occurs on channel 1.
        enum class Gpclearen1Val {
            nogpreg=0x00000000,     ///<Channel 1 has no influence on the general purpose registers.
            clrgpreg=0x00000001,     ///<A n event in channel 1 will clear the general purpose registers asynchronously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Gpclearen1Val> gpclearEn1{}; 
        namespace Gpclearen1ValC{
            constexpr Register::FieldValue<decltype(gpclearEn1),Gpclearen1Val::nogpreg> nogpreg{};
            constexpr Register::FieldValue<decltype(gpclearEn1),Gpclearen1Val::clrgpreg> clrgpreg{};
        }
        ///Selects the polarity of an event on input pin RTC_EV1.
        enum class Pol1Val {
            neg=0x00000000,     ///<A channel 1 event is defined as a negative edge on RTC_EV1.
            pos=0x00000001,     ///<A channel 1 event is defined as a positive edge on RTC_EV1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pol1Val> pol1{}; 
        namespace Pol1ValC{
            constexpr Register::FieldValue<decltype(pol1),Pol1Val::neg> neg{};
            constexpr Register::FieldValue<decltype(pol1),Pol1Val::pos> pos{};
        }
        ///Event enable control for channel 1.[1]
        enum class Ev1inputenVal {
            disabled=0x00000000,     ///<Event 1 input is disabled and forced high internally.
            enabled=0x00000001,     ///<Event 1 input is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ev1inputenVal> ev1InputEn{}; 
        namespace Ev1inputenValC{
            constexpr Register::FieldValue<decltype(ev1InputEn),Ev1inputenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ev1InputEn),Ev1inputenVal::enabled> enabled{};
        }
        ///Interrupt and wakeup enable for channel 2.
        enum class Intwakeen2Val {
            noInterruptOrWake=0x00000000,     ///<No interrupt or wakeup will be generated by event channel 2.
            wakeup=0x00000001,     ///<An event in channel 2 will trigger an (RTC) interrupt and a wake-up request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Intwakeen2Val> intwakeEn2{}; 
        namespace Intwakeen2ValC{
            constexpr Register::FieldValue<decltype(intwakeEn2),Intwakeen2Val::noInterruptOrWake> noInterruptOrWake{};
            constexpr Register::FieldValue<decltype(intwakeEn2),Intwakeen2Val::wakeup> wakeup{};
        }
        ///Enables automatically clearing the RTC general purpose registers when an event occurs on channel 2.
        enum class Gpclearen2Val {
            nogpreg=0x00000000,     ///<Channel 2 has no influence on the general purpose registers.
            clrgpreg=0x00000001,     ///<An event in channel 2 will clear the general purpose registers asynchronously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Gpclearen2Val> gpclearEn2{}; 
        namespace Gpclearen2ValC{
            constexpr Register::FieldValue<decltype(gpclearEn2),Gpclearen2Val::nogpreg> nogpreg{};
            constexpr Register::FieldValue<decltype(gpclearEn2),Gpclearen2Val::clrgpreg> clrgpreg{};
        }
        ///Selects the polarity of an event on input pin RTC_EV2.
        enum class Pol2Val {
            neg=0x00000000,     ///<A channel 2 event is defined as a negative edge on RTC_EV2.
            pos=0x00000001,     ///<A channel 2 event is defined as a positive edge on RTC_EV2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Pol2Val> pol2{}; 
        namespace Pol2ValC{
            constexpr Register::FieldValue<decltype(pol2),Pol2Val::neg> neg{};
            constexpr Register::FieldValue<decltype(pol2),Pol2Val::pos> pos{};
        }
        ///Event enable control for channel 2.[1]
        enum class Ev2inputenVal {
            disabled=0x00000000,     ///<Event 2 input is disabled and forced high internally.
            enabled=0x00000001,     ///<Event 2 input is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ev2inputenVal> ev2InputEn{}; 
        namespace Ev2inputenValC{
            constexpr Register::FieldValue<decltype(ev2InputEn),Ev2inputenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ev2InputEn),Ev2inputenVal::enabled> enabled{};
        }
        ///Controls enabling the Event Monitor/Recorder and selecting its operating frequency.[2]
        enum class ErmodeVal {
            disabled=0x00000000,     ///<Event Monitor/Recorder clocks are disabled. Operation of the Event Monitor/Recorder is disabled except for asynchronous clearing of GP registers if selected.
            enableEventMonitor16hz=0x00000001,     ///<Enable Event Monitor/Recorder and select a 16 Hz sample clock for event input edge detection and glitch suppression. Pulses (in either direction) shorter than 62.5 ms to 125 ms will be filtered out.
            enableEventMonitor64hz=0x00000002,     ///<Enable Event Monitor/Recorder and select a 64 Hz sample clock for event input edge detection and glitch suppression. Pulses (in either direction) shorter than 15.6 ms to 31.2 ms will be filtered out.
            enableEventMonitor1khz=0x00000003,     ///<Enable Event Monitor/Recorder and select a 1 kHz sample clock for event input edge detection and glitch suppression. Pulses (in either direction) shorter than 1 ms to 2 ms will be filtered out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,ErmodeVal> ermode{}; 
        namespace ErmodeValC{
            constexpr Register::FieldValue<decltype(ermode),ErmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ermode),ErmodeVal::enableEventMonitor16hz> enableEventMonitor16hz{};
            constexpr Register::FieldValue<decltype(ermode),ErmodeVal::enableEventMonitor64hz> enableEventMonitor64hz{};
            constexpr Register::FieldValue<decltype(ermode),ErmodeVal::enableEventMonitor1khz> enableEventMonitor1khz{};
        }
    }
    namespace Noneerstatus{    ///<Event Monitor/Recorder Status register. Contains status flags for event channels and other Event Monitor/Recorder conditions.
        using Addr = Register::Address<0x40024080,0x7ffffff0,0,unsigned>;
        ///Event flag for channel 0 (RTC_EV0 pin). Set at the end of any second if there has been an event during the preceding second. This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class Ev0Val {
            noEventChangeOnC=0x00000000,     ///<No event change on channel 0.
            atLeastOneEventH=0x00000001,     ///<At least one event has occurred on channel 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ev0Val> ev0{}; 
        namespace Ev0ValC{
            constexpr Register::FieldValue<decltype(ev0),Ev0Val::noEventChangeOnC> noEventChangeOnC{};
            constexpr Register::FieldValue<decltype(ev0),Ev0Val::atLeastOneEventH> atLeastOneEventH{};
        }
        ///Event flag for channel 1 (RTC_EV1 pin). Set at the end of any second if there has been an event during the preceding second. This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class Ev1Val {
            noEventChangeOnC=0x00000000,     ///<No event change on channel 1.
            atLeastOneEventH=0x00000001,     ///<At least one event has occurred on channel 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ev1Val> ev1{}; 
        namespace Ev1ValC{
            constexpr Register::FieldValue<decltype(ev1),Ev1Val::noEventChangeOnC> noEventChangeOnC{};
            constexpr Register::FieldValue<decltype(ev1),Ev1Val::atLeastOneEventH> atLeastOneEventH{};
        }
        ///Event flag for channel 2 (RTC_EV2 pin). Set at the end of any second if there has been an event during the preceding second. This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class Ev2Val {
            noEventChangeOnC=0x00000000,     ///<No event change on channel 2.
            atLeastOneEventH=0x00000001,     ///<At least one event has occurred on channel 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ev2Val> ev2{}; 
        namespace Ev2ValC{
            constexpr Register::FieldValue<decltype(ev2),Ev2Val::noEventChangeOnC> noEventChangeOnC{};
            constexpr Register::FieldValue<decltype(ev2),Ev2Val::atLeastOneEventH> atLeastOneEventH{};
        }
        ///General purpose register asynchronous clear flag. This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class GpclearedVal {
            nogpclr=0x00000000,     ///<General purpose registers have not been asynchronous cleared.
            gpclr=0x00000001,     ///<General purpose registers have been asynchronous cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,GpclearedVal> gpCleared{}; 
        namespace GpclearedValC{
            constexpr Register::FieldValue<decltype(gpCleared),GpclearedVal::nogpclr> nogpclr{};
            constexpr Register::FieldValue<decltype(gpCleared),GpclearedVal::gpclr> gpclr{};
        }
        ///Interrupt/wakeup request flag (Read-only). This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class WakeupVal {
            noInterruptwakeup=0x00000000,     ///<No interrupt/wakeup request is pending
            intwakeupPend=0x00000001,     ///<An interrupt/wakeup request is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::noInterruptwakeup> noInterruptwakeup{};
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::intwakeupPend> intwakeupPend{};
        }
    }
    namespace Noneercounters{    ///<Event Monitor/Recorder Counters register. Allows reading the counters associated with the event channels.
        using Addr = Register::Address<0x40024088,0xfff8f8f8,0,unsigned>;
        ///Value of the counter for event 0. If the counter reaches full count (the value 7), it remains there if additional events occur. This counter is cleared when the corresponding EVx bit in the ERSTATUS register is cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> counter0{}; 
        namespace Counter0ValC{
        }
        ///Value of the counter for event 1. See description for COUNTER0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> counter1{}; 
        namespace Counter1ValC{
        }
        ///Value of the counter for event 2. See description for COUNTER0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> counter2{}; 
        namespace Counter2ValC{
        }
    }
    namespace Noneerfirststamp0{    ///<Event Monitor/Recorder First Stamp register for channel 0. Retains the time stamp for the first event on channel 0.
        using Addr = Register::Address<0x40024090,0xfc000000,0,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        namespace SecValC{
        }
        ///Minutes value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        namespace MinValC{
        }
        ///Hours value in the range of 0 to 23.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        namespace HourValC{
        }
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
        namespace DoyValC{
        }
    }
    namespace Noneerfirststamp1{    ///<Event Monitor/Recorder First Stamp register for channel 0. Retains the time stamp for the first event on channel 0.
        using Addr = Register::Address<0x40024094,0xfc000000,0,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        namespace SecValC{
        }
        ///Minutes value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        namespace MinValC{
        }
        ///Hours value in the range of 0 to 23.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        namespace HourValC{
        }
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
        namespace DoyValC{
        }
    }
    namespace Noneerfirststamp2{    ///<Event Monitor/Recorder First Stamp register for channel 0. Retains the time stamp for the first event on channel 0.
        using Addr = Register::Address<0x40024098,0xfc000000,0,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        namespace SecValC{
        }
        ///Minutes value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        namespace MinValC{
        }
        ///Hours value in the range of 0 to 23.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        namespace HourValC{
        }
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
        namespace DoyValC{
        }
    }
    namespace Noneerlaststamp0{    ///<Event Monitor/Recorder Last Stamp register for channel 0. Retains the time stamp for the last (i.e. most recent) event on channel 0.
        using Addr = Register::Address<0x400240a0,0xfc000000,0,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        namespace SecValC{
        }
        ///Minutes value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        namespace MinValC{
        }
        ///Hours value in the range of 0 to 23.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        namespace HourValC{
        }
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
        namespace DoyValC{
        }
    }
    namespace Noneerlaststamp1{    ///<Event Monitor/Recorder Last Stamp register for channel 0. Retains the time stamp for the last (i.e. most recent) event on channel 0.
        using Addr = Register::Address<0x400240a4,0xfc000000,0,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        namespace SecValC{
        }
        ///Minutes value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        namespace MinValC{
        }
        ///Hours value in the range of 0 to 23.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        namespace HourValC{
        }
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
        namespace DoyValC{
        }
    }
    namespace Noneerlaststamp2{    ///<Event Monitor/Recorder Last Stamp register for channel 0. Retains the time stamp for the last (i.e. most recent) event on channel 0.
        using Addr = Register::Address<0x400240a8,0xfc000000,0,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        namespace SecValC{
        }
        ///Minutes value in the range of 0 to 59.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        namespace MinValC{
        }
        ///Hours value in the range of 0 to 23.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        namespace HourValC{
        }
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
        namespace DoyValC{
        }
    }
}
