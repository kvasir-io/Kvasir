#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40039010,0xfffffff8,0,unsigned>;
        ///Voltage Reference Doubler. 
        enum class vref2xVal {
            disabled=0x00000000,     ///<VREF output is nominally 1.2 V
            enabled=0x00000001,     ///<VREF output is nominally 2.4 V
        };
        namespace vref2xValC{
            constexpr MPL::Value<vref2xVal,vref2xVal::disabled> disabled{};
            constexpr MPL::Value<vref2xVal,vref2xVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vref2xVal> vref2x{}; 
        ///Temperature Sensor Enable. 
        enum class tempenVal {
            disabled=0x00000000,     ///<Disable the temperature sensor.
            enabled=0x00000001,     ///<Enable the temperature sensor.
        };
        namespace tempenValC{
            constexpr MPL::Value<tempenVal,tempenVal::disabled> disabled{};
            constexpr MPL::Value<tempenVal,tempenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tempenVal> tempen{}; 
        ///VREF Output Enable. 
        enum class vrefoutenVal {
            disabled=0x00000000,     ///<Internal VREF is not driven on the VREF pin.
            enabled=0x00000001,     ///<Internal VREF is driven out to the VREF pin.
        };
        namespace vrefoutenValC{
            constexpr MPL::Value<vrefoutenVal,vrefoutenVal::disabled> disabled{};
            constexpr MPL::Value<vrefoutenVal,vrefoutenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,vrefoutenVal> vrefouten{}; 
    }
}
