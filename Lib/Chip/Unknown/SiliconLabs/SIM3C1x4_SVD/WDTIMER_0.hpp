#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40030000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EWIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBGMD; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40030010,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> KEYSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PRIVSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EWI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RTHF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UPDSTS; 
    }
    namespace Nonethreshold{
        using Addr = Register::Address<0x40030020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> EWTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RTH; 
    }
    namespace Nonewdtkey{
        using Addr = Register::Address<0x40030030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
}
