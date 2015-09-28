#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneacr{
        using Addr = Register::Address<0x40022000,0xffffff84>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LATENCY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PRFTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SLEEP_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RUN_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DESAB_BUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PRE_READ; 
    }
    namespace Nonepecr{
        using Addr = Register::Address<0x40022004,0xfff878e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PELOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PRGLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OPTLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PROG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FTDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FPRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PARALLELBANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EOPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OBL_LAUNCH; 
    }
    namespace Nonepdkeyr{
        using Addr = Register::Address<0x40022008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDKEYR; 
    }
    namespace Nonepekeyr{
        using Addr = Register::Address<0x4002200c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PEKEYR; 
    }
    namespace Noneprgkeyr{
        using Addr = Register::Address<0x40022010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PRGKEYR; 
    }
    namespace Noneoptkeyr{
        using Addr = Register::Address<0x40022014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OPTKEYR; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40022018,0xfffcb0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDHV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> READY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WRPERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PGAERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SIZERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OPTVERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RDERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> NOTZEROERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FWWERR; 
    }
    namespace Noneobr{
        using Addr = Register::Address<0x4002201c,0xfff0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RDPRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> BOR_LEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SPRMOD; 
    }
    namespace Nonewrpr{
        using Addr = Register::Address<0x40022020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WRP; 
    }
}
