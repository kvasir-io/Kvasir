#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneacr{
        using Addr = Register::Address<0x40023c00,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LATENCY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PRFTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACC64; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SLEEP_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RUN_PD; 
    }
    namespace Nonepecr{
        using Addr = Register::Address<0x40023c04,0xfff878e0>;
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
        using Addr = Register::Address<0x40023c08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDKEYR; 
    }
    namespace Nonepekeyr{
        using Addr = Register::Address<0x40023c0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PEKEYR; 
    }
    namespace Noneprgkeyr{
        using Addr = Register::Address<0x40023c10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PRGKEYR; 
    }
    namespace Noneoptkeyr{
        using Addr = Register::Address<0x40023c14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OPTKEYR; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40023c18,0xffffe0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDHV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> READY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WRPERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PGAERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SIZERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OPTVERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OPTVERRUSR; 
    }
    namespace Noneobr{
        using Addr = Register::Address<0x40023c1c,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RDPRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> BOR_LEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IWDG_SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> nRTS_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> nRST_STDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> BFB2; 
    }
    namespace Nonewrpr1{
        using Addr = Register::Address<0x40023c20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> WRP1; 
    }
    namespace Nonewrpr2{
        using Addr = Register::Address<0x40023c80,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> WRP2; 
    }
    namespace Nonewrpr3{
        using Addr = Register::Address<0x40023c84,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> WRP3; 
    }
}
