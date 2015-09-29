#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// Real Time Clock (RTC) 
    namespace Noneilr{    ///<Interrupt Location Register
        using Addr = Register::Address<0x40024000,0xfffffffc,0,unsigned>;
        ///When one, the Counter Increment Interrupt block generated an interrupt. Writing a one to this bit location clears the counter increment interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtccif{}; 
        ///When one, the alarm registers generated an interrupt. Writing a one to this bit location clears the alarm interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtcalf{}; 
    }
    namespace Noneccr{    ///<Clock Control Register
        using Addr = Register::Address<0x40024008,0xffffffec,0,unsigned>;
        ///Clock Enable.
        enum class clkenVal {
            theTimeCountersAr=0x00000001,     ///<The time counters are enabled.
            theTimeCountersAr=0x00000000,     ///<The time counters are disabled so that they may be initialized.
        };
        namespace clkenValC{
            constexpr MPL::Value<clkenVal,clkenVal::theTimeCountersAr> theTimeCountersAr{};
            constexpr MPL::Value<clkenVal,clkenVal::theTimeCountersAr> theTimeCountersAr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,clkenVal> clken{}; 
        ///CTC Reset.
        enum class ctcrstVal {
            reset=0x00000001,     ///<When one, the elements in the internal oscillator divider are reset, and remain reset until CCR[1] is changed to zero. This is the divider that generates the 1 Hz clock from the 32.768 kHz crystal. The state of the divider is not visible to software.
            noEffect=0x00000000,     ///<No effect.
        };
        namespace ctcrstValC{
            constexpr MPL::Value<ctcrstVal,ctcrstVal::reset> reset{};
            constexpr MPL::Value<ctcrstVal,ctcrstVal::noEffect> noEffect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ctcrstVal> ctcrst{}; 
        ///Calibration counter enable.
        enum class ccalenVal {
            theCalibrationCoun=0x00000001,     ///<The calibration counter is disabled and reset to zero.
            theCalibrationCoun=0x00000000,     ///<The calibration counter is enabled and counting, using the 1 Hz clock. When the calibration counter is equal to the value of the CALIBRATION register, the counter resets and repeats counting up to the value of the CALIBRATION register. See Section 30.6.4.2 and  Section 30.6.5.
        };
        namespace ccalenValC{
            constexpr MPL::Value<ccalenVal,ccalenVal::theCalibrationCoun> theCalibrationCoun{};
            constexpr MPL::Value<ccalenVal,ccalenVal::theCalibrationCoun> theCalibrationCoun{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ccalenVal> ccalen{}; 
    }
    namespace Noneciir{    ///<Counter Increment Interrupt Register
        using Addr = Register::Address<0x4002400c,0xffffff00,0,unsigned>;
        ///When 1, an increment of the Second value generates an interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> imsec{}; 
        ///When 1, an increment of the Minute value generates an interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> immin{}; 
        ///When 1, an increment of the Hour value generates an interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> imhour{}; 
        ///When 1, an increment of the Day of Month value generates an interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> imdom{}; 
        ///When 1, an increment of the Day of Week value generates an interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> imdow{}; 
        ///When 1, an increment of the Day of Year value generates an interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> imdoy{}; 
        ///When 1, an increment of the Month value generates an interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> immon{}; 
        ///When 1, an increment of the Year value generates an interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> imyear{}; 
    }
    namespace Noneamr{    ///<Alarm Mask Register
        using Addr = Register::Address<0x40024010,0xffffff00,0,unsigned>;
        ///When 1, the Second value is not compared for the alarm.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> amrsec{}; 
        ///When 1, the Minutes value is not compared for the alarm.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> amrmin{}; 
        ///When 1, the Hour value is not compared for the alarm.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> amrhour{}; 
        ///When 1, the Day of Month value is not compared for the alarm.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> amrdom{}; 
        ///When 1, the Day of Week value is not compared for the alarm.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> amrdow{}; 
        ///When 1, the Day of Year value is not compared for the alarm.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> amrdoy{}; 
        ///When 1, the Month value is not compared for the alarm.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> amrmon{}; 
        ///When 1, the Year value is not compared for the alarm.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> amryear{}; 
    }
    namespace Nonectime0{    ///<Consolidated Time Register 0
        using Addr = Register::Address<0x40024014,0xf8e0c0c0,0,unsigned>;
        ///Seconds value in the range of 0 to 59
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> seconds{}; 
        ///Minutes value in the range of 0 to 59
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> minutes{}; 
        ///Hours value in the range of 0 to 23
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> hours{}; 
        ///Day of week value in the range of 0 to 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> dow{}; 
    }
    namespace Nonectime1{    ///<Consolidated Time Register 1
        using Addr = Register::Address<0x40024018,0xf000f0e0,0,unsigned>;
        ///Day of month value in the range of 1 to 28, 29, 30, or 31 (depending on the month and whether it is a leap year).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dom{}; 
        ///Month value in the range of 1 to 12.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> month{}; 
        ///Year value in the range of 0 to 4095.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> year{}; 
    }
    namespace Nonectime2{    ///<Consolidated Time Register 2
        using Addr = Register::Address<0x4002401c,0xfffff000,0,unsigned>;
        ///Day of year value in the range of 1 to 365 (366 for leap years).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> doy{}; 
    }
    namespace Nonesec{    ///<Seconds Counter
        using Addr = Register::Address<0x40024020,0xffffffc0,0,unsigned>;
        ///Seconds value in the range of 0 to 59
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> seconds{}; 
    }
    namespace Nonemin{    ///<Minutes Register
        using Addr = Register::Address<0x40024024,0xffffffc0,0,unsigned>;
        ///Minutes value in the range of 0 to 59
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> minutes{}; 
    }
    namespace Nonehrs{    ///<Hours Register
        using Addr = Register::Address<0x40024028,0xffffffe0,0,unsigned>;
        ///Hours value in the range of 0 to 23
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> hours{}; 
    }
    namespace Nonedom{    ///<Day of Month Register
        using Addr = Register::Address<0x4002402c,0xffffffe0,0,unsigned>;
        ///Day of month value in the range of 1 to 28, 29, 30, or 31 (depending on the month and whether it is a leap year).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dom{}; 
    }
    namespace Nonedow{    ///<Day of Week Register
        using Addr = Register::Address<0x40024030,0xfffffff8,0,unsigned>;
        ///Day of week value in the range of 0 to 6.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dow{}; 
    }
    namespace Nonedoy{    ///<Day of Year Register
        using Addr = Register::Address<0x40024034,0xfffffe00,0,unsigned>;
        ///Day of year value in the range of 1 to 365 (366 for leap years).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> doy{}; 
    }
    namespace Nonemonth{    ///<Months Register
        using Addr = Register::Address<0x40024038,0xfffffff0,0,unsigned>;
        ///Month value in the range of 1 to 12.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> month{}; 
    }
    namespace Noneyear{    ///<Years Register
        using Addr = Register::Address<0x4002403c,0xfffff000,0,unsigned>;
        ///Year value in the range of 0 to 4095.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> year{}; 
    }
    namespace Nonecalibration{    ///<Calibration Value Register
        using Addr = Register::Address<0x40024040,0xfffc0000,0,unsigned>;
        ///If enabled, the calibration counter counts up to this value. The maximum value is 131, 072 corresponding to about 36.4 hours. Calibration is disabled if CALVAL = 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> calval{}; 
        ///Calibration direction
        enum class caldirVal {
            backwardCalibration=0x00000001,     ///<Backward calibration. When CALVAL is equal to the calibration counter, the RTC timers will stop incrementing for 1 second.
            forwardCalibration=0x00000000,     ///<Forward calibration. When CALVAL is equal to the calibration counter, the RTC timers will jump by 2 seconds.
        };
        namespace caldirValC{
            constexpr MPL::Value<caldirVal,caldirVal::backwardCalibration> backwardCalibration{};
            constexpr MPL::Value<caldirVal,caldirVal::forwardCalibration> forwardCalibration{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,caldirVal> caldir{}; 
    }
    namespace Nonegpreg0{    ///<General Purpose Register 0
        using Addr = Register::Address<0x40024044,0x00000000,0,unsigned>;
        ///General purpose storage.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
    }
    namespace Nonegpreg1{    ///<General Purpose Register 0
        using Addr = Register::Address<0x40024048,0x00000000,0,unsigned>;
        ///General purpose storage.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
    }
    namespace Nonegpreg2{    ///<General Purpose Register 0
        using Addr = Register::Address<0x4002404c,0x00000000,0,unsigned>;
        ///General purpose storage.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
    }
    namespace Nonegpreg3{    ///<General Purpose Register 0
        using Addr = Register::Address<0x40024050,0x00000000,0,unsigned>;
        ///General purpose storage.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
    }
    namespace Nonegpreg4{    ///<General Purpose Register 0
        using Addr = Register::Address<0x40024054,0x00000000,0,unsigned>;
        ///General purpose storage.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
    }
    namespace NonertcAux{    ///<RTC Auxiliary control register
        using Addr = Register::Address<0x4002405c,0xffffffaf,0,unsigned>;
        ///RTC Oscillator Fail detect flag. Read: this bit is set if the RTC oscillator stops, and when RTC power is first turned on. An interrupt will occur when this bit is set, the RTC_OSCFEN bit in RTC_AUXEN is a 1, and the RTC interrupt is enabled in the NVIC. Write: writing a 1 to this bit clears the flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rtcOscf{}; 
        ///When 0: the RTC_ALARM pin reflects the RTC alarm status. When 1: the RTC_ALARM pin indicates Deep Power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtcPdout{}; 
    }
    namespace NonertcAuxen{    ///<RTC Auxiliary Enable register
        using Addr = Register::Address<0x40024058,0xffffffef,0,unsigned>;
        ///Oscillator Fail Detect interrupt enable. When 0: the RTC Oscillator Fail detect interrupt is disabled. When 1: the RTC Oscillator Fail detect interrupt is enabled. See Section 30.6.2.5.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rtcOscfen{}; 
    }
    namespace Noneasec{    ///<Alarm value for Seconds
        using Addr = Register::Address<0x40024060,0xffffffc0,0,unsigned>;
        ///Seconds value in the range of 0 to 59
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> seconds{}; 
    }
    namespace Noneamin{    ///<Alarm value for Minutes
        using Addr = Register::Address<0x40024064,0xffffffc0,0,unsigned>;
        ///Minutes value in the range of 0 to 59
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> minutes{}; 
    }
    namespace Noneahrs{    ///<Alarm value for Hours
        using Addr = Register::Address<0x40024068,0xffffffe0,0,unsigned>;
        ///Hours value in the range of 0 to 23
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> hours{}; 
    }
    namespace Noneadom{    ///<Alarm value for Day of Month
        using Addr = Register::Address<0x4002406c,0xffffffe0,0,unsigned>;
        ///Day of month value in the range of 1 to 28, 29, 30, or 31 (depending on the month and whether it is a leap year).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dom{}; 
    }
    namespace Noneadow{    ///<Alarm value for Day of Week
        using Addr = Register::Address<0x40024070,0xfffffff8,0,unsigned>;
        ///Day of week value in the range of 0 to 6.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dow{}; 
    }
    namespace Noneadoy{    ///<Alarm value for Day of Year
        using Addr = Register::Address<0x40024074,0xfffffe00,0,unsigned>;
        ///Day of year value in the range of 1 to 365 (366 for leap years).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> doy{}; 
    }
    namespace Noneamon{    ///<Alarm value for Months
        using Addr = Register::Address<0x40024078,0xfffffff0,0,unsigned>;
        ///Month value in the range of 1 to 12.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> month{}; 
    }
    namespace Noneayrs{    ///<Alarm value for Year
        using Addr = Register::Address<0x4002407c,0xfffff000,0,unsigned>;
        ///Year value in the range of 0 to 4095.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> year{}; 
    }
    namespace Noneercontrol{    ///<Event Monitor/Recorder Control register. Contains bits that control actions for the event channels as well as for Event Monitor/Recorder setup.
        using Addr = Register::Address<0x40024084,0x3f0fc3f0,0,unsigned>;
        ///Interrupt and wakeup enable for channel 0.
        enum class intwakeEn0Val {
            noInterruptOrWake=0x00000000,     ///<No interrupt or wakeup will be generated by event channel 0.
            anEventInChannel=0x00000001,     ///<An event in channel 0 will trigger an (RTC) interrupt and a wake-up request.
        };
        namespace intwakeEn0ValC{
            constexpr MPL::Value<intwakeEn0Val,intwakeEn0Val::noInterruptOrWake> noInterruptOrWake{};
            constexpr MPL::Value<intwakeEn0Val,intwakeEn0Val::anEventInChannel> anEventInChannel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intwakeEn0Val> intwakeEn0{}; 
        ///Enables automatically clearing the RTC general purpose registers when an event occurs on channel 0.
        enum class gpclearEn0Val {
            nogpreg=0x00000000,     ///<Channel 0 has no influence on the general purpose registers.
            clrgpreg=0x00000001,     ///<An event in channel 0 will clear the general purpose registers asynchronously.
        };
        namespace gpclearEn0ValC{
            constexpr MPL::Value<gpclearEn0Val,gpclearEn0Val::nogpreg> nogpreg{};
            constexpr MPL::Value<gpclearEn0Val,gpclearEn0Val::clrgpreg> clrgpreg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,gpclearEn0Val> gpclearEn0{}; 
        ///Selects the polarity of an event on input pin RTC_EV0.
        enum class pol0Val {
            neg=0x00000000,     ///<A channel 0 event is defined as a negative edge on RTC_EV0.
            pos=0x00000001,     ///<A channel 0 event is defined as a positive edge on RTC_EV0.
        };
        namespace pol0ValC{
            constexpr MPL::Value<pol0Val,pol0Val::neg> neg{};
            constexpr MPL::Value<pol0Val,pol0Val::pos> pos{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pol0Val> pol0{}; 
        ///Event enable control for channel 0.[1]
        enum class ev0InputEnVal {
            disabled=0x00000000,     ///<Event 0 input is disabled and forced high internally.
            enabled=0x00000001,     ///<Event 0 input is enabled.
        };
        namespace ev0InputEnValC{
            constexpr MPL::Value<ev0InputEnVal,ev0InputEnVal::disabled> disabled{};
            constexpr MPL::Value<ev0InputEnVal,ev0InputEnVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ev0InputEnVal> ev0InputEn{}; 
        ///Interrupt and wakeup enable for channel 1.
        enum class intwakeEn1Val {
            noInterruptOrWake=0x00000000,     ///<No interrupt or wakeup will be generated by event channel 1.
            wakeup=0x00000001,     ///<An event in channel 1 will trigger an (RTC) interrupt and a wake-up request.
        };
        namespace intwakeEn1ValC{
            constexpr MPL::Value<intwakeEn1Val,intwakeEn1Val::noInterruptOrWake> noInterruptOrWake{};
            constexpr MPL::Value<intwakeEn1Val,intwakeEn1Val::wakeup> wakeup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,intwakeEn1Val> intwakeEn1{}; 
        ///Enables automatically clearing the RTC general purpose registers when an event occurs on channel 1.
        enum class gpclearEn1Val {
            nogpreg=0x00000000,     ///<Channel 1 has no influence on the general purpose registers.
            clrgpreg=0x00000001,     ///<A n event in channel 1 will clear the general purpose registers asynchronously.
        };
        namespace gpclearEn1ValC{
            constexpr MPL::Value<gpclearEn1Val,gpclearEn1Val::nogpreg> nogpreg{};
            constexpr MPL::Value<gpclearEn1Val,gpclearEn1Val::clrgpreg> clrgpreg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,gpclearEn1Val> gpclearEn1{}; 
        ///Selects the polarity of an event on input pin RTC_EV1.
        enum class pol1Val {
            neg=0x00000000,     ///<A channel 1 event is defined as a negative edge on RTC_EV1.
            pos=0x00000001,     ///<A channel 1 event is defined as a positive edge on RTC_EV1.
        };
        namespace pol1ValC{
            constexpr MPL::Value<pol1Val,pol1Val::neg> neg{};
            constexpr MPL::Value<pol1Val,pol1Val::pos> pos{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pol1Val> pol1{}; 
        ///Event enable control for channel 1.[1]
        enum class ev1InputEnVal {
            disabled=0x00000000,     ///<Event 1 input is disabled and forced high internally.
            enabled=0x00000001,     ///<Event 1 input is enabled.
        };
        namespace ev1InputEnValC{
            constexpr MPL::Value<ev1InputEnVal,ev1InputEnVal::disabled> disabled{};
            constexpr MPL::Value<ev1InputEnVal,ev1InputEnVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ev1InputEnVal> ev1InputEn{}; 
        ///Interrupt and wakeup enable for channel 2.
        enum class intwakeEn2Val {
            noInterruptOrWake=0x00000000,     ///<No interrupt or wakeup will be generated by event channel 2.
            wakeup=0x00000001,     ///<An event in channel 2 will trigger an (RTC) interrupt and a wake-up request.
        };
        namespace intwakeEn2ValC{
            constexpr MPL::Value<intwakeEn2Val,intwakeEn2Val::noInterruptOrWake> noInterruptOrWake{};
            constexpr MPL::Value<intwakeEn2Val,intwakeEn2Val::wakeup> wakeup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,intwakeEn2Val> intwakeEn2{}; 
        ///Enables automatically clearing the RTC general purpose registers when an event occurs on channel 2.
        enum class gpclearEn2Val {
            nogpreg=0x00000000,     ///<Channel 2 has no influence on the general purpose registers.
            clrgpreg=0x00000001,     ///<An event in channel 2 will clear the general purpose registers asynchronously.
        };
        namespace gpclearEn2ValC{
            constexpr MPL::Value<gpclearEn2Val,gpclearEn2Val::nogpreg> nogpreg{};
            constexpr MPL::Value<gpclearEn2Val,gpclearEn2Val::clrgpreg> clrgpreg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,gpclearEn2Val> gpclearEn2{}; 
        ///Selects the polarity of an event on input pin RTC_EV2.
        enum class pol2Val {
            neg=0x00000000,     ///<A channel 2 event is defined as a negative edge on RTC_EV2.
            pos=0x00000001,     ///<A channel 2 event is defined as a positive edge on RTC_EV2.
        };
        namespace pol2ValC{
            constexpr MPL::Value<pol2Val,pol2Val::neg> neg{};
            constexpr MPL::Value<pol2Val,pol2Val::pos> pos{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,pol2Val> pol2{}; 
        ///Event enable control for channel 2.[1]
        enum class ev2InputEnVal {
            disabled=0x00000000,     ///<Event 2 input is disabled and forced high internally.
            enabled=0x00000001,     ///<Event 2 input is enabled.
        };
        namespace ev2InputEnValC{
            constexpr MPL::Value<ev2InputEnVal,ev2InputEnVal::disabled> disabled{};
            constexpr MPL::Value<ev2InputEnVal,ev2InputEnVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ev2InputEnVal> ev2InputEn{}; 
        ///Controls enabling the Event Monitor/Recorder and selecting its operating frequency.[2]
        enum class ermodeVal {
            disabled=0x00000000,     ///<Event Monitor/Recorder clocks are disabled. Operation of the Event Monitor/Recorder is disabled except for asynchronous clearing of GP registers if selected.
            enableEventMonitor16hz=0x00000001,     ///<Enable Event Monitor/Recorder and select a 16 Hz sample clock for event input edge detection and glitch suppression. Pulses (in either direction) shorter than 62.5 ms to 125 ms will be filtered out.
            enableEventMonitor64hz=0x00000002,     ///<Enable Event Monitor/Recorder and select a 64 Hz sample clock for event input edge detection and glitch suppression. Pulses (in either direction) shorter than 15.6 ms to 31.2 ms will be filtered out.
            enableEventMonitor1khz=0x00000003,     ///<Enable Event Monitor/Recorder and select a 1 kHz sample clock for event input edge detection and glitch suppression. Pulses (in either direction) shorter than 1 ms to 2 ms will be filtered out.
        };
        namespace ermodeValC{
            constexpr MPL::Value<ermodeVal,ermodeVal::disabled> disabled{};
            constexpr MPL::Value<ermodeVal,ermodeVal::enableEventMonitor16hz> enableEventMonitor16hz{};
            constexpr MPL::Value<ermodeVal,ermodeVal::enableEventMonitor64hz> enableEventMonitor64hz{};
            constexpr MPL::Value<ermodeVal,ermodeVal::enableEventMonitor1khz> enableEventMonitor1khz{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,ermodeVal> ermode{}; 
    }
    namespace Noneerstatus{    ///<Event Monitor/Recorder Status register. Contains status flags for event channels and other Event Monitor/Recorder conditions.
        using Addr = Register::Address<0x40024080,0x7ffffff0,0,unsigned>;
        ///Event flag for channel 0 (RTC_EV0 pin). Set at the end of any second if there has been an event during the preceding second. This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class ev0Val {
            noEventChangeOnC=0x00000000,     ///<No event change on channel 0.
            atLeastOneEventH=0x00000001,     ///<At least one event has occurred on channel 0.
        };
        namespace ev0ValC{
            constexpr MPL::Value<ev0Val,ev0Val::noEventChangeOnC> noEventChangeOnC{};
            constexpr MPL::Value<ev0Val,ev0Val::atLeastOneEventH> atLeastOneEventH{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ev0Val> ev0{}; 
        ///Event flag for channel 1 (RTC_EV1 pin). Set at the end of any second if there has been an event during the preceding second. This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class ev1Val {
            noEventChangeOnC=0x00000000,     ///<No event change on channel 1.
            atLeastOneEventH=0x00000001,     ///<At least one event has occurred on channel 1.
        };
        namespace ev1ValC{
            constexpr MPL::Value<ev1Val,ev1Val::noEventChangeOnC> noEventChangeOnC{};
            constexpr MPL::Value<ev1Val,ev1Val::atLeastOneEventH> atLeastOneEventH{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ev1Val> ev1{}; 
        ///Event flag for channel 2 (RTC_EV2 pin). Set at the end of any second if there has been an event during the preceding second. This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class ev2Val {
            noEventChangeOnC=0x00000000,     ///<No event change on channel 2.
            atLeastOneEventH=0x00000001,     ///<At least one event has occurred on channel 2.
        };
        namespace ev2ValC{
            constexpr MPL::Value<ev2Val,ev2Val::noEventChangeOnC> noEventChangeOnC{};
            constexpr MPL::Value<ev2Val,ev2Val::atLeastOneEventH> atLeastOneEventH{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ev2Val> ev2{}; 
        ///General purpose register asynchronous clear flag. This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class gpClearedVal {
            nogpclr=0x00000000,     ///<General purpose registers have not been asynchronous cleared.
            gpclr=0x00000001,     ///<General purpose registers have been asynchronous cleared.
        };
        namespace gpClearedValC{
            constexpr MPL::Value<gpClearedVal,gpClearedVal::nogpclr> nogpclr{};
            constexpr MPL::Value<gpClearedVal,gpClearedVal::gpclr> gpclr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,gpClearedVal> gpCleared{}; 
        ///Interrupt/wakeup request flag (Read-only). This bit is cleared by writing a 1 to it. Writing 0 has no effect.
        enum class wakeupVal {
            noInterruptwakeup=0x00000000,     ///<No interrupt/wakeup request is pending
            intwakeupPend=0x00000001,     ///<An interrupt/wakeup request is pending.
        };
        namespace wakeupValC{
            constexpr MPL::Value<wakeupVal,wakeupVal::noInterruptwakeup> noInterruptwakeup{};
            constexpr MPL::Value<wakeupVal,wakeupVal::intwakeupPend> intwakeupPend{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,wakeupVal> wakeup{}; 
    }
    namespace Noneercounters{    ///<Event Monitor/Recorder Counters register. Allows reading the counters associated with the event channels.
        using Addr = Register::Address<0x40024088,0xfff8f8f8,0,unsigned>;
        ///Value of the counter for event 0. If the counter reaches full count (the value 7), it remains there if additional events occur. This counter is cleared when the corresponding EVx bit in the ERSTATUS register is cleared by software.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> counter0{}; 
        ///Value of the counter for event 1. See description for COUNTER0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> counter1{}; 
        ///Value of the counter for event 2. See description for COUNTER0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> counter2{}; 
    }
    namespace Noneerfirststamp0{    ///<Event Monitor/Recorder First Stamp register for channel 0. Retains the time stamp for the first event on channel 0.
        using Addr = Register::Address<0x40024090,0xfc000000,0,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Minutes value in the range of 0 to 59.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        ///Hours value in the range of 0 to 23.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
    }
    namespace Noneerfirststamp1{    ///<Event Monitor/Recorder First Stamp register for channel 0. Retains the time stamp for the first event on channel 0.
        using Addr = Register::Address<0x40024094,0xfc000000,0,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Minutes value in the range of 0 to 59.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        ///Hours value in the range of 0 to 23.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
    }
    namespace Noneerfirststamp2{    ///<Event Monitor/Recorder First Stamp register for channel 0. Retains the time stamp for the first event on channel 0.
        using Addr = Register::Address<0x40024098,0xfc000000,0,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Minutes value in the range of 0 to 59.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        ///Hours value in the range of 0 to 23.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
    }
    namespace Noneerlaststamp0{    ///<Event Monitor/Recorder Last Stamp register for channel 0. Retains the time stamp for the last (i.e. most recent) event on channel 0.
        using Addr = Register::Address<0x400240a0,0xfc000000,0,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Minutes value in the range of 0 to 59.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        ///Hours value in the range of 0 to 23.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
    }
    namespace Noneerlaststamp1{    ///<Event Monitor/Recorder Last Stamp register for channel 0. Retains the time stamp for the last (i.e. most recent) event on channel 0.
        using Addr = Register::Address<0x400240a4,0xfc000000,0,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Minutes value in the range of 0 to 59.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        ///Hours value in the range of 0 to 23.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
    }
    namespace Noneerlaststamp2{    ///<Event Monitor/Recorder Last Stamp register for channel 0. Retains the time stamp for the last (i.e. most recent) event on channel 0.
        using Addr = Register::Address<0x400240a8,0xfc000000,0,unsigned>;
        ///Seconds value in the range of 0 to 59.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Minutes value in the range of 0 to 59.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> min{}; 
        ///Hours value in the range of 0 to 23.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Day of Year value in the range of 1 to 366.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> doy{}; 
    }
}
