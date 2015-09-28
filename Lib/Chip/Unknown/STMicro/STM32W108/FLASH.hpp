#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneflash_acr{
        using Addr = Register::Address<0x40008000,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PRFTBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PRFTBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HLFCYA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LATENCY; 
    }
    namespace Noneflash_keyr{
        using Addr = Register::Address<0x40008004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FKEYR; 
    }
    namespace Noneflash_optkeyr{
        using Addr = Register::Address<0x40008008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OPTKEYR; 
    }
    namespace Noneflash_sr{
        using Addr = Register::Address<0x4000800c,0xffffffca>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WRPRTERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PGERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BSY; 
    }
    namespace Noneflash_cr{
        using Addr = Register::Address<0x40008010,0xffffe908>;
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
    namespace Noneflash_ar{
        using Addr = Register::Address<0x40008014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FAR; 
    }
    namespace Noneflash_obr{
        using Addr = Register::Address<0x4000801c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RDPRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OPTERR; 
    }
    namespace Noneflash_wrpr{
        using Addr = Register::Address<0x40008020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> WRP; 
    }
    namespace Noneflash_clker{
        using Addr = Register::Address<0x4000402c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Noneflash_clksr{
        using Addr = Register::Address<0x40004030,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACK; 
    }
}
