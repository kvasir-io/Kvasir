#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Keyboard interrupts
    namespace Kbi0Pe{    ///<KBI Pin Enable Register
        using Addr = Register::Address<0x40079000,0x00000000,0x00000000,unsigned>;
        ///KBI Pin Enables
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> kbipe{}; 
    }
    namespace Kbi0Es{    ///<KBI Edge Select Register
        using Addr = Register::Address<0x40079004,0x00000000,0x00000000,unsigned>;
        ///KBI Edge Selects
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> kbedg{}; 
    }
    namespace Kbi0Sc{    ///<KBI Status and Control Register
        using Addr = Register::Address<0x40079008,0xffffffc0,0x00000000,unsigned>;
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
        ///Real KBI_SP register enable
        enum class KbspenVal {
            v0=0x00000000,     ///<The real time value of Keyboard source pin to be read.
            v1=0x00000001,     ///<The latched value in KBxSP register while interrupt flag occur to be read.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,KbspenVal> kbspen{}; 
        namespace KbspenValC{
            constexpr Register::FieldValue<decltype(kbspen)::Type,KbspenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(kbspen)::Type,KbspenVal::v1> v1{};
        }
        ///Reset KBI_SP registe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rstkbsp{}; 
    }
    namespace Kbi0Sp{    ///<KBI Source Pin Register
        using Addr = Register::Address<0x4007900c,0x00000000,0x00000000,unsigned>;
        ///KBI Source Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sp{}; 
    }
}
