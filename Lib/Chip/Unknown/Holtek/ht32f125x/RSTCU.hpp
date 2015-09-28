#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonerstcu_grsr{
        using Addr = Register::Address<0x40088100,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDTRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PORSTF; 
    }
    namespace Nonerstcu_apbprstr0{
        using Addr = Register::Address<0x40088108,0xfffc3eee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> I2CRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SPIRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AFIORST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTIRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PARST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PBRST; 
    }
    namespace Nonerstcu_apbprstr1{
        using Addr = Register::Address<0x4008810c,0xfe3ffcef>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WDTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GPTM0RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GPTM1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OPA0RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OPA1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ADCRST; 
    }
}
