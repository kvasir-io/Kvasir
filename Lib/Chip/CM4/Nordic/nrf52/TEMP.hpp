#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Temperature Sensor
    namespace NonetasksStart{    ///<Start temperature measurement
        using Addr = Register::Address<0x4000c000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop temperature measurement
        using Addr = Register::Address<0x4000c004,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsDatardy{    ///<Temperature measurement complete, data ready
        using Addr = Register::Address<0x4000c100,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4000c304,0xfffffffe,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_DATARDY event
        enum class DatardyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatardyVal> datardy{}; 
        namespace DatardyValC{
            constexpr Register::FieldValue<decltype(datardy),DatardyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(datardy),DatardyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(datardy),DatardyVal::set> set{};
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4000c308,0xfffffffe,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_DATARDY event
        enum class DatardyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatardyVal> datardy{}; 
        namespace DatardyValC{
            constexpr Register::FieldValue<decltype(datardy),DatardyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(datardy),DatardyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(datardy),DatardyVal::clear> clear{};
        }
    }
    namespace Nonetemp{    ///<Temperature in degC
        using Addr = Register::Address<0x4000c508,0x00000000,0,unsigned>;
        ///Temperature in degC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> temp{}; 
        namespace TempValC{
        }
    }
}
