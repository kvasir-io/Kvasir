#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4002f000,0x7fffffa3,0,unsigned>;
        ///VBAT Reset Threshold Status Flag. 
        enum class vbatrstfVal {
            vbatIsBelowReset=0x00000000,     ///<The VBAT voltage is below the VBAT reset threshold.
            vbatIsAboveReset=0x00000001,     ///<The VBAT voltage is above the VBAT reset threshold.
        };
        namespace vbatrstfValC{
            constexpr MPL::Value<vbatrstfVal,vbatrstfVal::vbatIsBelowReset> vbatIsBelowReset{};
            constexpr MPL::Value<vbatrstfVal,vbatrstfVal::vbatIsAboveReset> vbatIsAboveReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,vbatrstfVal> vbatrstf{}; 
        ///VBAT Low Interrupt Flag. 
        enum class vbatliVal {
            vbatIsLow=0x00000000,     ///<The VBAT voltage is below the early warning threshold.
            vbatIsOk=0x00000001,     ///<The VBAT voltage is above the early warning threshold.
        };
        namespace vbatliValC{
            constexpr MPL::Value<vbatliVal,vbatliVal::vbatIsLow> vbatIsLow{};
            constexpr MPL::Value<vbatliVal,vbatliVal::vbatIsOk> vbatIsOk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,vbatliVal> vbatli{}; 
        ///VBAT High Threshold Enable. 
        enum class vbathithenVal {
            disabled=0x00000000,     ///<Use the standard VBAT thresholds.
            enabled=0x00000001,     ///<Use the high VBAT thresholds.
        };
        namespace vbathithenValC{
            constexpr MPL::Value<vbathithenVal,vbathithenVal::disabled> disabled{};
            constexpr MPL::Value<vbathithenVal,vbathithenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,vbathithenVal> vbathithen{}; 
        ///VBAT Low Interrupt Enable. 
        enum class vbatlienVal {
            disabled=0x00000000,     ///<Disable the VBAT low interrupt.
            enabled=0x00000001,     ///<Enable the VBAT low interrupt.
        };
        namespace vbatlienValC{
            constexpr MPL::Value<vbatlienVal,vbatlienVal::disabled> disabled{};
            constexpr MPL::Value<vbatlienVal,vbatlienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,vbatlienVal> vbatlien{}; 
        ///VBAT Supply Monitor Enable. 
        enum class vmonenVal {
            disabled=0x00000000,     ///<Disable the VBAT supply monitor.
            enabled=0x00000001,     ///<Enable the VBAT supply monitor.
        };
        namespace vmonenValC{
            constexpr MPL::Value<vmonenVal,vmonenVal::disabled> disabled{};
            constexpr MPL::Value<vmonenVal,vmonenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,vmonenVal> vmonen{}; 
    }
}
