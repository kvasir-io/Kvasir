#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40048000,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKECLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PERILPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PINLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWAKEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PMUASLPEN; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40048010,0xffff1cff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RTC0FREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RTC0AREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CMP0REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PWAKEREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LPT0REN; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40048020,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PM9EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWAKEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PORF; 
    }
    namespace Nonewakeen{
        using Addr = Register::Address<0x40048030,0xfffffe1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RTC0FWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTC0AWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMP0WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PWAKEWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LPT0WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RSTWEN; 
    }
    namespace Nonewakestatus{
        using Addr = Register::Address<0x40048040,0xfffffe1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RTC0FWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTC0AWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMP0WF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PWAKEWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LPT0WF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RSTWF; 
    }
    namespace Nonepwen{
        using Addr = Register::Address<0x40048050,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PW0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PW1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PW2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PW3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PW4EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PW5EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PW6EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PW7EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PW8EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PW9EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PW10EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PW11EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PW12EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PW13EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PW14EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PW15EN; 
    }
    namespace Nonepwpol{
        using Addr = Register::Address<0x40048060,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PW0POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PW1POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PW2POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PW3POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PW4POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PW5POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PW6POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PW7POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PW8POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PW9POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PW10POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PW11POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PW12POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PW13POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PW14POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PW15POL; 
    }
}
