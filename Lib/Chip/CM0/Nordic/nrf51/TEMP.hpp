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
        enum class datardyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace datardyValC{
            constexpr MPL::Value<datardyVal,datardyVal::disabled> disabled{};
            constexpr MPL::Value<datardyVal,datardyVal::enabled> enabled{};
            constexpr MPL::Value<datardyVal,datardyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,datardyVal> datardy{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x4000c308,0xfffffffe,0,unsigned>;
        ///Disable interrupt on DATARDY event.
        enum class datardyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace datardyValC{
            constexpr MPL::Value<datardyVal,datardyVal::disabled> disabled{};
            constexpr MPL::Value<datardyVal,datardyVal::enabled> enabled{};
            constexpr MPL::Value<datardyVal,datardyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,datardyVal> datardy{}; 
    }
    namespace Nonetemp{    ///<Die temperature in degC, 2's complement format, 0.25 degC pecision.
        using Addr = Register::Address<0x4000c508,0xffffffff,0,unsigned>;
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x4000cffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class powerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        namespace powerValC{
            constexpr MPL::Value<powerVal,powerVal::disabled> disabled{};
            constexpr MPL::Value<powerVal,powerVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,powerVal> power{}; 
    }
}
