#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneacr{
        using Addr = Register::Address<0x40023c00,0xffffe0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LATENCY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PRFTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ICEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ICRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DCRST; 
    }
    namespace Nonekeyr{
        using Addr = Register::Address<0x40023c04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEY; 
    }
    namespace Noneoptkeyr{
        using Addr = Register::Address<0x40023c08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OPTKEY; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40023c0c,0xfffefe0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OPERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WRPERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PGAERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PGPERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PGSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RDERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BSY; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x40023c10,0x7cfefc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3)> SNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EOPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> ERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOCK; 
    }
    namespace Noneoptcr{
        using Addr = Register::Address<0x40023c14,0x7f000010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OPTLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OPTSTRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> BOR_LEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WDG_SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> nRST_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> nRST_STDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> RDP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> nWRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SPRMOD; 
    }
}
