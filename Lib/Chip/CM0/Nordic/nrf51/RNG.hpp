#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Random Number Generator.
    namespace RngTasksStart{    ///<Start the random number generator.
        using Addr = Register::Address<0x4000d000,0xffffffff,0x00000000,unsigned>;
    }
    namespace RngTasksStop{    ///<Stop the random number generator.
        using Addr = Register::Address<0x4000d004,0xffffffff,0x00000000,unsigned>;
    }
    namespace RngEventsValrdy{    ///<New random number generated and written to VALUE register.
        using Addr = Register::Address<0x4000d100,0xffffffff,0x00000000,unsigned>;
    }
    namespace RngShorts{    ///<Shortcuts for the RNG.
        using Addr = Register::Address<0x4000d200,0xfffffffe,0x00000000,unsigned>;
        ///Shortcut between VALRDY event and STOP task.
        enum class ValrdystopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValrdystopVal> valrdyStop{}; 
        namespace ValrdystopValC{
            constexpr Register::FieldValue<decltype(valrdyStop)::Type,ValrdystopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(valrdyStop)::Type,ValrdystopVal::enabled> enabled{};
        }
    }
    namespace RngIntenset{    ///<Interrupt enable set register
        using Addr = Register::Address<0x4000d304,0xfffffffe,0x00000000,unsigned>;
        ///Enable interrupt on VALRDY event.
        enum class ValrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValrdyVal> valrdy{}; 
        namespace ValrdyValC{
            constexpr Register::FieldValue<decltype(valrdy)::Type,ValrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(valrdy)::Type,ValrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(valrdy)::Type,ValrdyVal::set> set{};
        }
    }
    namespace RngIntenclr{    ///<Interrupt enable clear register
        using Addr = Register::Address<0x4000d308,0xfffffffe,0x00000000,unsigned>;
        ///Disable interrupt on VALRDY event.
        enum class ValrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValrdyVal> valrdy{}; 
        namespace ValrdyValC{
            constexpr Register::FieldValue<decltype(valrdy)::Type,ValrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(valrdy)::Type,ValrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(valrdy)::Type,ValrdyVal::clear> clear{};
        }
    }
    namespace RngConfig{    ///<Configuration register.
        using Addr = Register::Address<0x4000d504,0xfffffffe,0x00000000,unsigned>;
        ///Digital error correction enable.
        enum class DercenVal {
            disabled=0x00000000,     ///<Digital error correction disabled.
            enabled=0x00000001,     ///<Digital error correction enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DercenVal> dercen{}; 
        namespace DercenValC{
            constexpr Register::FieldValue<decltype(dercen)::Type,DercenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dercen)::Type,DercenVal::enabled> enabled{};
        }
    }
    namespace RngValue{    ///<RNG random number.
        using Addr = Register::Address<0x4000d508,0xffffff00,0x00000000,unsigned>;
        ///Generated random number.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace RngPower{    ///<Peripheral power control.
        using Addr = Register::Address<0x4000dffc,0xfffffffe,0x00000000,unsigned>;
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
