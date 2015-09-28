#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x4004b000,0x00700000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> STCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> LASTST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> INHSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DBGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> INHF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DSTREQF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SRCREQF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DTMINH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TOERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMAERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DTMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DTMEN; 
    }
    namespace Nonetimeout{
        using Addr = Register::Address<0x4004b010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TORELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TOCOUNT; 
    }
    namespace Nonemstcount{
        using Addr = Register::Address<0x4004b020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MSTCOUNT; 
    }
    namespace Nonestateaddr{
        using Addr = Register::Address<0x4004b030,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> STATEADDR; 
    }
    namespace Nonestate{
        using Addr = Register::Address<0x4004b040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> STRELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> SECST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> PRIST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DSTMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> SRCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> DTMCHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> INHSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DTMINH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> MSTDECEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TOERRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SECSTIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PRISTIEN; 
    }
}
