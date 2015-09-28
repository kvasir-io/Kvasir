#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepro{
        using Addr = Register::Address<0x400f3200,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROTECT; 
    }
    namespace Noneen{
        using Addr = Register::Address<0x400f3204,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRIMEN; 
    }
    namespace Noneinit{
        using Addr = Register::Address<0x400f3208,0xffffc0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TRIMINITF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> TRIMINITC; 
    }
    namespace Noneset{
        using Addr = Register::Address<0x400f320c,0xffffc0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TRIMSETF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> TRIMSETC; 
    }
}
