#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Voltage Reference
    namespace VrefTrm{    ///<VREF Trim Register
        using Addr = Register::Address<0x40074000,0xffffff80,0,unsigned char>;
        ///Trim bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> trim{}; 
        ///Chop oscillator enable. When set, internal chopping operation is enabled and the internal analog offset will be minimized.
        enum class ChopenVal {
            v0=0x00000000,     ///<Chop oscillator is disabled.
            v1=0x00000001,     ///<Chop oscillator is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ChopenVal> chopen{}; 
        namespace ChopenValC{
            constexpr Register::FieldValue<decltype(chopen)::Type,ChopenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chopen)::Type,ChopenVal::v1> v1{};
        }
        }
    }
    namespace VrefSc{    ///<VREF Status and Control Register
        using Addr = Register::Address<0x40074001,0xffffff18,0,unsigned char>;
        ///Buffer Mode selection
        enum class ModelvVal {
            v00=0x00000000,     ///<Bandgap on only, for stabilization and startup
            v01=0x00000001,     ///<High power buffer mode enabled
            v10=0x00000002,     ///<Low-power buffer mode enabled
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModelvVal> modeLv{}; 
        namespace ModelvValC{
            constexpr Register::FieldValue<decltype(modeLv)::Type,ModelvVal::v00> v00{};
            constexpr Register::FieldValue<decltype(modeLv)::Type,ModelvVal::v01> v01{};
            constexpr Register::FieldValue<decltype(modeLv)::Type,ModelvVal::v10> v10{};
            constexpr Register::FieldValue<decltype(modeLv)::Type,ModelvVal::v11> v11{};
        }
        }
        ///Internal Voltage Reference stable
        enum class VrefstVal {
            v0=0x00000000,     ///<The module is disabled or not stable.
            v1=0x00000001,     ///<The module is stable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,VrefstVal> vrefst{}; 
        namespace VrefstValC{
            constexpr Register::FieldValue<decltype(vrefst)::Type,VrefstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vrefst)::Type,VrefstVal::v1> v1{};
        }
        }
        ///Second order curvature compensation enable
        enum class IcompenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,IcompenVal> icompen{}; 
        namespace IcompenValC{
            constexpr Register::FieldValue<decltype(icompen)::Type,IcompenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(icompen)::Type,IcompenVal::v1> v1{};
        }
        }
        ///Regulator enable
        enum class RegenVal {
            v0=0x00000000,     ///<Internal 1.75 V regulator is disabled.
            v1=0x00000001,     ///<Internal 1.75 V regulator is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RegenVal> regen{}; 
        namespace RegenValC{
            constexpr Register::FieldValue<decltype(regen)::Type,RegenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(regen)::Type,RegenVal::v1> v1{};
        }
        }
        ///Internal Voltage Reference enable
        enum class VrefenVal {
            v0=0x00000000,     ///<The module is disabled.
            v1=0x00000001,     ///<The module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,VrefenVal> vrefen{}; 
        namespace VrefenValC{
            constexpr Register::FieldValue<decltype(vrefen)::Type,VrefenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vrefen)::Type,VrefenVal::v1> v1{};
        }
        }
    }
}
