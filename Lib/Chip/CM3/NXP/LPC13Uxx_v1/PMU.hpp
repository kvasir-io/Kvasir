#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power Management Unit (PMU)
    namespace Nonepcon{    ///<Power control register
        using Addr = Register::Address<0x40038000,0xfffff6f0,0,unsigned>;
        ///Power mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pm{}; 
        ///A 1 in this bit prevents entry to Deep power-down mode when 0x3 is written to the PM field above, the SLEEPDEEP bit is set, and a WFI is executed. Execution continues after the WFI if this bit is 1.  This bit is cleared only by power-on reset, so writing a one to this bit locks the part in a mode in which Deep power-down mode is blocked.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nodpd{}; 
        ///Sleep mode flag
        enum class sleepflagVal {
            nopowerdown=0x00000000,     ///<Read: No power-down mode entered. LPC11U1x is in Active mode. Write: No effect.
            powerdown=0x00000001,     ///<Read: Sleep/Deep-sleep or Deep power-down mode entered. Write: Writing a 1 clears the SLEEPFLAG bit to 0.
        };
        namespace sleepflagValC{
            constexpr MPL::Value<sleepflagVal,sleepflagVal::nopowerdown> nopowerdown{};
            constexpr MPL::Value<sleepflagVal,sleepflagVal::powerdown> powerdown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,sleepflagVal> sleepflag{}; 
        ///Deep power-down flag
        enum class dpdflagVal {
            dpnotentered=0x00000000,     ///<Read: Deep power-down mode  not entered. Write: No effect.
            dpentered=0x00000001,     ///<Read: Deep power-down mode entered. Write: Clear the Deep power-down flag.
        };
        namespace dpdflagValC{
            constexpr MPL::Value<dpdflagVal,dpdflagVal::dpnotentered> dpnotentered{};
            constexpr MPL::Value<dpdflagVal,dpdflagVal::dpentered> dpentered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,dpdflagVal> dpdflag{}; 
    }
    namespace Nonegpreg0{    ///<General purpose register 0
        using Addr = Register::Address<0x40038004,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg1{    ///<General purpose register 0
        using Addr = Register::Address<0x40038008,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg2{    ///<General purpose register 0
        using Addr = Register::Address<0x4003800c,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg3{    ///<General purpose register 0
        using Addr = Register::Address<0x40038010,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg4{    ///<General purpose register 4
        using Addr = Register::Address<0x40038014,0x000003ff,0,unsigned>;
        ///WAKEUP pin hysteresis enable
        enum class wakeuphysVal {
            disabled=0x00000000,     ///<Hysteresis for WAKEUP pin disabled.
            enabled=0x00000001,     ///<Hysteresis for WAKEUP pin enabled.
        };
        namespace wakeuphysValC{
            constexpr MPL::Value<wakeuphysVal,wakeuphysVal::disabled> disabled{};
            constexpr MPL::Value<wakeuphysVal,wakeuphysVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,wakeuphysVal> wakeuphys{}; 
        ///Data retained during Deep power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
}
