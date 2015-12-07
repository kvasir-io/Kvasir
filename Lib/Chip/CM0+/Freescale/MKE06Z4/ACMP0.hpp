#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog comparator
    namespace Acmp0Cs{    ///<ACMP Control and Status Register
        using Addr = Register::Address<0x40073000,0xffffff00,0,unsigned char>;
        ///ACMP MOD
        enum class AcmodVal {
            v00=0x00000000,     ///<ACMP interrupt on output falling edge.
            v01=0x00000001,     ///<ACMP interrupt on output rising edge.
            v10=0x00000002,     ///<ACMP interrupt on output falling edge.
            v11=0x00000003,     ///<ACMP interrupt on output falling or rising edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,AcmodVal> acmod{}; 
        namespace AcmodValC{
            constexpr Register::FieldValue<decltype(acmod),AcmodVal::v00> v00{};
            constexpr Register::FieldValue<decltype(acmod),AcmodVal::v01> v01{};
            constexpr Register::FieldValue<decltype(acmod),AcmodVal::v10> v10{};
            constexpr Register::FieldValue<decltype(acmod),AcmodVal::v11> v11{};
        }
        ///ACMP Output Pin Enable
        enum class AcopeVal {
            v0=0x00000000,     ///<ACMP output cannot be placed onto external pin.
            v1=0x00000001,     ///<ACMP output can be placed onto external pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AcopeVal> acope{}; 
        namespace AcopeValC{
            constexpr Register::FieldValue<decltype(acope),AcopeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(acope),AcopeVal::v1> v1{};
        }
        ///ACMP Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> aco{}; 
        namespace AcoValC{
        }
        ///ACMP Interrupt Enable
        enum class AcieVal {
            v0=0x00000000,     ///<Disable the ACMP Interrupt.
            v1=0x00000001,     ///<Enable the ACMP Interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AcieVal> acie{}; 
        namespace AcieValC{
            constexpr Register::FieldValue<decltype(acie),AcieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(acie),AcieVal::v1> v1{};
        }
        ///ACMP Interrupt Flag Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> acf{}; 
        namespace AcfValC{
        }
        ///Analog Comparator Hysterisis Selection
        enum class HystVal {
            v0=0x00000000,     ///<20 mV.
            v1=0x00000001,     ///<30 mV.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,HystVal> hyst{}; 
        namespace HystValC{
            constexpr Register::FieldValue<decltype(hyst),HystVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hyst),HystVal::v1> v1{};
        }
        ///Analog Comparator Enable
        enum class AceVal {
            v0=0x00000000,     ///<The ACMP is disabled.
            v1=0x00000001,     ///<The ACMP is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AceVal> ace{}; 
        namespace AceValC{
            constexpr Register::FieldValue<decltype(ace),AceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ace),AceVal::v1> v1{};
        }
    }
    namespace Acmp0C0{    ///<ACMP Control Register 0
        using Addr = Register::Address<0x40073001,0xffffffcc,0,unsigned char>;
        ///ACMP Negative Input Select
        enum class AcnselVal {
            v00=0x00000000,     ///<External reference 0
            v01=0x00000001,     ///<External reference 1
            v10=0x00000002,     ///<External reference 2
            v11=0x00000003,     ///<DAC output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,AcnselVal> acnsel{}; 
        namespace AcnselValC{
            constexpr Register::FieldValue<decltype(acnsel),AcnselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(acnsel),AcnselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(acnsel),AcnselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(acnsel),AcnselVal::v11> v11{};
        }
        ///ACMP Positive Input Select
        enum class AcpselVal {
            v00=0x00000000,     ///<External reference 0
            v01=0x00000001,     ///<External reference 1
            v10=0x00000002,     ///<External reference 2
            v11=0x00000003,     ///<DAC output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,AcpselVal> acpsel{}; 
        namespace AcpselValC{
            constexpr Register::FieldValue<decltype(acpsel),AcpselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(acpsel),AcpselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(acpsel),AcpselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(acpsel),AcpselVal::v11> v11{};
        }
    }
    namespace Acmp0C1{    ///<ACMP Control Register 1
        using Addr = Register::Address<0x40073002,0xffffff00,0,unsigned char>;
        ///DAC Output Level Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> dacval{}; 
        namespace DacvalValC{
        }
        ///DAC Reference Select
        enum class DacrefVal {
            v0=0x00000000,     ///<The DAC selects Bandgap as the reference.
            v1=0x00000001,     ///<The DAC selects VDDA as the reference.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DacrefVal> dacref{}; 
        namespace DacrefValC{
            constexpr Register::FieldValue<decltype(dacref),DacrefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dacref),DacrefVal::v1> v1{};
        }
        ///DAC Enable
        enum class DacenVal {
            v0=0x00000000,     ///<The DAC is disabled.
            v1=0x00000001,     ///<The DAC is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DacenVal> dacen{}; 
        namespace DacenValC{
            constexpr Register::FieldValue<decltype(dacen),DacenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dacen),DacenVal::v1> v1{};
        }
    }
    namespace Acmp0C2{    ///<ACMP Control Register 2
        using Addr = Register::Address<0x40073003,0xfffffff8,0,unsigned char>;
        ///ACMP Input Pin Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> acipe{}; 
        namespace AcipeValC{
        }
    }
}
