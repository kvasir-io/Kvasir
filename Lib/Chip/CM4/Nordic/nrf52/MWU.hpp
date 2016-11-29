#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Memory Watch Unit
    namespace MwuInten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40020300,0xf0ffff00,0x00000000,unsigned>;
        ///Enable or disable interrupt on EVENTS_REGION[0].WA event
        enum class Region0waVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region0waVal> region0wa{}; 
        namespace Region0waValC{
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_REGION[0].RA event
        enum class Region0raVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region0raVal> region0ra{}; 
        namespace Region0raValC{
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_REGION[1].WA event
        enum class Region1waVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region1waVal> region1wa{}; 
        namespace Region1waValC{
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_REGION[1].RA event
        enum class Region1raVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region1raVal> region1ra{}; 
        namespace Region1raValC{
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_REGION[2].WA event
        enum class Region2waVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region2waVal> region2wa{}; 
        namespace Region2waValC{
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_REGION[2].RA event
        enum class Region2raVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region2raVal> region2ra{}; 
        namespace Region2raValC{
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_REGION[3].WA event
        enum class Region3waVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region3waVal> region3wa{}; 
        namespace Region3waValC{
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_REGION[3].RA event
        enum class Region3raVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region3raVal> region3ra{}; 
        namespace Region3raValC{
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_PREGION[0].WA event
        enum class Pregion0waVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pregion0waVal> pregion0wa{}; 
        namespace Pregion0waValC{
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_PREGION[0].RA event
        enum class Pregion0raVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pregion0raVal> pregion0ra{}; 
        namespace Pregion0raValC{
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_PREGION[1].WA event
        enum class Pregion1waVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pregion1waVal> pregion1wa{}; 
        namespace Pregion1waValC{
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_PREGION[1].RA event
        enum class Pregion1raVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pregion1raVal> pregion1ra{}; 
        namespace Pregion1raValC{
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::enabled> enabled{};
        }
    }
    namespace MwuIntenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40020304,0xf0ffff00,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_REGION[0].WA event
        enum class Region0waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region0waVal> region0wa{}; 
        namespace Region0waValC{
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_REGION[0].RA event
        enum class Region0raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region0raVal> region0ra{}; 
        namespace Region0raValC{
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_REGION[1].WA event
        enum class Region1waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region1waVal> region1wa{}; 
        namespace Region1waValC{
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_REGION[1].RA event
        enum class Region1raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region1raVal> region1ra{}; 
        namespace Region1raValC{
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_REGION[2].WA event
        enum class Region2waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region2waVal> region2wa{}; 
        namespace Region2waValC{
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_REGION[2].RA event
        enum class Region2raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region2raVal> region2ra{}; 
        namespace Region2raValC{
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_REGION[3].WA event
        enum class Region3waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region3waVal> region3wa{}; 
        namespace Region3waValC{
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_REGION[3].RA event
        enum class Region3raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region3raVal> region3ra{}; 
        namespace Region3raValC{
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_PREGION[0].WA event
        enum class Pregion0waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pregion0waVal> pregion0wa{}; 
        namespace Pregion0waValC{
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_PREGION[0].RA event
        enum class Pregion0raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pregion0raVal> pregion0ra{}; 
        namespace Pregion0raValC{
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_PREGION[1].WA event
        enum class Pregion1waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pregion1waVal> pregion1wa{}; 
        namespace Pregion1waValC{
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_PREGION[1].RA event
        enum class Pregion1raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pregion1raVal> pregion1ra{}; 
        namespace Pregion1raValC{
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::set> set{};
        }
    }
    namespace MwuIntenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40020308,0xf0ffff00,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_REGION[0].WA event
        enum class Region0waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region0waVal> region0wa{}; 
        namespace Region0waValC{
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_REGION[0].RA event
        enum class Region0raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region0raVal> region0ra{}; 
        namespace Region0raValC{
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_REGION[1].WA event
        enum class Region1waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region1waVal> region1wa{}; 
        namespace Region1waValC{
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_REGION[1].RA event
        enum class Region1raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region1raVal> region1ra{}; 
        namespace Region1raValC{
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_REGION[2].WA event
        enum class Region2waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region2waVal> region2wa{}; 
        namespace Region2waValC{
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_REGION[2].RA event
        enum class Region2raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region2raVal> region2ra{}; 
        namespace Region2raValC{
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_REGION[3].WA event
        enum class Region3waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region3waVal> region3wa{}; 
        namespace Region3waValC{
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_REGION[3].RA event
        enum class Region3raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region3raVal> region3ra{}; 
        namespace Region3raValC{
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_PREGION[0].WA event
        enum class Pregion0waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pregion0waVal> pregion0wa{}; 
        namespace Pregion0waValC{
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_PREGION[0].RA event
        enum class Pregion0raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pregion0raVal> pregion0ra{}; 
        namespace Pregion0raValC{
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_PREGION[1].WA event
        enum class Pregion1waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pregion1waVal> pregion1wa{}; 
        namespace Pregion1waValC{
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_PREGION[1].RA event
        enum class Pregion1raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pregion1raVal> pregion1ra{}; 
        namespace Pregion1raValC{
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::clear> clear{};
        }
    }
    namespace MwuNmien{    ///<Enable or disable non-maskable interrupt
        using Addr = Register::Address<0x40020320,0xf0ffff00,0x00000000,unsigned>;
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[0].WA event
        enum class Region0waVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region0waVal> region0wa{}; 
        namespace Region0waValC{
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[0].RA event
        enum class Region0raVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region0raVal> region0ra{}; 
        namespace Region0raValC{
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[1].WA event
        enum class Region1waVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region1waVal> region1wa{}; 
        namespace Region1waValC{
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[1].RA event
        enum class Region1raVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region1raVal> region1ra{}; 
        namespace Region1raValC{
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[2].WA event
        enum class Region2waVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region2waVal> region2wa{}; 
        namespace Region2waValC{
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[2].RA event
        enum class Region2raVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region2raVal> region2ra{}; 
        namespace Region2raValC{
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[3].WA event
        enum class Region3waVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region3waVal> region3wa{}; 
        namespace Region3waValC{
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[3].RA event
        enum class Region3raVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region3raVal> region3ra{}; 
        namespace Region3raValC{
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_PREGION[0].WA event
        enum class Pregion0waVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pregion0waVal> pregion0wa{}; 
        namespace Pregion0waValC{
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_PREGION[0].RA event
        enum class Pregion0raVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pregion0raVal> pregion0ra{}; 
        namespace Pregion0raValC{
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_PREGION[1].WA event
        enum class Pregion1waVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pregion1waVal> pregion1wa{}; 
        namespace Pregion1waValC{
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_PREGION[1].RA event
        enum class Pregion1raVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pregion1raVal> pregion1ra{}; 
        namespace Pregion1raValC{
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::enabled> enabled{};
        }
    }
    namespace MwuNmienset{    ///<Enable non-maskable interrupt
        using Addr = Register::Address<0x40020324,0xf0ffff00,0x00000000,unsigned>;
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[0].WA event
        enum class Region0waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region0waVal> region0wa{}; 
        namespace Region0waValC{
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[0].RA event
        enum class Region0raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region0raVal> region0ra{}; 
        namespace Region0raValC{
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[1].WA event
        enum class Region1waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region1waVal> region1wa{}; 
        namespace Region1waValC{
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[1].RA event
        enum class Region1raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region1raVal> region1ra{}; 
        namespace Region1raValC{
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[2].WA event
        enum class Region2waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region2waVal> region2wa{}; 
        namespace Region2waValC{
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[2].RA event
        enum class Region2raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region2raVal> region2ra{}; 
        namespace Region2raValC{
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[3].WA event
        enum class Region3waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region3waVal> region3wa{}; 
        namespace Region3waValC{
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[3].RA event
        enum class Region3raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region3raVal> region3ra{}; 
        namespace Region3raValC{
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[0].WA event
        enum class Pregion0waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pregion0waVal> pregion0wa{}; 
        namespace Pregion0waValC{
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[0].RA event
        enum class Pregion0raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pregion0raVal> pregion0ra{}; 
        namespace Pregion0raValC{
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[1].WA event
        enum class Pregion1waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pregion1waVal> pregion1wa{}; 
        namespace Pregion1waValC{
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[1].RA event
        enum class Pregion1raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pregion1raVal> pregion1ra{}; 
        namespace Pregion1raValC{
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::set> set{};
        }
    }
    namespace MwuNmienclr{    ///<Disable non-maskable interrupt
        using Addr = Register::Address<0x40020328,0xf0ffff00,0x00000000,unsigned>;
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[0].WA event
        enum class Region0waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region0waVal> region0wa{}; 
        namespace Region0waValC{
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0wa)::Type,Region0waVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[0].RA event
        enum class Region0raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region0raVal> region0ra{}; 
        namespace Region0raValC{
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0ra)::Type,Region0raVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[1].WA event
        enum class Region1waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region1waVal> region1wa{}; 
        namespace Region1waValC{
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1wa)::Type,Region1waVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[1].RA event
        enum class Region1raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region1raVal> region1ra{}; 
        namespace Region1raValC{
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1ra)::Type,Region1raVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[2].WA event
        enum class Region2waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region2waVal> region2wa{}; 
        namespace Region2waValC{
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2wa)::Type,Region2waVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[2].RA event
        enum class Region2raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region2raVal> region2ra{}; 
        namespace Region2raValC{
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2ra)::Type,Region2raVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[3].WA event
        enum class Region3waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region3waVal> region3wa{}; 
        namespace Region3waValC{
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3wa)::Type,Region3waVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[3].RA event
        enum class Region3raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region3raVal> region3ra{}; 
        namespace Region3raValC{
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3ra)::Type,Region3raVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[0].WA event
        enum class Pregion0waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pregion0waVal> pregion0wa{}; 
        namespace Pregion0waValC{
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0wa)::Type,Pregion0waVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[0].RA event
        enum class Pregion0raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pregion0raVal> pregion0ra{}; 
        namespace Pregion0raValC{
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0ra)::Type,Pregion0raVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[1].WA event
        enum class Pregion1waVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pregion1waVal> pregion1wa{}; 
        namespace Pregion1waValC{
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1wa)::Type,Pregion1waVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[1].RA event
        enum class Pregion1raVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pregion1raVal> pregion1ra{}; 
        namespace Pregion1raValC{
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1ra)::Type,Pregion1raVal::clear> clear{};
        }
    }
    namespace MwuRegionen{    ///<Enable/disable regions watch
        using Addr = Register::Address<0x40020510,0xf0ffff00,0x00000000,unsigned>;
        ///Enable/disable write access watch in region[0]
        enum class Rgn0waVal : unsigned {
            disable=0x00000000,     ///<Disable write access watch in this region
            enable=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Rgn0waVal> rgn0wa{}; 
        namespace Rgn0waValC{
            constexpr Register::FieldValue<decltype(rgn0wa)::Type,Rgn0waVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn0wa)::Type,Rgn0waVal::enable> enable{};
        }
        ///Enable/disable read access watch in region[0]
        enum class Rgn0raVal : unsigned {
            disable=0x00000000,     ///<Disable read access watch in this region
            enable=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Rgn0raVal> rgn0ra{}; 
        namespace Rgn0raValC{
            constexpr Register::FieldValue<decltype(rgn0ra)::Type,Rgn0raVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn0ra)::Type,Rgn0raVal::enable> enable{};
        }
        ///Enable/disable write access watch in region[1]
        enum class Rgn1waVal : unsigned {
            disable=0x00000000,     ///<Disable write access watch in this region
            enable=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Rgn1waVal> rgn1wa{}; 
        namespace Rgn1waValC{
            constexpr Register::FieldValue<decltype(rgn1wa)::Type,Rgn1waVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn1wa)::Type,Rgn1waVal::enable> enable{};
        }
        ///Enable/disable read access watch in region[1]
        enum class Rgn1raVal : unsigned {
            disable=0x00000000,     ///<Disable read access watch in this region
            enable=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Rgn1raVal> rgn1ra{}; 
        namespace Rgn1raValC{
            constexpr Register::FieldValue<decltype(rgn1ra)::Type,Rgn1raVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn1ra)::Type,Rgn1raVal::enable> enable{};
        }
        ///Enable/disable write access watch in region[2]
        enum class Rgn2waVal : unsigned {
            disable=0x00000000,     ///<Disable write access watch in this region
            enable=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Rgn2waVal> rgn2wa{}; 
        namespace Rgn2waValC{
            constexpr Register::FieldValue<decltype(rgn2wa)::Type,Rgn2waVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn2wa)::Type,Rgn2waVal::enable> enable{};
        }
        ///Enable/disable read access watch in region[2]
        enum class Rgn2raVal : unsigned {
            disable=0x00000000,     ///<Disable read access watch in this region
            enable=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Rgn2raVal> rgn2ra{}; 
        namespace Rgn2raValC{
            constexpr Register::FieldValue<decltype(rgn2ra)::Type,Rgn2raVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn2ra)::Type,Rgn2raVal::enable> enable{};
        }
        ///Enable/disable write access watch in region[3]
        enum class Rgn3waVal : unsigned {
            disable=0x00000000,     ///<Disable write access watch in this region
            enable=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Rgn3waVal> rgn3wa{}; 
        namespace Rgn3waValC{
            constexpr Register::FieldValue<decltype(rgn3wa)::Type,Rgn3waVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn3wa)::Type,Rgn3waVal::enable> enable{};
        }
        ///Enable/disable read access watch in region[3]
        enum class Rgn3raVal : unsigned {
            disable=0x00000000,     ///<Disable read access watch in this region
            enable=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Rgn3raVal> rgn3ra{}; 
        namespace Rgn3raValC{
            constexpr Register::FieldValue<decltype(rgn3ra)::Type,Rgn3raVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn3ra)::Type,Rgn3raVal::enable> enable{};
        }
        ///Enable/disable write access watch in PREGION[0]
        enum class Prgn0waVal : unsigned {
            disable=0x00000000,     ///<Disable write access watch in this PREGION
            enable=0x00000001,     ///<Enable write access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Prgn0waVal> prgn0wa{}; 
        namespace Prgn0waValC{
            constexpr Register::FieldValue<decltype(prgn0wa)::Type,Prgn0waVal::disable> disable{};
            constexpr Register::FieldValue<decltype(prgn0wa)::Type,Prgn0waVal::enable> enable{};
        }
        ///Enable/disable read access watch in PREGION[0]
        enum class Prgn0raVal : unsigned {
            disable=0x00000000,     ///<Disable read access watch in this PREGION
            enable=0x00000001,     ///<Enable read access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Prgn0raVal> prgn0ra{}; 
        namespace Prgn0raValC{
            constexpr Register::FieldValue<decltype(prgn0ra)::Type,Prgn0raVal::disable> disable{};
            constexpr Register::FieldValue<decltype(prgn0ra)::Type,Prgn0raVal::enable> enable{};
        }
        ///Enable/disable write access watch in PREGION[1]
        enum class Prgn1waVal : unsigned {
            disable=0x00000000,     ///<Disable write access watch in this PREGION
            enable=0x00000001,     ///<Enable write access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Prgn1waVal> prgn1wa{}; 
        namespace Prgn1waValC{
            constexpr Register::FieldValue<decltype(prgn1wa)::Type,Prgn1waVal::disable> disable{};
            constexpr Register::FieldValue<decltype(prgn1wa)::Type,Prgn1waVal::enable> enable{};
        }
        ///Enable/disable read access watch in PREGION[1]
        enum class Prgn1raVal : unsigned {
            disable=0x00000000,     ///<Disable read access watch in this PREGION
            enable=0x00000001,     ///<Enable read access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Prgn1raVal> prgn1ra{}; 
        namespace Prgn1raValC{
            constexpr Register::FieldValue<decltype(prgn1ra)::Type,Prgn1raVal::disable> disable{};
            constexpr Register::FieldValue<decltype(prgn1ra)::Type,Prgn1raVal::enable> enable{};
        }
    }
    namespace MwuRegionenset{    ///<Enable regions watch
        using Addr = Register::Address<0x40020514,0xf0ffff00,0x00000000,unsigned>;
        ///Enable write access watch in region[0]
        enum class Rgn0waVal : unsigned {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            set=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Rgn0waVal> rgn0wa{}; 
        namespace Rgn0waValC{
            constexpr Register::FieldValue<decltype(rgn0wa)::Type,Rgn0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn0wa)::Type,Rgn0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn0wa)::Type,Rgn0waVal::set> set{};
        }
        ///Enable read access watch in region[0]
        enum class Rgn0raVal : unsigned {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            set=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Rgn0raVal> rgn0ra{}; 
        namespace Rgn0raValC{
            constexpr Register::FieldValue<decltype(rgn0ra)::Type,Rgn0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn0ra)::Type,Rgn0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn0ra)::Type,Rgn0raVal::set> set{};
        }
        ///Enable write access watch in region[1]
        enum class Rgn1waVal : unsigned {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            set=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Rgn1waVal> rgn1wa{}; 
        namespace Rgn1waValC{
            constexpr Register::FieldValue<decltype(rgn1wa)::Type,Rgn1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn1wa)::Type,Rgn1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn1wa)::Type,Rgn1waVal::set> set{};
        }
        ///Enable read access watch in region[1]
        enum class Rgn1raVal : unsigned {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            set=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Rgn1raVal> rgn1ra{}; 
        namespace Rgn1raValC{
            constexpr Register::FieldValue<decltype(rgn1ra)::Type,Rgn1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn1ra)::Type,Rgn1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn1ra)::Type,Rgn1raVal::set> set{};
        }
        ///Enable write access watch in region[2]
        enum class Rgn2waVal : unsigned {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            set=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Rgn2waVal> rgn2wa{}; 
        namespace Rgn2waValC{
            constexpr Register::FieldValue<decltype(rgn2wa)::Type,Rgn2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn2wa)::Type,Rgn2waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn2wa)::Type,Rgn2waVal::set> set{};
        }
        ///Enable read access watch in region[2]
        enum class Rgn2raVal : unsigned {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            set=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Rgn2raVal> rgn2ra{}; 
        namespace Rgn2raValC{
            constexpr Register::FieldValue<decltype(rgn2ra)::Type,Rgn2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn2ra)::Type,Rgn2raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn2ra)::Type,Rgn2raVal::set> set{};
        }
        ///Enable write access watch in region[3]
        enum class Rgn3waVal : unsigned {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            set=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Rgn3waVal> rgn3wa{}; 
        namespace Rgn3waValC{
            constexpr Register::FieldValue<decltype(rgn3wa)::Type,Rgn3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn3wa)::Type,Rgn3waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn3wa)::Type,Rgn3waVal::set> set{};
        }
        ///Enable read access watch in region[3]
        enum class Rgn3raVal : unsigned {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            set=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Rgn3raVal> rgn3ra{}; 
        namespace Rgn3raValC{
            constexpr Register::FieldValue<decltype(rgn3ra)::Type,Rgn3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn3ra)::Type,Rgn3raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn3ra)::Type,Rgn3raVal::set> set{};
        }
        ///Enable write access watch in PREGION[0]
        enum class Prgn0waVal : unsigned {
            disabled=0x00000000,     ///<Write access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Write access watch in this PREGION is enabled
            set=0x00000001,     ///<Enable write access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Prgn0waVal> prgn0wa{}; 
        namespace Prgn0waValC{
            constexpr Register::FieldValue<decltype(prgn0wa)::Type,Prgn0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn0wa)::Type,Prgn0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn0wa)::Type,Prgn0waVal::set> set{};
        }
        ///Enable read access watch in PREGION[0]
        enum class Prgn0raVal : unsigned {
            disabled=0x00000000,     ///<Read access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Read access watch in this PREGION is enabled
            set=0x00000001,     ///<Enable read access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Prgn0raVal> prgn0ra{}; 
        namespace Prgn0raValC{
            constexpr Register::FieldValue<decltype(prgn0ra)::Type,Prgn0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn0ra)::Type,Prgn0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn0ra)::Type,Prgn0raVal::set> set{};
        }
        ///Enable write access watch in PREGION[1]
        enum class Prgn1waVal : unsigned {
            disabled=0x00000000,     ///<Write access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Write access watch in this PREGION is enabled
            set=0x00000001,     ///<Enable write access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Prgn1waVal> prgn1wa{}; 
        namespace Prgn1waValC{
            constexpr Register::FieldValue<decltype(prgn1wa)::Type,Prgn1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn1wa)::Type,Prgn1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn1wa)::Type,Prgn1waVal::set> set{};
        }
        ///Enable read access watch in PREGION[1]
        enum class Prgn1raVal : unsigned {
            disabled=0x00000000,     ///<Read access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Read access watch in this PREGION is enabled
            set=0x00000001,     ///<Enable read access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Prgn1raVal> prgn1ra{}; 
        namespace Prgn1raValC{
            constexpr Register::FieldValue<decltype(prgn1ra)::Type,Prgn1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn1ra)::Type,Prgn1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn1ra)::Type,Prgn1raVal::set> set{};
        }
    }
    namespace MwuRegionenclr{    ///<Disable regions watch
        using Addr = Register::Address<0x40020518,0xf0ffff00,0x00000000,unsigned>;
        ///Disable write access watch in region[0]
        enum class Rgn0waVal : unsigned {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            clear=0x00000001,     ///<Disable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Rgn0waVal> rgn0wa{}; 
        namespace Rgn0waValC{
            constexpr Register::FieldValue<decltype(rgn0wa)::Type,Rgn0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn0wa)::Type,Rgn0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn0wa)::Type,Rgn0waVal::clear> clear{};
        }
        ///Disable read access watch in region[0]
        enum class Rgn0raVal : unsigned {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            clear=0x00000001,     ///<Disable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Rgn0raVal> rgn0ra{}; 
        namespace Rgn0raValC{
            constexpr Register::FieldValue<decltype(rgn0ra)::Type,Rgn0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn0ra)::Type,Rgn0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn0ra)::Type,Rgn0raVal::clear> clear{};
        }
        ///Disable write access watch in region[1]
        enum class Rgn1waVal : unsigned {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            clear=0x00000001,     ///<Disable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Rgn1waVal> rgn1wa{}; 
        namespace Rgn1waValC{
            constexpr Register::FieldValue<decltype(rgn1wa)::Type,Rgn1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn1wa)::Type,Rgn1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn1wa)::Type,Rgn1waVal::clear> clear{};
        }
        ///Disable read access watch in region[1]
        enum class Rgn1raVal : unsigned {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            clear=0x00000001,     ///<Disable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Rgn1raVal> rgn1ra{}; 
        namespace Rgn1raValC{
            constexpr Register::FieldValue<decltype(rgn1ra)::Type,Rgn1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn1ra)::Type,Rgn1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn1ra)::Type,Rgn1raVal::clear> clear{};
        }
        ///Disable write access watch in region[2]
        enum class Rgn2waVal : unsigned {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            clear=0x00000001,     ///<Disable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Rgn2waVal> rgn2wa{}; 
        namespace Rgn2waValC{
            constexpr Register::FieldValue<decltype(rgn2wa)::Type,Rgn2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn2wa)::Type,Rgn2waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn2wa)::Type,Rgn2waVal::clear> clear{};
        }
        ///Disable read access watch in region[2]
        enum class Rgn2raVal : unsigned {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            clear=0x00000001,     ///<Disable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Rgn2raVal> rgn2ra{}; 
        namespace Rgn2raValC{
            constexpr Register::FieldValue<decltype(rgn2ra)::Type,Rgn2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn2ra)::Type,Rgn2raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn2ra)::Type,Rgn2raVal::clear> clear{};
        }
        ///Disable write access watch in region[3]
        enum class Rgn3waVal : unsigned {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            clear=0x00000001,     ///<Disable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Rgn3waVal> rgn3wa{}; 
        namespace Rgn3waValC{
            constexpr Register::FieldValue<decltype(rgn3wa)::Type,Rgn3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn3wa)::Type,Rgn3waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn3wa)::Type,Rgn3waVal::clear> clear{};
        }
        ///Disable read access watch in region[3]
        enum class Rgn3raVal : unsigned {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            clear=0x00000001,     ///<Disable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Rgn3raVal> rgn3ra{}; 
        namespace Rgn3raValC{
            constexpr Register::FieldValue<decltype(rgn3ra)::Type,Rgn3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn3ra)::Type,Rgn3raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn3ra)::Type,Rgn3raVal::clear> clear{};
        }
        ///Disable write access watch in PREGION[0]
        enum class Prgn0waVal : unsigned {
            disabled=0x00000000,     ///<Write access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Write access watch in this PREGION is enabled
            clear=0x00000001,     ///<Disable write access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Prgn0waVal> prgn0wa{}; 
        namespace Prgn0waValC{
            constexpr Register::FieldValue<decltype(prgn0wa)::Type,Prgn0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn0wa)::Type,Prgn0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn0wa)::Type,Prgn0waVal::clear> clear{};
        }
        ///Disable read access watch in PREGION[0]
        enum class Prgn0raVal : unsigned {
            disabled=0x00000000,     ///<Read access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Read access watch in this PREGION is enabled
            clear=0x00000001,     ///<Disable read access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Prgn0raVal> prgn0ra{}; 
        namespace Prgn0raValC{
            constexpr Register::FieldValue<decltype(prgn0ra)::Type,Prgn0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn0ra)::Type,Prgn0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn0ra)::Type,Prgn0raVal::clear> clear{};
        }
        ///Disable write access watch in PREGION[1]
        enum class Prgn1waVal : unsigned {
            disabled=0x00000000,     ///<Write access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Write access watch in this PREGION is enabled
            clear=0x00000001,     ///<Disable write access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Prgn1waVal> prgn1wa{}; 
        namespace Prgn1waValC{
            constexpr Register::FieldValue<decltype(prgn1wa)::Type,Prgn1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn1wa)::Type,Prgn1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn1wa)::Type,Prgn1waVal::clear> clear{};
        }
        ///Disable read access watch in PREGION[1]
        enum class Prgn1raVal : unsigned {
            disabled=0x00000000,     ///<Read access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Read access watch in this PREGION is enabled
            clear=0x00000001,     ///<Disable read access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Prgn1raVal> prgn1ra{}; 
        namespace Prgn1raValC{
            constexpr Register::FieldValue<decltype(prgn1ra)::Type,Prgn1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn1ra)::Type,Prgn1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn1ra)::Type,Prgn1raVal::clear> clear{};
        }
    }
}
