#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Voltage Reference
    namespace VrefTrm{    ///<VREF Trim Register
        using Addr = Register::Address<0x40074000,0xffffff80,0,unsigned char>;
        ///Trim bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> trim{}; 
        ///Chop oscillator enable. When set, internal chopping operation is enabled and the internal analog offset will be minimized.
        enum class chopenVal {
            v0=0x00000000,     ///<Chop oscillator is disabled.
            v1=0x00000001,     ///<Chop oscillator is enabled.
        };
        namespace chopenValC{
            constexpr MPL::Value<chopenVal,chopenVal::v0> v0{};
            constexpr MPL::Value<chopenVal,chopenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,chopenVal> chopen{}; 
    }
    namespace VrefSc{    ///<VREF Status and Control Register
        using Addr = Register::Address<0x40074001,0xffffff18,0,unsigned char>;
        ///Buffer Mode selection
        enum class modeLvVal {
            v00=0x00000000,     ///<Bandgap on only, for stabilization and startup
            v01=0x00000001,     ///<High power buffer mode enabled
            v10=0x00000002,     ///<Low-power buffer mode enabled
        };
        namespace modeLvValC{
            constexpr MPL::Value<modeLvVal,modeLvVal::v00> v00{};
            constexpr MPL::Value<modeLvVal,modeLvVal::v01> v01{};
            constexpr MPL::Value<modeLvVal,modeLvVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeLvVal> modeLv{}; 
        ///Internal Voltage Reference stable
        enum class vrefstVal {
            v0=0x00000000,     ///<The module is disabled or not stable.
            v1=0x00000001,     ///<The module is stable.
        };
        namespace vrefstValC{
            constexpr MPL::Value<vrefstVal,vrefstVal::v0> v0{};
            constexpr MPL::Value<vrefstVal,vrefstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,vrefstVal> vrefst{}; 
        ///Second order curvature compensation enable
        enum class icompenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace icompenValC{
            constexpr MPL::Value<icompenVal,icompenVal::v0> v0{};
            constexpr MPL::Value<icompenVal,icompenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,icompenVal> icompen{}; 
        ///Regulator enable
        enum class regenVal {
            v0=0x00000000,     ///<Internal 1.75 V regulator is disabled.
            v1=0x00000001,     ///<Internal 1.75 V regulator is enabled.
        };
        namespace regenValC{
            constexpr MPL::Value<regenVal,regenVal::v0> v0{};
            constexpr MPL::Value<regenVal,regenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,regenVal> regen{}; 
        ///Internal Voltage Reference enable
        enum class vrefenVal {
            v0=0x00000000,     ///<The module is disabled.
            v1=0x00000001,     ///<The module is enabled.
        };
        namespace vrefenValC{
            constexpr MPL::Value<vrefenVal,vrefenVal::v0> v0{};
            constexpr MPL::Value<vrefenVal,vrefenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,vrefenVal> vrefen{}; 
    }
}
