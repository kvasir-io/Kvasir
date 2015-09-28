#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetcsr{
        using Addr = Register::Address<0x40010000,0x80feff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRESCALE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TDR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,27)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CEN; 
    }
    namespace Nonetcmpr{
        using Addr = Register::Address<0x40010004,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> TCMP; 
    }
    namespace Nonetisr{
        using Addr = Register::Address<0x40010008,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
    namespace Nonetdr{
        using Addr = Register::Address<0x4001000c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> TDR; 
    }
}
