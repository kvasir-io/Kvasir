#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetncr{
        using Addr = Register::Address<0x400f7000,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ENDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> NR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ZEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CMPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ZESEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ENCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SFTCAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ZDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REVERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> P3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> MODE; 
    }
    namespace Nonereload{
        using Addr = Register::Address<0x400f7004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOAD; 
    }
    namespace Noneint{
        using Addr = Register::Address<0x400f7008,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> INT; 
    }
    namespace Nonecnt{
        using Addr = Register::Address<0x400f700c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CNT; 
    }
}
