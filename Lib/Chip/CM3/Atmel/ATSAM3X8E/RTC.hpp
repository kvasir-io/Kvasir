#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real-time Clock
    namespace RtcCr{    ///<Control Register
        using Addr = Register::Address<0x400e1a60,0xfffcfcfc,0,unsigned>;
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
    namespace RtcMr{    ///<Mode Register
        using Addr = Register::Address<0x400e1a64,0xfffffffe,0,unsigned>;
        ///12-/24-hour Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hrmod{}; 
    }
    namespace RtcTimr{    ///<Time Register
        using Addr = Register::Address<0x400e1a68,0xff808080,0,unsigned>;
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
        using Addr = Register::Address<0x400e1a6c,0xc0000080,0,unsigned>;
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
        using Addr = Register::Address<0x400e1a70,0xff000000,0,unsigned>;
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
        using Addr = Register::Address<0x400e1a74,0x4060ffff,0,unsigned>;
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
        using Addr = Register::Address<0x400e1a78,0xffffffe0,0,unsigned>;
        ///Acknowledge for Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ackupd{}; 
        ///Alarm Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alarm{}; 
        ///Second Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sec{}; 
        ///Time Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timev{}; 
        ///Calendar Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> calev{}; 
    }
    namespace RtcSccr{    ///<Status Clear Command Register
        using Addr = Register::Address<0x400e1a7c,0xffffffe0,0,unsigned>;
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
    }
    namespace RtcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x400e1a80,0xffffffe0,0,unsigned>;
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
    }
    namespace RtcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x400e1a84,0xffffffe0,0,unsigned>;
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
    }
    namespace RtcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400e1a88,0xffffffe0,0,unsigned>;
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
        using Addr = Register::Address<0x400e1a8c,0xfffffff0,0,unsigned>;
        ///Non-valid Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nvtim{}; 
        ///Non-valid Calendar
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nvcal{}; 
        ///Non-valid Time Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nvtimalr{}; 
        ///Non-valid Calendar Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nvcalalr{}; 
    }
    namespace RtcWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x400e1b44,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
}
