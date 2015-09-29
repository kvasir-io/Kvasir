#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Voltage Reference
    namespace VrefTrm{    ///<VREF Trim Register
        using Addr = Register::Address<0x40074000,0xffffffc0,0,unsigned char>;
        ///Trim bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> trim{}; 
    }
    namespace VrefSc{    ///<VREF Status and Control Register
        using Addr = Register::Address<0x40074001,0xffffff38,0,unsigned char>;
        ///Buffer Mode selection
        enum class modeLvVal {
            v00=0x00000000,     ///<Bandgap on only, for stabilization and startup
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<Tight-regulation buffer enabled
            v11=0x00000003,     ///<Reserved
        };
        namespace modeLvValC{
            constexpr MPL::Value<modeLvVal,modeLvVal::v00> v00{};
            constexpr MPL::Value<modeLvVal,modeLvVal::v01> v01{};
            constexpr MPL::Value<modeLvVal,modeLvVal::v10> v10{};
            constexpr MPL::Value<modeLvVal,modeLvVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeLvVal> modeLv{}; 
        ///Internal Voltage Reference has settled
        enum class vrefstVal {
            v0=0x00000000,     ///<The bandgap is disabled or not ready.
            v1=0x00000001,     ///<The bandgap is ready.
        };
        namespace vrefstValC{
            constexpr MPL::Value<vrefstVal,vrefstVal::v0> v0{};
            constexpr MPL::Value<vrefstVal,vrefstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,vrefstVal> vrefst{}; 
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
