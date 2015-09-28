#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonewdt_cr{
        using Addr = Register::Address<0x40068000,0x0000fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WDTRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RSKEY; 
    }
    namespace Nonewdt_mr0{
        using Addr = Register::Address<0x40068004,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> WDTV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WDTFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WDTRSTEN; 
    }
    namespace Nonewdt_mr1{
        using Addr = Register::Address<0x40068008,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> WDTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> WPSC; 
    }
    namespace Nonewdt_sr{
        using Addr = Register::Address<0x4006800c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WDTUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WDTERR; 
    }
    namespace Nonewdt_pr{
        using Addr = Register::Address<0x40068010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PROTECT; 
    }
}
