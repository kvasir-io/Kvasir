#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Power Management Unit (PMU)
    namespace PmuPcon{    ///<Power control register
        using Addr = Register::Address<0x4003c000,0x00000007,0x00000000,unsigned>;
        ///A 1 in this bit prevents entry to Deep power-down mode.  This bit is cleared  by power-on reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nodpd{}; 
        ///Reserved. Do not write ones to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Sleep mode flag
        enum class SleepflagVal {
            readNoPowerDown=0x00000000,     ///<Read: No power-down mode entered. The part is in Active mode. Write: No effect.
            sleepDeepSleep=0x00000001,     ///<Read: Sleep/Deep-sleep or Deep power-down mode entered. Write: Writing a 1 clears the SLEEPFLAG bit to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SleepflagVal> sleepflag{}; 
        namespace SleepflagValC{
            constexpr Register::FieldValue<decltype(sleepflag)::Type,SleepflagVal::readNoPowerDown> readNoPowerDown{};
            constexpr Register::FieldValue<decltype(sleepflag)::Type,SleepflagVal::sleepDeepSleep> sleepDeepSleep{};
        }
        ///Reserved. Do not write ones to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved. Do not write ones to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace PmuDpdctrl{    ///<Deep power-down control register
        using Addr = Register::Address<0x4003c014,0x00000000,0x00000000,unsigned>;
        ///WAKEUP pin hysteresis enable
        enum class WakeuphysVal {
            disabled=0x00000000,     ///<Disabled. Hysteresis for WAKEUP pin disabled.
            enabled=0x00000001,     ///<Enabled. Hysteresis for WAKEUP pin enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WakeuphysVal> wakeuphys{}; 
        namespace WakeuphysValC{
            constexpr Register::FieldValue<decltype(wakeuphys)::Type,WakeuphysVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(wakeuphys)::Type,WakeuphysVal::enabled> enabled{};
        }
        ///WAKEUP pin disable. Setting this bit disables the wake-up pin, so it can be used for other purposes. Never set this bit if you intend to use a pin to wake up the part from Deep power-down mode. You can only disable the wake-up pin if the self wake-up timer is enabled and configured. Setting this bit is not necessary if Deep power-down mode is not used.
        enum class WakepaddisableVal {
            enabled=0x00000000,     ///<Enabled. The wake-up function is enabled on pin PIO0_4.
            disabled=0x00000001,     ///<Disabled. Setting this bit disables the wake-up function on pin PIO0_4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WakepaddisableVal> wakepadDisable{}; 
        namespace WakepaddisableValC{
            constexpr Register::FieldValue<decltype(wakepadDisable)::Type,WakepaddisableVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(wakepadDisable)::Type,WakepaddisableVal::disabled> disabled{};
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
        ///Enable the low-power oscillator in Deep power-down mode. Setting this bit causes the low-power oscillator to remain running during Deep power-down mode provided that bit 2 in this register is set as well.  You must set this bit for the self wake-up timer to be able to wake up the part from Deep power-down mode. Do not set this bit unless you use the self wake-up timer to wake up from Deep power-down mode.
        enum class LposcdpdenVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,LposcdpdenVal> lposcdpden{}; 
        namespace LposcdpdenValC{
            constexpr Register::FieldValue<decltype(lposcdpden)::Type,LposcdpdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lposcdpden)::Type,LposcdpdenVal::enabled> enabled{};
        }
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace PmuGpreg0{    ///<General purpose register 0
        using Addr = Register::Address<0x4003c004,0x00000000,0x00000000,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace PmuGpreg1{    ///<General purpose register 0
        using Addr = Register::Address<0x4003c008,0x00000000,0x00000000,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace PmuGpreg2{    ///<General purpose register 0
        using Addr = Register::Address<0x4003c00c,0x00000000,0x00000000,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace PmuGpreg3{    ///<General purpose register 0
        using Addr = Register::Address<0x4003c010,0x00000000,0x00000000,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
}
