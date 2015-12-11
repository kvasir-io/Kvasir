#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power Management Unit (PMU)
    namespace Nonepcon{    ///<Power control register
        using Addr = Register::Address<0x40020000,0xfffff6f0,0,unsigned>;
        ///Power mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pm{}; 
        ///A 1 in this bit prevents entry to Deep power-down mode when 0x3 is written to the PM field above, the SLEEPDEEP bit is set, and a WFI is executed.   This bit is cleared only by power-on reset, so writing a one to this bit locks the part in a mode in which Deep power-down mode is blocked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nodpd{}; 
        ///Sleep mode flag
        enum class SleepflagVal {
            readNoPowerDown=0x00000000,     ///<Read: No power-down mode entered. LPC11Uxx is in Active mode. Write: No effect.
            readSleepdeepSle=0x00000001,     ///<Read: Sleep/Deep-sleep or Deep power-down mode entered. Write: Writing a 1 clears the SLEEPFLAG bit to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SleepflagVal> sleepflag{}; 
        namespace SleepflagValC{
            constexpr Register::FieldValue<decltype(sleepflag)::Type,SleepflagVal::readNoPowerDown> readNoPowerDown{};
            constexpr Register::FieldValue<decltype(sleepflag)::Type,SleepflagVal::readSleepdeepSle> readSleepdeepSle{};
        }
        }
        ///Deep power-down flag
        enum class DpdflagVal {
            readDeepPowerDow=0x00000000,     ///<Read: Deep power-down mode  not entered. Write: No effect.
            readDeepPowerDow=0x00000001,     ///<Read: Deep power-down mode entered. Write: Clear the Deep power-down flag.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,DpdflagVal> dpdflag{}; 
        namespace DpdflagValC{
            constexpr Register::FieldValue<decltype(dpdflag)::Type,DpdflagVal::readDeepPowerDow> readDeepPowerDow{};
            constexpr Register::FieldValue<decltype(dpdflag)::Type,DpdflagVal::readDeepPowerDow> readDeepPowerDow{};
        }
        }
    }
    namespace Nonegpreg0{    ///<General purpose register 0
        using Addr = Register::Address<0x40020004,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg1{    ///<General purpose register 0
        using Addr = Register::Address<0x40020008,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg2{    ///<General purpose register 0
        using Addr = Register::Address<0x4002000c,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg3{    ///<General purpose register 0
        using Addr = Register::Address<0x40020010,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonedpdctrl{    ///<Deep power-down control register
        using Addr = Register::Address<0x40020014,0xfffffff0,0,unsigned>;
        ///WAKEUP pin hysteresis enable
        enum class WakeuphysVal {
            disabledHysteresis=0x00000000,     ///<Disabled. Hysteresis for WAKUP pin disabled.
            enabledHysteresis=0x00000001,     ///<Enabled. Hysteresis for WAKEUP pin enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WakeuphysVal> wakeuphys{}; 
        namespace WakeuphysValC{
            constexpr Register::FieldValue<decltype(wakeuphys)::Type,WakeuphysVal::disabledHysteresis> disabledHysteresis{};
            constexpr Register::FieldValue<decltype(wakeuphys)::Type,WakeuphysVal::enabledHysteresis> enabledHysteresis{};
        }
        }
        ///WAKEUP pin disable. Setting this bit disables the wake-up pin, so it can be used for other purposes. Never set this bit if you intend to use a pin to wake up the part from Deep power-down mode. You can only disable the wake-up pin if the self wake-up timer is enabled and configured. Setting this bit is not necessary if Deep power-down mode is not used.
        enum class WakepaddisableVal {
            enabledTheWakeUp=0x00000000,     ///<Enabled. The wake-up function is enabled on pin PIO0_4.
            disabledSettingTh=0x00000001,     ///<Disabled. Setting this bit disables the wake-up function on pin PIO0_4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WakepaddisableVal> wakepadDisable{}; 
        namespace WakepaddisableValC{
            constexpr Register::FieldValue<decltype(wakepadDisable)::Type,WakepaddisableVal::enabledTheWakeUp> enabledTheWakeUp{};
            constexpr Register::FieldValue<decltype(wakepadDisable)::Type,WakepaddisableVal::disabledSettingTh> disabledSettingTh{};
        }
        }
        ///Enable the low-power oscillator for use with the 10 kHz self wake-up timer clock. You must set this bit if the CLKSEL bit in the self wake-up timer CTRL bit is set.  Do not enable the low-power oscillator if the self wake-up timer is clocked by the divided IRC.
        enum class LposcenVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,LposcenVal> lposcen{}; 
        namespace LposcenValC{
            constexpr Register::FieldValue<decltype(lposcen)::Type,LposcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lposcen)::Type,LposcenVal::enabled> enabled{};
        }
        }
        ///Enable the low-power oscillator in Deep power-down mode. Setting this bit causes the low-power oscillator to remain running during Deep power-down mode provided that bit 12 in this register is set as well.  You must set this bit for the self wake-up timer to be able to wake up the part from Deep power-down mode. Do not set this bit unless you must use the self wake-up timer to wake up from Deep power-down mode.
        enum class LposcdpdenVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,LposcdpdenVal> lposcdpden{}; 
        namespace LposcdpdenValC{
            constexpr Register::FieldValue<decltype(lposcdpden)::Type,LposcdpdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lposcdpden)::Type,LposcdpdenVal::enabled> enabled{};
        }
        }
    }
}
