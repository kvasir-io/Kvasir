#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power management unit
    namespace Nonepcon{    ///<Power control register
        using Addr = Register::Address<0x40038000,0xfffff6fd,0,unsigned>;
        ///Deep power-down mode enable
        enum class dpdenVal {
            sleepmode=0x00000000,     ///<ARM WFI will enter Sleep or Deep-sleep mode (clock to ARM Cortex-M0 core turned off).
            deeppowerdown=0x00000001,     ///<ARM WFI will enter Deep-power down mode (ARM Cortex-M0 core powered-down).
        };
        namespace dpdenValC{
            constexpr MPL::Value<dpdenVal,dpdenVal::sleepmode> sleepmode{};
            constexpr MPL::Value<dpdenVal,dpdenVal::deeppowerdown> deeppowerdown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dpdenVal> dpden{}; 
        ///Sleep mode flag
        enum class sleepflagVal {
            nopowerdown=0x00000000,     ///<Read: No power-down mode entered. LPC111x/LPC11C1x is in Active mode. Write: No effect.
            powerdown=0x00000001,     ///<Read: Sleep/Deep-sleep or Deep power-down mode entered. Write: Writing a 1 clears the SLEEPFLAG bit to 0.
        };
        namespace sleepflagValC{
            constexpr MPL::Value<sleepflagVal,sleepflagVal::nopowerdown> nopowerdown{};
            constexpr MPL::Value<sleepflagVal,sleepflagVal::powerdown> powerdown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,sleepflagVal> sleepflag{}; 
        ///Deep power-down flag
        enum class dpdflagVal {
            nodeeppowerdown=0x00000000,     ///<Read: Deep power-down mode  not entered. Write: No effect.
            deeppowerdown=0x00000001,     ///<Read: Deep power-down mode entered. Write: Clear the Deep power-down flag.
        };
        namespace dpdflagValC{
            constexpr MPL::Value<dpdflagVal,dpdflagVal::nodeeppowerdown> nodeeppowerdown{};
            constexpr MPL::Value<dpdflagVal,dpdflagVal::deeppowerdown> deeppowerdown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,dpdflagVal> dpdflag{}; 
    }
    namespace Nonegpreg0{    ///<General purpose register
        using Addr = Register::Address<0x40038004,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg1{    ///<General purpose register
        using Addr = Register::Address<0x40038008,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg2{    ///<General purpose register
        using Addr = Register::Address<0x4003800c,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg3{    ///<General purpose register
        using Addr = Register::Address<0x40038010,0x00000000,0,unsigned>;
        ///Data retained during Deep power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
    namespace Nonegpreg4{    ///<General purpose register 4
        using Addr = Register::Address<0x40038014,0x000003ff,0,unsigned>;
        ///WAKEUP pin hysteresis enable
        enum class wakeuphysVal {
            enabled=0x00000001,     ///<Hysteresis for WAKEUP pin enabled.
            disabled=0x00000000,     ///<Hysteresis for WAKUP pin disabled.
        };
        namespace wakeuphysValC{
            constexpr MPL::Value<wakeuphysVal,wakeuphysVal::enabled> enabled{};
            constexpr MPL::Value<wakeuphysVal,wakeuphysVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,wakeuphysVal> wakeuphys{}; 
        ///Data retained during Deep power-down mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> gpdata{}; 
    }
}
