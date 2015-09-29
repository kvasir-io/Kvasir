#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Trans-Impedance Amplifier
    namespace Triamp0C0{    ///<Control Register 0
        using Addr = Register::Address<0x400f8000,0xffffff3f,0,unsigned char>;
        ///Low-Power Enable
        enum class lpenVal {
            v0=0x00000000,     ///<High-speed mode selected. In this mode, TRIAMP has faster slew rate and unity gain bandwidth performance with higher current consumption.
            v1=0x00000001,     ///<Low-power mode selected. In this mode, TRIAMP has lower current consumption with slower slew rate and unity gain bandwidth performance.
        };
        namespace lpenValC{
            constexpr MPL::Value<lpenVal,lpenVal::v0> v0{};
            constexpr MPL::Value<lpenVal,lpenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lpenVal> lpen{}; 
        ///TRIAMP Enable
        enum class triampenVal {
            v0=0x00000000,     ///<The amplifier is disabled and not powered.
            v1=0x00000001,     ///<TRIAMP system is enabled. In this mode the amplifier is powered and enabled.
        };
        namespace triampenValC{
            constexpr MPL::Value<triampenVal,triampenVal::v0> v0{};
            constexpr MPL::Value<triampenVal,triampenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,triampenVal> triampen{}; 
    }
}
