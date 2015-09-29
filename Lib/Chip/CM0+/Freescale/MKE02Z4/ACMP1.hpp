#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog comparator
    namespace Acmp1Cs{    ///<ACMP Control and Status Register
        using Addr = Register::Address<0x40074000,0xffffff00,0,unsigned char>;
        ///ACMP MOD
        enum class acmodVal {
            v00=0x00000000,     ///<ACMP interrupt on output falling edge.
            v01=0x00000001,     ///<ACMP interrupt on output rising edge.
            v10=0x00000002,     ///<ACMP interrupt on output falling edge.
            v11=0x00000003,     ///<ACMP interrupt on output falling or rising edge.
        };
        namespace acmodValC{
            constexpr MPL::Value<acmodVal,acmodVal::v00> v00{};
            constexpr MPL::Value<acmodVal,acmodVal::v01> v01{};
            constexpr MPL::Value<acmodVal,acmodVal::v10> v10{};
            constexpr MPL::Value<acmodVal,acmodVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,acmodVal> acmod{}; 
        ///ACMP Output Pin Enable
        enum class acopeVal {
            v0=0x00000000,     ///<ACMP output cannot be placed onto external pin.
            v1=0x00000001,     ///<ACMP output can be placed onto external pin.
        };
        namespace acopeValC{
            constexpr MPL::Value<acopeVal,acopeVal::v0> v0{};
            constexpr MPL::Value<acopeVal,acopeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,acopeVal> acope{}; 
        ///ACMP Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> aco{}; 
        ///ACMP Interrupt Enable
        enum class acieVal {
            v0=0x00000000,     ///<Disable the ACMP Interrupt.
            v1=0x00000001,     ///<Enable the ACMP Interrupt.
        };
        namespace acieValC{
            constexpr MPL::Value<acieVal,acieVal::v0> v0{};
            constexpr MPL::Value<acieVal,acieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,acieVal> acie{}; 
        ///ACMP Interrupt Flag Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> acf{}; 
        ///Analog Comparator Hysterisis Selection
        enum class hystVal {
            v0=0x00000000,     ///<20 mV.
            v1=0x00000001,     ///<30 mV.
        };
        namespace hystValC{
            constexpr MPL::Value<hystVal,hystVal::v0> v0{};
            constexpr MPL::Value<hystVal,hystVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,hystVal> hyst{}; 
        ///Analog Comparator Enable
        enum class aceVal {
            v0=0x00000000,     ///<The ACMP is disabled.
            v1=0x00000001,     ///<The ACMP is enabled.
        };
        namespace aceValC{
            constexpr MPL::Value<aceVal,aceVal::v0> v0{};
            constexpr MPL::Value<aceVal,aceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,aceVal> ace{}; 
    }
    namespace Acmp1C0{    ///<ACMP Control Register 0
        using Addr = Register::Address<0x40074001,0xffffffcc,0,unsigned char>;
        ///ACMP Negative Input Select
        enum class acnselVal {
            v00=0x00000000,     ///<External reference 0
            v01=0x00000001,     ///<External reference 1
            v10=0x00000002,     ///<External reference 2
            v11=0x00000003,     ///<DAC output
        };
        namespace acnselValC{
            constexpr MPL::Value<acnselVal,acnselVal::v00> v00{};
            constexpr MPL::Value<acnselVal,acnselVal::v01> v01{};
            constexpr MPL::Value<acnselVal,acnselVal::v10> v10{};
            constexpr MPL::Value<acnselVal,acnselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,acnselVal> acnsel{}; 
        ///ACMP Positive Input Select
        enum class acpselVal {
            v00=0x00000000,     ///<External reference 0
            v01=0x00000001,     ///<External reference 1
            v10=0x00000002,     ///<External reference 2
            v11=0x00000003,     ///<DAC output
        };
        namespace acpselValC{
            constexpr MPL::Value<acpselVal,acpselVal::v00> v00{};
            constexpr MPL::Value<acpselVal,acpselVal::v01> v01{};
            constexpr MPL::Value<acpselVal,acpselVal::v10> v10{};
            constexpr MPL::Value<acpselVal,acpselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,acpselVal> acpsel{}; 
    }
    namespace Acmp1C1{    ///<ACMP Control Register 1
        using Addr = Register::Address<0x40074002,0xffffff00,0,unsigned char>;
        ///DAC Output Level Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> dacval{}; 
        ///DAC Reference Select
        enum class dacrefVal {
            v0=0x00000000,     ///<The DAC selects Bandgap as the reference.
            v1=0x00000001,     ///<The DAC selects VDDA as the reference.
        };
        namespace dacrefValC{
            constexpr MPL::Value<dacrefVal,dacrefVal::v0> v0{};
            constexpr MPL::Value<dacrefVal,dacrefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dacrefVal> dacref{}; 
        ///DAC Enable
        enum class dacenVal {
            v0=0x00000000,     ///<The DAC is disabled.
            v1=0x00000001,     ///<The DAC is enabled.
        };
        namespace dacenValC{
            constexpr MPL::Value<dacenVal,dacenVal::v0> v0{};
            constexpr MPL::Value<dacenVal,dacenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dacenVal> dacen{}; 
    }
    namespace Acmp1C2{    ///<ACMP Control Register 2
        using Addr = Register::Address<0x40074003,0xfffffff8,0,unsigned char>;
        ///ACMP Input Pin Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> acipe{}; 
    }
}
