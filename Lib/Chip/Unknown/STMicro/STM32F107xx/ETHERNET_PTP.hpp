#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneptptscr{
        using Addr = Register::Address<0x40028700,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSFCU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TSSTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSSTU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TSITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TSARU; 
    }
    namespace Noneptpssir{
        using Addr = Register::Address<0x40028704,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> STSSI; 
    }
    namespace Noneptptshr{
        using Addr = Register::Address<0x40028708,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STS; 
    }
    namespace Noneptptslr{
        using Addr = Register::Address<0x4002870c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> STSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STPNS; 
    }
    namespace Noneptptshur{
        using Addr = Register::Address<0x40028710,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSUS; 
    }
    namespace Noneptptslur{
        using Addr = Register::Address<0x40028714,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> TSUSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TSUPNS; 
    }
    namespace Noneptptsar{
        using Addr = Register::Address<0x40028718,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSA; 
    }
    namespace Noneptptthr{
        using Addr = Register::Address<0x4002871c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TTSH; 
    }
    namespace Noneptpttlr{
        using Addr = Register::Address<0x40028720,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TTSL; 
    }
}
