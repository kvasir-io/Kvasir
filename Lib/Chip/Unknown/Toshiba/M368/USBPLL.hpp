#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x400f3100,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBPLLON; 
    }
    namespace Noneen{
        using Addr = Register::Address<0x400f3104,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USBHEN; 
    }
    namespace Nonesel{
        using Addr = Register::Address<0x400f3108,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBPLLSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,1)> USBPLLSET; 
    }
}
