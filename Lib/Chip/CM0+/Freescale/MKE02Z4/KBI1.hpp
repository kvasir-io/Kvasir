#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Keyboard interrupts
    namespace Kbi1Sc{    ///<KBI Status and Control Register
        using Addr = Register::Address<0x4007a000,0xfffffff0,0x00000000,unsigned char>;
        ///KBI Detection Mode
        enum class KbmodVal {
            v0=0x00000000,     ///<Keyboard detects edges only.
            v1=0x00000001,     ///<Keyboard detects both edges and levels.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,KbmodVal> kbmod{}; 
        namespace KbmodValC{
            constexpr Register::FieldValue<decltype(kbmod)::Type,KbmodVal::v0> v0{};
            constexpr Register::FieldValue<decltype(kbmod)::Type,KbmodVal::v1> v1{};
        }
        ///KBI Interrupt Enable
        enum class KbieVal {
            v0=0x00000000,     ///<KBI interrupt not enabled.
            v1=0x00000001,     ///<KBI interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,KbieVal> kbie{}; 
        namespace KbieValC{
            constexpr Register::FieldValue<decltype(kbie)::Type,KbieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(kbie)::Type,KbieVal::v1> v1{};
        }
        ///KBI Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> kback{}; 
        ///KBI Interrupt Flag
        enum class KbfVal {
            v0=0x00000000,     ///<KBI interrupt request not detected.
            v1=0x00000001,     ///<KBI interrupt request detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,KbfVal> kbf{}; 
        namespace KbfValC{
            constexpr Register::FieldValue<decltype(kbf)::Type,KbfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(kbf)::Type,KbfVal::v1> v1{};
        }
    }
    namespace Kbi1Pe{    ///<KBIx Pin Enable Register
        using Addr = Register::Address<0x4007a001,0xffffff00,0x00000000,unsigned char>;
        ///KBI Pin Enables
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> kbipe{}; 
    }
    namespace Kbi1Es{    ///<KBIx Edge Select Register
        using Addr = Register::Address<0x4007a002,0xffffff00,0x00000000,unsigned char>;
        ///KBI Edge Selects
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> kbedg{}; 
    }
}
