#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Voltage Reference Control
        using Addr = Register::Address<0x40039010,0x7ffffffc,0,unsigned>;
        ///Voltage Reference Doubler. 
        enum class Vref2xVal {
            disabled=0x00000000,     ///<VREF output is nominally 1.2 V
            enabled=0x00000001,     ///<VREF output is nominally 2.4 V
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Vref2xVal> vref2x{}; 
        namespace Vref2xValC{
            constexpr Register::FieldValue<decltype(vref2x)::Type,Vref2xVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vref2x)::Type,Vref2xVal::enabled> enabled{};
        }
        ///Temperature Sensor Enable. 
        enum class TempenVal {
            disabled=0x00000000,     ///<Disable the temperature sensor.
            enabled=0x00000001,     ///<Enable the temperature sensor.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TempenVal> tempen{}; 
        namespace TempenValC{
            constexpr Register::FieldValue<decltype(tempen)::Type,TempenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tempen)::Type,TempenVal::enabled> enabled{};
        }
        ///Voltage Reference Enable. 
        enum class VrefenVal {
            disabled=0x00000000,     ///<Disable the Voltage Reference.
            enabled=0x00000001,     ///<Enable the Voltage Reference.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,VrefenVal> vrefen{}; 
        namespace VrefenValC{
            constexpr Register::FieldValue<decltype(vrefen)::Type,VrefenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vrefen)::Type,VrefenVal::enabled> enabled{};
        }
    }
}
