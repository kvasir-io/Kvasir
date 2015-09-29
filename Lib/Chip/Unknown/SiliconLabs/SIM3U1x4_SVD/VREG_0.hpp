#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40040000,0x7ffffe1c,0,unsigned>;
        ///VBUS Valid Flag. 
        enum class vbusvldfVal {
            notSet=0x00000000,     ///<The current voltage on the VBUS pin is below the valid threshold.
            set=0x00000001,     ///<The current voltage on the VBUS pin is above the valid threshold.
        };
        namespace vbusvldfValC{
            constexpr MPL::Value<vbusvldfVal,vbusvldfVal::notSet> notSet{};
            constexpr MPL::Value<vbusvldfVal,vbusvldfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vbusvldfVal> vbusvldf{}; 
        ///Voltage Regulator Suspend Enable. 
        enum class susenVal {
            disabled=0x00000000,     ///<Disable regulator suspend mode.
            enabled=0x00000001,     ///<Enable regulator suspend mode.
        };
        namespace susenValC{
            constexpr MPL::Value<susenVal,susenVal::disabled> disabled{};
            constexpr MPL::Value<susenVal,susenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,susenVal> susen{}; 
        ///Band Gap Disable. 
        enum class bgdisVal {
            inactive=0x00000000,     ///<Enable the voltage regulator band gap.
            active=0x00000001,     ///<Disable the voltage regulator band gap.
        };
        namespace bgdisValC{
            constexpr MPL::Value<bgdisVal,bgdisVal::inactive> inactive{};
            constexpr MPL::Value<bgdisVal,bgdisVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bgdisVal> bgdis{}; 
        ///VREGIN Sense Enable. 
        enum class senseenVal {
            disabled=0x00000000,     ///<Disable VREGIN voltage sensing.
            enabled=0x00000001,     ///<Enable VREGIN voltage sensing.
        };
        namespace senseenValC{
            constexpr MPL::Value<senseenVal,senseenVal::disabled> disabled{};
            constexpr MPL::Value<senseenVal,senseenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,senseenVal> senseen{}; 
        ///VBUS Invalid Interrupt Flag. 
        enum class vbusivldiVal {
            notSet=0x00000000,     ///<The voltage on the VBUS pin has not dropped below the valid threshold.
            set=0x00000001,     ///<The voltage on the VBUS pin dropped below the valid threshold since the last time this bit was cleared.
        };
        namespace vbusivldiValC{
            constexpr MPL::Value<vbusivldiVal,vbusivldiVal::notSet> notSet{};
            constexpr MPL::Value<vbusivldiVal,vbusivldiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,vbusivldiVal> vbusivldi{}; 
        ///VBUS Invalid Interrupt Enable. 
        enum class vbusivldienVal {
            disabled=0x00000000,     ///<Disable the VBUS invalid interrupt.
            enabled=0x00000001,     ///<Enable the VBUS invalid interrupt.
        };
        namespace vbusivldienValC{
            constexpr MPL::Value<vbusivldienVal,vbusivldienVal::disabled> disabled{};
            constexpr MPL::Value<vbusivldienVal,vbusivldienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,vbusivldienVal> vbusivldien{}; 
        ///Voltage Regulator Disable. 
        enum class vregdisVal {
            inactive=0x00000000,     ///<Enable the voltage regulator.
            active=0x00000001,     ///<Disable the voltage regulator.
        };
        namespace vregdisValC{
            constexpr MPL::Value<vregdisVal,vregdisVal::inactive> inactive{};
            constexpr MPL::Value<vregdisVal,vregdisVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,vregdisVal> vregdis{}; 
    }
}
