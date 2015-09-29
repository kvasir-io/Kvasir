#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Oscillator
    namespace OscCr{    ///<OSC Control Register
        using Addr = Register::Address<0x40066000,0xffffff50,0,unsigned char>;
        ///Oscillator 16 pF Capacitor Load Configure
        enum class sc16pVal {
            v0=0x00000000,     ///<Disable the selection.
            v1=0x00000001,     ///<Add 16 pF capacitor to the oscillator load.
        };
        namespace sc16pValC{
            constexpr MPL::Value<sc16pVal,sc16pVal::v0> v0{};
            constexpr MPL::Value<sc16pVal,sc16pVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sc16pVal> sc16p{}; 
        ///Oscillator 8 pF Capacitor Load Configure
        enum class sc8pVal {
            v0=0x00000000,     ///<Disable the selection.
            v1=0x00000001,     ///<Add 8 pF capacitor to the oscillator load.
        };
        namespace sc8pValC{
            constexpr MPL::Value<sc8pVal,sc8pVal::v0> v0{};
            constexpr MPL::Value<sc8pVal,sc8pVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,sc8pVal> sc8p{}; 
        ///Oscillator 4 pF Capacitor Load Configure
        enum class sc4pVal {
            v0=0x00000000,     ///<Disable the selection.
            v1=0x00000001,     ///<Add 4 pF capacitor to the oscillator load.
        };
        namespace sc4pValC{
            constexpr MPL::Value<sc4pVal,sc4pVal::v0> v0{};
            constexpr MPL::Value<sc4pVal,sc4pVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sc4pVal> sc4p{}; 
        ///Oscillator 2 pF Capacitor Load Configure
        enum class sc2pVal {
            v0=0x00000000,     ///<Disable the selection.
            v1=0x00000001,     ///<Add 2 pF capacitor to the oscillator load.
        };
        namespace sc2pValC{
            constexpr MPL::Value<sc2pVal,sc2pVal::v0> v0{};
            constexpr MPL::Value<sc2pVal,sc2pVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,sc2pVal> sc2p{}; 
        ///External Reference Stop Enable
        enum class erefstenVal {
            v0=0x00000000,     ///<External reference clock is disabled in Stop mode.
            v1=0x00000001,     ///<External reference clock stays enabled in Stop mode if ERCLKEN is set before entering Stop mode.
        };
        namespace erefstenValC{
            constexpr MPL::Value<erefstenVal,erefstenVal::v0> v0{};
            constexpr MPL::Value<erefstenVal,erefstenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,erefstenVal> erefsten{}; 
        ///External Reference Enable
        enum class erclkenVal {
            v0=0x00000000,     ///<External reference clock is inactive.
            v1=0x00000001,     ///<External reference clock is enabled.
        };
        namespace erclkenValC{
            constexpr MPL::Value<erclkenVal,erclkenVal::v0> v0{};
            constexpr MPL::Value<erclkenVal,erclkenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,erclkenVal> erclken{}; 
    }
}
