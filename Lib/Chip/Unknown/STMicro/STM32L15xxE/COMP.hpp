#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecsr{
        using Addr = Register::Address<0x40007c00,0x0300cf40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CAIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CAIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RCH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FCH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FCH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> OUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> INSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WNDWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> VREFOUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CMP2OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPEED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMP1OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SW1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CMP1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD400K; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD10K; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PU400K; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PU10K; 
    }
}
