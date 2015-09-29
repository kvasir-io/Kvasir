#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power Management Unit (PMU)
    namespace Nonepcon{    ///<Power control register
        using Addr = Register::Address<0x4003c000,0xfffff6f7,0,unsigned>;
        ///A 1 in this bit prevents entry to Deep power-down mode.  This bit is cleared  by power-on reset.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nodpd{}; 
        ///Sleep mode flag
        enum class sleepflagVal {
            readNoPowerDown=0x00000000,     ///<Read: No power-down mode entered. The part is in Active mode. Write: No effect.
            sleepDeepSleep=0x00000001,     ///<Read: Sleep/Deep-sleep or Deep power-down mode entered. Write: Writing a 1 clears the SLEEPFLAG bit to 0.
        };
        namespace sleepflagValC{
            constexpr MPL::Value<sleepflagVal,sleepflagVal::readNoPowerDown> readNoPowerDown{};
            constexpr MPL::Value<sleepflagVal,sleepflagVal::sleepDeepSleep> sleepDeepSleep{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,sleepflagVal> sleepflag{}; 
        ///Deep power-down flag
        enum class dpdflagVal {
            readDeepPowerDow=0x00000000,     ///<Read: Deep power-down mode  not entered. Write: No effect.
            readDeepPowerDow=0x00000001,     ///<Read: Deep power-down mode entered. Write: Clear the Deep power-down flag.
        };
        namespace dpdflagValC{
            constexpr MPL::Value<dpdflagVal,dpdflagVal::readDeepPowerDow> readDeepPowerDow{};
            constexpr MPL::Value<dpdflagVal,dpdflagVal::readDeepPowerDow> readDeepPowerDow{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,dpdflagVal> dpdflag{}; 
    }
    namespace Nonegpreg0{    ///<General purpose register 0
        using Addr = Register::Address<0x4003c004,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg1{    ///<General purpose register 0
        using Addr = Register::Address<0x4003c008,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg2{    ///<General purpose register 0
        using Addr = Register::Address<0x4003c00c,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg3{    ///<General purpose register 0
        using Addr = Register::Address<0x4003c010,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonedpdctrl{    ///<Deep power-down control register
        using Addr = Register::Address<0x4003c014,0xfffffff0,0,unsigned>;
        ///WAKEUP pin hysteresis enable
        enum class wakeuphysVal {
            disabled=0x00000000,     ///<Disabled. Hysteresis for WAKEUP pin disabled.
            enabled=0x00000001,     ///<Enabled. Hysteresis for WAKEUP pin enabled.
        };
        namespace wakeuphysValC{
            constexpr MPL::Value<wakeuphysVal,wakeuphysVal::disabled> disabled{};
            constexpr MPL::Value<wakeuphysVal,wakeuphysVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wakeuphysVal> wakeuphys{}; 
        ///WAKEUP pin disable. Setting this bit disables the wake-up pin, so it can be used for other purposes. Never set this bit if you intend to use a pin to wake up the part from Deep power-down mode. You can only disable the wake-up pin if the self wake-up timer is enabled and configured. Setting this bit is not necessary if Deep power-down mode is not used.
        enum class wakepadDisableVal {
            enabled=0x00000000,     ///<Enabled. The wake-up function is enabled on pin PIO0_4.
            disabled=0x00000001,     ///<Disabled. Setting this bit disables the wake-up function on pin PIO0_4.
        };
        namespace wakepadDisableValC{
            constexpr MPL::Value<wakepadDisableVal,wakepadDisableVal::enabled> enabled{};
            constexpr MPL::Value<wakepadDisableVal,wakepadDisableVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wakepadDisableVal> wakepadDisable{}; 
        ///Enable the low-power oscillator for use with the 10 kHz self wake-up timer clock. You must set this bit if the CLKSEL bit in the self wake-up timer CTRL bit is set.  Do not enable the low-power oscillator if the self wake-up timer is clocked by the divided IRC.
        enum class lposcenVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace lposcenValC{
            constexpr MPL::Value<lposcenVal,lposcenVal::disabled> disabled{};
            constexpr MPL::Value<lposcenVal,lposcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,lposcenVal> lposcen{}; 
        ///Enable the low-power oscillator in Deep power-down mode. Setting this bit causes the low-power oscillator to remain running during Deep power-down mode provided that bit 2 in this register is set as well.  You must set this bit for the self wake-up timer to be able to wake up the part from Deep power-down mode. Do not set this bit unless you use the self wake-up timer to wake up from Deep power-down mode.
        enum class lposcdpdenVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace lposcdpdenValC{
            constexpr MPL::Value<lposcdpdenVal,lposcdpdenVal::disabled> disabled{};
            constexpr MPL::Value<lposcdpdenVal,lposcdpdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,lposcdpdenVal> lposcdpden{}; 
    }
}
