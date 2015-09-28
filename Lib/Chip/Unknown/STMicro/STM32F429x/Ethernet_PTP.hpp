#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneptptscr{
        using Addr = Register::Address<0x40028700,0xfff800c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSFCU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TSPTPPSV2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TSSPTPOEFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TSSIPV6FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TSSIPV4FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TSSEME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TSSMRME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TSCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TSPFFMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TSSTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSSTU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TSITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TTSARU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TSSARFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TSSSR; 
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
    namespace Noneptptssr{
        using Addr = Register::Address<0x40028728,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSSO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSTTR; 
    }
    namespace Noneptpppscr{
        using Addr = Register::Address<0x4002872c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSSO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSTTR; 
    }
}
