#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real-time Clock
    namespace RtcCr{    ///<Control Register
        using Addr = Register::Address<0x400e1460,0xfffcfcfc,0,unsigned>;
        ///Update Request Time Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> updtim{}; 
        ///Update Request Calendar Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updcal{}; 
        ///Time Event Selection
        enum class timevselVal {
            minute=0x00000000,     ///<Minute change
            hour=0x00000001,     ///<Hour change
            midnight=0x00000002,     ///<Every day at midnight
            noon=0x00000003,     ///<Every day at noon
        };
        namespace timevselValC{
            constexpr MPL::Value<timevselVal,timevselVal::minute> minute{};
            constexpr MPL::Value<timevselVal,timevselVal::hour> hour{};
            constexpr MPL::Value<timevselVal,timevselVal::midnight> midnight{};
            constexpr MPL::Value<timevselVal,timevselVal::noon> noon{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,timevselVal> timevsel{}; 
        ///Calendar Event Selection
        enum class calevselVal {
            week=0x00000000,     ///<Week change (every Monday at time 00:00:00)
            month=0x00000001,     ///<Month change (every 01 of each month at time 00:00:00)
            year=0x00000002,     ///<Year change (every January 1 at time 00:00:00)
        };
        namespace calevselValC{
            constexpr MPL::Value<calevselVal,calevselVal::week> week{};
            constexpr MPL::Value<calevselVal,calevselVal::month> month{};
            constexpr MPL::Value<calevselVal,calevselVal::year> year{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,calevselVal> calevsel{}; 
    }
    namespace RtcMr{    ///<Mode Register
        using Addr = Register::Address<0x400e1464,0xc88800ec,0,unsigned>;
        ///12-/24-hour Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hrmod{}; 
        ///PERSIAN Calendar
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> persian{}; 
        ///NEGative PPM Correction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> negppm{}; 
        ///Slow Clock Correction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> correction{}; 
        ///HIGH PPM Correction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> highppm{}; 
        ///RTCOUT0 Output Source Selection
        enum class out0Val {
            noWave=0x00000000,     ///<no waveform, stuck at '0'
            freq1hz=0x00000001,     ///<1 Hz square wave
            freq32hz=0x00000002,     ///<32 Hz square wave
            freq64hz=0x00000003,     ///<64 Hz square wave
            freq512hz=0x00000004,     ///<512 Hz square wave
            alarmToggle=0x00000005,     ///<output toggles when alarm flag rises
            alarmFlag=0x00000006,     ///<output is a copy of the alarm flag
            progPulse=0x00000007,     ///<duty cycle programmable pulse
        };
        namespace out0ValC{
            constexpr MPL::Value<out0Val,out0Val::noWave> noWave{};
            constexpr MPL::Value<out0Val,out0Val::freq1hz> freq1hz{};
            constexpr MPL::Value<out0Val,out0Val::freq32hz> freq32hz{};
            constexpr MPL::Value<out0Val,out0Val::freq64hz> freq64hz{};
            constexpr MPL::Value<out0Val,out0Val::freq512hz> freq512hz{};
            constexpr MPL::Value<out0Val,out0Val::alarmToggle> alarmToggle{};
            constexpr MPL::Value<out0Val,out0Val::alarmFlag> alarmFlag{};
            constexpr MPL::Value<out0Val,out0Val::progPulse> progPulse{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,out0Val> out0{}; 
        ///RTCOUT1 Output Source Selection
        enum class out1Val {
            noWave=0x00000000,     ///<no waveform, stuck at '0'
            freq1hz=0x00000001,     ///<1 Hz square wave
            freq32hz=0x00000002,     ///<32 Hz square wave
            freq64hz=0x00000003,     ///<64 Hz square wave
            freq512hz=0x00000004,     ///<512 Hz square wave
            alarmToggle=0x00000005,     ///<output toggles when alarm flag rises
            alarmFlag=0x00000006,     ///<output is a copy of the alarm flag
            progPulse=0x00000007,     ///<duty cycle programmable pulse
        };
        namespace out1ValC{
            constexpr MPL::Value<out1Val,out1Val::noWave> noWave{};
            constexpr MPL::Value<out1Val,out1Val::freq1hz> freq1hz{};
            constexpr MPL::Value<out1Val,out1Val::freq32hz> freq32hz{};
            constexpr MPL::Value<out1Val,out1Val::freq64hz> freq64hz{};
            constexpr MPL::Value<out1Val,out1Val::freq512hz> freq512hz{};
            constexpr MPL::Value<out1Val,out1Val::alarmToggle> alarmToggle{};
            constexpr MPL::Value<out1Val,out1Val::alarmFlag> alarmFlag{};
            constexpr MPL::Value<out1Val,out1Val::progPulse> progPulse{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,out1Val> out1{}; 
        ///High Duration of the Output Pulse
        enum class thighVal {
            h31ms=0x00000000,     ///<31.2 ms
            h16ms=0x00000001,     ///<15.6 ms
            h4ms=0x00000002,     ///<3.91 ms
            h976us=0x00000003,     ///<976 us
            h488us=0x00000004,     ///<488 us
            h122us=0x00000005,     ///<122 us
            h30us=0x00000006,     ///<30.5 us
            h15us=0x00000007,     ///<15.2 us
        };
        namespace thighValC{
            constexpr MPL::Value<thighVal,thighVal::h31ms> h31ms{};
            constexpr MPL::Value<thighVal,thighVal::h16ms> h16ms{};
            constexpr MPL::Value<thighVal,thighVal::h4ms> h4ms{};
            constexpr MPL::Value<thighVal,thighVal::h976us> h976us{};
            constexpr MPL::Value<thighVal,thighVal::h488us> h488us{};
            constexpr MPL::Value<thighVal,thighVal::h122us> h122us{};
            constexpr MPL::Value<thighVal,thighVal::h30us> h30us{};
            constexpr MPL::Value<thighVal,thighVal::h15us> h15us{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,thighVal> thigh{}; 
        ///Period of the Output Pulse
        enum class tperiodVal {
            p1s=0x00000000,     ///<1 second
            p500ms=0x00000001,     ///<500 ms
            p250ms=0x00000002,     ///<250 ms
            p125ms=0x00000003,     ///<125 ms
        };
        namespace tperiodValC{
            constexpr MPL::Value<tperiodVal,tperiodVal::p1s> p1s{};
            constexpr MPL::Value<tperiodVal,tperiodVal::p500ms> p500ms{};
            constexpr MPL::Value<tperiodVal,tperiodVal::p250ms> p250ms{};
            constexpr MPL::Value<tperiodVal,tperiodVal::p125ms> p125ms{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,tperiodVal> tperiod{}; 
    }
    namespace RtcTimr{    ///<Time Register
        using Addr = Register::Address<0x400e1468,0xff808080,0,unsigned>;
        ///Current Second
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Current Minute
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> min{}; 
        ///Current Hour
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Ante Meridiem Post Meridiem Indicator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ampm{}; 
    }
    namespace RtcCalr{    ///<Calendar Register
        using Addr = Register::Address<0x400e146c,0xc0000080,0,unsigned>;
        ///Current Century
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> cent{}; 
        ///Current Year
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> year{}; 
        ///Current Month
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> month{}; 
        ///Current Day in Current Week
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> day{}; 
        ///Current Day in Current Month
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> date{}; 
    }
    namespace RtcTimalr{    ///<Time Alarm Register
        using Addr = Register::Address<0x400e1470,0xff000000,0,unsigned>;
        ///Second Alarm
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Second Alarm Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> secen{}; 
        ///Minute Alarm
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> min{}; 
        ///Minute Alarm Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> minen{}; 
        ///Hour Alarm
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> hour{}; 
        ///AM/PM Indicator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ampm{}; 
        ///Hour Alarm Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> houren{}; 
    }
    namespace RtcCalalr{    ///<Calendar Alarm Register
        using Addr = Register::Address<0x400e1474,0x4060ffff,0,unsigned>;
        ///Month Alarm
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> month{}; 
        ///Month Alarm Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mthen{}; 
        ///Date Alarm
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> date{}; 
        ///Date Alarm Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dateen{}; 
    }
    namespace RtcSr{    ///<Status Register
        using Addr = Register::Address<0x400e1478,0xffffffc0,0,unsigned>;
        ///Acknowledge for Update
        enum class ackupdVal {
            freerun=0x00000000,     ///<Time and calendar registers cannot be updated.
            update=0x00000001,     ///<Time and calendar registers can be updated.
        };
        namespace ackupdValC{
            constexpr MPL::Value<ackupdVal,ackupdVal::freerun> freerun{};
            constexpr MPL::Value<ackupdVal,ackupdVal::update> update{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ackupdVal> ackupd{}; 
        ///Alarm Flag
        enum class alarmVal {
            noAlarmevent=0x00000000,     ///<No alarm matching condition occurred.
            alarmevent=0x00000001,     ///<An alarm matching condition has occurred.
        };
        namespace alarmValC{
            constexpr MPL::Value<alarmVal,alarmVal::noAlarmevent> noAlarmevent{};
            constexpr MPL::Value<alarmVal,alarmVal::alarmevent> alarmevent{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,alarmVal> alarm{}; 
        ///Second Event
        enum class secVal {
            noSecevent=0x00000000,     ///<No second event has occurred since the last clear.
            secevent=0x00000001,     ///<At least one second event has occurred since the last clear.
        };
        namespace secValC{
            constexpr MPL::Value<secVal,secVal::noSecevent> noSecevent{};
            constexpr MPL::Value<secVal,secVal::secevent> secevent{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,secVal> sec{}; 
        ///Time Event
        enum class timevVal {
            noTimevent=0x00000000,     ///<No time event has occurred since the last clear.
            timevent=0x00000001,     ///<At least one time event has occurred since the last clear.
        };
        namespace timevValC{
            constexpr MPL::Value<timevVal,timevVal::noTimevent> noTimevent{};
            constexpr MPL::Value<timevVal,timevVal::timevent> timevent{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,timevVal> timev{}; 
        ///Calendar Event
        enum class calevVal {
            noCalevent=0x00000000,     ///<No calendar event has occurred since the last clear.
            calevent=0x00000001,     ///<At least one calendar event has occurred since the last clear.
        };
        namespace calevValC{
            constexpr MPL::Value<calevVal,calevVal::noCalevent> noCalevent{};
            constexpr MPL::Value<calevVal,calevVal::calevent> calevent{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,calevVal> calev{}; 
        ///Time and/or Date Free Running Error
        enum class tderrVal {
            correct=0x00000000,     ///<The internal free running counters are carrying valid values since the last read of RTC_SR.
            errTimedate=0x00000001,     ///<The internal free running counters have been corrupted (invalid date or time, non-BCD values) since the last read and/or they are still invalid.
        };
        namespace tderrValC{
            constexpr MPL::Value<tderrVal,tderrVal::correct> correct{};
            constexpr MPL::Value<tderrVal,tderrVal::errTimedate> errTimedate{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,tderrVal> tderr{}; 
    }
    namespace RtcSccr{    ///<Status Clear Command Register
        using Addr = Register::Address<0x400e147c,0xffffffc0,0,unsigned>;
        ///Acknowledge Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ackclr{}; 
        ///Alarm Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alrclr{}; 
        ///Second Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> secclr{}; 
        ///Time Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timclr{}; 
        ///Calendar Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> calclr{}; 
        ///Time and/or Date Free Running Error Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tderrclr{}; 
    }
    namespace RtcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x400e1480,0xffffffc0,0,unsigned>;
        ///Acknowledge Update Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> acken{}; 
        ///Alarm Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alren{}; 
        ///Second Event Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> secen{}; 
        ///Time Event Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timen{}; 
        ///Calendar Event Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> calen{}; 
        ///Time and/or Date Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tderren{}; 
    }
    namespace RtcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x400e1484,0xffffffc0,0,unsigned>;
        ///Acknowledge Update Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ackdis{}; 
        ///Alarm Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alrdis{}; 
        ///Second Event Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> secdis{}; 
        ///Time Event Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timdis{}; 
        ///Calendar Event Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> caldis{}; 
        ///Time and/or Date Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tderrdis{}; 
    }
    namespace RtcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400e1488,0xffffffe0,0,unsigned>;
        ///Acknowledge Update Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Alarm Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alr{}; 
        ///Second Event Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Time Event Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim{}; 
        ///Calendar Event Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cal{}; 
    }
    namespace RtcVer{    ///<Valid Entry Register
        using Addr = Register::Address<0x400e148c,0xfffffff0,0,unsigned>;
        ///Non-valid Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nvtim{}; 
        ///Non-valid Calendar
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nvcal{}; 
        ///Non-valid Time Alarm
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nvtimalr{}; 
        ///Non-valid Calendar Alarm
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nvcalalr{}; 
    }
}
