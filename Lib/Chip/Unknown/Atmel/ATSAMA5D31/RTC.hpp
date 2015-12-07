#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real-time Clock
    namespace RtcCr{    ///<Control Register
        using Addr = Register::Address<0xfffffeb0,0xfffcfcfc,0,unsigned>;
        ///Update Request Time Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> updtim{}; 
        namespace UpdtimValC{
        }
        ///Update Request Calendar Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updcal{}; 
        namespace UpdcalValC{
        }
        ///Time Event Selection
        enum class TimevselVal {
            minute=0x00000000,     ///<Minute change
            hour=0x00000001,     ///<Hour change
            midnight=0x00000002,     ///<Every day at midnight
            noon=0x00000003,     ///<Every day at noon
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,TimevselVal> timevsel{}; 
        namespace TimevselValC{
            constexpr Register::FieldValue<decltype(timevsel),TimevselVal::minute> minute{};
            constexpr Register::FieldValue<decltype(timevsel),TimevselVal::hour> hour{};
            constexpr Register::FieldValue<decltype(timevsel),TimevselVal::midnight> midnight{};
            constexpr Register::FieldValue<decltype(timevsel),TimevselVal::noon> noon{};
        }
        ///Calendar Event Selection
        enum class CalevselVal {
            week=0x00000000,     ///<Week change (every Monday at time 00:00:00)
            month=0x00000001,     ///<Month change (every 01 of each month at time 00:00:00)
            year=0x00000002,     ///<Year change (every January 1 at time 00:00:00)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,CalevselVal> calevsel{}; 
        namespace CalevselValC{
            constexpr Register::FieldValue<decltype(calevsel),CalevselVal::week> week{};
            constexpr Register::FieldValue<decltype(calevsel),CalevselVal::month> month{};
            constexpr Register::FieldValue<decltype(calevsel),CalevselVal::year> year{};
        }
    }
    namespace RtcMr{    ///<Mode Register
        using Addr = Register::Address<0xfffffeb4,0xfffffffe,0,unsigned>;
        ///12-/24-hour Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hrmod{}; 
        namespace HrmodValC{
        }
    }
    namespace RtcTimr{    ///<Time Register
        using Addr = Register::Address<0xfffffeb8,0xff808080,0,unsigned>;
        ///Current Second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sec{}; 
        namespace SecValC{
        }
        ///Current Minute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> min{}; 
        namespace MinValC{
        }
        ///Current Hour
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> hour{}; 
        namespace HourValC{
        }
        ///Ante Meridiem Post Meridiem Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ampm{}; 
        namespace AmpmValC{
        }
    }
    namespace RtcCalr{    ///<Calendar Register
        using Addr = Register::Address<0xfffffebc,0xc0000080,0,unsigned>;
        ///Current Century
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> cent{}; 
        namespace CentValC{
        }
        ///Current Year
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> year{}; 
        namespace YearValC{
        }
        ///Current Month
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> month{}; 
        namespace MonthValC{
        }
        ///Current Day in Current Week
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> day{}; 
        namespace DayValC{
        }
        ///Current Day in Current Month
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> date{}; 
        namespace DateValC{
        }
    }
    namespace RtcTimalr{    ///<Time Alarm Register
        using Addr = Register::Address<0xfffffec0,0xff000000,0,unsigned>;
        ///Second Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sec{}; 
        namespace SecValC{
        }
        ///Second Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> secen{}; 
        namespace SecenValC{
        }
        ///Minute Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> min{}; 
        namespace MinValC{
        }
        ///Minute Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> minen{}; 
        namespace MinenValC{
        }
        ///Hour Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> hour{}; 
        namespace HourValC{
        }
        ///AM/PM Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ampm{}; 
        namespace AmpmValC{
        }
        ///Hour Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> houren{}; 
        namespace HourenValC{
        }
    }
    namespace RtcCalalr{    ///<Calendar Alarm Register
        using Addr = Register::Address<0xfffffec4,0x4060ffff,0,unsigned>;
        ///Month Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> month{}; 
        namespace MonthValC{
        }
        ///Month Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mthen{}; 
        namespace MthenValC{
        }
        ///Date Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> date{}; 
        namespace DateValC{
        }
        ///Date Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dateen{}; 
        namespace DateenValC{
        }
    }
    namespace RtcSr{    ///<Status Register
        using Addr = Register::Address<0xfffffec8,0xffffffe0,0,unsigned>;
        ///Acknowledge for Update
        enum class AckupdVal {
            freerun=0x00000000,     ///<Time and calendar registers cannot be updated.
            update=0x00000001,     ///<Time and calendar registers can be updated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,AckupdVal> ackupd{}; 
        namespace AckupdValC{
            constexpr Register::FieldValue<decltype(ackupd),AckupdVal::freerun> freerun{};
            constexpr Register::FieldValue<decltype(ackupd),AckupdVal::update> update{};
        }
        ///Alarm Flag
        enum class AlarmVal {
            noAlarmevent=0x00000000,     ///<No alarm matching condition occurred.
            alarmevent=0x00000001,     ///<An alarm matching condition has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AlarmVal> alarm{}; 
        namespace AlarmValC{
            constexpr Register::FieldValue<decltype(alarm),AlarmVal::noAlarmevent> noAlarmevent{};
            constexpr Register::FieldValue<decltype(alarm),AlarmVal::alarmevent> alarmevent{};
        }
        ///Second Event
        enum class SecVal {
            noSecevent=0x00000000,     ///<No second event has occurred since the last clear.
            secevent=0x00000001,     ///<At least one second event has occurred since the last clear.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SecVal> sec{}; 
        namespace SecValC{
            constexpr Register::FieldValue<decltype(sec),SecVal::noSecevent> noSecevent{};
            constexpr Register::FieldValue<decltype(sec),SecVal::secevent> secevent{};
        }
        ///Time Event
        enum class TimevVal {
            noTimevent=0x00000000,     ///<No time event has occurred since the last clear.
            timevent=0x00000001,     ///<At least one time event has occurred since the last clear.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TimevVal> timev{}; 
        namespace TimevValC{
            constexpr Register::FieldValue<decltype(timev),TimevVal::noTimevent> noTimevent{};
            constexpr Register::FieldValue<decltype(timev),TimevVal::timevent> timevent{};
        }
        ///Calendar Event
        enum class CalevVal {
            noCalevent=0x00000000,     ///<No calendar event has occurred since the last clear.
            calevent=0x00000001,     ///<At least one calendar event has occurred since the last clear.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CalevVal> calev{}; 
        namespace CalevValC{
            constexpr Register::FieldValue<decltype(calev),CalevVal::noCalevent> noCalevent{};
            constexpr Register::FieldValue<decltype(calev),CalevVal::calevent> calevent{};
        }
    }
    namespace RtcSccr{    ///<Status Clear Command Register
        using Addr = Register::Address<0xfffffecc,0xffffffe0,0,unsigned>;
        ///Acknowledge Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ackclr{}; 
        namespace AckclrValC{
        }
        ///Alarm Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alrclr{}; 
        namespace AlrclrValC{
        }
        ///Second Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> secclr{}; 
        namespace SecclrValC{
        }
        ///Time Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timclr{}; 
        namespace TimclrValC{
        }
        ///Calendar Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> calclr{}; 
        namespace CalclrValC{
        }
    }
    namespace RtcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffffed0,0xffffffe0,0,unsigned>;
        ///Acknowledge Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> acken{}; 
        namespace AckenValC{
        }
        ///Alarm Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alren{}; 
        namespace AlrenValC{
        }
        ///Second Event Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> secen{}; 
        namespace SecenValC{
        }
        ///Time Event Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timen{}; 
        namespace TimenValC{
        }
        ///Calendar Event Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> calen{}; 
        namespace CalenValC{
        }
    }
    namespace RtcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffffed4,0xffffffe0,0,unsigned>;
        ///Acknowledge Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ackdis{}; 
        namespace AckdisValC{
        }
        ///Alarm Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alrdis{}; 
        namespace AlrdisValC{
        }
        ///Second Event Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> secdis{}; 
        namespace SecdisValC{
        }
        ///Time Event Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timdis{}; 
        namespace TimdisValC{
        }
        ///Calendar Event Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> caldis{}; 
        namespace CaldisValC{
        }
    }
    namespace RtcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffffed8,0xffffffe0,0,unsigned>;
        ///Acknowledge Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Alarm Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alr{}; 
        namespace AlrValC{
        }
        ///Second Event Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sec{}; 
        namespace SecValC{
        }
        ///Time Event Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim{}; 
        namespace TimValC{
        }
        ///Calendar Event Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cal{}; 
        namespace CalValC{
        }
    }
    namespace RtcVer{    ///<Valid Entry Register
        using Addr = Register::Address<0xfffffedc,0xfffffff0,0,unsigned>;
        ///Non-valid Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nvtim{}; 
        namespace NvtimValC{
        }
        ///Non-valid Calendar
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nvcal{}; 
        namespace NvcalValC{
        }
        ///Non-valid Time Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nvtimalr{}; 
        namespace NvtimalrValC{
        }
        ///Non-valid Calendar Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nvcalalr{}; 
        namespace NvcalalrValC{
        }
    }
}
