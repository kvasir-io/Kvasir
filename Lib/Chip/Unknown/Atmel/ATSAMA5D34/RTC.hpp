#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real-time Clock
    namespace RtcCr{    ///<Control Register
        using Addr = Register::Address<0xfffffeb0,0xfffcfcfc,0,unsigned>;
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
        using Addr = Register::Address<0xfffffeb4,0xfffffffe,0,unsigned>;
        ///12-/24-hour Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hrmod{}; 
    }
    namespace RtcTimr{    ///<Time Register
        using Addr = Register::Address<0xfffffeb8,0xff808080,0,unsigned>;
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
        using Addr = Register::Address<0xfffffebc,0xc0000080,0,unsigned>;
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
        using Addr = Register::Address<0xfffffec0,0xff000000,0,unsigned>;
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
        using Addr = Register::Address<0xfffffec4,0x4060ffff,0,unsigned>;
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
        using Addr = Register::Address<0xfffffec8,0xffffffe0,0,unsigned>;
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
    }
    namespace RtcSccr{    ///<Status Clear Command Register
        using Addr = Register::Address<0xfffffecc,0xffffffe0,0,unsigned>;
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
    }
    namespace RtcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffffed0,0xffffffe0,0,unsigned>;
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
    }
    namespace RtcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffffed4,0xffffffe0,0,unsigned>;
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
    }
    namespace RtcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffffed8,0xffffffe0,0,unsigned>;
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
        using Addr = Register::Address<0xfffffedc,0xfffffff0,0,unsigned>;
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
