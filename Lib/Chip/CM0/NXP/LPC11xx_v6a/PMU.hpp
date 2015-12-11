#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//power management unit
    namespace Nonepcon{    ///<Power control register
        using Addr = Register::Address<0x40038000,0xfffff6fd,0,unsigned>;
        ///Deep power-down mode enable
        enum class DpdenVal {
            sleepmode=0x00000000,     ///<ARM WFI will enter Sleep or Deep-sleep mode (clock to ARM Cortex-M0 core turned off).
            deeppowerdown=0x00000001,     ///<ARM WFI will enter Deep-power down mode (ARM Cortex-M0 core powered-down).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpdenVal> dpden{}; 
        namespace DpdenValC{
            constexpr Register::FieldValue<decltype(dpden)::Type,DpdenVal::sleepmode> sleepmode{};
            constexpr Register::FieldValue<decltype(dpden)::Type,DpdenVal::deeppowerdown> deeppowerdown{};
        }
        }
        ///Sleep mode flag
        enum class SleepflagVal {
            nopowerdown=0x00000000,     ///<Read: No power-down mode entered. LPC111x/LPC11C1x is in Active mode. Write: No effect.
            powerdown=0x00000001,     ///<Read: Sleep/Deep-sleep or Deep power-down mode entered. Write: Writing a 1 clears the SLEEPFLAG bit to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SleepflagVal> sleepflag{}; 
        namespace SleepflagValC{
            constexpr Register::FieldValue<decltype(sleepflag)::Type,SleepflagVal::nopowerdown> nopowerdown{};
            constexpr Register::FieldValue<decltype(sleepflag)::Type,SleepflagVal::powerdown> powerdown{};
        }
        }
        ///Deep power-down flag
        enum class DpdflagVal {
            nodeeppowerdown=0x00000000,     ///<Read: Deep power-down mode  not entered. Write: No effect.
            deeppowerdown=0x00000001,     ///<Read: Deep power-down mode entered. Write: Clear the Deep power-down flag.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,DpdflagVal> dpdflag{}; 
        namespace DpdflagValC{
            constexpr Register::FieldValue<decltype(dpdflag)::Type,DpdflagVal::nodeeppowerdown> nodeeppowerdown{};
            constexpr Register::FieldValue<decltype(dpdflag)::Type,DpdflagVal::deeppowerdown> deeppowerdown{};
        }
        }
    }
    namespace Nonegpreg0{    ///<General purpose register
        using Addr = Register::Address<0x40038004,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg1{    ///<General purpose register
        using Addr = Register::Address<0x40038008,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg2{    ///<General purpose register
        using Addr = Register::Address<0x4003800c,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg3{    ///<General purpose register
        using Addr = Register::Address<0x40038010,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg4{    ///<General purpose register 4
        using Addr = Register::Address<0x40038014,0x000003ff,0,unsigned>;
        ///WAKEUP pin hysteresis enable
        enum class WakeuphysVal {
            enabled=0x00000001,     ///<Hysteresis for WAKEUP pin enabled.
            disabled=0x00000000,     ///<Hysteresis for WAKUP pin disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,WakeuphysVal> wakeuphys{}; 
        namespace WakeuphysValC{
            constexpr Register::FieldValue<decltype(wakeuphys)::Type,WakeuphysVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(wakeuphys)::Type,WakeuphysVal::disabled> disabled{};
        }
        }
        ///Data retained during Deep power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
}
