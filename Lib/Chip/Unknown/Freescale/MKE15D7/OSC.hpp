#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Oscillator
    namespace OscCr{    ///<OSC Control Register
        using Addr = Register::Address<0x40045000,0xffffff4c,0,unsigned char>;
        ///OSC Initialization
        enum class oscinitVal {
            v0=0x00000000,     ///<Oscillator initialization not completes.
            v1=0x00000001,     ///<Oscillator initialization completed.
        };
        namespace oscinitValC{
            constexpr MPL::Value<oscinitVal,oscinitVal::v0> v0{};
            constexpr MPL::Value<oscinitVal,oscinitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,oscinitVal> oscinit{}; 
        ///High Gain Oscillator Select
        enum class hgoVal {
            v0=0x00000000,     ///<Low power mode.
            v1=0x00000001,     ///<High gain mode.
        };
        namespace hgoValC{
            constexpr MPL::Value<hgoVal,hgoVal::v0> v0{};
            constexpr MPL::Value<hgoVal,hgoVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hgoVal> hgo{}; 
        ///OSC Output Select
        enum class oscosVal {
            v0=0x00000000,     ///<External clock source from EXTAL pin is selected.
            v1=0x00000001,     ///<Oscillator clock source is selected.
        };
        namespace oscosValC{
            constexpr MPL::Value<oscosVal,oscosVal::v0> v0{};
            constexpr MPL::Value<oscosVal,oscosVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,oscosVal> oscos{}; 
        ///OSC Enable in Stop mode
        enum class oscstenVal {
            v0=0x00000000,     ///<OSC clock is disabled in stop.
            v1=0x00000001,     ///<OSC clock stays enabled in stop.
        };
        namespace oscstenValC{
            constexpr MPL::Value<oscstenVal,oscstenVal::v0> v0{};
            constexpr MPL::Value<oscstenVal,oscstenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,oscstenVal> oscsten{}; 
        ///OSC Enable
        enum class oscenVal {
            v0=0x00000000,     ///<OSC module disabled.
            v1=0x00000001,     ///<OSC module enabled.
        };
        namespace oscenValC{
            constexpr MPL::Value<oscenVal,oscenVal::v0> v0{};
            constexpr MPL::Value<oscenVal,oscenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,oscenVal> oscen{}; 
    }
}
