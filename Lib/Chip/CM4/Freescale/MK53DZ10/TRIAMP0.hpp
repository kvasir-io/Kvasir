#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Trans-Impedance Amplifier
    namespace Triamp0C0{    ///<Control Register 0
        using Addr = Register::Address<0x400f8000,0xffffff3f,0x00000000,unsigned char>;
        ///Low-Power Enable
        enum class LpenVal {
            v0=0x00000000,     ///<High-speed mode selected. In this mode, TRIAMP has faster slew rate and unity gain bandwidth performance with higher current consumption.
            v1=0x00000001,     ///<Low-power mode selected. In this mode, TRIAMP has lower current consumption with slower slew rate and unity gain bandwidth performance.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,LpenVal> lpen{}; 
        namespace LpenValC{
            constexpr Register::FieldValue<decltype(lpen)::Type,LpenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpen)::Type,LpenVal::v1> v1{};
        }
        ///TRIAMP Enable
        enum class TriampenVal {
            v0=0x00000000,     ///<The amplifier is disabled and not powered.
            v1=0x00000001,     ///<TRIAMP system is enabled. In this mode the amplifier is powered and enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TriampenVal> triampen{}; 
        namespace TriampenValC{
            constexpr Register::FieldValue<decltype(triampen)::Type,TriampenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(triampen)::Type,TriampenVal::v1> v1{};
        }
    }
}
