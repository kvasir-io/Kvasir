#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Temperature Sensor
    namespace TempTasksStart{    ///<Start temperature measurement
        using Addr = Register::Address<0x4000c000,0xffffffff,0x00000000,unsigned>;
    }
    namespace TempTasksStop{    ///<Stop temperature measurement
        using Addr = Register::Address<0x4000c004,0xffffffff,0x00000000,unsigned>;
    }
    namespace TempEventsDatardy{    ///<Temperature measurement complete, data ready
        using Addr = Register::Address<0x4000c100,0xffffffff,0x00000000,unsigned>;
    }
    namespace TempIntenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4000c304,0xfffffffe,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_DATARDY event
        enum class DatardyVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatardyVal> datardy{}; 
        namespace DatardyValC{
            constexpr Register::FieldValue<decltype(datardy)::Type,DatardyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(datardy)::Type,DatardyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(datardy)::Type,DatardyVal::set> set{};
        }
    }
    namespace TempIntenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4000c308,0xfffffffe,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_DATARDY event
        enum class DatardyVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatardyVal> datardy{}; 
        namespace DatardyValC{
            constexpr Register::FieldValue<decltype(datardy)::Type,DatardyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(datardy)::Type,DatardyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(datardy)::Type,DatardyVal::clear> clear{};
        }
    }
    namespace TempTemp{    ///<Temperature in degC
        using Addr = Register::Address<0x4000c508,0x00000000,0x00000000,unsigned>;
        ///Temperature in degC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> temp{}; 
    }
}
