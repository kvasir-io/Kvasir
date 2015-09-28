#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40032000,0x1f8ec000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> OUPDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> ETRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> OUTMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> INFMT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DMARUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> JSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BUFRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TRIGINH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> WRAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ORIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> URIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> WEIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DBGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> LOADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> IDACEN; 
    }
    namespace Nonedata{
        using Addr = Register::Address<0x40032010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonebufstatus{
        using Addr = Register::Address<0x40032020,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LEVEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ORI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> URI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WEI; 
    }
    namespace Nonebuffer10{
        using Addr = Register::Address<0x40032030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BUFFER0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFFER1; 
    }
    namespace Nonebuffer32{
        using Addr = Register::Address<0x40032040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BUFFER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFFER3; 
    }
    namespace Nonegainadj{
        using Addr = Register::Address<0x40032050,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> GAINADJ; 
    }
}
