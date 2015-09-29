#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Keyboard interrupts
    namespace Kbi0Sc{    ///<KBI Status and Control Register
        using Addr = Register::Address<0x40079000,0xfffffff0,0,unsigned char>;
        ///KBI Detection Mode
        enum class kbmodVal {
            v0=0x00000000,     ///<Keyboard detects edges only.
            v1=0x00000001,     ///<Keyboard detects both edges and levels.
        };
        namespace kbmodValC{
            constexpr MPL::Value<kbmodVal,kbmodVal::v0> v0{};
            constexpr MPL::Value<kbmodVal,kbmodVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,kbmodVal> kbmod{}; 
        ///KBI Interrupt Enable
        enum class kbieVal {
            v0=0x00000000,     ///<KBI interrupt not enabled.
            v1=0x00000001,     ///<KBI interrupt enabled.
        };
        namespace kbieValC{
            constexpr MPL::Value<kbieVal,kbieVal::v0> v0{};
            constexpr MPL::Value<kbieVal,kbieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,kbieVal> kbie{}; 
        ///KBI Acknowledge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> kback{}; 
        ///KBI Interrupt Flag
        enum class kbfVal {
            v0=0x00000000,     ///<KBI interrupt request not detected.
            v1=0x00000001,     ///<KBI interrupt request detected.
        };
        namespace kbfValC{
            constexpr MPL::Value<kbfVal,kbfVal::v0> v0{};
            constexpr MPL::Value<kbfVal,kbfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,kbfVal> kbf{}; 
    }
    namespace Kbi0Pe{    ///<KBIx Pin Enable Register
        using Addr = Register::Address<0x40079001,0xffffff00,0,unsigned char>;
        ///KBI Pin Enables
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> kbipe{}; 
    }
    namespace Kbi0Es{    ///<KBIx Edge Select Register
        using Addr = Register::Address<0x40079002,0xffffff00,0,unsigned char>;
        ///KBI Edge Selects
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> kbedg{}; 
    }
}
