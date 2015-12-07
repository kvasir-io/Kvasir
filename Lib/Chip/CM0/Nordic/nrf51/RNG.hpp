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
        enum class ValrdystopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValrdystopVal> valrdyStop{}; 
        namespace ValrdystopValC{
            constexpr Register::FieldValue<decltype(valrdyStop),ValrdystopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(valrdyStop),ValrdystopVal::enabled> enabled{};
        }
    }
    namespace Noneintenset{    ///<Interrupt enable set register
        using Addr = Register::Address<0x4000d304,0xfffffffe,0,unsigned>;
        ///Enable interrupt on VALRDY event.
        enum class ValrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValrdyVal> valrdy{}; 
        namespace ValrdyValC{
            constexpr Register::FieldValue<decltype(valrdy),ValrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(valrdy),ValrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(valrdy),ValrdyVal::set> set{};
        }
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register
        using Addr = Register::Address<0x4000d308,0xfffffffe,0,unsigned>;
        ///Disable interrupt on VALRDY event.
        enum class ValrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValrdyVal> valrdy{}; 
        namespace ValrdyValC{
            constexpr Register::FieldValue<decltype(valrdy),ValrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(valrdy),ValrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(valrdy),ValrdyVal::clear> clear{};
        }
    }
    namespace Noneconfig{    ///<Configuration register.
        using Addr = Register::Address<0x4000d504,0xfffffffe,0,unsigned>;
        ///Digital error correction enable.
        enum class DercenVal {
            disabled=0x00000000,     ///<Digital error correction disabled.
            enabled=0x00000001,     ///<Digital error correction enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DercenVal> dercen{}; 
        namespace DercenValC{
            constexpr Register::FieldValue<decltype(dercen),DercenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dercen),DercenVal::enabled> enabled{};
        }
    }
    namespace Nonevalue{    ///<RNG random number.
        using Addr = Register::Address<0x4000d508,0xffffff00,0,unsigned>;
        ///Generated random number.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> value{}; 
        namespace ValueValC{
        }
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x4000dffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class PowerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PowerVal> power{}; 
        namespace PowerValC{
            constexpr Register::FieldValue<decltype(power),PowerVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(power),PowerVal::enabled> enabled{};
        }
    }
}
