#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10375 Chapter title=LPC13xx Power Management Unit (PMU) Modification date=4/20/2011 Major revision=2 Minor revision=1 
    namespace Nonepcon{    ///<Power control register
        using Addr = Register::Address<0x40038000,0xfffff6fd,0,unsigned>;
        ///Deep power-down mode enable
        enum class dpdenVal {
            sleepDeepsleep=0x00000000,     ///<ARM WFI will enter Sleep or Deep-sleep mode (clock to ARM Cortex-M3 core turned off).
            deeppowerdown=0x00000001,     ///<ARM WFI will enter Deep-power down mode (ARM Cortex-M3 core powered-down).
        };
        namespace dpdenValC{
            constexpr MPL::Value<dpdenVal,dpdenVal::sleepDeepsleep> sleepDeepsleep{};
            constexpr MPL::Value<dpdenVal,dpdenVal::deeppowerdown> deeppowerdown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dpdenVal> dpden{}; 
        ///Sleep mode flag
        enum class sleepflagVal {
            noPowerDown=0x00000000,     ///<Read: No power-down mode entered. LPC13xx is in Run mode. Write: No effect.
            powerdown=0x00000001,     ///<Read: Sleep/Deep-sleep or Deep power-down mode entered. Write: Writing a 1 clears the SLEEPFLAG bit to 0.
        };
        namespace sleepflagValC{
            constexpr MPL::Value<sleepflagVal,sleepflagVal::noPowerDown> noPowerDown{};
            constexpr MPL::Value<sleepflagVal,sleepflagVal::powerdown> powerdown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,sleepflagVal> sleepflag{}; 
        ///Deep power-down flag
        enum class dpdflagVal {
            noDeeppowerdown=0x00000000,     ///<Read: Deep power-down mode  not entered. Write: No effect.
            deeppowerdown=0x00000001,     ///<Read: Deep power-down mode entered. Write: Clear the Deep power-down flag.
        };
        namespace dpdflagValC{
            constexpr MPL::Value<dpdflagVal,dpdflagVal::noDeeppowerdown> noDeeppowerdown{};
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
            disabled=0x00000000,     ///<Hysteresis for WAKUP pin disabled.
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
