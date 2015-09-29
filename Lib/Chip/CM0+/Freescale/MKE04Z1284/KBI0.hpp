#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Keyboard interrupts
    namespace Kbi0Pe{    ///<KBI Pin Enable Register
        using Addr = Register::Address<0x40079000,0x00000000,0,unsigned>;
        ///KBI Pin Enables
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> kbipe{}; 
    }
    namespace Kbi0Es{    ///<KBI Edge Select Register
        using Addr = Register::Address<0x40079004,0x00000000,0,unsigned>;
        ///KBI Edge Selects
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> kbedg{}; 
    }
    namespace Kbi0Sc{    ///<KBI Status and Control Register
        using Addr = Register::Address<0x40079008,0xffffffc0,0,unsigned>;
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
        ///Real KBI_SP register enable
        enum class kbspenVal {
            v0=0x00000000,     ///<The real time value of Keyboard source pin to be read.
            v1=0x00000001,     ///<The latched value in KBxSP register while interrupt flag occur to be read.
        };
        namespace kbspenValC{
            constexpr MPL::Value<kbspenVal,kbspenVal::v0> v0{};
            constexpr MPL::Value<kbspenVal,kbspenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,kbspenVal> kbspen{}; 
        ///Reset KBI_SP registe
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rstkbsp{}; 
    }
    namespace Kbi0Sp{    ///<KBI Source Pin Register
        using Addr = Register::Address<0x4007900c,0x00000000,0,unsigned>;
        ///KBI Source Pin
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sp{}; 
    }
}
