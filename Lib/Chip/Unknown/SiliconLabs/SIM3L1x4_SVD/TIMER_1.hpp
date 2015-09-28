#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneconfig{
        using Addr = Register::Address<0x40015000,0x0004080c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LMSTREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPLITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LEXIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOVFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> LMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LSTATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LEXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LOVFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> HCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MSTRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> HMSTREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DBGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> HEXIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> HOVFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> HMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> HSTATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> HRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> HEXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> HOVFI; 
    }
    namespace Noneclkdiv{
        using Addr = Register::Address<0x40015010,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLKDIVRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CLKDIVCT; 
    }
    namespace Nonecount{
        using Addr = Register::Address<0x40015020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> HCOUNT; 
    }
    namespace Nonecapture{
        using Addr = Register::Address<0x40015030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LCCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> HCCR; 
    }
}
