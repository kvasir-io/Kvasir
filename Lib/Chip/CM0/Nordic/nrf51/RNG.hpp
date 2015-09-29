#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Random Number Generator.
    namespace NonetasksStart{    ///<Start the random number generator.
        using Addr = Register::Address<0x4000d000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop the random number generator.
        using Addr = Register::Address<0x4000d004,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsValrdy{    ///<New random number generated and written to VALUE register.
        using Addr = Register::Address<0x4000d100,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcuts for the RNG.
        using Addr = Register::Address<0x4000d200,0xfffffffe,0,unsigned>;
        ///Shortcut between VALRDY event and STOP task.
        enum class valrdyStopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace valrdyStopValC{
            constexpr MPL::Value<valrdyStopVal,valrdyStopVal::disabled> disabled{};
            constexpr MPL::Value<valrdyStopVal,valrdyStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,valrdyStopVal> valrdyStop{}; 
    }
    namespace Noneintenset{    ///<Interrupt enable set register
        using Addr = Register::Address<0x4000d304,0xfffffffe,0,unsigned>;
        ///Enable interrupt on VALRDY event.
        enum class valrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace valrdyValC{
            constexpr MPL::Value<valrdyVal,valrdyVal::disabled> disabled{};
            constexpr MPL::Value<valrdyVal,valrdyVal::enabled> enabled{};
            constexpr MPL::Value<valrdyVal,valrdyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,valrdyVal> valrdy{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register
        using Addr = Register::Address<0x4000d308,0xfffffffe,0,unsigned>;
        ///Disable interrupt on VALRDY event.
        enum class valrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace valrdyValC{
            constexpr MPL::Value<valrdyVal,valrdyVal::disabled> disabled{};
            constexpr MPL::Value<valrdyVal,valrdyVal::enabled> enabled{};
            constexpr MPL::Value<valrdyVal,valrdyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,valrdyVal> valrdy{}; 
    }
    namespace Noneconfig{    ///<Configuration register.
        using Addr = Register::Address<0x4000d504,0xfffffffe,0,unsigned>;
        ///Digital error correction enable.
        enum class dercenVal {
            disabled=0x00000000,     ///<Digital error correction disabled.
            enabled=0x00000001,     ///<Digital error correction enabled.
        };
        namespace dercenValC{
            constexpr MPL::Value<dercenVal,dercenVal::disabled> disabled{};
            constexpr MPL::Value<dercenVal,dercenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dercenVal> dercen{}; 
    }
    namespace Nonevalue{    ///<RNG random number.
        using Addr = Register::Address<0x4000d508,0xffffff00,0,unsigned>;
        ///Generated random number.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x4000dffc,0xfffffffe,0,unsigned>;
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
