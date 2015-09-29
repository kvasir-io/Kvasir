#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Random Number Generator
    namespace NonetasksStart{    ///<Task starting the random number generator
        using Addr = Register::Address<0x4000d000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Task stopping the random number generator
        using Addr = Register::Address<0x4000d004,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsValrdy{    ///<Event being generated for every new random number written to the VALUE register
        using Addr = Register::Address<0x4000d100,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x4000d200,0xfffffffe,0,unsigned>;
        ///Shortcut between EVENTS_VALRDY event and TASKS_STOP task
        enum class valrdyStopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace valrdyStopValC{
            constexpr MPL::Value<valrdyStopVal,valrdyStopVal::disabled> disabled{};
            constexpr MPL::Value<valrdyStopVal,valrdyStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,valrdyStopVal> valrdyStop{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4000d304,0xfffffffe,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_VALRDY event
        enum class valrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace valrdyValC{
            constexpr MPL::Value<valrdyVal,valrdyVal::disabled> disabled{};
            constexpr MPL::Value<valrdyVal,valrdyVal::enabled> enabled{};
            constexpr MPL::Value<valrdyVal,valrdyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,valrdyVal> valrdy{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4000d308,0xfffffffe,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_VALRDY event
        enum class valrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace valrdyValC{
            constexpr MPL::Value<valrdyVal,valrdyVal::disabled> disabled{};
            constexpr MPL::Value<valrdyVal,valrdyVal::enabled> enabled{};
            constexpr MPL::Value<valrdyVal,valrdyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,valrdyVal> valrdy{}; 
    }
    namespace Noneconfig{    ///<Configuration register
        using Addr = Register::Address<0x4000d504,0xfffffffe,0,unsigned>;
        ///Bias correction
        enum class dercenVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace dercenValC{
            constexpr MPL::Value<dercenVal,dercenVal::disabled> disabled{};
            constexpr MPL::Value<dercenVal,dercenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dercenVal> dercen{}; 
    }
    namespace Nonevalue{    ///<Output random number
        using Addr = Register::Address<0x4000d508,0xffffff00,0,unsigned>;
        ///Generated random number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
}
