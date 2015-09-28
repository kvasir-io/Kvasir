#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneacr{
        using Addr = Register::Address<0x40022000,0xffff80f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LATENCY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PRFTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ICEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ICRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RUN_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SLEEP_PD; 
    }
    namespace Nonepdkeyr{
        using Addr = Register::Address<0x40022004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDKEYR; 
    }
    namespace Nonekeyr{
        using Addr = Register::Address<0x40022008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYR; 
    }
    namespace Noneoptkeyr{
        using Addr = Register::Address<0x4002200c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OPTKEYR; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40022010,0xfffe3c04>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OPERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PROGERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WRPERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PGAERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SIZERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PGSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MISERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FASTERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RDERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OPTVERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BSY; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x40022014,0x30f87000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> PNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BKER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OPTSTRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FSTPG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EOPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> ERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> RDERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> OBL_LAUNCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OPTLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOCK; 
    }
    namespace Noneeccr{
        using Addr = Register::Address<0x40022018,0x3ee00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> ADDR_ECC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> BK_ECC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SYSF_ECC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ECCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ECCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ECCD; 
    }
    namespace Noneoptr{
        using Addr = Register::Address<0x40022020,0xfc40c800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RDP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> BOR_LEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> nRST_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> nRST_STDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IDWG_SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IWDG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IWDG_STDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> WWDG_SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> BFB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DUALBANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> nBOOT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SRAM2_PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SRAM2_RST; 
    }
    namespace Nonepcrop1sr{
        using Addr = Register::Address<0x40022024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PCROP1_STRT; 
    }
    namespace Nonepcrop1er{
        using Addr = Register::Address<0x40022028,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PCROP1_END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PCROP_RDP; 
    }
    namespace Nonewrp1ar{
        using Addr = Register::Address<0x4002202c,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WRP1A_STRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WRP1A_END; 
    }
    namespace Nonewrp1br{
        using Addr = Register::Address<0x40022030,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WRP1B_STRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WRP1B_END; 
    }
    namespace Nonepcrop2sr{
        using Addr = Register::Address<0x40022044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PCROP2_STRT; 
    }
    namespace Nonepcrop2er{
        using Addr = Register::Address<0x40022048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PCROP2_END; 
    }
    namespace Nonewrp2ar{
        using Addr = Register::Address<0x4002204c,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WRP2A_STRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WRP2A_END; 
    }
    namespace Nonewrp2br{
        using Addr = Register::Address<0x40022050,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WRP2B_STRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WRP2B_END; 
    }
}
