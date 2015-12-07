#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Memory Watch Unit
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40020300,0xf0ffff00,0,unsigned>;
        ///Enable or disable interrupt on EVENTS_REGION[0].WA event
        enum class Region0waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region0waVal> region0wa{}; 
        namespace Region0waValC{
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_REGION[0].RA event
        enum class Region0raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region0raVal> region0ra{}; 
        namespace Region0raValC{
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_REGION[1].WA event
        enum class Region1waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region1waVal> region1wa{}; 
        namespace Region1waValC{
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_REGION[1].RA event
        enum class Region1raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region1raVal> region1ra{}; 
        namespace Region1raValC{
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_REGION[2].WA event
        enum class Region2waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region2waVal> region2wa{}; 
        namespace Region2waValC{
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_REGION[2].RA event
        enum class Region2raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region2raVal> region2ra{}; 
        namespace Region2raValC{
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_REGION[3].WA event
        enum class Region3waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region3waVal> region3wa{}; 
        namespace Region3waValC{
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_REGION[3].RA event
        enum class Region3raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region3raVal> region3ra{}; 
        namespace Region3raValC{
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_PREGION[0].WA event
        enum class Pregion0waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pregion0waVal> pregion0wa{}; 
        namespace Pregion0waValC{
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_PREGION[0].RA event
        enum class Pregion0raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pregion0raVal> pregion0ra{}; 
        namespace Pregion0raValC{
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_PREGION[1].WA event
        enum class Pregion1waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pregion1waVal> pregion1wa{}; 
        namespace Pregion1waValC{
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_PREGION[1].RA event
        enum class Pregion1raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pregion1raVal> pregion1ra{}; 
        namespace Pregion1raValC{
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::enabled> enabled{};
        }
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40020304,0xf0ffff00,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_REGION[0].WA event
        enum class Region0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region0waVal> region0wa{}; 
        namespace Region0waValC{
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_REGION[0].RA event
        enum class Region0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region0raVal> region0ra{}; 
        namespace Region0raValC{
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_REGION[1].WA event
        enum class Region1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region1waVal> region1wa{}; 
        namespace Region1waValC{
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_REGION[1].RA event
        enum class Region1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region1raVal> region1ra{}; 
        namespace Region1raValC{
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_REGION[2].WA event
        enum class Region2waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region2waVal> region2wa{}; 
        namespace Region2waValC{
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_REGION[2].RA event
        enum class Region2raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region2raVal> region2ra{}; 
        namespace Region2raValC{
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_REGION[3].WA event
        enum class Region3waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region3waVal> region3wa{}; 
        namespace Region3waValC{
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_REGION[3].RA event
        enum class Region3raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region3raVal> region3ra{}; 
        namespace Region3raValC{
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_PREGION[0].WA event
        enum class Pregion0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pregion0waVal> pregion0wa{}; 
        namespace Pregion0waValC{
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_PREGION[0].RA event
        enum class Pregion0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pregion0raVal> pregion0ra{}; 
        namespace Pregion0raValC{
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_PREGION[1].WA event
        enum class Pregion1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pregion1waVal> pregion1wa{}; 
        namespace Pregion1waValC{
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_PREGION[1].RA event
        enum class Pregion1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pregion1raVal> pregion1ra{}; 
        namespace Pregion1raValC{
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::set> set{};
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40020308,0xf0ffff00,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_REGION[0].WA event
        enum class Region0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region0waVal> region0wa{}; 
        namespace Region0waValC{
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_REGION[0].RA event
        enum class Region0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region0raVal> region0ra{}; 
        namespace Region0raValC{
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_REGION[1].WA event
        enum class Region1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region1waVal> region1wa{}; 
        namespace Region1waValC{
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_REGION[1].RA event
        enum class Region1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region1raVal> region1ra{}; 
        namespace Region1raValC{
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_REGION[2].WA event
        enum class Region2waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region2waVal> region2wa{}; 
        namespace Region2waValC{
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_REGION[2].RA event
        enum class Region2raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region2raVal> region2ra{}; 
        namespace Region2raValC{
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_REGION[3].WA event
        enum class Region3waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region3waVal> region3wa{}; 
        namespace Region3waValC{
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_REGION[3].RA event
        enum class Region3raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region3raVal> region3ra{}; 
        namespace Region3raValC{
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_PREGION[0].WA event
        enum class Pregion0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pregion0waVal> pregion0wa{}; 
        namespace Pregion0waValC{
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_PREGION[0].RA event
        enum class Pregion0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pregion0raVal> pregion0ra{}; 
        namespace Pregion0raValC{
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_PREGION[1].WA event
        enum class Pregion1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pregion1waVal> pregion1wa{}; 
        namespace Pregion1waValC{
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_PREGION[1].RA event
        enum class Pregion1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pregion1raVal> pregion1ra{}; 
        namespace Pregion1raValC{
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::clear> clear{};
        }
    }
    namespace Nonenmien{    ///<Enable or disable non-maskable interrupt
        using Addr = Register::Address<0x40020320,0xf0ffff00,0,unsigned>;
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[0].WA event
        enum class Region0waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region0waVal> region0wa{}; 
        namespace Region0waValC{
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[0].RA event
        enum class Region0raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region0raVal> region0ra{}; 
        namespace Region0raValC{
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[1].WA event
        enum class Region1waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region1waVal> region1wa{}; 
        namespace Region1waValC{
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[1].RA event
        enum class Region1raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region1raVal> region1ra{}; 
        namespace Region1raValC{
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[2].WA event
        enum class Region2waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region2waVal> region2wa{}; 
        namespace Region2waValC{
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[2].RA event
        enum class Region2raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region2raVal> region2ra{}; 
        namespace Region2raValC{
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[3].WA event
        enum class Region3waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region3waVal> region3wa{}; 
        namespace Region3waValC{
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[3].RA event
        enum class Region3raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region3raVal> region3ra{}; 
        namespace Region3raValC{
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_PREGION[0].WA event
        enum class Pregion0waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pregion0waVal> pregion0wa{}; 
        namespace Pregion0waValC{
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_PREGION[0].RA event
        enum class Pregion0raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pregion0raVal> pregion0ra{}; 
        namespace Pregion0raValC{
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_PREGION[1].WA event
        enum class Pregion1waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pregion1waVal> pregion1wa{}; 
        namespace Pregion1waValC{
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::enabled> enabled{};
        }
        ///Enable or disable non-maskable interrupt on EVENTS_PREGION[1].RA event
        enum class Pregion1raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pregion1raVal> pregion1ra{}; 
        namespace Pregion1raValC{
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::enabled> enabled{};
        }
    }
    namespace Nonenmienset{    ///<Enable non-maskable interrupt
        using Addr = Register::Address<0x40020324,0xf0ffff00,0,unsigned>;
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[0].WA event
        enum class Region0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region0waVal> region0wa{}; 
        namespace Region0waValC{
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[0].RA event
        enum class Region0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region0raVal> region0ra{}; 
        namespace Region0raValC{
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[1].WA event
        enum class Region1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region1waVal> region1wa{}; 
        namespace Region1waValC{
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[1].RA event
        enum class Region1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region1raVal> region1ra{}; 
        namespace Region1raValC{
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[2].WA event
        enum class Region2waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region2waVal> region2wa{}; 
        namespace Region2waValC{
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[2].RA event
        enum class Region2raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region2raVal> region2ra{}; 
        namespace Region2raValC{
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[3].WA event
        enum class Region3waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region3waVal> region3wa{}; 
        namespace Region3waValC{
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[3].RA event
        enum class Region3raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region3raVal> region3ra{}; 
        namespace Region3raValC{
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[0].WA event
        enum class Pregion0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pregion0waVal> pregion0wa{}; 
        namespace Pregion0waValC{
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[0].RA event
        enum class Pregion0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pregion0raVal> pregion0ra{}; 
        namespace Pregion0raValC{
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[1].WA event
        enum class Pregion1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pregion1waVal> pregion1wa{}; 
        namespace Pregion1waValC{
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::set> set{};
        }
        ///Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[1].RA event
        enum class Pregion1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pregion1raVal> pregion1ra{}; 
        namespace Pregion1raValC{
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::set> set{};
        }
    }
    namespace Nonenmienclr{    ///<Disable non-maskable interrupt
        using Addr = Register::Address<0x40020328,0xf0ffff00,0,unsigned>;
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[0].WA event
        enum class Region0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region0waVal> region0wa{}; 
        namespace Region0waValC{
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0wa),Region0waVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[0].RA event
        enum class Region0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region0raVal> region0ra{}; 
        namespace Region0raValC{
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region0ra),Region0raVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[1].WA event
        enum class Region1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region1waVal> region1wa{}; 
        namespace Region1waValC{
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1wa),Region1waVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[1].RA event
        enum class Region1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region1raVal> region1ra{}; 
        namespace Region1raValC{
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region1ra),Region1raVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[2].WA event
        enum class Region2waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region2waVal> region2wa{}; 
        namespace Region2waValC{
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2wa),Region2waVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[2].RA event
        enum class Region2raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region2raVal> region2ra{}; 
        namespace Region2raValC{
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region2ra),Region2raVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[3].WA event
        enum class Region3waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region3waVal> region3wa{}; 
        namespace Region3waValC{
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3wa),Region3waVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[3].RA event
        enum class Region3raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region3raVal> region3ra{}; 
        namespace Region3raValC{
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(region3ra),Region3raVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[0].WA event
        enum class Pregion0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pregion0waVal> pregion0wa{}; 
        namespace Pregion0waValC{
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0wa),Pregion0waVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[0].RA event
        enum class Pregion0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pregion0raVal> pregion0ra{}; 
        namespace Pregion0raValC{
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion0ra),Pregion0raVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[1].WA event
        enum class Pregion1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pregion1waVal> pregion1wa{}; 
        namespace Pregion1waValC{
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1wa),Pregion1waVal::clear> clear{};
        }
        ///Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[1].RA event
        enum class Pregion1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pregion1raVal> pregion1ra{}; 
        namespace Pregion1raValC{
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pregion1ra),Pregion1raVal::clear> clear{};
        }
    }
    namespace Noneregionen{    ///<Enable/disable regions watch
        using Addr = Register::Address<0x40020510,0xf0ffff00,0,unsigned>;
        ///Enable/disable write access watch in region[0]
        enum class Rgn0waVal {
            disable=0x00000000,     ///<Disable write access watch in this region
            enable=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Rgn0waVal> rgn0wa{}; 
        namespace Rgn0waValC{
            constexpr Register::FieldValue<decltype(rgn0wa),Rgn0waVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn0wa),Rgn0waVal::enable> enable{};
        }
        ///Enable/disable read access watch in region[0]
        enum class Rgn0raVal {
            disable=0x00000000,     ///<Disable read access watch in this region
            enable=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Rgn0raVal> rgn0ra{}; 
        namespace Rgn0raValC{
            constexpr Register::FieldValue<decltype(rgn0ra),Rgn0raVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn0ra),Rgn0raVal::enable> enable{};
        }
        ///Enable/disable write access watch in region[1]
        enum class Rgn1waVal {
            disable=0x00000000,     ///<Disable write access watch in this region
            enable=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Rgn1waVal> rgn1wa{}; 
        namespace Rgn1waValC{
            constexpr Register::FieldValue<decltype(rgn1wa),Rgn1waVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn1wa),Rgn1waVal::enable> enable{};
        }
        ///Enable/disable read access watch in region[1]
        enum class Rgn1raVal {
            disable=0x00000000,     ///<Disable read access watch in this region
            enable=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Rgn1raVal> rgn1ra{}; 
        namespace Rgn1raValC{
            constexpr Register::FieldValue<decltype(rgn1ra),Rgn1raVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn1ra),Rgn1raVal::enable> enable{};
        }
        ///Enable/disable write access watch in region[2]
        enum class Rgn2waVal {
            disable=0x00000000,     ///<Disable write access watch in this region
            enable=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Rgn2waVal> rgn2wa{}; 
        namespace Rgn2waValC{
            constexpr Register::FieldValue<decltype(rgn2wa),Rgn2waVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn2wa),Rgn2waVal::enable> enable{};
        }
        ///Enable/disable read access watch in region[2]
        enum class Rgn2raVal {
            disable=0x00000000,     ///<Disable read access watch in this region
            enable=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Rgn2raVal> rgn2ra{}; 
        namespace Rgn2raValC{
            constexpr Register::FieldValue<decltype(rgn2ra),Rgn2raVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn2ra),Rgn2raVal::enable> enable{};
        }
        ///Enable/disable write access watch in region[3]
        enum class Rgn3waVal {
            disable=0x00000000,     ///<Disable write access watch in this region
            enable=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Rgn3waVal> rgn3wa{}; 
        namespace Rgn3waValC{
            constexpr Register::FieldValue<decltype(rgn3wa),Rgn3waVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn3wa),Rgn3waVal::enable> enable{};
        }
        ///Enable/disable read access watch in region[3]
        enum class Rgn3raVal {
            disable=0x00000000,     ///<Disable read access watch in this region
            enable=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Rgn3raVal> rgn3ra{}; 
        namespace Rgn3raValC{
            constexpr Register::FieldValue<decltype(rgn3ra),Rgn3raVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rgn3ra),Rgn3raVal::enable> enable{};
        }
        ///Enable/disable write access watch in PREGION[0]
        enum class Prgn0waVal {
            disable=0x00000000,     ///<Disable write access watch in this PREGION
            enable=0x00000001,     ///<Enable write access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Prgn0waVal> prgn0wa{}; 
        namespace Prgn0waValC{
            constexpr Register::FieldValue<decltype(prgn0wa),Prgn0waVal::disable> disable{};
            constexpr Register::FieldValue<decltype(prgn0wa),Prgn0waVal::enable> enable{};
        }
        ///Enable/disable read access watch in PREGION[0]
        enum class Prgn0raVal {
            disable=0x00000000,     ///<Disable read access watch in this PREGION
            enable=0x00000001,     ///<Enable read access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Prgn0raVal> prgn0ra{}; 
        namespace Prgn0raValC{
            constexpr Register::FieldValue<decltype(prgn0ra),Prgn0raVal::disable> disable{};
            constexpr Register::FieldValue<decltype(prgn0ra),Prgn0raVal::enable> enable{};
        }
        ///Enable/disable write access watch in PREGION[1]
        enum class Prgn1waVal {
            disable=0x00000000,     ///<Disable write access watch in this PREGION
            enable=0x00000001,     ///<Enable write access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Prgn1waVal> prgn1wa{}; 
        namespace Prgn1waValC{
            constexpr Register::FieldValue<decltype(prgn1wa),Prgn1waVal::disable> disable{};
            constexpr Register::FieldValue<decltype(prgn1wa),Prgn1waVal::enable> enable{};
        }
        ///Enable/disable read access watch in PREGION[1]
        enum class Prgn1raVal {
            disable=0x00000000,     ///<Disable read access watch in this PREGION
            enable=0x00000001,     ///<Enable read access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Prgn1raVal> prgn1ra{}; 
        namespace Prgn1raValC{
            constexpr Register::FieldValue<decltype(prgn1ra),Prgn1raVal::disable> disable{};
            constexpr Register::FieldValue<decltype(prgn1ra),Prgn1raVal::enable> enable{};
        }
    }
    namespace Noneregionenset{    ///<Enable regions watch
        using Addr = Register::Address<0x40020514,0xf0ffff00,0,unsigned>;
        ///Enable write access watch in region[0]
        enum class Rgn0waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            set=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Rgn0waVal> rgn0wa{}; 
        namespace Rgn0waValC{
            constexpr Register::FieldValue<decltype(rgn0wa),Rgn0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn0wa),Rgn0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn0wa),Rgn0waVal::set> set{};
        }
        ///Enable read access watch in region[0]
        enum class Rgn0raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            set=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Rgn0raVal> rgn0ra{}; 
        namespace Rgn0raValC{
            constexpr Register::FieldValue<decltype(rgn0ra),Rgn0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn0ra),Rgn0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn0ra),Rgn0raVal::set> set{};
        }
        ///Enable write access watch in region[1]
        enum class Rgn1waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            set=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Rgn1waVal> rgn1wa{}; 
        namespace Rgn1waValC{
            constexpr Register::FieldValue<decltype(rgn1wa),Rgn1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn1wa),Rgn1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn1wa),Rgn1waVal::set> set{};
        }
        ///Enable read access watch in region[1]
        enum class Rgn1raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            set=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Rgn1raVal> rgn1ra{}; 
        namespace Rgn1raValC{
            constexpr Register::FieldValue<decltype(rgn1ra),Rgn1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn1ra),Rgn1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn1ra),Rgn1raVal::set> set{};
        }
        ///Enable write access watch in region[2]
        enum class Rgn2waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            set=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Rgn2waVal> rgn2wa{}; 
        namespace Rgn2waValC{
            constexpr Register::FieldValue<decltype(rgn2wa),Rgn2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn2wa),Rgn2waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn2wa),Rgn2waVal::set> set{};
        }
        ///Enable read access watch in region[2]
        enum class Rgn2raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            set=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Rgn2raVal> rgn2ra{}; 
        namespace Rgn2raValC{
            constexpr Register::FieldValue<decltype(rgn2ra),Rgn2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn2ra),Rgn2raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn2ra),Rgn2raVal::set> set{};
        }
        ///Enable write access watch in region[3]
        enum class Rgn3waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            set=0x00000001,     ///<Enable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Rgn3waVal> rgn3wa{}; 
        namespace Rgn3waValC{
            constexpr Register::FieldValue<decltype(rgn3wa),Rgn3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn3wa),Rgn3waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn3wa),Rgn3waVal::set> set{};
        }
        ///Enable read access watch in region[3]
        enum class Rgn3raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            set=0x00000001,     ///<Enable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Rgn3raVal> rgn3ra{}; 
        namespace Rgn3raValC{
            constexpr Register::FieldValue<decltype(rgn3ra),Rgn3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn3ra),Rgn3raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn3ra),Rgn3raVal::set> set{};
        }
        ///Enable write access watch in PREGION[0]
        enum class Prgn0waVal {
            disabled=0x00000000,     ///<Write access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Write access watch in this PREGION is enabled
            set=0x00000001,     ///<Enable write access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Prgn0waVal> prgn0wa{}; 
        namespace Prgn0waValC{
            constexpr Register::FieldValue<decltype(prgn0wa),Prgn0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn0wa),Prgn0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn0wa),Prgn0waVal::set> set{};
        }
        ///Enable read access watch in PREGION[0]
        enum class Prgn0raVal {
            disabled=0x00000000,     ///<Read access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Read access watch in this PREGION is enabled
            set=0x00000001,     ///<Enable read access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Prgn0raVal> prgn0ra{}; 
        namespace Prgn0raValC{
            constexpr Register::FieldValue<decltype(prgn0ra),Prgn0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn0ra),Prgn0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn0ra),Prgn0raVal::set> set{};
        }
        ///Enable write access watch in PREGION[1]
        enum class Prgn1waVal {
            disabled=0x00000000,     ///<Write access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Write access watch in this PREGION is enabled
            set=0x00000001,     ///<Enable write access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Prgn1waVal> prgn1wa{}; 
        namespace Prgn1waValC{
            constexpr Register::FieldValue<decltype(prgn1wa),Prgn1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn1wa),Prgn1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn1wa),Prgn1waVal::set> set{};
        }
        ///Enable read access watch in PREGION[1]
        enum class Prgn1raVal {
            disabled=0x00000000,     ///<Read access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Read access watch in this PREGION is enabled
            set=0x00000001,     ///<Enable read access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Prgn1raVal> prgn1ra{}; 
        namespace Prgn1raValC{
            constexpr Register::FieldValue<decltype(prgn1ra),Prgn1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn1ra),Prgn1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn1ra),Prgn1raVal::set> set{};
        }
    }
    namespace Noneregionenclr{    ///<Disable regions watch
        using Addr = Register::Address<0x40020518,0xf0ffff00,0,unsigned>;
        ///Disable write access watch in region[0]
        enum class Rgn0waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            clear=0x00000001,     ///<Disable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Rgn0waVal> rgn0wa{}; 
        namespace Rgn0waValC{
            constexpr Register::FieldValue<decltype(rgn0wa),Rgn0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn0wa),Rgn0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn0wa),Rgn0waVal::clear> clear{};
        }
        ///Disable read access watch in region[0]
        enum class Rgn0raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            clear=0x00000001,     ///<Disable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Rgn0raVal> rgn0ra{}; 
        namespace Rgn0raValC{
            constexpr Register::FieldValue<decltype(rgn0ra),Rgn0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn0ra),Rgn0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn0ra),Rgn0raVal::clear> clear{};
        }
        ///Disable write access watch in region[1]
        enum class Rgn1waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            clear=0x00000001,     ///<Disable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Rgn1waVal> rgn1wa{}; 
        namespace Rgn1waValC{
            constexpr Register::FieldValue<decltype(rgn1wa),Rgn1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn1wa),Rgn1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn1wa),Rgn1waVal::clear> clear{};
        }
        ///Disable read access watch in region[1]
        enum class Rgn1raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            clear=0x00000001,     ///<Disable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Rgn1raVal> rgn1ra{}; 
        namespace Rgn1raValC{
            constexpr Register::FieldValue<decltype(rgn1ra),Rgn1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn1ra),Rgn1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn1ra),Rgn1raVal::clear> clear{};
        }
        ///Disable write access watch in region[2]
        enum class Rgn2waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            clear=0x00000001,     ///<Disable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Rgn2waVal> rgn2wa{}; 
        namespace Rgn2waValC{
            constexpr Register::FieldValue<decltype(rgn2wa),Rgn2waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn2wa),Rgn2waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn2wa),Rgn2waVal::clear> clear{};
        }
        ///Disable read access watch in region[2]
        enum class Rgn2raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            clear=0x00000001,     ///<Disable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Rgn2raVal> rgn2ra{}; 
        namespace Rgn2raValC{
            constexpr Register::FieldValue<decltype(rgn2ra),Rgn2raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn2ra),Rgn2raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn2ra),Rgn2raVal::clear> clear{};
        }
        ///Disable write access watch in region[3]
        enum class Rgn3waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            clear=0x00000001,     ///<Disable write access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Rgn3waVal> rgn3wa{}; 
        namespace Rgn3waValC{
            constexpr Register::FieldValue<decltype(rgn3wa),Rgn3waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn3wa),Rgn3waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn3wa),Rgn3waVal::clear> clear{};
        }
        ///Disable read access watch in region[3]
        enum class Rgn3raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            clear=0x00000001,     ///<Disable read access watch in this region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Rgn3raVal> rgn3ra{}; 
        namespace Rgn3raValC{
            constexpr Register::FieldValue<decltype(rgn3ra),Rgn3raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rgn3ra),Rgn3raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rgn3ra),Rgn3raVal::clear> clear{};
        }
        ///Disable write access watch in PREGION[0]
        enum class Prgn0waVal {
            disabled=0x00000000,     ///<Write access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Write access watch in this PREGION is enabled
            clear=0x00000001,     ///<Disable write access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Prgn0waVal> prgn0wa{}; 
        namespace Prgn0waValC{
            constexpr Register::FieldValue<decltype(prgn0wa),Prgn0waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn0wa),Prgn0waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn0wa),Prgn0waVal::clear> clear{};
        }
        ///Disable read access watch in PREGION[0]
        enum class Prgn0raVal {
            disabled=0x00000000,     ///<Read access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Read access watch in this PREGION is enabled
            clear=0x00000001,     ///<Disable read access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Prgn0raVal> prgn0ra{}; 
        namespace Prgn0raValC{
            constexpr Register::FieldValue<decltype(prgn0ra),Prgn0raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn0ra),Prgn0raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn0ra),Prgn0raVal::clear> clear{};
        }
        ///Disable write access watch in PREGION[1]
        enum class Prgn1waVal {
            disabled=0x00000000,     ///<Write access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Write access watch in this PREGION is enabled
            clear=0x00000001,     ///<Disable write access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Prgn1waVal> prgn1wa{}; 
        namespace Prgn1waValC{
            constexpr Register::FieldValue<decltype(prgn1wa),Prgn1waVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn1wa),Prgn1waVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn1wa),Prgn1waVal::clear> clear{};
        }
        ///Disable read access watch in PREGION[1]
        enum class Prgn1raVal {
            disabled=0x00000000,     ///<Read access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Read access watch in this PREGION is enabled
            clear=0x00000001,     ///<Disable read access watch in this PREGION
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Prgn1raVal> prgn1ra{}; 
        namespace Prgn1raValC{
            constexpr Register::FieldValue<decltype(prgn1ra),Prgn1raVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(prgn1ra),Prgn1raVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(prgn1ra),Prgn1raVal::clear> clear{};
        }
    }
}
