#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Temperature Sensor.
    namespace NonetasksStart{    ///<Start temperature measurement.
        using Addr = Register::Address<0x4000c000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop temperature measurement.
        using Addr = Register::Address<0x4000c004,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsDatardy{    ///<Temperature measurement complete, data ready event.
        using Addr = Register::Address<0x4000c100,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x4000c304,0xfffffffe,0,unsigned>;
        ///Enable interrupt on DATARDY event.
        enum class DatardyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatardyVal> datardy{}; 
        namespace DatardyValC{
            constexpr Register::FieldValue<decltype(datardy)::Type,DatardyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(datardy)::Type,DatardyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(datardy)::Type,DatardyVal::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x4000c308,0xfffffffe,0,unsigned>;
        ///Disable interrupt on DATARDY event.
        enum class DatardyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatardyVal> datardy{}; 
        namespace DatardyValC{
            constexpr Register::FieldValue<decltype(datardy)::Type,DatardyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(datardy)::Type,DatardyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(datardy)::Type,DatardyVal::clear> clear{};
        }
        }
    }
    namespace Nonetemp{    ///<Die temperature in degC, 2's complement format, 0.25 degC pecision.
        using Addr = Register::Address<0x4000c508,0xffffffff,0,unsigned>;
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x4000cffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class PowerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PowerVal> power{}; 
        namespace PowerValC{
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::enabled> enabled{};
        }
        }
    }
}
