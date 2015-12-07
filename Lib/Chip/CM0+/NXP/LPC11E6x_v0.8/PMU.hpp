#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power Management Unit (PMU)
    namespace Nonepcon{    ///<Power control register
        using Addr = Register::Address<0x40038000,0xfffff6f0,0,unsigned>;
        ///Power mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pm{}; 
        namespace PmValC{
        }
        ///A 1 in this bit prevents entry to Deep power-down mode when 0x3 is written to the PM field above, the SLEEPDEEP bit is set, and a WFI is executed.   This bit is cleared only by power-on reset, so writing a one to this bit locks the part in a mode in which Deep power-down mode is blocked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nodpd{}; 
        namespace NodpdValC{
        }
        ///Sleep mode flag
        enum class SleepflagVal {
            activeMode=0x00000000,     ///<Active mode. Read: No power-down mode entered. Part is in Active mode. Write: No effect.
            lowPowerMode=0x00000001,     ///<Low power mode. Read: Sleep/Deep-sleep or Deep power-down mode entered. Write: Writing a 1 clears the SLEEPFLAG bit to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SleepflagVal> sleepflag{}; 
        namespace SleepflagValC{
            constexpr Register::FieldValue<decltype(sleepflag),SleepflagVal::activeMode> activeMode{};
            constexpr Register::FieldValue<decltype(sleepflag),SleepflagVal::lowPowerMode> lowPowerMode{};
        }
        ///Deep power-down flag
        enum class DpdflagVal {
            notDeepPowerDown=0x00000000,     ///<Not Deep power-down. Read: Deep power-down mode not entered. Write: No effect.
            deepPowerDown=0x00000001,     ///<Deep power-down. Read: Deep power-down mode entered. Write: Clear the Deep power-down flag.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,DpdflagVal> dpdflag{}; 
        namespace DpdflagValC{
            constexpr Register::FieldValue<decltype(dpdflag),DpdflagVal::notDeepPowerDown> notDeepPowerDown{};
            constexpr Register::FieldValue<decltype(dpdflag),DpdflagVal::deepPowerDown> deepPowerDown{};
        }
    }
    namespace Nonegpreg0{    ///<General purpose register 0
        using Addr = Register::Address<0x40038004,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
        namespace GpdataValC{
        }
    }
    namespace Nonegpreg1{    ///<General purpose register 0
        using Addr = Register::Address<0x40038008,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
        namespace GpdataValC{
        }
    }
    namespace Nonegpreg2{    ///<General purpose register 0
        using Addr = Register::Address<0x4003800c,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
        namespace GpdataValC{
        }
    }
    namespace Nonegpreg3{    ///<General purpose register 0
        using Addr = Register::Address<0x40038010,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
        namespace GpdataValC{
        }
    }
    namespace Nonegpreg4{    ///<Deep power down control register
        using Addr = Register::Address<0x40038014,0x000003ff,0,unsigned>;
        ///WAKEUP pin hysteresis enable
        enum class WakeuphysVal {
            disableHysteresisF=0x00000000,     ///<Disable Hysteresis for WAKUP pin disabled.
            enable=0x00000001,     ///<Enable. Hysteresis for WAKEUP pin enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,WakeuphysVal> wakeuphys{}; 
        namespace WakeuphysValC{
            constexpr Register::FieldValue<decltype(wakeuphys),WakeuphysVal::disableHysteresisF> disableHysteresisF{};
            constexpr Register::FieldValue<decltype(wakeuphys),WakeuphysVal::enable> enable{};
        }
        ///WAKEUP pin disable. Setting this bit disables the wake-up pin, so it can be used for other purposes. Never set this bit if you intend to use a pin to wake up the part from Deep power-down mode. You can only disable the wake-up pin if the RTC wake-up timer is enabled and configured. Setting this bit is not necessary if Deep power-down mode is not used.
        enum class WakepaddisableVal {
            enable=0x00000000,     ///<Enable. The wake-up function is enabled on pin PIO0_16.
            disable=0x00000001,     ///<Disable. Setting this bit disables the wake-up function on pin PIO0_16.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,WakepaddisableVal> wakepadDisable{}; 
        namespace WakepaddisableValC{
            constexpr Register::FieldValue<decltype(wakepadDisable),WakepaddisableVal::enable> enable{};
            constexpr Register::FieldValue<decltype(wakepadDisable),WakepaddisableVal::disable> disable{};
        }
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> gpdata{}; 
        namespace GpdataValC{
        }
    }
}
