#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneacr{
        using Addr = Register::Address<0x40022000,0xfffffff7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HLFCYA; 
    }
    namespace Nonekeyr{
        using Addr = Register::Address<0x40022004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEY; 
    }
    namespace Noneoptkeyr{
        using Addr = Register::Address<0x40022008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OPTKEY; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x4002200c,0xffffffca>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WRPRTERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PGERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BSY; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x40022010,0xffffe908>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OPTPG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OPTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OPTWRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EOPIE; 
    }
    namespace Nonear{
        using Addr = Register::Address<0x40022014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FAR; 
    }
    namespace Noneobr{
        using Addr = Register::Address<0x4002201c,0xfc0003e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OPTERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RDPRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDG_SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> nRST_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> nRST_STDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,10)> Data0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,18)> Data1; 
    }
    namespace Nonewrpr{
        using Addr = Register::Address<0x40022020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> WRP; 
    }
}
