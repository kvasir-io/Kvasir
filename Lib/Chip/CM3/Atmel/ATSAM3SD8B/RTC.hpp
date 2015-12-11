#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real-time Clock
    namespace RtcCr{    ///<Control Register
        using Addr = Register::Address<0x400e1460,0xfffcfcfc,0,unsigned>;
        ///Update Request Time Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> updtim{}; 
        ///Update Request Calendar Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updcal{}; 
        ///Time Event Selection
        enum class TimevselVal {
            minute=0x00000000,     ///<Minute change
            hour=0x00000001,     ///<Hour change
            midnight=0x00000002,     ///<Every day at midnight
            noon=0x00000003,     ///<Every day at noon
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,TimevselVal> timevsel{}; 
        namespace TimevselValC{
            constexpr Register::FieldValue<decltype(timevsel)::Type,TimevselVal::minute> minute{};
            constexpr Register::FieldValue<decltype(timevsel)::Type,TimevselVal::hour> hour{};
            constexpr Register::FieldValue<decltype(timevsel)::Type,TimevselVal::midnight> midnight{};
            constexpr Register::FieldValue<decltype(timevsel)::Type,TimevselVal::noon> noon{};
        }
        }
        ///Calendar Event Selection
        enum class CalevselVal {
            week=0x00000000,     ///<Week change (every Monday at time 00:00:00)
            month=0x00000001,     ///<Month change (every 01 of each month at time 00:00:00)
            year=0x00000002,     ///<Year change (every January 1 at time 00:00:00)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,CalevselVal> calevsel{}; 
        namespace CalevselValC{
            constexpr Register::FieldValue<decltype(calevsel)::Type,CalevselVal::week> week{};
            constexpr Register::FieldValue<decltype(calevsel)::Type,CalevselVal::month> month{};
            constexpr Register::FieldValue<decltype(calevsel)::Type,CalevselVal::year> year{};
        }
        }
    }
    namespace RtcMr{    ///<Mode Register
        using Addr = Register::Address<0x400e1464,0xc88800ec,0,unsigned>;
        ///12-/24-hour Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hrmod{}; 
        ///PERSIAN Calendar
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> persian{}; 
        ///NEGative PPM Correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> negppm{}; 
        ///Slow Clock Correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> correction{}; 
        ///HIGH PPM Correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> highppm{}; 
        ///RTCOUT0 Output Source Selection
        enum class Out0Val {
            noWave=0x00000000,     ///<no waveform, stuck at '0'
            freq1hz=0x00000001,     ///<1 Hz square wave
            freq32hz=0x00000002,     ///<32 Hz square wave
            freq64hz=0x00000003,     ///<64 Hz square wave
            freq512hz=0x00000004,     ///<512 Hz square wave
            alarmToggle=0x00000005,     ///<output toggles when alarm flag rises
            alarmFlag=0x00000006,     ///<output is a copy of the alarm flag
            progPulse=0x00000007,     ///<duty cycle programmable pulse
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,Out0Val> out0{}; 
        namespace Out0ValC{
            constexpr Register::FieldValue<decltype(out0)::Type,Out0Val::noWave> noWave{};
            constexpr Register::FieldValue<decltype(out0)::Type,Out0Val::freq1hz> freq1hz{};
            constexpr Register::FieldValue<decltype(out0)::Type,Out0Val::freq32hz> freq32hz{};
            constexpr Register::FieldValue<decltype(out0)::Type,Out0Val::freq64hz> freq64hz{};
            constexpr Register::FieldValue<decltype(out0)::Type,Out0Val::freq512hz> freq512hz{};
            constexpr Register::FieldValue<decltype(out0)::Type,Out0Val::alarmToggle> alarmToggle{};
            constexpr Register::FieldValue<decltype(out0)::Type,Out0Val::alarmFlag> alarmFlag{};
            constexpr Register::FieldValue<decltype(out0)::Type,Out0Val::progPulse> progPulse{};
        }
        }
        ///RTCOUT1 Output Source Selection
        enum class Out1Val {
            noWave=0x00000000,     ///<no waveform, stuck at '0'
            freq1hz=0x00000001,     ///<1 Hz square wave
            freq32hz=0x00000002,     ///<32 Hz square wave
            freq64hz=0x00000003,     ///<64 Hz square wave
            freq512hz=0x00000004,     ///<512 Hz square wave
            alarmToggle=0x00000005,     ///<output toggles when alarm flag rises
            alarmFlag=0x00000006,     ///<output is a copy of the alarm flag
            progPulse=0x00000007,     ///<duty cycle programmable pulse
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,Out1Val> out1{}; 
        namespace Out1ValC{
            constexpr Register::FieldValue<decltype(out1)::Type,Out1Val::noWave> noWave{};
            constexpr Register::FieldValue<decltype(out1)::Type,Out1Val::freq1hz> freq1hz{};
            constexpr Register::FieldValue<decltype(out1)::Type,Out1Val::freq32hz> freq32hz{};
            constexpr Register::FieldValue<decltype(out1)::Type,Out1Val::freq64hz> freq64hz{};
            constexpr Register::FieldValue<decltype(out1)::Type,Out1Val::freq512hz> freq512hz{};
            constexpr Register::FieldValue<decltype(out1)::Type,Out1Val::alarmToggle> alarmToggle{};
            constexpr Register::FieldValue<decltype(out1)::Type,Out1Val::alarmFlag> alarmFlag{};
            constexpr Register::FieldValue<decltype(out1)::Type,Out1Val::progPulse> progPulse{};
        }
        }
        ///High Duration of the Output Pulse
        enum class ThighVal {
            h31ms=0x00000000,     ///<31.2 ms
            h16ms=0x00000001,     ///<15.6 ms
            h4ms=0x00000002,     ///<3.91 ms
            h976us=0x00000003,     ///<976 us
            h488us=0x00000004,     ///<488 us
            h122us=0x00000005,     ///<122 us
            h30us=0x00000006,     ///<30.5 us
            h15us=0x00000007,     ///<15.2 us
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,ThighVal> thigh{}; 
        namespace ThighValC{
            constexpr Register::FieldValue<decltype(thigh)::Type,ThighVal::h31ms> h31ms{};
            constexpr Register::FieldValue<decltype(thigh)::Type,ThighVal::h16ms> h16ms{};
            constexpr Register::FieldValue<decltype(thigh)::Type,ThighVal::h4ms> h4ms{};
            constexpr Register::FieldValue<decltype(thigh)::Type,ThighVal::h976us> h976us{};
            constexpr Register::FieldValue<decltype(thigh)::Type,ThighVal::h488us> h488us{};
            constexpr Register::FieldValue<decltype(thigh)::Type,ThighVal::h122us> h122us{};
            constexpr Register::FieldValue<decltype(thigh)::Type,ThighVal::h30us> h30us{};
            constexpr Register::FieldValue<decltype(thigh)::Type,ThighVal::h15us> h15us{};
        }
        }
        ///Period of the Output Pulse
        enum class TperiodVal {
            p1s=0x00000000,     ///<1 second
            p500ms=0x00000001,     ///<500 ms
            p250ms=0x00000002,     ///<250 ms
            p125ms=0x00000003,     ///<125 ms
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,TperiodVal> tperiod{}; 
        namespace TperiodValC{
            constexpr Register::FieldValue<decltype(tperiod)::Type,TperiodVal::p1s> p1s{};
            constexpr Register::FieldValue<decltype(tperiod)::Type,TperiodVal::p500ms> p500ms{};
            constexpr Register::FieldValue<decltype(tperiod)::Type,TperiodVal::p250ms> p250ms{};
            constexpr Register::FieldValue<decltype(tperiod)::Type,TperiodVal::p125ms> p125ms{};
        }
        }
    }
    namespace RtcTimr{    ///<Time Register
        using Addr = Register::Address<0x400e1468,0xff808080,0,unsigned>;
        ///Current Second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Current Minute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> min{}; 
        ///Current Hour
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Ante Meridiem Post Meridiem Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ampm{}; 
    }
    namespace RtcCalr{    ///<Calendar Register
        using Addr = Register::Address<0x400e146c,0xc0000080,0,unsigned>;
        ///Current Century
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> cent{}; 
        ///Current Year
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> year{}; 
        ///Current Month
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> month{}; 
        ///Current Day in Current Week
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> day{}; 
        ///Current Day in Current Month
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> date{}; 
    }
    namespace RtcTimalr{    ///<Time Alarm Register
        using Addr = Register::Address<0x400e1470,0xff000000,0,unsigned>;
        ///Second Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Second Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> secen{}; 
        ///Minute Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> min{}; 
        ///Minute Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> minen{}; 
        ///Hour Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> hour{}; 
        ///AM/PM Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ampm{}; 
        ///Hour Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> houren{}; 
    }
    namespace RtcCalalr{    ///<Calendar Alarm Register
        using Addr = Register::Address<0x400e1474,0x4060ffff,0,unsigned>;
        ///Month Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> month{}; 
        ///Month Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mthen{}; 
        ///Date Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> date{}; 
        ///Date Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dateen{}; 
    }
    namespace RtcSr{    ///<Status Register
        using Addr = Register::Address<0x400e1478,0xffffffc0,0,unsigned>;
        ///Acknowledge for Update
        enum class AckupdVal {
            freerun=0x00000000,     ///<Time and calendar registers cannot be updated.
            update=0x00000001,     ///<Time and calendar registers can be updated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,AckupdVal> ackupd{}; 
        namespace AckupdValC{
            constexpr Register::FieldValue<decltype(ackupd)::Type,AckupdVal::freerun> freerun{};
            constexpr Register::FieldValue<decltype(ackupd)::Type,AckupdVal::update> update{};
        }
        }
        ///Alarm Flag
        enum class AlarmVal {
            noAlarmevent=0x00000000,     ///<No alarm matching condition occurred.
            alarmevent=0x00000001,     ///<An alarm matching condition has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AlarmVal> alarm{}; 
        namespace AlarmValC{
            constexpr Register::FieldValue<decltype(alarm)::Type,AlarmVal::noAlarmevent> noAlarmevent{};
            constexpr Register::FieldValue<decltype(alarm)::Type,AlarmVal::alarmevent> alarmevent{};
        }
        }
        ///Second Event
        enum class SecVal {
            noSecevent=0x00000000,     ///<No second event has occurred since the last clear.
            secevent=0x00000001,     ///<At least one second event has occurred since the last clear.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SecVal> sec{}; 
        namespace SecValC{
            constexpr Register::FieldValue<decltype(sec)::Type,SecVal::noSecevent> noSecevent{};
            constexpr Register::FieldValue<decltype(sec)::Type,SecVal::secevent> secevent{};
        }
        }
        ///Time Event
        enum class TimevVal {
            noTimevent=0x00000000,     ///<No time event has occurred since the last clear.
            timevent=0x00000001,     ///<At least one time event has occurred since the last clear.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TimevVal> timev{}; 
        namespace TimevValC{
            constexpr Register::FieldValue<decltype(timev)::Type,TimevVal::noTimevent> noTimevent{};
            constexpr Register::FieldValue<decltype(timev)::Type,TimevVal::timevent> timevent{};
        }
        }
        ///Calendar Event
        enum class CalevVal {
            noCalevent=0x00000000,     ///<No calendar event has occurred since the last clear.
            calevent=0x00000001,     ///<At least one calendar event has occurred since the last clear.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CalevVal> calev{}; 
        namespace CalevValC{
            constexpr Register::FieldValue<decltype(calev)::Type,CalevVal::noCalevent> noCalevent{};
            constexpr Register::FieldValue<decltype(calev)::Type,CalevVal::calevent> calevent{};
        }
        }
        ///Time and/or Date Free Running Error
        enum class TderrVal {
            correct=0x00000000,     ///<The internal free running counters are carrying valid values since the last read of RTC_SR.
            errTimedate=0x00000001,     ///<The internal free running counters have been corrupted (invalid date or time, non-BCD values) since the last read and/or they are still invalid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TderrVal> tderr{}; 
        namespace TderrValC{
            constexpr Register::FieldValue<decltype(tderr)::Type,TderrVal::correct> correct{};
            constexpr Register::FieldValue<decltype(tderr)::Type,TderrVal::errTimedate> errTimedate{};
        }
        }
    }
    namespace RtcSccr{    ///<Status Clear Command Register
        using Addr = Register::Address<0x400e147c,0xffffffc0,0,unsigned>;
        ///Acknowledge Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ackclr{}; 
        ///Alarm Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alrclr{}; 
        ///Second Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> secclr{}; 
        ///Time Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timclr{}; 
        ///Calendar Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> calclr{}; 
        ///Time and/or Date Free Running Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tderrclr{}; 
    }
    namespace RtcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x400e1480,0xffffffc0,0,unsigned>;
        ///Acknowledge Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> acken{}; 
        ///Alarm Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alren{}; 
        ///Second Event Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> secen{}; 
        ///Time Event Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timen{}; 
        ///Calendar Event Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> calen{}; 
        ///Time and/or Date Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tderren{}; 
    }
    namespace RtcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x400e1484,0xffffffc0,0,unsigned>;
        ///Acknowledge Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ackdis{}; 
        ///Alarm Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alrdis{}; 
        ///Second Event Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> secdis{}; 
        ///Time Event Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timdis{}; 
        ///Calendar Event Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> caldis{}; 
        ///Time and/or Date Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tderrdis{}; 
    }
    namespace RtcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400e1488,0xffffffe0,0,unsigned>;
        ///Acknowledge Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Alarm Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alr{}; 
        ///Second Event Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Time Event Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim{}; 
        ///Calendar Event Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cal{}; 
    }
    namespace RtcVer{    ///<Valid Entry Register
        using Addr = Register::Address<0x400e148c,0xfffffff0,0,unsigned>;
        ///Non-valid Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nvtim{}; 
        ///Non-valid Calendar
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nvcal{}; 
        ///Non-valid Time Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nvtimalr{}; 
        ///Non-valid Calendar Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nvcalalr{}; 
    }
}
