#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Real-time Clock
    namespace RtcCr{    ///<Control Register
        using Addr = Register::Address<0xfffffeb0,0xfffcfcfc,0x00000000,unsigned>;
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
        using Addr = Register::Address<0xfffffeb4,0xfffffffe,0x00000000,unsigned>;
        ///12-/24-hour Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hrmod{}; 
    }
    namespace RtcTimr{    ///<Time Register
        using Addr = Register::Address<0xfffffeb8,0xff808080,0x00000000,unsigned>;
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
        using Addr = Register::Address<0xfffffebc,0xc0000080,0x00000000,unsigned>;
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
        using Addr = Register::Address<0xfffffec0,0xff000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0xfffffec4,0x4060ffff,0x00000000,unsigned>;
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
        using Addr = Register::Address<0xfffffec8,0xffffffe0,0x00000000,unsigned>;
        ///Acknowledge for Update
        enum class AckupdVal {
            freerun=0x00000000,     ///<Time and calendar registers cannot be updated.
            update=0x00000001,     ///<Time and calendar registers can be updated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,AckupdVal> ackupd{}; 
        namespace AckupdValC{
            constexpr Register::FieldValue<decltype(ackupd)::Type,AckupdVal::freerun> freerun{};
            constexpr Register::FieldValue<decltype(ackupd)::Type,AckupdVal::update> update{};
        }
        ///Alarm Flag
        enum class AlarmVal {
            noAlarmevent=0x00000000,     ///<No alarm matching condition occurred.
            alarmevent=0x00000001,     ///<An alarm matching condition has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,AlarmVal> alarm{}; 
        namespace AlarmValC{
            constexpr Register::FieldValue<decltype(alarm)::Type,AlarmVal::noAlarmevent> noAlarmevent{};
            constexpr Register::FieldValue<decltype(alarm)::Type,AlarmVal::alarmevent> alarmevent{};
        }
        ///Second Event
        enum class SecVal {
            noSecevent=0x00000000,     ///<No second event has occurred since the last clear.
            secevent=0x00000001,     ///<At least one second event has occurred since the last clear.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SecVal> sec{}; 
        namespace SecValC{
            constexpr Register::FieldValue<decltype(sec)::Type,SecVal::noSecevent> noSecevent{};
            constexpr Register::FieldValue<decltype(sec)::Type,SecVal::secevent> secevent{};
        }
        ///Time Event
        enum class TimevVal {
            noTimevent=0x00000000,     ///<No time event has occurred since the last clear.
            timevent=0x00000001,     ///<At least one time event has occurred since the last clear.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TimevVal> timev{}; 
        namespace TimevValC{
            constexpr Register::FieldValue<decltype(timev)::Type,TimevVal::noTimevent> noTimevent{};
            constexpr Register::FieldValue<decltype(timev)::Type,TimevVal::timevent> timevent{};
        }
        ///Calendar Event
        enum class CalevVal {
            noCalevent=0x00000000,     ///<No calendar event has occurred since the last clear.
            calevent=0x00000001,     ///<At least one calendar event has occurred since the last clear.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CalevVal> calev{}; 
        namespace CalevValC{
            constexpr Register::FieldValue<decltype(calev)::Type,CalevVal::noCalevent> noCalevent{};
            constexpr Register::FieldValue<decltype(calev)::Type,CalevVal::calevent> calevent{};
        }
    }
    namespace RtcSccr{    ///<Status Clear Command Register
        using Addr = Register::Address<0xfffffecc,0xffffffe0,0x00000000,unsigned>;
        ///Acknowledge Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackclr{}; 
        ///Alarm Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> alrclr{}; 
        ///Second Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> secclr{}; 
        ///Time Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timclr{}; 
        ///Calendar Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> calclr{}; 
    }
    namespace RtcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffffed0,0xffffffe0,0x00000000,unsigned>;
        ///Acknowledge Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> acken{}; 
        ///Alarm Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> alren{}; 
        ///Second Event Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> secen{}; 
        ///Time Event Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timen{}; 
        ///Calendar Event Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> calen{}; 
    }
    namespace RtcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffffed4,0xffffffe0,0x00000000,unsigned>;
        ///Acknowledge Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackdis{}; 
        ///Alarm Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> alrdis{}; 
        ///Second Event Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> secdis{}; 
        ///Time Event Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timdis{}; 
        ///Calendar Event Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> caldis{}; 
    }
    namespace RtcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffffed8,0xffffffe0,0x00000000,unsigned>;
        ///Acknowledge Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ack{}; 
        ///Alarm Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> alr{}; 
        ///Second Event Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sec{}; 
        ///Time Event Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tim{}; 
        ///Calendar Event Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cal{}; 
    }
    namespace RtcVer{    ///<Valid Entry Register
        using Addr = Register::Address<0xfffffedc,0xfffffff0,0x00000000,unsigned>;
        ///Non-valid Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nvtim{}; 
        ///Non-valid Calendar
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nvcal{}; 
        ///Non-valid Time Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nvtimalr{}; 
        ///Non-valid Calendar Alarm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nvcalalr{}; 
    }
}
