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
        enum class ValrdystopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValrdystopVal> valrdyStop{}; 
        namespace ValrdystopValC{
            constexpr Register::FieldValue<decltype(valrdyStop)::Type,ValrdystopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(valrdyStop)::Type,ValrdystopVal::enabled> enabled{};
        }
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4000d304,0xfffffffe,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_VALRDY event
        enum class ValrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValrdyVal> valrdy{}; 
        namespace ValrdyValC{
            constexpr Register::FieldValue<decltype(valrdy)::Type,ValrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(valrdy)::Type,ValrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(valrdy)::Type,ValrdyVal::set> set{};
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4000d308,0xfffffffe,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_VALRDY event
        enum class ValrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValrdyVal> valrdy{}; 
        namespace ValrdyValC{
            constexpr Register::FieldValue<decltype(valrdy)::Type,ValrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(valrdy)::Type,ValrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(valrdy)::Type,ValrdyVal::clear> clear{};
        }
    }
    namespace Noneconfig{    ///<Configuration register
        using Addr = Register::Address<0x4000d504,0xfffffffe,0,unsigned>;
        ///Bias correction
        enum class DercenVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DercenVal> dercen{}; 
        namespace DercenValC{
            constexpr Register::FieldValue<decltype(dercen)::Type,DercenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dercen)::Type,DercenVal::enabled> enabled{};
        }
    }
    namespace Nonevalue{    ///<Output random number
        using Addr = Register::Address<0x4000d508,0xffffff00,0,unsigned>;
        ///Generated random number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
}
