#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Voltage Reference Control
        using Addr = Register::Address<0x40039010,0x7ffffffc,0,unsigned>;
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
        ///Voltage Reference Enable. 
        enum class vrefenVal {
            disabled=0x00000000,     ///<Disable the Voltage Reference.
            enabled=0x00000001,     ///<Enable the Voltage Reference.
        };
        namespace vrefenValC{
            constexpr MPL::Value<vrefenVal,vrefenVal::disabled> disabled{};
            constexpr MPL::Value<vrefenVal,vrefenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,vrefenVal> vrefen{}; 
    }
}
