#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4002f000,0x7fffff20,0,unsigned>;
        ///VREGIN Supply Monitor Enable. 
        enum class vreginsenVal {
            disabled=0x00000000,     ///<Disable the VREGIN supply monitor.
            enabled=0x00000001,     ///<Enable the VREGIN supply monitor.
        };
        namespace vreginsenValC{
            constexpr MPL::Value<vreginsenVal,vreginsenVal::disabled> disabled{};
            constexpr MPL::Value<vreginsenVal,vreginsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vreginsenVal> vreginsen{}; 
        ///VREGIN Low Interrupt Flag. 
        enum class vreginliVal {
            vreginIsLow=0x00000000,     ///<VREGIN is not above the interrupt threshold.
            vreginIsOk=0x00000001,     ///<VREGIN is above the interrupt threshold.
        };
        namespace vreginliValC{
            constexpr MPL::Value<vreginliVal,vreginliVal::vreginIsLow> vreginIsLow{};
            constexpr MPL::Value<vreginliVal,vreginliVal::vreginIsOk> vreginIsOk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,vreginliVal> vreginli{}; 
        ///VDD Reset Threshold Status Flag. 
        enum class vddrstfVal {
            vddIsBelowReset=0x00000000,     ///<The VDD voltage is below the VDD reset threshold.
            vddIsAboveReset=0x00000001,     ///<The VDD voltage is above the VDD reset threshold.
        };
        namespace vddrstfValC{
            constexpr MPL::Value<vddrstfVal,vddrstfVal::vddIsBelowReset> vddIsBelowReset{};
            constexpr MPL::Value<vddrstfVal,vddrstfVal::vddIsAboveReset> vddIsAboveReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,vddrstfVal> vddrstf{}; 
        ///VDD Low Interrupt Flag. 
        enum class vddliVal {
            vddIsLow=0x00000000,     ///<The VDD voltage is below the early warning threshold.
            vddIsOk=0x00000001,     ///<The VDD voltage is above the early warning threshold.
        };
        namespace vddliValC{
            constexpr MPL::Value<vddliVal,vddliVal::vddIsLow> vddIsLow{};
            constexpr MPL::Value<vddliVal,vddliVal::vddIsOk> vddIsOk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,vddliVal> vddli{}; 
        ///VDD High Threshold Enable. 
        enum class vddhithenVal {
            disabled=0x00000000,     ///<Use the standard VDD thresholds.
            enabled=0x00000001,     ///<Use the high VDD thresholds.
        };
        namespace vddhithenValC{
            constexpr MPL::Value<vddhithenVal,vddhithenVal::disabled> disabled{};
            constexpr MPL::Value<vddhithenVal,vddhithenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,vddhithenVal> vddhithen{}; 
        ///VDD Low Interrupt Enable. 
        enum class vddlienVal {
            disabled=0x00000000,     ///<Disable the VDD low interrupt.
            enabled=0x00000001,     ///<Enable the VDD low interrupt.
        };
        namespace vddlienValC{
            constexpr MPL::Value<vddlienVal,vddlienVal::disabled> disabled{};
            constexpr MPL::Value<vddlienVal,vddlienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,vddlienVal> vddlien{}; 
        ///VREGIN Low Interrupt Enable. 
        enum class vreginlienVal {
            disabled=0x00000000,     ///<Disable the VREGIN low interrupt.
            enabled=0x00000001,     ///<Enable the VREGIN low interrupt.
        };
        namespace vreginlienValC{
            constexpr MPL::Value<vreginlienVal,vreginlienVal::disabled> disabled{};
            constexpr MPL::Value<vreginlienVal,vreginlienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,vreginlienVal> vreginlien{}; 
        ///VDD Supply Monitor Enable. 
        enum class vmonenVal {
            disabled=0x00000000,     ///<Disable the VDD supply monitor.
            enabled=0x00000001,     ///<Enable the VDD supply monitor.
        };
        namespace vmonenValC{
            constexpr MPL::Value<vmonenVal,vmonenVal::disabled> disabled{};
            constexpr MPL::Value<vmonenVal,vmonenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,vmonenVal> vmonen{}; 
    }
}
