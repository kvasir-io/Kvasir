#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40042000,0x70fffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> WPULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FBLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PNSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FBPINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EVREGEN; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40042010,0xc0f888e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> IMINFINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> IMIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> FBVOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> FBRATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> IMAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> VOUTSEL; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40042020,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FBMAXF; 
    }
    namespace Nonecscontrol{
        using Addr = Register::Address<0x40042040,0x3fffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ISNSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADCISNSEN; 
    }
    namespace Nonecsconfig{
        using Addr = Register::Address<0x40042050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ISADCGAIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> ISOGAIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> ISINSEL; 
    }
}
