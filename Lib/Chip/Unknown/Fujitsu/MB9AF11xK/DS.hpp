#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepmd_ctl{
        using Addr = Register::Address<0x40035800,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RTCE; 
    }
    namespace Nonewrfsr{
        using Addr = Register::Address<0x40035804,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WLVDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WINITX; 
    }
    namespace Nonewifsr{
        using Addr = Register::Address<0x40035808,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WUI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WUI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WUI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WUI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WLVDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WRTCI; 
    }
    namespace Nonewier{
        using Addr = Register::Address<0x4003580c,0xffffffc4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WUI3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WUI2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WUI1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WLVDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WRTCE; 
    }
    namespace Nonewilvr{
        using Addr = Register::Address<0x40035810,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WUI3LV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WUI2LV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WUI1LV; 
    }
    namespace Nonedsramr{
        using Addr = Register::Address<0x40035814,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SRAMR; 
    }
    namespace Nonebur01{
        using Addr = Register::Address<0x40035900,0xffffffff>;
    }
    namespace Nonebur02{
        using Addr = Register::Address<0x40035901,0xffffffff>;
    }
    namespace Nonebur03{
        using Addr = Register::Address<0x40035902,0xffffffff>;
    }
    namespace Nonebur04{
        using Addr = Register::Address<0x40035903,0xffffffff>;
    }
    namespace Nonebur05{
        using Addr = Register::Address<0x40035904,0xffffffff>;
    }
    namespace Nonebur06{
        using Addr = Register::Address<0x40035905,0xffffffff>;
    }
    namespace Nonebur07{
        using Addr = Register::Address<0x40035906,0xffffffff>;
    }
    namespace Nonebur08{
        using Addr = Register::Address<0x40035907,0xffffffff>;
    }
    namespace Nonebur09{
        using Addr = Register::Address<0x40035908,0xffffffff>;
    }
    namespace Nonebur10{
        using Addr = Register::Address<0x40035909,0xffffffff>;
    }
    namespace Nonebur11{
        using Addr = Register::Address<0x4003590a,0xffffffff>;
    }
    namespace Nonebur12{
        using Addr = Register::Address<0x4003590b,0xffffffff>;
    }
    namespace Nonebur13{
        using Addr = Register::Address<0x4003590c,0xffffffff>;
    }
    namespace Nonebur14{
        using Addr = Register::Address<0x4003590d,0xffffffff>;
    }
    namespace Nonebur15{
        using Addr = Register::Address<0x4003590e,0xffffffff>;
    }
    namespace Nonebur16{
        using Addr = Register::Address<0x4003590f,0xffffffff>;
    }
}
