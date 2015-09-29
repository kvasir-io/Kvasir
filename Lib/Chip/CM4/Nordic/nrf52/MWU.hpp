#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Memory Watch Unit
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40020300,0xf0ffff00,0,unsigned>;
        ///Enable or disable interrupt on EVENTS_REGION[0].WA event
        enum class region0waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region0waValC{
            constexpr MPL::Value<region0waVal,region0waVal::disabled> disabled{};
            constexpr MPL::Value<region0waVal,region0waVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,region0waVal> region0wa{}; 
        ///Enable or disable interrupt on EVENTS_REGION[0].RA event
        enum class region0raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region0raValC{
            constexpr MPL::Value<region0raVal,region0raVal::disabled> disabled{};
            constexpr MPL::Value<region0raVal,region0raVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,region0raVal> region0ra{}; 
        ///Enable or disable interrupt on EVENTS_REGION[1].WA event
        enum class region1waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region1waValC{
            constexpr MPL::Value<region1waVal,region1waVal::disabled> disabled{};
            constexpr MPL::Value<region1waVal,region1waVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,region1waVal> region1wa{}; 
        ///Enable or disable interrupt on EVENTS_REGION[1].RA event
        enum class region1raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region1raValC{
            constexpr MPL::Value<region1raVal,region1raVal::disabled> disabled{};
            constexpr MPL::Value<region1raVal,region1raVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,region1raVal> region1ra{}; 
        ///Enable or disable interrupt on EVENTS_REGION[2].WA event
        enum class region2waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region2waValC{
            constexpr MPL::Value<region2waVal,region2waVal::disabled> disabled{};
            constexpr MPL::Value<region2waVal,region2waVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,region2waVal> region2wa{}; 
        ///Enable or disable interrupt on EVENTS_REGION[2].RA event
        enum class region2raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region2raValC{
            constexpr MPL::Value<region2raVal,region2raVal::disabled> disabled{};
            constexpr MPL::Value<region2raVal,region2raVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,region2raVal> region2ra{}; 
        ///Enable or disable interrupt on EVENTS_REGION[3].WA event
        enum class region3waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region3waValC{
            constexpr MPL::Value<region3waVal,region3waVal::disabled> disabled{};
            constexpr MPL::Value<region3waVal,region3waVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,region3waVal> region3wa{}; 
        ///Enable or disable interrupt on EVENTS_REGION[3].RA event
        enum class region3raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region3raValC{
            constexpr MPL::Value<region3raVal,region3raVal::disabled> disabled{};
            constexpr MPL::Value<region3raVal,region3raVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,region3raVal> region3ra{}; 
        ///Enable or disable interrupt on EVENTS_PREGION[0].WA event
        enum class pregion0waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace pregion0waValC{
            constexpr MPL::Value<pregion0waVal,pregion0waVal::disabled> disabled{};
            constexpr MPL::Value<pregion0waVal,pregion0waVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pregion0waVal> pregion0wa{}; 
        ///Enable or disable interrupt on EVENTS_PREGION[0].RA event
        enum class pregion0raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace pregion0raValC{
            constexpr MPL::Value<pregion0raVal,pregion0raVal::disabled> disabled{};
            constexpr MPL::Value<pregion0raVal,pregion0raVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pregion0raVal> pregion0ra{}; 
        ///Enable or disable interrupt on EVENTS_PREGION[1].WA event
        enum class pregion1waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace pregion1waValC{
            constexpr MPL::Value<pregion1waVal,pregion1waVal::disabled> disabled{};
            constexpr MPL::Value<pregion1waVal,pregion1waVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pregion1waVal> pregion1wa{}; 
        ///Enable or disable interrupt on EVENTS_PREGION[1].RA event
        enum class pregion1raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace pregion1raValC{
            constexpr MPL::Value<pregion1raVal,pregion1raVal::disabled> disabled{};
            constexpr MPL::Value<pregion1raVal,pregion1raVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pregion1raVal> pregion1ra{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40020304,0xf0ffff00,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_REGION[0].WA event
        enum class region0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region0waValC{
            constexpr MPL::Value<region0waVal,region0waVal::disabled> disabled{};
            constexpr MPL::Value<region0waVal,region0waVal::enabled> enabled{};
            constexpr MPL::Value<region0waVal,region0waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,region0waVal> region0wa{}; 
        ///Write '1' to Enable interrupt on EVENTS_REGION[0].RA event
        enum class region0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region0raValC{
            constexpr MPL::Value<region0raVal,region0raVal::disabled> disabled{};
            constexpr MPL::Value<region0raVal,region0raVal::enabled> enabled{};
            constexpr MPL::Value<region0raVal,region0raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,region0raVal> region0ra{}; 
        ///Write '1' to Enable interrupt on EVENTS_REGION[1].WA event
        enum class region1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region1waValC{
            constexpr MPL::Value<region1waVal,region1waVal::disabled> disabled{};
            constexpr MPL::Value<region1waVal,region1waVal::enabled> enabled{};
            constexpr MPL::Value<region1waVal,region1waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,region1waVal> region1wa{}; 
        ///Write '1' to Enable interrupt on EVENTS_REGION[1].RA event
        enum class region1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region1raValC{
            constexpr MPL::Value<region1raVal,region1raVal::disabled> disabled{};
            constexpr MPL::Value<region1raVal,region1raVal::enabled> enabled{};
            constexpr MPL::Value<region1raVal,region1raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,region1raVal> region1ra{}; 
        ///Write '1' to Enable interrupt on EVENTS_REGION[2].WA event
        enum class region2waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region2waValC{
            constexpr MPL::Value<region2waVal,region2waVal::disabled> disabled{};
            constexpr MPL::Value<region2waVal,region2waVal::enabled> enabled{};
            constexpr MPL::Value<region2waVal,region2waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,region2waVal> region2wa{}; 
        ///Write '1' to Enable interrupt on EVENTS_REGION[2].RA event
        enum class region2raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region2raValC{
            constexpr MPL::Value<region2raVal,region2raVal::disabled> disabled{};
            constexpr MPL::Value<region2raVal,region2raVal::enabled> enabled{};
            constexpr MPL::Value<region2raVal,region2raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,region2raVal> region2ra{}; 
        ///Write '1' to Enable interrupt on EVENTS_REGION[3].WA event
        enum class region3waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region3waValC{
            constexpr MPL::Value<region3waVal,region3waVal::disabled> disabled{};
            constexpr MPL::Value<region3waVal,region3waVal::enabled> enabled{};
            constexpr MPL::Value<region3waVal,region3waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,region3waVal> region3wa{}; 
        ///Write '1' to Enable interrupt on EVENTS_REGION[3].RA event
        enum class region3raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region3raValC{
            constexpr MPL::Value<region3raVal,region3raVal::disabled> disabled{};
            constexpr MPL::Value<region3raVal,region3raVal::enabled> enabled{};
            constexpr MPL::Value<region3raVal,region3raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,region3raVal> region3ra{}; 
        ///Write '1' to Enable interrupt on EVENTS_PREGION[0].WA event
        enum class pregion0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace pregion0waValC{
            constexpr MPL::Value<pregion0waVal,pregion0waVal::disabled> disabled{};
            constexpr MPL::Value<pregion0waVal,pregion0waVal::enabled> enabled{};
            constexpr MPL::Value<pregion0waVal,pregion0waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pregion0waVal> pregion0wa{}; 
        ///Write '1' to Enable interrupt on EVENTS_PREGION[0].RA event
        enum class pregion0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace pregion0raValC{
            constexpr MPL::Value<pregion0raVal,pregion0raVal::disabled> disabled{};
            constexpr MPL::Value<pregion0raVal,pregion0raVal::enabled> enabled{};
            constexpr MPL::Value<pregion0raVal,pregion0raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pregion0raVal> pregion0ra{}; 
        ///Write '1' to Enable interrupt on EVENTS_PREGION[1].WA event
        enum class pregion1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace pregion1waValC{
            constexpr MPL::Value<pregion1waVal,pregion1waVal::disabled> disabled{};
            constexpr MPL::Value<pregion1waVal,pregion1waVal::enabled> enabled{};
            constexpr MPL::Value<pregion1waVal,pregion1waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pregion1waVal> pregion1wa{}; 
        ///Write '1' to Enable interrupt on EVENTS_PREGION[1].RA event
        enum class pregion1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace pregion1raValC{
            constexpr MPL::Value<pregion1raVal,pregion1raVal::disabled> disabled{};
            constexpr MPL::Value<pregion1raVal,pregion1raVal::enabled> enabled{};
            constexpr MPL::Value<pregion1raVal,pregion1raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pregion1raVal> pregion1ra{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40020308,0xf0ffff00,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_REGION[0].WA event
        enum class region0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region0waValC{
            constexpr MPL::Value<region0waVal,region0waVal::disabled> disabled{};
            constexpr MPL::Value<region0waVal,region0waVal::enabled> enabled{};
            constexpr MPL::Value<region0waVal,region0waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,region0waVal> region0wa{}; 
        ///Write '1' to Clear interrupt on EVENTS_REGION[0].RA event
        enum class region0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region0raValC{
            constexpr MPL::Value<region0raVal,region0raVal::disabled> disabled{};
            constexpr MPL::Value<region0raVal,region0raVal::enabled> enabled{};
            constexpr MPL::Value<region0raVal,region0raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,region0raVal> region0ra{}; 
        ///Write '1' to Clear interrupt on EVENTS_REGION[1].WA event
        enum class region1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region1waValC{
            constexpr MPL::Value<region1waVal,region1waVal::disabled> disabled{};
            constexpr MPL::Value<region1waVal,region1waVal::enabled> enabled{};
            constexpr MPL::Value<region1waVal,region1waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,region1waVal> region1wa{}; 
        ///Write '1' to Clear interrupt on EVENTS_REGION[1].RA event
        enum class region1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region1raValC{
            constexpr MPL::Value<region1raVal,region1raVal::disabled> disabled{};
            constexpr MPL::Value<region1raVal,region1raVal::enabled> enabled{};
            constexpr MPL::Value<region1raVal,region1raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,region1raVal> region1ra{}; 
        ///Write '1' to Clear interrupt on EVENTS_REGION[2].WA event
        enum class region2waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region2waValC{
            constexpr MPL::Value<region2waVal,region2waVal::disabled> disabled{};
            constexpr MPL::Value<region2waVal,region2waVal::enabled> enabled{};
            constexpr MPL::Value<region2waVal,region2waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,region2waVal> region2wa{}; 
        ///Write '1' to Clear interrupt on EVENTS_REGION[2].RA event
        enum class region2raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region2raValC{
            constexpr MPL::Value<region2raVal,region2raVal::disabled> disabled{};
            constexpr MPL::Value<region2raVal,region2raVal::enabled> enabled{};
            constexpr MPL::Value<region2raVal,region2raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,region2raVal> region2ra{}; 
        ///Write '1' to Clear interrupt on EVENTS_REGION[3].WA event
        enum class region3waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region3waValC{
            constexpr MPL::Value<region3waVal,region3waVal::disabled> disabled{};
            constexpr MPL::Value<region3waVal,region3waVal::enabled> enabled{};
            constexpr MPL::Value<region3waVal,region3waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,region3waVal> region3wa{}; 
        ///Write '1' to Clear interrupt on EVENTS_REGION[3].RA event
        enum class region3raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region3raValC{
            constexpr MPL::Value<region3raVal,region3raVal::disabled> disabled{};
            constexpr MPL::Value<region3raVal,region3raVal::enabled> enabled{};
            constexpr MPL::Value<region3raVal,region3raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,region3raVal> region3ra{}; 
        ///Write '1' to Clear interrupt on EVENTS_PREGION[0].WA event
        enum class pregion0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace pregion0waValC{
            constexpr MPL::Value<pregion0waVal,pregion0waVal::disabled> disabled{};
            constexpr MPL::Value<pregion0waVal,pregion0waVal::enabled> enabled{};
            constexpr MPL::Value<pregion0waVal,pregion0waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pregion0waVal> pregion0wa{}; 
        ///Write '1' to Clear interrupt on EVENTS_PREGION[0].RA event
        enum class pregion0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace pregion0raValC{
            constexpr MPL::Value<pregion0raVal,pregion0raVal::disabled> disabled{};
            constexpr MPL::Value<pregion0raVal,pregion0raVal::enabled> enabled{};
            constexpr MPL::Value<pregion0raVal,pregion0raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pregion0raVal> pregion0ra{}; 
        ///Write '1' to Clear interrupt on EVENTS_PREGION[1].WA event
        enum class pregion1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace pregion1waValC{
            constexpr MPL::Value<pregion1waVal,pregion1waVal::disabled> disabled{};
            constexpr MPL::Value<pregion1waVal,pregion1waVal::enabled> enabled{};
            constexpr MPL::Value<pregion1waVal,pregion1waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pregion1waVal> pregion1wa{}; 
        ///Write '1' to Clear interrupt on EVENTS_PREGION[1].RA event
        enum class pregion1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace pregion1raValC{
            constexpr MPL::Value<pregion1raVal,pregion1raVal::disabled> disabled{};
            constexpr MPL::Value<pregion1raVal,pregion1raVal::enabled> enabled{};
            constexpr MPL::Value<pregion1raVal,pregion1raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pregion1raVal> pregion1ra{}; 
    }
    namespace Nonenmien{    ///<Enable or disable non-maskable interrupt
        using Addr = Register::Address<0x40020320,0xf0ffff00,0,unsigned>;
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[0].WA event
        enum class region0waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region0waValC{
            constexpr MPL::Value<region0waVal,region0waVal::disabled> disabled{};
            constexpr MPL::Value<region0waVal,region0waVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,region0waVal> region0wa{}; 
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[0].RA event
        enum class region0raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region0raValC{
            constexpr MPL::Value<region0raVal,region0raVal::disabled> disabled{};
            constexpr MPL::Value<region0raVal,region0raVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,region0raVal> region0ra{}; 
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[1].WA event
        enum class region1waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region1waValC{
            constexpr MPL::Value<region1waVal,region1waVal::disabled> disabled{};
            constexpr MPL::Value<region1waVal,region1waVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,region1waVal> region1wa{}; 
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[1].RA event
        enum class region1raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region1raValC{
            constexpr MPL::Value<region1raVal,region1raVal::disabled> disabled{};
            constexpr MPL::Value<region1raVal,region1raVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,region1raVal> region1ra{}; 
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[2].WA event
        enum class region2waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region2waValC{
            constexpr MPL::Value<region2waVal,region2waVal::disabled> disabled{};
            constexpr MPL::Value<region2waVal,region2waVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,region2waVal> region2wa{}; 
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[2].RA event
        enum class region2raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region2raValC{
            constexpr MPL::Value<region2raVal,region2raVal::disabled> disabled{};
            constexpr MPL::Value<region2raVal,region2raVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,region2raVal> region2ra{}; 
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[3].WA event
        enum class region3waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region3waValC{
            constexpr MPL::Value<region3waVal,region3waVal::disabled> disabled{};
            constexpr MPL::Value<region3waVal,region3waVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,region3waVal> region3wa{}; 
        ///Enable or disable non-maskable interrupt on EVENTS_REGION[3].RA event
        enum class region3raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace region3raValC{
            constexpr MPL::Value<region3raVal,region3raVal::disabled> disabled{};
            constexpr MPL::Value<region3raVal,region3raVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,region3raVal> region3ra{}; 
        ///Enable or disable non-maskable interrupt on EVENTS_PREGION[0].WA event
        enum class pregion0waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace pregion0waValC{
            constexpr MPL::Value<pregion0waVal,pregion0waVal::disabled> disabled{};
            constexpr MPL::Value<pregion0waVal,pregion0waVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pregion0waVal> pregion0wa{}; 
        ///Enable or disable non-maskable interrupt on EVENTS_PREGION[0].RA event
        enum class pregion0raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace pregion0raValC{
            constexpr MPL::Value<pregion0raVal,pregion0raVal::disabled> disabled{};
            constexpr MPL::Value<pregion0raVal,pregion0raVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pregion0raVal> pregion0ra{}; 
        ///Enable or disable non-maskable interrupt on EVENTS_PREGION[1].WA event
        enum class pregion1waVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace pregion1waValC{
            constexpr MPL::Value<pregion1waVal,pregion1waVal::disabled> disabled{};
            constexpr MPL::Value<pregion1waVal,pregion1waVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pregion1waVal> pregion1wa{}; 
        ///Enable or disable non-maskable interrupt on EVENTS_PREGION[1].RA event
        enum class pregion1raVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace pregion1raValC{
            constexpr MPL::Value<pregion1raVal,pregion1raVal::disabled> disabled{};
            constexpr MPL::Value<pregion1raVal,pregion1raVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pregion1raVal> pregion1ra{}; 
    }
    namespace Nonenmienset{    ///<Enable non-maskable interrupt
        using Addr = Register::Address<0x40020324,0xf0ffff00,0,unsigned>;
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[0].WA event
        enum class region0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region0waValC{
            constexpr MPL::Value<region0waVal,region0waVal::disabled> disabled{};
            constexpr MPL::Value<region0waVal,region0waVal::enabled> enabled{};
            constexpr MPL::Value<region0waVal,region0waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,region0waVal> region0wa{}; 
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[0].RA event
        enum class region0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region0raValC{
            constexpr MPL::Value<region0raVal,region0raVal::disabled> disabled{};
            constexpr MPL::Value<region0raVal,region0raVal::enabled> enabled{};
            constexpr MPL::Value<region0raVal,region0raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,region0raVal> region0ra{}; 
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[1].WA event
        enum class region1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region1waValC{
            constexpr MPL::Value<region1waVal,region1waVal::disabled> disabled{};
            constexpr MPL::Value<region1waVal,region1waVal::enabled> enabled{};
            constexpr MPL::Value<region1waVal,region1waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,region1waVal> region1wa{}; 
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[1].RA event
        enum class region1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region1raValC{
            constexpr MPL::Value<region1raVal,region1raVal::disabled> disabled{};
            constexpr MPL::Value<region1raVal,region1raVal::enabled> enabled{};
            constexpr MPL::Value<region1raVal,region1raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,region1raVal> region1ra{}; 
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[2].WA event
        enum class region2waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region2waValC{
            constexpr MPL::Value<region2waVal,region2waVal::disabled> disabled{};
            constexpr MPL::Value<region2waVal,region2waVal::enabled> enabled{};
            constexpr MPL::Value<region2waVal,region2waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,region2waVal> region2wa{}; 
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[2].RA event
        enum class region2raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region2raValC{
            constexpr MPL::Value<region2raVal,region2raVal::disabled> disabled{};
            constexpr MPL::Value<region2raVal,region2raVal::enabled> enabled{};
            constexpr MPL::Value<region2raVal,region2raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,region2raVal> region2ra{}; 
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[3].WA event
        enum class region3waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region3waValC{
            constexpr MPL::Value<region3waVal,region3waVal::disabled> disabled{};
            constexpr MPL::Value<region3waVal,region3waVal::enabled> enabled{};
            constexpr MPL::Value<region3waVal,region3waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,region3waVal> region3wa{}; 
        ///Write '1' to Enable non-maskable interrupt on EVENTS_REGION[3].RA event
        enum class region3raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace region3raValC{
            constexpr MPL::Value<region3raVal,region3raVal::disabled> disabled{};
            constexpr MPL::Value<region3raVal,region3raVal::enabled> enabled{};
            constexpr MPL::Value<region3raVal,region3raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,region3raVal> region3ra{}; 
        ///Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[0].WA event
        enum class pregion0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace pregion0waValC{
            constexpr MPL::Value<pregion0waVal,pregion0waVal::disabled> disabled{};
            constexpr MPL::Value<pregion0waVal,pregion0waVal::enabled> enabled{};
            constexpr MPL::Value<pregion0waVal,pregion0waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pregion0waVal> pregion0wa{}; 
        ///Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[0].RA event
        enum class pregion0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace pregion0raValC{
            constexpr MPL::Value<pregion0raVal,pregion0raVal::disabled> disabled{};
            constexpr MPL::Value<pregion0raVal,pregion0raVal::enabled> enabled{};
            constexpr MPL::Value<pregion0raVal,pregion0raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pregion0raVal> pregion0ra{}; 
        ///Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[1].WA event
        enum class pregion1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace pregion1waValC{
            constexpr MPL::Value<pregion1waVal,pregion1waVal::disabled> disabled{};
            constexpr MPL::Value<pregion1waVal,pregion1waVal::enabled> enabled{};
            constexpr MPL::Value<pregion1waVal,pregion1waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pregion1waVal> pregion1wa{}; 
        ///Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[1].RA event
        enum class pregion1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace pregion1raValC{
            constexpr MPL::Value<pregion1raVal,pregion1raVal::disabled> disabled{};
            constexpr MPL::Value<pregion1raVal,pregion1raVal::enabled> enabled{};
            constexpr MPL::Value<pregion1raVal,pregion1raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pregion1raVal> pregion1ra{}; 
    }
    namespace Nonenmienclr{    ///<Disable non-maskable interrupt
        using Addr = Register::Address<0x40020328,0xf0ffff00,0,unsigned>;
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[0].WA event
        enum class region0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region0waValC{
            constexpr MPL::Value<region0waVal,region0waVal::disabled> disabled{};
            constexpr MPL::Value<region0waVal,region0waVal::enabled> enabled{};
            constexpr MPL::Value<region0waVal,region0waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,region0waVal> region0wa{}; 
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[0].RA event
        enum class region0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region0raValC{
            constexpr MPL::Value<region0raVal,region0raVal::disabled> disabled{};
            constexpr MPL::Value<region0raVal,region0raVal::enabled> enabled{};
            constexpr MPL::Value<region0raVal,region0raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,region0raVal> region0ra{}; 
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[1].WA event
        enum class region1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region1waValC{
            constexpr MPL::Value<region1waVal,region1waVal::disabled> disabled{};
            constexpr MPL::Value<region1waVal,region1waVal::enabled> enabled{};
            constexpr MPL::Value<region1waVal,region1waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,region1waVal> region1wa{}; 
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[1].RA event
        enum class region1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region1raValC{
            constexpr MPL::Value<region1raVal,region1raVal::disabled> disabled{};
            constexpr MPL::Value<region1raVal,region1raVal::enabled> enabled{};
            constexpr MPL::Value<region1raVal,region1raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,region1raVal> region1ra{}; 
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[2].WA event
        enum class region2waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region2waValC{
            constexpr MPL::Value<region2waVal,region2waVal::disabled> disabled{};
            constexpr MPL::Value<region2waVal,region2waVal::enabled> enabled{};
            constexpr MPL::Value<region2waVal,region2waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,region2waVal> region2wa{}; 
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[2].RA event
        enum class region2raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region2raValC{
            constexpr MPL::Value<region2raVal,region2raVal::disabled> disabled{};
            constexpr MPL::Value<region2raVal,region2raVal::enabled> enabled{};
            constexpr MPL::Value<region2raVal,region2raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,region2raVal> region2ra{}; 
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[3].WA event
        enum class region3waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region3waValC{
            constexpr MPL::Value<region3waVal,region3waVal::disabled> disabled{};
            constexpr MPL::Value<region3waVal,region3waVal::enabled> enabled{};
            constexpr MPL::Value<region3waVal,region3waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,region3waVal> region3wa{}; 
        ///Write '1' to Clear non-maskable interrupt on EVENTS_REGION[3].RA event
        enum class region3raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace region3raValC{
            constexpr MPL::Value<region3raVal,region3raVal::disabled> disabled{};
            constexpr MPL::Value<region3raVal,region3raVal::enabled> enabled{};
            constexpr MPL::Value<region3raVal,region3raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,region3raVal> region3ra{}; 
        ///Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[0].WA event
        enum class pregion0waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace pregion0waValC{
            constexpr MPL::Value<pregion0waVal,pregion0waVal::disabled> disabled{};
            constexpr MPL::Value<pregion0waVal,pregion0waVal::enabled> enabled{};
            constexpr MPL::Value<pregion0waVal,pregion0waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pregion0waVal> pregion0wa{}; 
        ///Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[0].RA event
        enum class pregion0raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace pregion0raValC{
            constexpr MPL::Value<pregion0raVal,pregion0raVal::disabled> disabled{};
            constexpr MPL::Value<pregion0raVal,pregion0raVal::enabled> enabled{};
            constexpr MPL::Value<pregion0raVal,pregion0raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pregion0raVal> pregion0ra{}; 
        ///Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[1].WA event
        enum class pregion1waVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace pregion1waValC{
            constexpr MPL::Value<pregion1waVal,pregion1waVal::disabled> disabled{};
            constexpr MPL::Value<pregion1waVal,pregion1waVal::enabled> enabled{};
            constexpr MPL::Value<pregion1waVal,pregion1waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pregion1waVal> pregion1wa{}; 
        ///Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[1].RA event
        enum class pregion1raVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace pregion1raValC{
            constexpr MPL::Value<pregion1raVal,pregion1raVal::disabled> disabled{};
            constexpr MPL::Value<pregion1raVal,pregion1raVal::enabled> enabled{};
            constexpr MPL::Value<pregion1raVal,pregion1raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pregion1raVal> pregion1ra{}; 
    }
    namespace Noneregionen{    ///<Enable/disable regions watch
        using Addr = Register::Address<0x40020510,0xf0ffff00,0,unsigned>;
        ///Enable/disable write access watch in region[0]
        enum class rgn0waVal {
            disable=0x00000000,     ///<Disable write access watch in this region
            enable=0x00000001,     ///<Enable write access watch in this region
        };
        namespace rgn0waValC{
            constexpr MPL::Value<rgn0waVal,rgn0waVal::disable> disable{};
            constexpr MPL::Value<rgn0waVal,rgn0waVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rgn0waVal> rgn0wa{}; 
        ///Enable/disable read access watch in region[0]
        enum class rgn0raVal {
            disable=0x00000000,     ///<Disable read access watch in this region
            enable=0x00000001,     ///<Enable read access watch in this region
        };
        namespace rgn0raValC{
            constexpr MPL::Value<rgn0raVal,rgn0raVal::disable> disable{};
            constexpr MPL::Value<rgn0raVal,rgn0raVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rgn0raVal> rgn0ra{}; 
        ///Enable/disable write access watch in region[1]
        enum class rgn1waVal {
            disable=0x00000000,     ///<Disable write access watch in this region
            enable=0x00000001,     ///<Enable write access watch in this region
        };
        namespace rgn1waValC{
            constexpr MPL::Value<rgn1waVal,rgn1waVal::disable> disable{};
            constexpr MPL::Value<rgn1waVal,rgn1waVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rgn1waVal> rgn1wa{}; 
        ///Enable/disable read access watch in region[1]
        enum class rgn1raVal {
            disable=0x00000000,     ///<Disable read access watch in this region
            enable=0x00000001,     ///<Enable read access watch in this region
        };
        namespace rgn1raValC{
            constexpr MPL::Value<rgn1raVal,rgn1raVal::disable> disable{};
            constexpr MPL::Value<rgn1raVal,rgn1raVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rgn1raVal> rgn1ra{}; 
        ///Enable/disable write access watch in region[2]
        enum class rgn2waVal {
            disable=0x00000000,     ///<Disable write access watch in this region
            enable=0x00000001,     ///<Enable write access watch in this region
        };
        namespace rgn2waValC{
            constexpr MPL::Value<rgn2waVal,rgn2waVal::disable> disable{};
            constexpr MPL::Value<rgn2waVal,rgn2waVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rgn2waVal> rgn2wa{}; 
        ///Enable/disable read access watch in region[2]
        enum class rgn2raVal {
            disable=0x00000000,     ///<Disable read access watch in this region
            enable=0x00000001,     ///<Enable read access watch in this region
        };
        namespace rgn2raValC{
            constexpr MPL::Value<rgn2raVal,rgn2raVal::disable> disable{};
            constexpr MPL::Value<rgn2raVal,rgn2raVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rgn2raVal> rgn2ra{}; 
        ///Enable/disable write access watch in region[3]
        enum class rgn3waVal {
            disable=0x00000000,     ///<Disable write access watch in this region
            enable=0x00000001,     ///<Enable write access watch in this region
        };
        namespace rgn3waValC{
            constexpr MPL::Value<rgn3waVal,rgn3waVal::disable> disable{};
            constexpr MPL::Value<rgn3waVal,rgn3waVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rgn3waVal> rgn3wa{}; 
        ///Enable/disable read access watch in region[3]
        enum class rgn3raVal {
            disable=0x00000000,     ///<Disable read access watch in this region
            enable=0x00000001,     ///<Enable read access watch in this region
        };
        namespace rgn3raValC{
            constexpr MPL::Value<rgn3raVal,rgn3raVal::disable> disable{};
            constexpr MPL::Value<rgn3raVal,rgn3raVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rgn3raVal> rgn3ra{}; 
        ///Enable/disable write access watch in PREGION[0]
        enum class prgn0waVal {
            disable=0x00000000,     ///<Disable write access watch in this PREGION
            enable=0x00000001,     ///<Enable write access watch in this PREGION
        };
        namespace prgn0waValC{
            constexpr MPL::Value<prgn0waVal,prgn0waVal::disable> disable{};
            constexpr MPL::Value<prgn0waVal,prgn0waVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,prgn0waVal> prgn0wa{}; 
        ///Enable/disable read access watch in PREGION[0]
        enum class prgn0raVal {
            disable=0x00000000,     ///<Disable read access watch in this PREGION
            enable=0x00000001,     ///<Enable read access watch in this PREGION
        };
        namespace prgn0raValC{
            constexpr MPL::Value<prgn0raVal,prgn0raVal::disable> disable{};
            constexpr MPL::Value<prgn0raVal,prgn0raVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,prgn0raVal> prgn0ra{}; 
        ///Enable/disable write access watch in PREGION[1]
        enum class prgn1waVal {
            disable=0x00000000,     ///<Disable write access watch in this PREGION
            enable=0x00000001,     ///<Enable write access watch in this PREGION
        };
        namespace prgn1waValC{
            constexpr MPL::Value<prgn1waVal,prgn1waVal::disable> disable{};
            constexpr MPL::Value<prgn1waVal,prgn1waVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,prgn1waVal> prgn1wa{}; 
        ///Enable/disable read access watch in PREGION[1]
        enum class prgn1raVal {
            disable=0x00000000,     ///<Disable read access watch in this PREGION
            enable=0x00000001,     ///<Enable read access watch in this PREGION
        };
        namespace prgn1raValC{
            constexpr MPL::Value<prgn1raVal,prgn1raVal::disable> disable{};
            constexpr MPL::Value<prgn1raVal,prgn1raVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,prgn1raVal> prgn1ra{}; 
    }
    namespace Noneregionenset{    ///<Enable regions watch
        using Addr = Register::Address<0x40020514,0xf0ffff00,0,unsigned>;
        ///Enable write access watch in region[0]
        enum class rgn0waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            set=0x00000001,     ///<Enable write access watch in this region
        };
        namespace rgn0waValC{
            constexpr MPL::Value<rgn0waVal,rgn0waVal::disabled> disabled{};
            constexpr MPL::Value<rgn0waVal,rgn0waVal::enabled> enabled{};
            constexpr MPL::Value<rgn0waVal,rgn0waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rgn0waVal> rgn0wa{}; 
        ///Enable read access watch in region[0]
        enum class rgn0raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            set=0x00000001,     ///<Enable read access watch in this region
        };
        namespace rgn0raValC{
            constexpr MPL::Value<rgn0raVal,rgn0raVal::disabled> disabled{};
            constexpr MPL::Value<rgn0raVal,rgn0raVal::enabled> enabled{};
            constexpr MPL::Value<rgn0raVal,rgn0raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rgn0raVal> rgn0ra{}; 
        ///Enable write access watch in region[1]
        enum class rgn1waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            set=0x00000001,     ///<Enable write access watch in this region
        };
        namespace rgn1waValC{
            constexpr MPL::Value<rgn1waVal,rgn1waVal::disabled> disabled{};
            constexpr MPL::Value<rgn1waVal,rgn1waVal::enabled> enabled{};
            constexpr MPL::Value<rgn1waVal,rgn1waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rgn1waVal> rgn1wa{}; 
        ///Enable read access watch in region[1]
        enum class rgn1raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            set=0x00000001,     ///<Enable read access watch in this region
        };
        namespace rgn1raValC{
            constexpr MPL::Value<rgn1raVal,rgn1raVal::disabled> disabled{};
            constexpr MPL::Value<rgn1raVal,rgn1raVal::enabled> enabled{};
            constexpr MPL::Value<rgn1raVal,rgn1raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rgn1raVal> rgn1ra{}; 
        ///Enable write access watch in region[2]
        enum class rgn2waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            set=0x00000001,     ///<Enable write access watch in this region
        };
        namespace rgn2waValC{
            constexpr MPL::Value<rgn2waVal,rgn2waVal::disabled> disabled{};
            constexpr MPL::Value<rgn2waVal,rgn2waVal::enabled> enabled{};
            constexpr MPL::Value<rgn2waVal,rgn2waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rgn2waVal> rgn2wa{}; 
        ///Enable read access watch in region[2]
        enum class rgn2raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            set=0x00000001,     ///<Enable read access watch in this region
        };
        namespace rgn2raValC{
            constexpr MPL::Value<rgn2raVal,rgn2raVal::disabled> disabled{};
            constexpr MPL::Value<rgn2raVal,rgn2raVal::enabled> enabled{};
            constexpr MPL::Value<rgn2raVal,rgn2raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rgn2raVal> rgn2ra{}; 
        ///Enable write access watch in region[3]
        enum class rgn3waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            set=0x00000001,     ///<Enable write access watch in this region
        };
        namespace rgn3waValC{
            constexpr MPL::Value<rgn3waVal,rgn3waVal::disabled> disabled{};
            constexpr MPL::Value<rgn3waVal,rgn3waVal::enabled> enabled{};
            constexpr MPL::Value<rgn3waVal,rgn3waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rgn3waVal> rgn3wa{}; 
        ///Enable read access watch in region[3]
        enum class rgn3raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            set=0x00000001,     ///<Enable read access watch in this region
        };
        namespace rgn3raValC{
            constexpr MPL::Value<rgn3raVal,rgn3raVal::disabled> disabled{};
            constexpr MPL::Value<rgn3raVal,rgn3raVal::enabled> enabled{};
            constexpr MPL::Value<rgn3raVal,rgn3raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rgn3raVal> rgn3ra{}; 
        ///Enable write access watch in PREGION[0]
        enum class prgn0waVal {
            disabled=0x00000000,     ///<Write access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Write access watch in this PREGION is enabled
            set=0x00000001,     ///<Enable write access watch in this PREGION
        };
        namespace prgn0waValC{
            constexpr MPL::Value<prgn0waVal,prgn0waVal::disabled> disabled{};
            constexpr MPL::Value<prgn0waVal,prgn0waVal::enabled> enabled{};
            constexpr MPL::Value<prgn0waVal,prgn0waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,prgn0waVal> prgn0wa{}; 
        ///Enable read access watch in PREGION[0]
        enum class prgn0raVal {
            disabled=0x00000000,     ///<Read access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Read access watch in this PREGION is enabled
            set=0x00000001,     ///<Enable read access watch in this PREGION
        };
        namespace prgn0raValC{
            constexpr MPL::Value<prgn0raVal,prgn0raVal::disabled> disabled{};
            constexpr MPL::Value<prgn0raVal,prgn0raVal::enabled> enabled{};
            constexpr MPL::Value<prgn0raVal,prgn0raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,prgn0raVal> prgn0ra{}; 
        ///Enable write access watch in PREGION[1]
        enum class prgn1waVal {
            disabled=0x00000000,     ///<Write access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Write access watch in this PREGION is enabled
            set=0x00000001,     ///<Enable write access watch in this PREGION
        };
        namespace prgn1waValC{
            constexpr MPL::Value<prgn1waVal,prgn1waVal::disabled> disabled{};
            constexpr MPL::Value<prgn1waVal,prgn1waVal::enabled> enabled{};
            constexpr MPL::Value<prgn1waVal,prgn1waVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,prgn1waVal> prgn1wa{}; 
        ///Enable read access watch in PREGION[1]
        enum class prgn1raVal {
            disabled=0x00000000,     ///<Read access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Read access watch in this PREGION is enabled
            set=0x00000001,     ///<Enable read access watch in this PREGION
        };
        namespace prgn1raValC{
            constexpr MPL::Value<prgn1raVal,prgn1raVal::disabled> disabled{};
            constexpr MPL::Value<prgn1raVal,prgn1raVal::enabled> enabled{};
            constexpr MPL::Value<prgn1raVal,prgn1raVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,prgn1raVal> prgn1ra{}; 
    }
    namespace Noneregionenclr{    ///<Disable regions watch
        using Addr = Register::Address<0x40020518,0xf0ffff00,0,unsigned>;
        ///Disable write access watch in region[0]
        enum class rgn0waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            clear=0x00000001,     ///<Disable write access watch in this region
        };
        namespace rgn0waValC{
            constexpr MPL::Value<rgn0waVal,rgn0waVal::disabled> disabled{};
            constexpr MPL::Value<rgn0waVal,rgn0waVal::enabled> enabled{};
            constexpr MPL::Value<rgn0waVal,rgn0waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rgn0waVal> rgn0wa{}; 
        ///Disable read access watch in region[0]
        enum class rgn0raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            clear=0x00000001,     ///<Disable read access watch in this region
        };
        namespace rgn0raValC{
            constexpr MPL::Value<rgn0raVal,rgn0raVal::disabled> disabled{};
            constexpr MPL::Value<rgn0raVal,rgn0raVal::enabled> enabled{};
            constexpr MPL::Value<rgn0raVal,rgn0raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rgn0raVal> rgn0ra{}; 
        ///Disable write access watch in region[1]
        enum class rgn1waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            clear=0x00000001,     ///<Disable write access watch in this region
        };
        namespace rgn1waValC{
            constexpr MPL::Value<rgn1waVal,rgn1waVal::disabled> disabled{};
            constexpr MPL::Value<rgn1waVal,rgn1waVal::enabled> enabled{};
            constexpr MPL::Value<rgn1waVal,rgn1waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rgn1waVal> rgn1wa{}; 
        ///Disable read access watch in region[1]
        enum class rgn1raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            clear=0x00000001,     ///<Disable read access watch in this region
        };
        namespace rgn1raValC{
            constexpr MPL::Value<rgn1raVal,rgn1raVal::disabled> disabled{};
            constexpr MPL::Value<rgn1raVal,rgn1raVal::enabled> enabled{};
            constexpr MPL::Value<rgn1raVal,rgn1raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rgn1raVal> rgn1ra{}; 
        ///Disable write access watch in region[2]
        enum class rgn2waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            clear=0x00000001,     ///<Disable write access watch in this region
        };
        namespace rgn2waValC{
            constexpr MPL::Value<rgn2waVal,rgn2waVal::disabled> disabled{};
            constexpr MPL::Value<rgn2waVal,rgn2waVal::enabled> enabled{};
            constexpr MPL::Value<rgn2waVal,rgn2waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rgn2waVal> rgn2wa{}; 
        ///Disable read access watch in region[2]
        enum class rgn2raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            clear=0x00000001,     ///<Disable read access watch in this region
        };
        namespace rgn2raValC{
            constexpr MPL::Value<rgn2raVal,rgn2raVal::disabled> disabled{};
            constexpr MPL::Value<rgn2raVal,rgn2raVal::enabled> enabled{};
            constexpr MPL::Value<rgn2raVal,rgn2raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rgn2raVal> rgn2ra{}; 
        ///Disable write access watch in region[3]
        enum class rgn3waVal {
            disabled=0x00000000,     ///<Write access watch in this region is disabled
            enabled=0x00000001,     ///<Write access watch in this region is enabled
            clear=0x00000001,     ///<Disable write access watch in this region
        };
        namespace rgn3waValC{
            constexpr MPL::Value<rgn3waVal,rgn3waVal::disabled> disabled{};
            constexpr MPL::Value<rgn3waVal,rgn3waVal::enabled> enabled{};
            constexpr MPL::Value<rgn3waVal,rgn3waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rgn3waVal> rgn3wa{}; 
        ///Disable read access watch in region[3]
        enum class rgn3raVal {
            disabled=0x00000000,     ///<Read access watch in this region is disabled
            enabled=0x00000001,     ///<Read access watch in this region is enabled
            clear=0x00000001,     ///<Disable read access watch in this region
        };
        namespace rgn3raValC{
            constexpr MPL::Value<rgn3raVal,rgn3raVal::disabled> disabled{};
            constexpr MPL::Value<rgn3raVal,rgn3raVal::enabled> enabled{};
            constexpr MPL::Value<rgn3raVal,rgn3raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rgn3raVal> rgn3ra{}; 
        ///Disable write access watch in PREGION[0]
        enum class prgn0waVal {
            disabled=0x00000000,     ///<Write access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Write access watch in this PREGION is enabled
            clear=0x00000001,     ///<Disable write access watch in this PREGION
        };
        namespace prgn0waValC{
            constexpr MPL::Value<prgn0waVal,prgn0waVal::disabled> disabled{};
            constexpr MPL::Value<prgn0waVal,prgn0waVal::enabled> enabled{};
            constexpr MPL::Value<prgn0waVal,prgn0waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,prgn0waVal> prgn0wa{}; 
        ///Disable read access watch in PREGION[0]
        enum class prgn0raVal {
            disabled=0x00000000,     ///<Read access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Read access watch in this PREGION is enabled
            clear=0x00000001,     ///<Disable read access watch in this PREGION
        };
        namespace prgn0raValC{
            constexpr MPL::Value<prgn0raVal,prgn0raVal::disabled> disabled{};
            constexpr MPL::Value<prgn0raVal,prgn0raVal::enabled> enabled{};
            constexpr MPL::Value<prgn0raVal,prgn0raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,prgn0raVal> prgn0ra{}; 
        ///Disable write access watch in PREGION[1]
        enum class prgn1waVal {
            disabled=0x00000000,     ///<Write access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Write access watch in this PREGION is enabled
            clear=0x00000001,     ///<Disable write access watch in this PREGION
        };
        namespace prgn1waValC{
            constexpr MPL::Value<prgn1waVal,prgn1waVal::disabled> disabled{};
            constexpr MPL::Value<prgn1waVal,prgn1waVal::enabled> enabled{};
            constexpr MPL::Value<prgn1waVal,prgn1waVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,prgn1waVal> prgn1wa{}; 
        ///Disable read access watch in PREGION[1]
        enum class prgn1raVal {
            disabled=0x00000000,     ///<Read access watch in this PREGION is disabled
            enabled=0x00000001,     ///<Read access watch in this PREGION is enabled
            clear=0x00000001,     ///<Disable read access watch in this PREGION
        };
        namespace prgn1raValC{
            constexpr MPL::Value<prgn1raVal,prgn1raVal::disabled> disabled{};
            constexpr MPL::Value<prgn1raVal,prgn1raVal::enabled> enabled{};
            constexpr MPL::Value<prgn1raVal,prgn1raVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,prgn1raVal> prgn1ra{}; 
    }
}
