#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Oscillator
    namespace OscCr{    ///<OSC Control Register
        using Addr = Register::Address<0x40065000,0xffffff48,0,unsigned char>;
        ///OSC Initialization
        enum class OscinitVal {
            v0=0x00000000,     ///<Oscillator initialization is not complete.
            v1=0x00000001,     ///<Oscillator initialization is completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OscinitVal> oscinit{}; 
        namespace OscinitValC{
            constexpr Register::FieldValue<decltype(oscinit),OscinitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oscinit),OscinitVal::v1> v1{};
        }
        ///High Gain Oscillator Select
        enum class HgoVal {
            v0=0x00000000,     ///<Low-power mode
            v1=0x00000001,     ///<High-gain mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HgoVal> hgo{}; 
        namespace HgoValC{
            constexpr Register::FieldValue<decltype(hgo),HgoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hgo),HgoVal::v1> v1{};
        }
        ///Frequency Range Select
        enum class RangeVal {
            v0=0x00000000,     ///<Low frequency range of 32 kHz.
            v1=0x00000001,     ///<High frequency range of 4-20 MHz.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RangeVal> range{}; 
        namespace RangeValC{
            constexpr Register::FieldValue<decltype(range),RangeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(range),RangeVal::v1> v1{};
        }
        ///OSC Output Select
        enum class OscosVal {
            v0=0x00000000,     ///<External clock source from EXTAL pin is selected.
            v1=0x00000001,     ///<Oscillator clock source is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OscosVal> oscos{}; 
        namespace OscosValC{
            constexpr Register::FieldValue<decltype(oscos),OscosVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oscos),OscosVal::v1> v1{};
        }
        ///OSC Enable in Stop mode
        enum class OscstenVal {
            v0=0x00000000,     ///<OSC clock is disabled in Stop mode.
            v1=0x00000001,     ///<OSC clock stays enabled in Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OscstenVal> oscsten{}; 
        namespace OscstenValC{
            constexpr Register::FieldValue<decltype(oscsten),OscstenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oscsten),OscstenVal::v1> v1{};
        }
        ///OSC Enable
        enum class OscenVal {
            v0=0x00000000,     ///<OSC module is disabled.
            v1=0x00000001,     ///<OSC module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,OscenVal> oscen{}; 
        namespace OscenValC{
            constexpr Register::FieldValue<decltype(oscen),OscenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oscen),OscenVal::v1> v1{};
        }
    }
}
