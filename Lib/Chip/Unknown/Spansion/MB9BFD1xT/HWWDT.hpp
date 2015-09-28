#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonewdg_ldr{
        using Addr = Register::Address<0x40011000,0xffffffff>;
    }
    namespace Nonewdg_vlr{
        using Addr = Register::Address<0x40011004,0xffffffff>;
    }
    namespace Nonewdg_ctl{
        using Addr = Register::Address<0x40011008,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RESEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTEN; 
    }
    namespace Nonewdg_icl{
        using Addr = Register::Address<0x4001100c,0xffffffff>;
    }
    namespace Nonewdg_ris{
        using Addr = Register::Address<0x40011010,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RIS; 
    }
    namespace Nonewdg_lck{
        using Addr = Register::Address<0x40011c00,0xffffffff>;
    }
}
