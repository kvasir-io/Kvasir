#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x4004f000,0xffff0880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INRDYIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ORDYIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MOSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EDMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OPMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DBGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> OORDER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> IORDER; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x4004f010,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INRDYI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ORDYI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DURI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DORI; 
    }
    namespace Nonedatain{
        using Addr = Register::Address<0x4004f020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace Nonedataout{
        using Addr = Register::Address<0x4004f030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace Nonedataoutc{
        using Addr = Register::Address<0x4004f040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATAC; 
    }
}
