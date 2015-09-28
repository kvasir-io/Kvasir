#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonewdogload{
        using Addr = Register::Address<0x40012000,0xffffffff>;
    }
    namespace Nonewdogvalue{
        using Addr = Register::Address<0x40012004,0xffffffff>;
    }
    namespace Nonewdogcontrol{
        using Addr = Register::Address<0x40012008,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RESEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTEN; 
    }
    namespace Nonewdogintclr{
        using Addr = Register::Address<0x4001200c,0xffffffff>;
    }
    namespace Nonewdogris{
        using Addr = Register::Address<0x40012010,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RIS; 
    }
    namespace Nonewdogspmc{
        using Addr = Register::Address<0x40012018,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TGR; 
    }
    namespace Nonewdoglock{
        using Addr = Register::Address<0x40012c00,0xffffffff>;
    }
}
