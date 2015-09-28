#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneacr{
        using Addr = Register::Address<0x40022000,0xffffffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LATENCY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PRFTBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PRFTBS; 
    }
    namespace Nonekeyr{
        using Addr = Register::Address<0x40022004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FKEYR; 
    }
    namespace Noneoptkeyr{
        using Addr = Register::Address<0x40022008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OPTKEYR; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x4002200c,0xffffffca>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WRPRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PGERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BSY; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x40022010,0xffffc908>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FORCE_OPTLOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EOPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OPTWRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OPTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OPTPG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG; 
    }
    namespace Nonear{
        using Addr = Register::Address<0x40022014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FAR; 
    }
    namespace Noneobr{
        using Addr = Register::Address<0x4002201c,0x0000c8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> Data1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> Data0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> VDDA_MONITOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BOOT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> nRST_STDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> nRST_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WDG_SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LEVEL2_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LEVEL1_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OPTERR; 
    }
    namespace Nonewrpr{
        using Addr = Register::Address<0x40022020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WRP; 
    }
}
